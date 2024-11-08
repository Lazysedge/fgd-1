#include <stdio.h>
#include <stdlib.h>

//int main()
//{
//    int umur;
//    printf ("masukan umur: \n");
//    scanf ("%d", &umur);
//    float sleep = 8.6;

//    printf ("halo nama saya richardo, saya berumur %d, dan saya tidur selama %f jam tadi malam", age, sleep);

//    return 0;
//}

typedef struct {
    char nama [50];
    char nim [10];
    float ipk;
} mahasiswa;

int main (){
    mahasiswa mhs1 = {"agus", 24085611111, 5};
    printf ("nama mahasiswa adalah %s, dia memiliki nim %s dan memiliki IPK %f", mhs1.nama, mhs1.nim, mhs1.ipk);
}