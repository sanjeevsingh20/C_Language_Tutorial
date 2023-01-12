// //to verify that the pointer ptr+2 is pointing toward third element of our array

// #include <stdio.h>

// int main() {
//     int array[10]={1,2,3,4,5,6,7,8,9,10};
//     int *ptr=&array[0];
//     ptr=ptr+2;
//     if (ptr==&array[2]){
//         printf("The pointer points at same location\n");
//     }
//     else{
//         printf("The pointers will not point at same value\n");
//     }

//     printf("The first element addres of the array  is :%d\n",ptr);
//     printf("The value of third element without using pointer %d: \n",array[2]);
//     printf("The value of third element  using pointer %d: \n",*ptr);

//     return 0;
// }

// //an array of 10 integers wit multiplication of 5

// #include <stdio.h>

// int main() {
//     int array[10];
//     int n;
//     printf("Enter the number whose table you want: ");
//     scanf("%d",&n);
//     for (int i = 0; i < 10; i++)
//     {
//         array[i]=n*(i+1);
//         printf("%d\n",array[i]);
//     }

    
//     return 0;
// }

// // WAP to reverse an array

// #include <stdio.h>

// void reverse(int *arr,int n){
//     int temp;
//     for (int i = 0; i < n/2; i++)
//     {
//         temp=arr[i];
//         arr[i]=arr[n-i-1];
//         arr[n-i-1]=temp;
//     }
    
// }

// int main() {
//     int array[]={23,24,25,26,27,28,29,20};
//     reverse(array,8);
//     for (int i = 0; i < 8; i++)
//     {
//         printf("The value of %d element is %d\n",i+1,array[i]);
//     }
//     return 0;
    
// }

// //WAP to count the positive integers in an array

// #include <stdio.h>

// int main() {
//     int array[]={1,6,-9,-7,8,9,23,-12,-10,9};
//     int size=sizeof(array)/4;
//     int count=0;
    
//     for (int i = 0; i < size; i++)
//     {
//         if(array[i]>0){
//             count=count+1;
//         }
//     }
//     printf("The numbers of positive integers in an array is %d",count);

//     return 0;
// }

// // to make a 2-d array containing tables of 2,7,9 of size 3X10

// #include <stdio.h>
// int printarr(int *arr,int num,int n){

//         for (int  j = 0; j <n ; j++)
//         {
//             arr[j]=num*(j+1);
//         }
//         for (int i = 0; i < 10; i++)
//         {
//             printf("%dX%d = %d\n",num,i+1,arr[i]);

            
//         }
//           printf("********************************************************\n\n");
          
// }

// int main() {
//     int array[3][10];
//     printarr(array[0],2,10);
//     printarr(array[1],5,10);
//     printarr(array[2],7,10);
       
//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 10; j++)
//         {
//             if (i==0)
//             {
//                 array[i][j]=2*(j+1);
//             }
//             if (i==1)
//             {
//                 array[i][j]=7*(j+1);
//             }
//             if (i==2)
//             {
//                 array[i][j]=9*(j+1);
//             }           
            
//         }      
//     } 

//     return 0;
// }


// // three-dimension array with address

// #include <stdio.h>

// int main() {
//     int array[2][3][4];
//     for (int i = 0; i < 2; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             for (int k = 0; k < 4; k++)
//             {
//                 printf("The adress of arr[%d][%d][%d] is : %u\n",i,j,k,&array[i][j][k]);
//             }
            
//         }
        
//     }
    
//     return 0;
// }