#include <stdio.h>

int main(){
    int a = 0;
    puts("petla while");
    while (a<5){
        ++a;
        printf("wartosc licznika wynosi %d\n",a);
    }

        int b=0;
        while (b++ < 5){
            printf("wartosc licznika wynosi %d\n",b);
        }
            a=0;
            do{
                ++a;
                printf("%d\n",a);
            }while(a<5);

    puts("kwadraty liczb");
    a=0;
    while(a*a < 100){
        ++a;
        if(a*a == 16){
            continue;
        }
        if(a*a == 64){
            break;
        }
        printf("%d\n",a*a);
    }
    puts("\nKoniec programu");
return 0;                                   //return zakancza funkcje(u nas main)
}
