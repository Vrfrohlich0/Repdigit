#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int main (){

    int i;
    int x;
    char str[10];

    printf("\nSegue abaixo a lista de valores de 1000 a 1:\n");

    for(i=1000; i >= 1; i--)
    {
        printf("\n%d ",i);
        itoa(i, str, 10); //To copy the valors of the int into a string

        //Used to compare if the first character of the string is equal to the second and if there is a second character
        if (str[0] == str[1] || str[1] == '\0')
        {
            //Used to compare if the first character of the string is equal to the third and if there is a third character
            if(str[0] == str[2] || str[2] == '\0')
            {
                 printf("repdigit");
            }
        }

    }
    printf("\n\nFim do programa\n");

}
