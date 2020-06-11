#include<stdio.h>

///cw 5_2_14

void wypisz(char* napis){
printf("%s",napis);
}

void wypiszwchara(wchar_t* napis)
{
    wprintf(L"%ls\n",napis);
}

int main(){
///cw 5_2_13
wypisz("UNIWERSYTET WARMINSKO MAZURKI W OLSZTYNIE");
}
