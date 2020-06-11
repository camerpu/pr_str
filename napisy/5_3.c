#include<stdio.h>

///cw 5_2_2
int dlugosc(char *napis){
    int i=0;
while(napis[i]!=0)
    i++;
return i;
}

///cw 5_2_3
int porownajnapisy(char *napis1,char *napis2){
    int i;
    int dl1=dlugosc(napis1);
    int dl2=dlugosc(napis2);
    if(dl1==dl2)
        {
for(i=0;i<=dl2-1;i++)
{
    if (napis1[i]!=napis2[i])
    {
        return 0;
    }
}
        return 1;
    }
    else
    {
      return 0;
    }
}

int main(){
    ///cw 5_2_3
    printf("\ncw 5_2_3\n");
    printf("%d\n",porownajnapisy("pierwszy napis","drugi napis"));
    printf("%d\n",porownajnapisy("wziasc","wziazc"));
    printf("%d\n",porownajnapisy("wziac","wziac"));
}
