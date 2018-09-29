#include <stdio.h>

int main(){
    int ocena=5;
    switch(ocena){
        case 1:
            printf("switch: Jedynka\n");
            break;
        case 2:
            printf("switch: dwojka\n");
            break;
        case 3:
            printf("switch: trojka \n");
            break;
        case 4:
            printf("czworka arturka\n");
            break;
        case 5:
            printf("piatka\n");
            break;
        default:
            printf("nie ma takiej oceny leszczu! \n");
    }






    return 0;
}
