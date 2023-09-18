#include <stdio.h>

int my_prime_factor(int number, int prime_factor){

    int return_number = number%prime_factor;
    //printf("%d\n", return_number);
    int y=0;

    if (return_number==y) {
        printf ("1\n");
    } if (return_number>y) {
        printf ("0\n");
    }
    
    return 0;
}

    int main()
{
    my_prime_factor(10,5);

    return 0;
    
}