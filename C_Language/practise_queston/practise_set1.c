// // to print hello world
// #include <stdio.h>

// int main() {
//     printf("Hello world");
//     return 0;
// }

// // to print an integer
// #include <stdio.h>

// int main() {
//     int num;
//     printf("Enter the integer: ");
//     scanf("%d",&num);
//     printf("The number you entered is %d",num);
//     return 0;
// }

// // to add two integers enetred by the user

// #include <stdio.h>

// int main() {
//     int a,b;
//     printf("Enter the first number: ");
//     scanf("%d",&a);
//     printf("Enter the second number: ");
//     scanf("%d",&b);
//     printf("The sum of %d and %d is %d",a,b,a+b);
//     return 0;
// }

// // multiply two floating point numbers

// #include <stdio.h>

// int main() {
//     float a,b;
//     printf("Enter the first number: ");
//     scanf("%f",&a);
//     printf("Enter the second number: ");
//     scanf("%f",&b);
//     printf("The multiply of %.3f and %.3f is %.3f",a,b,a*b);
//     return 0;
// }

// // find the ascii value of a character

// #include <stdio.h>

// int main() {
//     char c;
//     printf("Enter the character whose ascii value you want: ");
//     scanf("%c",&c);
//     printf("The ascii value of %c is %d",c,c);
//     return 0;
// }

// // to compute the quotient and remainder

// #include <stdio.h>

// int main() {
//     int a=93,b=5;
//     printf("The quotient of %d/%d is %d\n",a,b,a/b);
//     printf("The remainder of %d/%d is %d\n",a,b,a%b);
//     return 0;
// }

// // to find the size of datatypes

// #include <stdio.h>

// int main() {
//     int n;
//     float f;
//     double d;
//     char c;
//     printf("The size of integer is %d\n",sizeof(n));
//     printf("The size of float is %d\n",sizeof(f));
//     printf("The size of double is %d\n",sizeof(d));
//     printf("The size of character is %d\n",sizeof(c));
//     return 0;
// }

// // to swap two numbers

// #include <stdio.h>

// int main() {
//     int a=90,b=10,temp;
//     printf("The un-swapped value a and b is %d and %d\n",a,b);
//     temp=a;
//     a=b;
//     b=temp;
//     printf("The swapped value a and b is %d and %d\n",a,b);
//     return 0;
// }

// // to check a number that it is even or odd
// #include <stdio.h>

// int main() {
//     int a;
//     printf("Enter a number: ");
//     scanf("%d",&a);
//     if (a%2==0)
//     {
//         printf("%d is an even number\n",a);
//     }
//     else
//     {
//         printf("%d is an odd number",a);
//     }
//     return 0;
// }

// // to check that a character ia a vowel or consonent

// #include <stdio.h>

// int main() {
//     char c;
//     printf("Enter a character: ");
//     scanf("%c",&c);
//     if (c=='a' ||c=='e' || c=='i' || c=='o' || c=='u'||c=='A' ||c=='E' || c=='I' || c=='O' || c=='U')
//     {
//         printf("%c is a vowel",c);
//     }
//     else
//     {
//         printf("%c is a consonent",c);
//     }


//     return 0;
// }

// // to check that a character is alphabhet or not

// #include <stdio.h>

// int main() {
//     char c;
//     printf("enter a character: ");
//     scanf("%c",&c);
//     if ((c>=97 && c<=122) ||(c>=65 && c<=90))
//     {
//         printf("%c is a alphabhet",c);
//     }
//     else{
//         printf("%c is not alphabhet",c);
//     }
//     return 0;
// }

// // to print the alphabhet from A to z using
// #include <stdio.h>

// int main() {
//     for (char c = 65; c < 91; c++)
//     {
//         printf("%c\n",c);
//     }

//     return 0;
// }
// // to find the factorial of a number

// #include <stdio.h>

// int main()
// {
//     int n;
//     int factorial = 1;
//     printf("Enter a number for factorial: ");
//     scanf("%d", &n);
//     if (n == 0)
//     {
//         printf("Factorial of 0 is 1");
//     }
//     else if (n < 0)
//     {
//         printf("Factorial of negative number is not possible");
//     }

//     else
//     {
//         for (long int i = 1; i < n + 1; i++)
//         {
//             factorial = factorial * i;
//         }
//         printf("Factorial of %d is %d", n, factorial);
//     }
//     return 0;
// }

// // to print the sum of first n natural numbers

// #include <stdio.h>

// int main() {
//     int n,sum=0;
//     printf("Enter the first n natural number: ");
//     scanf("%d",&n);
//     for (int i = 1; i < n+1; i++)
//     {
//         sum=sum +i;
//     }
//     printf("The sum of first %d natural numbers is %d",n,sum);
//     return 0;
// }