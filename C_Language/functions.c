// // factorial of a number using recursion

#include <stdio.h>

int factorial(int n);

int main() {
    int n;
    printf("Enter the number of factorial:");
    scanf("%d",&n);
    printf("Factorial of %d is %d",n,factorial(n));
    return 0;
}
int factorial(int n){
    if (n==1 || n==0){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}