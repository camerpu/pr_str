#include<stdio.h>

///cw 5_2_2
int dlugosc(char *napis){
    int i=0;
while(napis[i]!=0)
    i++;
return i;
}

///cw 5_2_6
void przepisznpierwszych(char*napis1, char*napis2, unsigned int n){
    int i;
    for(i=0;i<dlugosc(napis1)&&i<n;i++)
    {
        napis2[i]=napis1[i];
    }
    napis2[i]=0;
}

///cw 5_2_15
void wypisz(char * napis){
printf("%s\n",napis);
}

int main(){
    ///cw 5_2_6
printf("\ncw 5_2_6\n");
char *pierwszy6="informatyka";
wypisz(pierwszy6);
char drugi6[30]="programowanie";
wypisz(drugi6);
przepisznpierwszych(pierwszy6,drugi6,6);
wypisz(pierwszy6);
wypisz(drugi6);
char *trzeci6="info";
przepisznpierwszych(trzeci6,drugi6,6);
wypisz(drugi6);
}
