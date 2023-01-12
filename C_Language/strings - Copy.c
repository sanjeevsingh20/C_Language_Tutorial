// #include <stdio.h>

// int main() {
//     //this is the one way to print a string
//     char str[]="Hello world";
//     char *ptr=str;
//     while (*ptr!='\0')
//     {
//         printf("%c",*ptr);
//         ptr++;
//     }
    
//     return 0;
// }

// //another way to print a string

// #include <stdio.h>

// int main() {
//     char c[20];

//     printf("Enter your name please :");
//     scanf("%s",c);// we can atke input as a string like this but it only prints brfore the spaces and after space the dtring will not []
//     printf("your name is :%s",c);
//     return 0;
// }

// //to solve the above problem taking multivalued string we use gets() and puts()-->for printing on next line

// #include <stdio.h>

// int main() {
//     char str[50];
//     printf("Enter your name: ");
//     gets(str);
//     printf("your name is :%s",str);
//     //or
//     puts(str);//used for printing
//     return 0;
// }

// // note that to reintilize the value of string we need to change in its adress not in array
// //like this...
// #include <stdio.h>

// int main() {
//     char *ptr="Sanjeev singh";
//     ptr="Sanjubaba";
//     printf("%s",ptr);
//     return 0;
// }