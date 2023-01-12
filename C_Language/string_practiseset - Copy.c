// #include <stdio.h>

// int main() {
//     char str[20];
//     char str1[20];
//     char c;
//     int i=0;
//     printf("Enter the value of string1:");
//     scanf("%s",str);
//     printf("Enter the value of string character by character :");
//     while (c!='\n')
//     {
//         fflush(stdin);
//         scanf("%c",&c);
//         str1[i]=c;
//         i++;
//     }
//     str1[i]='\0';
//     printf("The string 1 is :%s",str);
//     printf("The string 2 is :%s",str1);

//     return 0;
// }

// // to make a function that returns the length of a string

// #include <stdio.h>
// int len(char *str){
//     int coun=0;
//     char *ptr=str;

//     while (*ptr!='\0')
//     {
//         coun++;
//         ptr++;
//     }
//     return coun;
// }
// int main() {
//     char string[30];
//     printf("Enter a string :");
//     gets(string);
//     printf("the length of the string is %d",len(string));
//     return 0;
// }

// // WAP to slice a string

// #include <stdio.h>
// #include <string.h>
// char slice(char *str,int m,int n){
//     int i;
//     for ( i = m; i< n; i++)
//     {
//         printf("%c",str[i]);
//     }

// }

// int main() {
//     char str[]="Hello World!";
//     slice(str,1,9);

//     return 0;
// }

// // WAP to to own version of strcpy of string.h

// #include <stdio.h>

// char copy(char* str1,const char* str2)
// {
//     while (*str2!='\0')
//     {
//         *str1=*str2;
//         str1++;
//         str2++;
//     }
//     *str1='\0';

    
// }

// int main()
// {
//     char str1[] = "sanjeev";
//     char str2[] = "singh";
//     copy(str1, str2);
//     // strcpy(str2,str1);
//     printf("%s",str2);

//     return 0;
// }

// // to encrypt the string by adding 1 to its ascii value

// #include <stdio.h>
// void encrypt(char *c){
//     while (*c!='\0')
//     {
//         *c=*c+1;
//         c++;
//     }
    
// }
// int main() {
//     char str[]="Hello";
//     encrypt(str);
//     printf("%s",str);
    
//     return 0;
// }

// //decrypt the encrypted string

// #include <stdio.h>
// void encrypt(char *c){
//     while (*c!='\0')
//     {
//         *c=*c+1;
//         c++;
//     }
    
// }
// void decrypt(char *c){
//     while (*c!='\0')
//     {
//         *c=*c-1;
//         c++;
//     }
    
// }
// int main() {
//     char str[]="Hello";
//     encrypt(str);
//     printf("string after encryption :%s\n",str);
//     decrypt(str);
//     printf("string after decryption :%s\n",str);   
//     return 0;
// }

// //WAP to find the occurance of a character in a given string

// #include <stdio.h>
// int occurance(char *c,char chr){
//     int count=0;
//     while (*c!='\0')
//     {
//         if(*c==chr){
//             count++;
//         }
//         c++;
//     }
//     return count;  
// }

// int main() {
//     char str[]="Sanjaav";
//     int count=occurance(str,'a');
//     printf("occurance= %d",count);
//     return 0;
// }

