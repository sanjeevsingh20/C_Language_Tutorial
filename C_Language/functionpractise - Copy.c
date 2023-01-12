/*#include <stdio.h>

// find the average of three numbers

float average(int a,int b, int c);

int main() {
    int a,b,c;
    printf("Enter First number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Enter third number: ");
    scanf("%d",&c);
    printf("Average of the numbers are: %f",average(a,b,c));
    return 0;
}

float average(int a,int b,int c){
    float result;
    result=(float)(a+b+c)/3;
    return result;
}*/

// convert celcius into farenhite using function

/*#include <stdio.h>
// float temperature(float celcius);

// int main() {
//     float convert;
//     printf("Enter the temperature in celcius: ");
//     scanf("%f",&convert);
//     printf("Temperature %f in farenhite is %f",convert,temperature(convert));
    
//     return 0;
// }
// float temperature(float celcius){
//     float result;
//     result = (celcius*9/5)+32;
//     return result;
// }*/

// WAP to calculate the force of attraction attracted by eaarth

/*#include <stdio.h>

float force(float mass);

int main() {
    float mass;
    printf("Enter thr mass of the body(kg): ");
    scanf("%f",&mass);
    printf("Force exerted by earth on mass %.2f is %.2f (N): ",mass,force(mass));   
    return 0;
}
float force(float mass){
    float result;
    result=mass*9.8;
    return result;
}*/

// to print the pattern of stars
/*#include <stdio.h>
void pattern(int n);

int main() {
    int m;
    printf("Enter the no of rows to be printed: ");
    scanf("%d",&m);
    pattern(m);
    
    return 0;
}
void pattern(int n){
    int i,j;
    for(i=1;i<(n+1);i++){
        for ( j = 1; j <(i+1); j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    return;
}*/


// sum of first natural numbers using recursion
/*#include <stdio.h>
int sum(int n);

int main() {
    int n;
    printf("Enter the nth term of first natural number: ");
    scanf("%d",&n);
    printf("Sum of first %d natural numbers is: %d",n,sum(n));
    
    return 0;
}

int sum(int n){
    if (n==1)
    {
        return 1;
    }
    else{
        return n+sum(n-1);
    }
}*/

