#include <stdio.h>
#include <stdlib.h>

int main (){

    system ("cls");

    int deret;
    printf ("berikan berapa banyak deret: \n");
    scanf ("%d", &deret);

    for (int i = 0; i < deret; i++)
    {
        printf ("%d ", i + 1);
    }
    
    return 0;
}