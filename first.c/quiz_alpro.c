#include <stdio.h>
#include <stdlib.h>

int main (){

    system ("cls");

    int pilihan;
    printf ("Menu Program \n 1. Luas Segitiga \n 2. Deret Menurun \n 3. Deret Fibonaci\n 4. Bilangan Prima\n");
    printf ("pilihan : ");
    scanf ("%d", &pilihan);
    
    if (pilihan == 1)
    {
        int alas, tinggi;
        printf ("ketik alas : ");
        scanf ("%d", &alas);
        printf ("ketik tinggi : ");
        scanf ("%d", &tinggi);
        float luas = alas*tinggi/2;
        printf ("Luas segitiga dengan alas %d dan tinggi %d adalah %.2f", alas, tinggi, luas);
    }
    
    else if (pilihan == 2)
    {
        int b_Aw, b_Ak, selisih;
        printf ("ketik bilangan awal : ");
        scanf ("%d", &b_Aw);
        printf ("ketik bilangan akhir : ");
        scanf ("%d", &b_Ak);
        printf ("ketik selisih : ");
        scanf ("%d", &selisih);

        if (b_Aw > b_Ak)
        {
            for (int i = b_Aw-selisih; i > b_Ak+selisih; i -= selisih)
            {
                printf ("%d ", i);
            }
            
        }
        else
        {
            printf ("error!!");
        }
        
    }

    else if (pilihan == 3)
    {
        int suku;
        printf ("ketik jumlah suku : ");
        scanf ("%d", &suku);

        if (suku > 0)
        {
            int a = 1, b = 1, i = 0;

            for (int i = 0; i <= 1; i++)
            {
                printf ("%d ", a);
            }
            for (int i = 2; i <= suku-1; i++)
            {
                int sum = a + b;
                printf ("%d ", sum);
                int temp = a;
                a = b;
                b = sum;
            }
        }
    }

    else if (pilihan == 4)
    {
        int bil;
        printf ("berikan bilangan : ");
        scanf ("%d", &bil);

        if (is_prime (bil)){
            if (num <= 1) {
                return false;
            }
            for (int i = 2; i*i <= bil; i++){
                if (bil % i == 0){
                    return false;
                }
            }
        }
        return true;
    }

    return 0;
}