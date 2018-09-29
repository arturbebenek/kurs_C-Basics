#include <stdio.h>
void imie(void);

void imie(void){
char name=0;
printf("dzien dobry, podaj imie\n");
scanf("%s", &name);
printf("Twoje imie to: %s, dziekuje!\n",name);
};


int main(){
imie();
getchar();
return 0;
}
