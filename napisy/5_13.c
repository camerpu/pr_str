#include<stdio.h>

///cw 5_2_13
    void wytnijtesameznaki(char *napis1,char *napis2){
        int i,j;
        for(i=0,j=0;napis1[i]!=0;i++)
        {
    if (napis1[i]!=napis2[i])
    {
            napis1[j]=napis1[i];
        j++;
    }
        }
    napis1[j]=0;
}

int main(){
///cw 5_2_13
printf("\ncw 5_2_13\n");
char napiszad131[40]="karbuz";
char napiszad132[40]="arbiter";
wytnijtesameznaki(napiszad131,napiszad132);
printf(napiszad131);
}
