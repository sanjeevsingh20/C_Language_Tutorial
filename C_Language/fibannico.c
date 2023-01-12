#include <stdio.h>

int main() {
    int a=0,b=1,n,sum;
    printf("How many terms you want in fibannico series: ");
    scanf("%d",&n);
    printf("The fibannico series will be:");
    printf("%d %d ",a,b);
    for (int  i = 0; i < n-2; i++)
    {
        sum=a+b;
        printf("%d ",sum);
        a=b;
        b=sum;
    }
    
    return 0;
}
//swapping two numbers
/*#include <stdio.h>

int main() {
    int a=9,b=8,c;
    c=a;
    a=b;
    b=c;
    printf("%d %d",a,b);
    return 0;
}*/