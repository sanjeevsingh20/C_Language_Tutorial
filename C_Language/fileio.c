// // to read the data from the file

// #include <stdio.h>

// int main()
// {
//     FILE *ptr;
//     char num[70];
//     int num2;
//     // ptr=fopen  ("samplefile.txt","w");  //for writing in the file
//     // ptr=fopen  ("samplefile.txt","r");  //for reading in the file

//     ptr = fopen("sanjeev.txt", "r");
//     if (ptr == NULL)
//     {
//         printf("This file doesn't exists!! please check the file name");
//     }
//     else
//     {

//         fscanf(ptr, "%s", &num);
//         fscanf(ptr, "%d", &num2);
//         fclose(ptr);
//         printf("The value of num is %s\n", num);
//         printf("The value of num is %d", num2);
//     }
//     return 0;
// }

// // to write the data in a file

// #include <stdio.h>

// int main()
// {
//     FILE *ptr;
//     int num = 5;
//     ptr = fopen("generated.txt", "w");

//     fprintf(ptr, "This is sanjeev file %d",num);

//     fclose(ptr);
//     return 0;
// }
// #include <stdio.h>

// int main() {
//     FILE *ptr;
//     int num=5;
//     char *file[50];
//     printf("Enter the string you want to add: ");
//     gets(file);
//     ptr=fopen("generates.txt","w");
//     fprintf(ptr,"%s",file);
//     fclose(ptr);
//     return 0;
// }

// // to print the file datat character by character using fgetc

// #include <stdio.h>

// int main() {
//     FILE *ptr;
//     char c;
//     ptr=fopen("generated.txt","r");
//     c=fgetc(ptr);
//     while(c!=EOF)  // EOF stands for End of file means the loop is running till the files end
//     {
//         printf("%c",c);
//         c=fgetc(ptr);
//     }
    
    
//     return 0;
// }

// // to write the file data character by character using fputs
// #include <stdio.h>

// int main() {
//     FILE *ptr;
//     char c,d;
//     ptr=fopen("genetrated.txt","w");
//     c=fgetc(ptr);
//     while(c!=EOF)  // EOF stands for End of file means the loop is running till the files end
//     {
//         d=fputc(c,ptr);   // character should be in single quote
//         c=fgetc(ptr);

//     }
//     return 0;
// }

