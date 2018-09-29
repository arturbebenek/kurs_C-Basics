#include <stdio.h>

int efekt_trucizny(int h){
    h-=7;
    return h;
}

void efekt_trutki(int *h){
    *h-=7;
}


int main(){
    int k=15;
    printf("Zmienna k wynosi %d\n", k);
    printf("adres zmiennej k wynosi %p\n", &k);
    printf("wartosc zmiennej danego adresu %d\n\n", *(&k));

    int *wsk = &k;      //zmienna z adresami typu calkowitego
    printf("zmienna wsk wynosi %p\n", wsk);
    printf("Wartosc zmiennej, ktorej adres zawiera wsk wynosi %d\n", *wsk);
    printf("adres zmiennej wsk to %p\n", &wsk);


    int hp=100;
    hp = efekt_trucizny(hp);
    printf("wartosc zmiennej hp wynosi: %d\n", hp);

    int hp2=100;
    efekt_trutki(&hp2);
    printf("wartosc zmiennej hp2 wynosi: %d\n", hp2);

    return 0;
}
