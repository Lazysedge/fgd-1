#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");

    int UTS, UAS;
    printf ("Program Predikat Belajar\n");
    printf ("Ketik UTS = \n");
    scanf ("%d", &UTS);
    printf ("Ketik UAS = \n");
    scanf("%d", &UAS);
    int Total = UTS+UAS;
    int rataan = Total/2;


    if (rataan <= 100 && rataan >= 80){
        printf("baik sekali");
    }
    else if (rataan >= 60 && rataan <= 79){
        printf("baik");
    }
    else if (rataan <= 59 && rataan >= 40){
        printf("cukup");
    }
    else if (rataan <= 39 && rataan >= 0){
        printf("kurang");
    }
    else (
        printf("error!!")
        );
    return 0;
}