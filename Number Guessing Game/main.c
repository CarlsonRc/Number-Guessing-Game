#include <stdio.h>
#include <stdlib.h>

int main()
{
    int X, Y, Z;


    printf("\n\tWelcome to the guess-a-number game!\n\n");
    printf("\tYou have 3 tries!\n\n");
    printf("\tI'm thinking of a number between 1 and 15. What is it? ");
    scanf("%d", &X);

    if (X > 8) {printf ("\n\tNo, try something lower: ");}
    if (X < 8) {printf("\n\tNo, try something higher: ");}
    if (X ==8){printf("\n\tThats it! 8\n");return 0;}

    scanf("%d", &Y);

    if (Y > 8) {printf ("\n\tNo, try something lower: ");}
    if (Y < 8) {printf("\n\tNo, try something higher: ");}
    if (Y ==8){printf("\n\tThats it! 8\n");return 0;}

    scanf("%d", &Z);

    if (Z > 8) {printf ("\n\tSorry you missed it, it was 8\n");}
    if (Z < 8) {printf("\n\tSorry you missed it, it was 8\n");}
    if (Z ==8){printf("\n\tThats it! 8\n");}

    return 0;
}
