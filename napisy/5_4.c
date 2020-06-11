#include<stdio.h>

///cw 5_2_4
int porownajslownikowo(char *napis1,char *napis2){
    int i,x;
    for(i=0;napis1[i] || napis2[i];i++){
        if(napis1[i]==0 && napis2[i]!=0){
            return 0;
        }
        if(napis1[i]!=0 && napis2[i]==0){
            return 1;
        }
        if(napis1[i]==0 && napis2[i]==0){
            for(x=0;napis1[x];x++){
                if(napis1[x]<napis2[x] == 0){
                    return 0;
                }
            }
        }
    }
    return 1;
}

int main(){
    ///cw 5_2_4
    printf("\ncw 5_2_4\n");
    printf("%d\n",porownajslownikowo("arbiter","arbuz")); ///1
      printf("%d\n",porownajslownikowo("arbuz","arbiter")); ///0
    printf("%d\n",porownajslownikowo("baba","alibaba")); ///0
printf("%d\n",porownajslownikowo("hulajdusza","hulajnoga")); ///1
printf("%d\n",porownajslownikowo("sam","sama"));///1
printf("%d\n",porownajslownikowo("matematyka","matematyka"));///0
}
