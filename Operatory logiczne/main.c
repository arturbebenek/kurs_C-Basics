#include <stdio.h>
/*
    kazde z tych wyrazen daje wynik 0 albo 1

    a == b          czy a jest rowne b
    a > b           czy a jest wieksze od b
    a >= b          czy a jest wieksze lub rowne b
    a != b          czy a jest rozne od b

    a || b          (ALTERNATYWA) czy a i b sa rozne od 0
    a && b          (KONIUNKCJA) czy a i b sa rozne od 0
    !a              (NEGACJA)) czy a jest rowne 0 to wtedy 1, w przeciwnym razie 0

*/

int main (){
int a;

a = (30 == 30 );
printf("(30 ==30): %d\n", a);

a = (3.3 != 3.3);
printf("(3.3 != 3.3): %d\n", a);

a = (0 && 15);
printf("(0 && 15): %d\n", a);

a = (-1 || 0 );
printf("a = (-1 || 0 ):%d\n", a);

a = !(-6);
printf("!(-6): %d\n", a);

a = !(0);
printf("!(0): %d\n", a);

return 0;
}
