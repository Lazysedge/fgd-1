#include <stdio.h>
#include <stdlib.h>

int main()
{
    system ("cls"); 

    int pilihan;
    printf ("menu:\n 1. Luas segitiga\n 2. Luas segi panjang\n 3. Luas Persegi\n");
    printf ("tentukan pilihan: \n");
    scanf ("%d", &pilihan);

    if (pilihan == 1){
        int alas, tinggi;
        int Luas = alas*tinggi;
        printf ("alas: \n");
        scanf ("%d", &alas);
        printf ("tinggi: \n");
        scanf ("%d", &tinggi);
        printf("Luas: %d", alas * tinggi);
    }
    return 0;
}
