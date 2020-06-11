#include<stdio.h>

///cw 5_2_8
void maleduze(char *napis){
int i;
for(i=0;napis[i]!=0;i++)
{
    if ((napis[i]>='a')&&(napis[i]<='z'))
    {
        napis[i]=napis[i]+'A'-'a';
    }
}
}

int main(){
printf("\ncw 5_2_8\n");
char napiszad8[50]="ten napis ma byc duzymi literami, a 2+2=4";
printf(napiszad8);
printf("\n");
maleduze(napiszad8);
printf(napiszad8);
}
