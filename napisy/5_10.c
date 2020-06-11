#include<stdio.h>
#include<stdbool.h>

///cw 5_2_9
void wytnij(char *napis, int n, int m){
   int i,j;
   ///ustala dlugosc napisu
   for (j=0;napis[j]!=0;j++){}
       if(j+1>m)
       {
           for (i=0;i+m<j;i++)
           {
               napis[n+i]=napis[m+i+1];
           }
       }
       else if((n<j)&&(j+1<=m))
       {
           napis[n]=0;
       }
}

///cw 5_2_10
bool porownaj(char* napis1, char* napis2, int n){
int i;
for(i=0;(napis1[i]!=0)&&napis2[i]!=0;i++)
    if(napis1[n+i]!=napis2[i])
{
    return false;
}
if (napis2[i]==0)
{
    return true;
}
else
{
    return false;
}
}

void wytnij2(char* napis1, char* napis2){
int i, dl;
for(dl=0;napis2[dl]!=0;dl++){}
    for(i=0;napis1[i]!=0;i++)
{
    if (porownaj(napis1,napis2,i))
    {
        wytnij(napis1,i,i+dl-1);
        return;
    }
}
}

int main(){

///cw 5_2_10
printf("\ncw 5_2_10\n");
char napiszad101[40]="napis z ktorego ktorego wycinamy";
char napiszad102[40]="ktorego";
wytnij2(napiszad101,napiszad102);
printf(napiszad101);

}
