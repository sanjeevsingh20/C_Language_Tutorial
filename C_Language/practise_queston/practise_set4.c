// to find the factor of a positive integer----------->
/*#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d",&n);

    for (int i = 1; i < n+1; i++)
    {
        if (n%i==0)
        {
            printf("%d ",i);
        }

    }

    return 0;
}*/

// to find the sum of nattural numbers using recursion---------->

/*#include <stdio.h>
int sum_of(int n)
{
    int sum = 0;
    if (n == 1)
    {
        return 1;
    }
    else
    {
        return n + sum_of(n - 1);
    }
}

int main()
{
    int n;
    printf("Enter the first n terms of natural number: ");
    scanf("%d", &n);
    printf("The sum of %d natural numbers is %d", n, sum_of(n));
    return 0;
}*/

// to check  a number is armstrong number or not------------------->

/*#include <stdio.h>
#include <math.h>

int main() {
    int n,remainder,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while (n!=0)
    {
        remainder=n%10;
        sum+=remainder*remainder*remainder;
        n/=10;

    }
    printf("%d",sum);

    return 0;
}*/

// to find the factorial of a number using recursion---------->

/*#include <stdio.h>
int factorial(int n){
    if (n==0 && n==1)
    {
       return 1;
    }

    return n*factorial(n-1);


}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("The factorial of %d is %d",n,factorial(n));
    return 0;
}*/

// simple calculator using switch case-------------->
/*#include <stdio.h>

int main()
{
    int n, m;
    char operator;
    printf("Enter the expression to be calculated: ");
    scanf("%d %c %d", &n, &operator, & m);

    switch (operator)
    {
    case '+':
        printf("The sum of %d and %d is %d", n, m, n + m);
        break;
    case '-':
        printf("The differrencce of %d and %d is %d", n, m, n - m);
        break;
    case '*':
        printf("The multiplication of %d and %d is %d", n, m, n * m);
        break;
    case '/':
        printf("The division of %d and %d is %d", n, m, n / m);
        break;

    default:
        printf("The operator is not correct or invalid!!");
        break;
    }

    return 0;
}*/

// to convert binary into decimal number------------->
/*
#include <stdio.h>
#include <math.h>
int convert(long long n)
{
    int dec = 0, i = 0, remainder;
    while (n!= 0)
    {
        remainder = n % 10;
        n /= 10;
        dec += remainder * pow(2, i); 
        i++;
    }
    return dec;
}
int main()
{
    int long long n;
    printf("Enter a binary number: ");
    scanf("%lld",&n);
    printf("The decimal of %lld is %d",n,convert(n));
    return 0;
}*/
