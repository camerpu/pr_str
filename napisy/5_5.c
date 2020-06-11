#include<stdio.h>
#include<stdlib.h>

///cw 5_2_2
int dlugosc(char *napis){
    int i=0;
while(napis[i]!=0)
    i++;
return i;
}

///cw 5_2_5
void przepisz(char*napis1, char*napis2){
    int i;
    for(i=0;i<dlugosc(napis1);i++)
    {
        napis2[i]=napis1[i];
    }
    napis2[dlugosc(napis1)]=0;
}

///cw 5_2_14
void wypisz(char * napis){
printf("%s\n",napis);
}

int main(){
///cw 5_2_5
printf("\ncw 5_2_5\n");
///w poleceniu mamy zaznaczone ze przepisujemy krotsze napisy pod dluzsze
char* pierwszy="arbuz";
char drugi[20]="arbiter";
wypisz(pierwszy);
wypisz(drugi);
///mozna tez za pomoca tradycyjnego printfa
printf(pierwszy);
printf("\n");
printf(drugi);
printf("\n");
przepisz(pierwszy,drugi);
wypisz(pierwszy);
wypisz(drugi);
///
/*
char* trzeci="student";
char* czwarty="profesor";
wypisz(trzeci);
wypisz(czwarty);
przepisz(trzeci,czwarty); ///przy deklaracji czwartego nie zarezerwowano miejsca
wypisz(trzeci);
wypisz(czwarty);
*/
char* piaty="student";
char* szosty=malloc(20*sizeof(char)); ///alokacja pamieci na szostego
wypisz(piaty);
przepisz(piaty,szosty);
wypisz(piaty);
wypisz(szosty);
}

