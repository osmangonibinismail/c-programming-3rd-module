// #include <stdio.h>
// #include <stdbool.h>
// int main()
// {
//         printf("Before for loop\n");
//     for (int i = 0; i < 4; i++)
//     {

//         printf("inside for loop \n");
//         printf("value of loop %d\n", i);


//     }
    
//         printf("outside for loop\n");
//         return 0;
// }

#include<stdio.h>
#include<stdbool.h>
int main()
{
    printf("Before for loop\n");

    for(int a = 10; a < 100; a++)
    {
        printf("inside for loop\n");
        printf("value of loop = %d\n", a);
    }

    printf("Outside for loop\n");
    return 0;
}