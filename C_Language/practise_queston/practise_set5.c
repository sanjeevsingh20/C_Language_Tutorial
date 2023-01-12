// to covert octal number to a decimal number---->

/*#include <stdio.h>
#include <math.h>
int convert(long long octal){
    int dec=0,i=0,remainder;
    while (octal!=0)
    {
        remainder=octal%10;
        dec+= remainder*pow(8,i);
        octal/=10;
        i++;
    }
    return dec;
}
int main() {
    long long octal;
    printf("Enter an octal number: ");
    scanf("%lld",&octal);
    printf("The decimal of %lld is %d",octal,convert(octal));
    return 0;
}*/

// to convert decimal number to binary----------->

/*#include <stdio.h>

int main()
{
    int n, rem, i = 0;
    int a[15];
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    // for calculating the binary number
    printf("The binary form of %d is: ", n);
    while (n != 0)
    {
        rem = n % 2;
        n /= 2;
        a[i] = rem;
        i++;
    }
    // for printing the binary number
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", a[j]);
    }

    return 0;
}*/

// to convert decimal to octal------------>

/*#include <stdio.h>

int main()
{
    int n, rem, i = 0;
    int a[15];
    printf("Enter a decimal number: ");
    scanf("%d", &n);
    printf("The octal form of %d is: ", n);
    // to calculate the octal number
    while (n != 0)
    {
        rem = n % 8; // this gives remainder which is written in reverse order
        n /= 8;      // this will give the quotient which is divided in next step
        a[i] = rem;  // for saving the remainder
        i++;
    }
    // for printing the octal number

    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d", a[j]);
    }
    return 0;
}*/

// to convet binary into octal ------------->

/*#include <stdio.h>
#include <math.h>
void converter(long long n)
{
    int rem, dec = 0, i = 0, rem2, j = 0;
    int array[10];
    while (n != 0)
    {
        rem = n % 10;
        dec += rem * pow(2, i);
        n /= 10;
        i++;
    }
    printf("The decimal number is %d\n", dec);

    while (dec != 0)
    {
        rem2 = dec % 8;
        dec /= 8;
        array[j] = rem2;
        j++;
    }
    printf("Octal number will be: ");
    for (int k = j - 1; k >= 0; k--)
    {
        printf("%d", array[k]);
    }
}

int main()
{
    long long n;
    printf("Enter a binary number: ");
    scanf("%lld", &n);
    converter(n);
    return 0;
}*/


// convert octal to binary------>

/*#include <stdio.h>
#include <math.h>
int convert_octal_to_binary(long long n){
    int rem,dec=0,i=0,rem1,j=0;
    int array[15];
    
    while (n!=0)
    {
        rem=n%10;
        dec+=rem*pow(8,i);
        n/=10;
        i++;
    }
    printf("the decimal number is %d\n",dec);
    // to covert decimal to binary
    printf("The binary form will be: ");
    while (dec!=0)
    {
        rem1=dec%2;
        array[j]=rem1;
        dec/=2;
        j++;
    }
    for (int k = j-1; k>=0; k--)
    {
        printf("%d",array[k]);
    }
}

int main() {
    long long n;
    printf("Enter an octal number: ");
    scanf("%lld",&n);
    convert_octal_to_binary(n);
    return 0;
}*/
