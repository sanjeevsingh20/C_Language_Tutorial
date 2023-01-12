// // to find the greatest number of three given numbers
// /*#include <stdio.h>
// void greatest(int a,int b,int c){
//     if (a>b && a>c)
//     {
//         printf("%d is greatest number",a);
//     }
//     if (b>a && b>c)
//     {
//         printf("%d is greatest number",b);
//     }
//     if (c>a && c>b)
//     {
//         printf("%d is greatest number",c);
//     }
// }

// int main() {
//     int a,b,c;
//     printf("Enter the first number: ");
//     scanf("%d",&a);
//     printf("Enter the second number: ");
//     scanf("%d",&b);
//     printf("Enter the third number: ");
//     scanf("%d",&c);
//     greatest(a,b,c);
//     return 0;
// }*/

// // to find the roots of quadratic equation

// /*#include <stdio.h>
// #include <math.h>

// int main() {
//     float a,b,c,discriment,root1,root2;
//     printf("Enter the coefficients of a: ");
//     scanf("%f",&a);
//     printf("Enter the coefficients of b: ");
//     scanf("%f",&b);
//     printf("Enter the coefficients of c: ");
//     scanf("%f",&c);
//    // to find the discriment of a quadratic equation
//     discriment=b*b-4*a*c;

//     //for real and unequal roots discrimnet >0
//     if (discriment>0)
//     {
//         root1=(-b + sqrt(discriment))/2*a;
//         root2=(-b - sqrt(discriment))/2*a;
//         printf("The roots of quation will be %.2f and %.2f",root1,root2);
//     }
//     if (discriment==0)
//     {
//         root1=-b/2*a;
//         printf("The root will be %.2f and %.2f",root1,root1);
//     }
//     if (discriment<0)
//     {
//         printf("roots will be imaginary");
//     }
//     return 0;
// }*/

// // to check  that year is a leap year
// /*#include <stdio.h>

// int main()
// {
//     int year;
//     printf("Enter a year: ");
//     scanf("%d", &year);

//     if (year % 4 == 0)
//     {
//         printf("%d is a leap year", year);
//     }
//     else if (year % 100 == 0)
//     {
//         printf("%d  is not a leap year", year);
//     }
//     else if (year % 400 == 0)
//     {
//         printf("%d is a leap year", year);
//     }

//     else
//     {
//         printf("%d is not a leap year", year);
//     }

//     return 0;
// }*/

// // to generate the multiplication table of a number

// /*#include <stdio.h>
// void table(int a){
//     printf("The table of %d is: \n",a);
//     for (int i = 1; i < 11; i++)
//     {
//         printf("%d x %d = %d\n",a,i,a*i);
//     }

// }

// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d",&num);
//     table(num);
//     return 0;
// }*/

// // to print the fibannico series

// /*#include <stdio.h>
// int main() {
//     int n,a,b,sum;
//     printf("Enter the number of terms in fibannico series: ");
//     scanf("%d",&n);
//     a=0;
//     b=1;
//     printf("%d %d ",a,b);
//     for (int  i = 3; i < n+1; i++)
//     {
//         sum=a+b;
//         a=b;
//         b=sum;
//         printf("%d ",sum);
//     }
//     return 0;
// }*/

// // count the number of digits  in an integer

// /*#include <stdio.h>

// int main() {
//     int n,count=0;
//     printf("Enter an integer: ");
//     scanf("%d",&n);

//     do
//     {
//         n/=10;
//         count++;
//     } while (n!=0);
//     printf("no. of digits is %d\n",count);

//     return 0;
// }*/

// // to find the GCD of integers

#include <stdio.h>

int main()
{
    int n1, n2, gcd;
    printf("Enter the first integer: ");
    scanf("%d", &n1);
    printf("Enter the second integer: ");
    scanf("%d", &n2);

    for (int i = 1; i <= n1 && i <= n2; i++)
    {
        // to check that integer which divides both integer
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }
    printf("The GCD of %d and %d is %d", n1, n2, gcd);

    return 0;
}

#include <stdio.h>

int main() {
    int num1,num2,rem;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);
    while (num2!=0)
    {
        rem=num1%num2;
        num1=num2;
        num2=rem;
    }
    printf("GCD is %d",num1);
    return 0;
}