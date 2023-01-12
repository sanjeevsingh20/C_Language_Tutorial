// //normal way to intilize structure

// /*#include <stdio.h>
// #include <string.h>
// struct Student
// {
//     int roll_no;
//     char name[25];
//     float percentage;
// };

// int main()
// {
//     struct Student s1,s2;
//     s1.roll_no = 87;
//     strcpy(s1.name, "sanjeev");
//     s1.percentage = 98.99;
//     s2.roll_no = 89;
//     strcpy(s2.name, "Neetu");
//     s2.percentage = 90.2;
//     printf("%d\n", s1.roll_no);
//     printf("%s\n", s1.name);
//     printf("%.2f\n", s1.percentage);
//     printf("*********************************-->\n\n");
//     printf("%d\n", s2.roll_no);
//     printf("%s\n", s2.name);
//     printf("%.2f\n", s2.percentage);

//     return 0;
// }*/

// //if we want to add many details so we do like this

// /*#include <stdio.h>
// #include <string.h>
// struct employee 
// {
//     int code;
//     char name[25];
//     float salary;
// };


// int main() {
//     struct employee facebook[100];
//     facebook[0].code=101;
//     facebook[0].salary=4569.90;
//     strcpy(facebook[0].name,"sanjeev");
//     facebook[1].code=102;
//     facebook[1].salary=4220.90;
//     strcpy(facebook[1].name,"Rohit");
//     facebook[2].code=103;
//     facebook[2].salary=4000.90;
//     strcpy(facebook[2].name,"Neetu");

//     printf("code of employee 1 is: %d",facebook[0].code);
    
//     return 0;
// }*/

// //another way to inliize thestructure
// /*#include <stdio.h>
// struct employee
// {
//     int code;
//     char name[30];
//     float salary;
// };


// int main() {
//     struct employee sanjeev={103,"Sanjeev",60000.5};
//     struct employee Harsh={104,"Harsh",50000};
//     printf("%d\n",sanjeev.code);
//     printf("%d\n",Harsh.code);
//     return 0;
// }*/

// // structure pointer is also used in follow

// /*#include <stdio.h>
// struct employee
// {
//     int code;
//     char name[30];
//     float salary;
// };
// int main() {
//     struct employee e1;
//     struct employee *ptr;// opinter pointing the structure 
//     ptr=&e1;//point to the employee e1

//     (*ptr).code=101;// insted of this we can use follwing method
//     ptr->code=101;
//     printf("%d",e1.code);

//     return 0;
// }*/

// //lets take a quick quiz that we can use structure in a function

// #include <stdio.h>
// #include <string.h>
// struct employee
// {
//     int code;
//     char name[30];
//     float salary;
// };

// void show(struct employee e){
//     printf("code of employee: %d\n",e.code);
//     printf("name of employee: %s\n",e.name);
//     printf("salary of employee: %.3f\n",e.salary);
// }

// int main() {   
//     struct employee e1;
//     char *ptr=&e1.name;
//     printf("Enter the code :");
//     scanf("%d",&e1.name);
//     printf("Enter the name of emplooye: ");
//     gets(ptr);
//     strcpy(e1.name,*ptr);
//     printf("Enter the salary of the employee: ");
//     scanf("%f",&e1.salary);
//     // e1.code=235;
//     // strcpy(e1.name,"Sanjeev");
//     // e1.salary=56839.89;
//     show(e1);
    
//     return 0;
// }