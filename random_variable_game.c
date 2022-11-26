#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <time.h>

int main()
{
    int guess,nuguess=1;
    //guess the number in c language
    srand(time(0));
    int number = rand() % 100 + 1;
    // printf("%d \n", number);
do
{
    
    printf("guess the number between 1 to 100 💙 \n");
    scanf("%d", &guess);

    if (guess < number)
    {
       printf("guess high number\n \n");
    }
    else if (guess > number )
    {
        printf("guess low number \n \n");
    }
    else{
        printf("you guess the number in %d try \n", nuguess);
    }
    nuguess++;
} while (guess != number);
    return 0;
}