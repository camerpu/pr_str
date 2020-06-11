#include<stdio.h>

///cw 5_2_2
int dlugosc(char *napis){
    int i=0;
while(napis[i]!=0)
    i++;
return i;
}

int main(){
    ///cw 5_2_2
    printf("\ncw 5_2_2\n");
    printf("%d\n",dlugosc("Programowanie strukturalne to bardzo przyjemny przedmiot"));
    printf("%d\n",dlugosc("Olsztyn"));
    ///inny sposob mniej bezposredni
    char* napis="kto skonczy informatyke, ten duzo zarabia";
    printf("%d\n",dlugosc(napis));
}
