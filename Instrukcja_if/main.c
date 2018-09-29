#include <stdio.h>

int main(){
    int a = 76;
    char znak = 'A';
    char* napis = "Artiks";
    float b= 50.0;

    if (a==50){
        printf("a jest rowne 50\n");
    }else if (a<50){
        printf("a jest mniejsze od 50\n");
    }else{
    printf("a jest wieksze od 50\n");}


        if(a){
            printf("a jest rozne od 0\n\n");
        }



            if (a>=25 && a<=75){
                printf("Super, %d miesci sie w widlach\n\n", a);}
                else if (a<25){
                printf(" %d zamale :(\n",a);}
                    else{
                    printf("jestes frajeroxem\n\n");}



                        if (znak==65){
                            printf("%c jest rowny 65, pozniewaz 'A' jest rowne 65 \n", znak);
                        }

                            if(napis=="ARTIKS"){
                                printf("tak, napis jest rowny ARTIKS\n");
                                    }else{
                                    printf("nie,napis nie jest rowny ARTIKS, lecz jest rowny %s\n",napis);}





return 0;}
