// // question 1
// /*#include <stdio.h>

// typedef struct vector// type def is just used for structure aliasing and give its nickname in the last of structure as shown
// {
//     int x;
//     int y;
// }vec;//---> here name is aliased


// int main() {
//     vec v1,v2;
//     v1.x=67;
//     v1.y=89;
//     v2.x=56;
//     v2.y=90;
//     printf("The dimension of x is %d and of y is %d in vector v1\n",v1.x,v1.y);
//     printf("The dimension of x is %d and of y is %d in vector v2\n",v2.x,v2.y);
//     return 0;
// }*/

// // find the sum of the vectors;

// /*#include <stdio.h>

// typedef struct vector// type def is just used for structure aliasing and give its nickname in the last of structure as shown
// {
//     int x;
//     int y;
// }vec;//---> here name is aliased
// vec sumofvector(vec v1,vec v2){
//     vec result;
//     result.x=v1.x+v2.x;
//     result.y=v1.y+v2.y;
//     printf("The sum of vectors is given as (%d,%d)",result.x,result.y);

// }

// int main() {
//     vec v1,v2;
//     v1.x=67;
//     v1.y=89;
//     v2.x=56;
//     v2.y=90;
//     printf("The dimension of x is %d and of y is %d in vector v1\n",v1.x,v1.y);
//     printf("The dimension of x is %d and of y is %d in vector v2\n",v2.x,v2.y);
//     sumofvector(v1,v2);
//     return 0;
// }*/

// // use of a arrow operator
// /*#include <stdio.h>
// #include <string.h>
// typedef struct employee
// {
//     int code;
//     char name[30];
//     float salary;
// }emp;

// int main() {
//     emp e1;
//     emp *ptr;
//     ptr=&e1;
//     ptr->code=244;// -> is the arrow operator
//     strcpy(ptr->name,"Sanjeev");
//     ptr->salary=60000.50;

//     printf("The code,name and salry of employee e1 are %d,%s and %.2f respectively",e1.code,e1.name,e1.salary);
//     return 0;
// }*/

// // WAP to represent a complex number using structure

// /*#include <stdio.h>
// typedef struct complex
// {
//     float x;
//     float y;
// }complexs;

// float complex_no(complexs c1){
//     printf("Your complex number can written as %.2fi + %.2fj",c1.x,c1.y);
// }
// int main() {
//     complexs c1;
//     c1.x=78;
//     c1.y=12;
//     complex_no(c1);

//     return 0;
// }*/

// /*#include <stdio.h>
// typedef struct complex
// {
//     float x;
//     float y;
// } complexs;

// void display(complexs c)
// {
//     printf("complex numbers can written as %.2fi + %.2fi\n",c.x,c.y);
// }
// int main()
// {
//     complexs c[5];
//     for (int i = 0; i < 5; i++)
//     {
//         printf("Enter the value of real number %d: ", i + 1);
//         scanf("%f", &c[i].x);
//         printf("Enter the value of imaginary number %d: ", i + 1);
//         scanf("%f", &c[i].y);

//     }
//     for (int  j= 1; j < 6; j++)
//     {
//         display(c[j]);
//     }

//     return 0;
// }*/

// // to check that time is equal

// /*#include <stdio.h>
// // making structure of the time
// typedef struct time
// {
//     int seconds;
//     int minutes;
//     int hour;
// } time;



// // for displaying the dates
// void display(date d)
// {
//     printf("The date is : %d/%d/%d\n", d.day, d.month, d.year);
// }

// // function for comparising the dates

// void compare(date d1, date d2)
// {
//     if (d1.day == d2.day && d1.month == d2.month && d1.year == d2.year)
//     {
//         printf("Both dates are same ");
//     }
//     else
//     {
//         printf("dates are not same");
//     }
// }

// int main()
// {
//     date d1 = {12, 10, 22};
//     date d2 = {11, 10, 22};
//     display(d1);
//     display(d2);
//     compare(d1, d2);
//     return 0;
// }*/

// // function for comparising the times
// #include <stdio.h>
// // making structure of the time
// typedef struct time
// {
//     int seconds;
//     int minutes;
//     int hour;
// } time;

// // for displaying the times
// void display(time t)
// {
//     printf("The time is : %d-%d-%d\n", t.seconds, t.minutes, t.hour);
// }

// void compare(time t1, time t2)
// {
//     if (t1.seconds == t2.seconds && t1.minutes == t2.minutes && t1.hour == t2.hour)
//     {
//         printf("Both times are same ");
//     }
//     else
//     {
//         printf("times are not same");
//     }
// }

// int main()
// {
//     time t1 = {12, 10, 10};
//     time t2 = {12, 10, 10};
//     display(t1);
//     display(t2);
//     compare(t1, t2);
//     return 0;
// }
