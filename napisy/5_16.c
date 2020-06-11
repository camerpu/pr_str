#include<stdio.h>

///cw 5_2_16

void wczytaj(char* napis){
scanf("%s\n",napis); ///wszedzie bez &
}

void wczytajwchara(wchar_t* napis)
{
    wscanf(L"%ls\n",napis);
}

///mozna tez

void wczytajwchara2(wchar_t* napis)
{
    scanf("%ls\n",napis);
}

int main(){
///cw 5_2_16
}
