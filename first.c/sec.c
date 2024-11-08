#include <stdio.h>
#include <stdlib.h>

int main(){

    system("cls");

    int b_1, b_2;
    printf ("Program kerja \n");
    printf ("Ketik b_1 = \n");
    scanf ("%d", &b_1);
    printf ("Ketik b_2 = \n");
    scanf ("%d", &b_2);

    int tot = b_1 + b_2;

    if (tot <= 499999 && tot >= 100000){
        int disc = 0.1*tot;
        printf (disc);
    };
    else if (tot >= 500000 && tot <= 1000000){
        int disc = 0.15*tot;
        printf (disc);
    };
    else if (tot >= 1000001){
        int disc = 0.2*tot;
        printf (disc);
    };
    else if (tot <= 499999 && tot >= 0){
        printf (tot);
    };
    else (
        printf("jumlah salah!!")
        );
    return 0;
}
