#include <stdio.h>

int main(){
    int x = printf("Siema heniu \n");       //printf zwraca liczbe znakow
    printf("ilosc znakow wypisanych na ekran: %d\n",x);

    printf("%d\n\n",putchar('A'));

    puts("Podaj cztery liczby calkowite oddzielone spacjami!");
    int i1, i2, i3, i4;

    scanf("%d %d %d %d", &i1, &i2, &i3, &i4);  //&(ampersound) oznacza adres w pamieci
    printf("podales nastepujace liczby: %d %d %d %d\n", i1,i2,i3,i4);

    //char c;
    //while(scanf("%c", &c) && c!='\n'){}     //sposob na wyczyszczenie bufora z dodatkowych zmiennych

    char c;
    while((c=getc(stdin))!='\n'){}      //jw

    puts("jak masz na imie?");
    char imie[10];
    scanf("%9s", imie);     //typ napisowy to bez ampersandu
    printf("twoje imie to: %s\n", imie);

    int wiek=0;
    printf("ile masz lat?\n");
    scanf("%d", &wiek);
    printf("Twoj wiek wynosi %d\n", wiek);
return 0;
}
