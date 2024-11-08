#include <stdio.h>
#include<stdlib.h>

int main (){

    system ("cls");

    printf ("Program Belanja\n+++++++++++++\n");
    printf ("Ketik 3 harga item belanja\n");

    int item_1, item_2, item_3;

    printf ("item 1 : ");
    scanf  ("%d", &item_1);
    printf ("item 2 : ");
    scanf  ("%d", &item_2);
    printf ("item 3 : ");
    scanf  ("%d", &item_3);

    int Total = item_1 + item_2 + item_3;
    printf ("Total = %d \n", Total);

    int Pembayaran;
    printf ("Pembayaran = ");
    scanf ("%d", &Pembayaran);

    if (Pembayaran > Total){

        int kembali = Pembayaran - Total;
        printf ("Kembali = %d", kembali);

    }

    else
    {
    printf ("Uang tidak mencukupi");
    }

    return 0;
}