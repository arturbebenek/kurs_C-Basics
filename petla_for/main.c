#include <stdio.h>

int main(){

    puts("petla while");
    int a =1;
    while (a<10){
        printf("%d\n",a);
        ++a;
    }

    puts("\n petla for");
    int i=0;
    for( i=1; i<10; ++i){
        printf("%d\n",i);
    }

    puts("\nsilnia z n;\n");
    int n=5;
    int wynik=1;
    for (i=1; i<=n; i++){
        wynik *= i;
    }
    printf("silnia z %d wynosi %d\n",n,wynik);
return 0;}
