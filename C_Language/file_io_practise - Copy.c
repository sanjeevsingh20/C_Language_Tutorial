// // to read the three integers from the text document

// #include <stdio.h>

// int main() {
//     FILE *ptr;
//     ptr=fopen("generated.txt","r");
//     int n;
//     for (int i = 0; i < 3; i++)
//     {
//         fscanf(ptr,"%d",&n);
//         printf("%d\n",n);
//     }


//     return 0;
// }

// // to print the table in a file

// #include <stdio.h>

// int main() {
//     FILE *ptr;
//     ptr=fopen("table.txt","w");
//     int n=9;
//     for (int i = 1; i < 11; i++)
//     {
//         fprintf(ptr,"%d X %d = %d\n",n,i,n*i);
//     }
//     fclose(ptr);

//     return 0;
// }

// // copy the content from one file to another

// #include <stdio.h>

// int main()
// {
//     FILE *ptr;
//     FILE *ptr1;
//     char c, d;
//     ptr = fopen("generates.txt", "r");
//     ptr1 = fopen("generated.txt", "w");
//     c = fgetc(ptr);
//     for (int i = 0; i < 2; i++)
//     {
//         while (c != EOF)
//         {
//             d = fputc(c, ptr1);
//             c = fgetc(ptr);
//         }
//     }

//     return 0;
// }

// // to double the integers containing in the file

// #include <stdio.h>

// int main() {
//     FILE *ptr;
//     int num;
//     ptr=fopen("sanjeev.txt","r");
//     ;
//     fscanf(ptr,"%d",&num);
//     printf("%d",num);   
//     printf("The program is runned sucessfully");
//     return 0;
// }