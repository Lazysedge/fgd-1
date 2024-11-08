#include <stdio.h>
#include <stdlib.h>

int main (){

    system ("cls");

    int Tugas, UAS, UTS;
    printf ("Program Nilai \n ===========\n");
    printf ("Ketik Tugas : ");
    scanf ("%d", &Tugas);
    printf ("Ketik UTS : ");
    scanf ("%d", &UTS);
    printf ("Ketik UAS : ");
    scanf ("%d", &UAS);

    int Total_Nilai = Tugas + UAS + UTS;
    printf ("Total Nilai : %d \n", Total_Nilai);
    int Rataan = Total_Nilai/3;
    printf ("Rataan : %d", Rataan);

    return 0;
}