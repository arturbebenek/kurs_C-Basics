#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *plik;
    char tekst[] = "bomba 123 rakieta, oto nowy zapisany tekscik, supi co?";

    plik = fopen("test.txt", "w");

    fprintf(plik, "%s", tekst);
    fclose(plik);


    return 0;
}
