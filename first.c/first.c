#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("clear");

    int panjang, lebar, luas;

    printf("program luas segiempat\n");
    printf("ketik panjang : ");
    scanf("%d", &panjang);
    printf("ketik lebar : ");
    scanf("%d" ,&lebar);
    luas = panjang*lebar;
    printf("luas segiempat : %d\n" , luas);

    return 0;
}
