#include <stdio.h>

int main()
{

    for(int i=0; i<10; i++)
    {
        printf("Ekrana bas %d \n ", i);

        if(i==7)
        {
            goto label;
        }
    }

    label:

    printf("Label'a geldi. \n");

    return 0;
}