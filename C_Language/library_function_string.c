// #include <stdio.h>
// #include <string.h>

// int main() {
//     char *str="Sanjeev singh";//source string
//     //to find the length of string use --> strlen()
//     int a=strlen(str);
//     printf("The length of string is :%d\n",a);

//     // to copy the string in another string--> strcpy()

//     char str1[20];//new string/target string of length 20
//     strcpy(str1,str);//copy string (target string,source string)
//     puts(str1);

//     //to concanate two strings--> strcat()

//     char string[20]="sanjeev";
//     char string1[10]="singh";

//     strcat(string,string1);//it will concanate string with string1 and update the value of string
// //what we write first in the barcket it will take action on it
//     printf("The value of string will be %s\n",string);

//     //to compare two srings we use --> strcmp()
//     //it is defined as the if the string character mismatches on comparison so it gives 2 values as follows
//     //return 1--> if the ascii value of chracater of string 1 is grater than ascii value of character of string 2(means if the difference is positive than it returns 1)
//     //return -1-->  if the ascii value of chracater of string 1 is smaller than ascii value of character of string 2(means if the difference is negative than it returns -1)
//     //if the strings is matched than it will return 0;

//     char d[]="Neetu";
//     char e[]="neetu";
//     int value=strcmp(d,e);
//     printf("The value of comparison is: %d\n",value);
//     return 0;
// }
