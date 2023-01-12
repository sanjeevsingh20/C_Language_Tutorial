// // to reversea number
// /*#include <stdio.h>

// int main() {
//     int n,reverse=0,remainder;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     while (n!=0)
//     {
//         remainder=n%10;
//         reverse=reverse*10+remainder;
//         n/=10;
//     }
//     printf("%d",reverse);
//     return 0;
// }*/

// // to check that number is palindrome or not
// /*#include <stdio.h>

// int main() {
//     int n,reverse=0,remainder,original;
//     printf("Enter a number: ");
//     scanf("%d",&n);
//     original=n;
//     while (n!=0)
//     {
//         remainder=n%10;
//         reverse=reverse*10+remainder;
//         n/=10;
//     }
//     if (original==reverse){
//         printf("%d is palindrome",original);
//     }
//     return 0;
// }*/

// // to check that number is prime or not

// /*#include <stdio.h>

// int main()
// {
//     int n;
//     printf("Enter an number: ");
//     scanf("%d", &n);
//     if (n == 0 && n == 1)
//     {
//         printf("The number %d is not a prime number", n);
//     }
//     else
//     {
//         for (int i = 2; i < n + 1; i++)
//         {
//             if (n % i == 0)
//             {
//                 printf("The number is not prime");
//                 break;
//             }
//             else
//             {
//                 printf("The number %d is prime", n);
//                 break;
//             }
//         }
//     }
//     return 0;
// }*/

// #include <stdio.h>

// int main()
// {
//     int limit1, limit2, flag, temp;
//     // if user enter the lower limit greater tahn upper limit then swap the numbers
//     printf("Enter the lower limit: ");
//     scanf("%d", &limit1);
//     printf("Enter the upper limit: ");
//     scanf("%d", &limit2);

//     if (limit1 > limit2)
//     {
//         temp = limit1;
//         limit1 = limit2;
//         limit2 = temp;
//     }
//     while (limit1 < limit2)
//     {
//         flag = 0;
//         if (limit1 <= 1)
//         {
//             limit1++;
//             continue;
//         }

//         for (int i = 2; i < limit1/2; i++)
//         {
//             if (limit1 % i == 0)
//             {
//                 flag = 1;
//                 break;
//             }
//         }

//         if (flag == 0)
//         {
//             printf("%d", limit1);
//             ++limit1;
//         }
//     }

//     return 0;
// }