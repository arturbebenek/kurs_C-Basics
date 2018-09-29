#include <stdio.h>

int main(){
    puts("Operatory arytmetyczne");

    char znak = 'A';
    printf("Kod ASCII znaku: %d\n", znak);
    printf("Litera: %c\n", 68);
    znak = znak + 1;
    printf("znak teraz to %c\n", znak);


    int liczba_ze_znakiem = -15;
    printf("Nowy znak: %c\n", liczba_ze_znakiem+znak);

    const short int stala =30;
    printf("Nasza stala: %hd jest krotka\n", stala);        //hd dla szkort inta

    unsigned int liczba_bez_znaku = 10;
    printf("Liczba bez znaku: %u\n", liczba_bez_znaku);
    liczba_bez_znaku -= 11;                                  //wywala max wartosc unsigned inta - to co ubylo
    printf("Liczba bez znaku: %u\n", liczba_bez_znaku);     //u dla indigned
    liczba_bez_znaku++;
    printf("Liczba bez znaku: %u\n", liczba_bez_znaku);


    int a = 10;
    printf("liczba a to: %d\n",a++);            //post i preinkrementacja
    printf("liczba a to: %d\n",a);


    return 0;
}
