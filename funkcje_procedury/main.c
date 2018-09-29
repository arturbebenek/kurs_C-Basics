#include <stdio.h>
int iloczyn(int,int);           //prototyp funkjci(gdy jest ich wiele i sie wzajemnie wywoluja(program z gory na dol))
float zaokraglenie(float);

void komunikat(int a){
    puts("wyswietlenie komunikatu!");
    if (a==5){
        return komunikat(40);
    }
    puts("ten tekst");
}

int main(){
    float f;
    puts("podaj liczbe do zaokraglenia!");
    scanf("%f \n", &f);
    printf("zaokraglenie liczby %f wynosi %f \n",f,zaokraglenie(f));
    komunikat(5);
    puts("Podaj 2 liczby!");
    int a,b;
    scanf("%d %d",&a,&b);
    printf("Iloczyn liczby %d i liczby %d wynosi %d",a,b, iloczyn(a,b));
    return 0;
}

int iloczyn(int a, int b){
    return a*b;
}

float zaokraglenie(float f){
    return (int)(f+0.49f);
}
