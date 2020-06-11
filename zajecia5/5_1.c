#include<stdio.h>

///cw 5_2_1
void wyczysc(char *napis){
napis[1]=0;
}

int main(){
    ///cw 5_2_1
    printf("\ncw 5_2_1\n");
     char* napis="pieczewo";
     printf(napis);
     printf("\n");
     printf("co nam wyswietli po wyczyszczeniu");
wyczysc(napis);
printf(napis);
return 0;
}
