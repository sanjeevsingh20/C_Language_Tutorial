// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// int main()
// {
//     int number, guess, noguess = 1;
//     // nO is generated in this code block
//     srand(time(0));
//     number = rand() % 100 + 1;
//     // printf("%d",number);

//     do
//     {
//         printf("Guess the number between 1-100: ");
//         scanf("%d", &guess);

//         if (guess > number)
//         {
//             printf("Lower number please!\n");
//         }
//         else if (guess < number)
//         {
//             printf("Higher number please!\n");
//         }
//         else
//         {
//             printf("You Guess the number in %d attempt", noguess);
//         }
//         noguess++;

//     } while (guess != number);

//     return 0;
// }