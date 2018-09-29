
#include <stdio.h>

int main(){
/*
    przyk³ad komentarza, to sie zdarza
*/
char* przedmiot = "koszulka adidas";             //zmienna typu napisowego
char rozmiar = 'L';                              //znak
float cena = 99.99;
double wartosc =3.53432;

printf("%s\n\n", przedmiot);        //printf *char - %s
printf("Rozmiar: %c\n", rozmiar);      //printf char -%c

printf("Cena: %g zl. \n", cena);    //printf zaokraglone w gore -%g
printf("Cena: %f zl. \n", cena);       //cala liczba - %f
printf("Cena: %3f zl. \n", cena);

printf("Wartosc: %g zl.\n", wartosc);
printf("Wartosc: %f zl.\n", wartosc);
printf("Wartosc: %2f zl.\n", wartosc);
printf("Cena w promocji -70%: %g\n",0.7*cena);

int liczba =255.5;
printf("Liczba w systemie dziesietnym: %d\n", liczba);     //calkowita
printf("Ta sama liczba w systemie osemkowym: %o\n", liczba);
printf("Ta sama liczba w systemie szesnastkowym: %x\n", liczba);
printf("zmiennoprzeconkowa: %f\n", liczba);
printf("zmiennoprzeconkowa: %f\n", liczba*1.0);
printf("zmiennoprzeconkowa: %f\n", (float)liczba); //rzutowanie zmiennej!!!!!!!!!!1
printf("%s %c %d", "Artur", 'w', 20);
}
