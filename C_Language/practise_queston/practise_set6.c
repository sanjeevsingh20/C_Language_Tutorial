// // progarm to find the power of a number using recursion--------------->
// /*#include <stdio.h>
// int power(int base, int n)
// {
//     if (n != 0)
//     {
//         return base * power(base, n - 1);
//     }
//     else
//     {
//         return 1;
//     }

// }

// int main()
// {
//     int base, n;
//     printf("enter a base number: ");
//     scanf("%d", &base);
//     printf("enter a power: ");
//     scanf("%d", &n);
//     printf("The power %d of %d is %d", n, base, power(base, n));
//     return 0;
// }*/

// // calculate the average using array--------------->

// /*#include <stdio.h>

// int main()
// {
//     int array[100], sum = 0, avg,n, j;
//     printf("Enter how manynumbers you wnat ot add : ");
//     scanf("%d", &n);
//     if (n > 100 || n < 0)
//     {
//         printf("Invalid range start from 1 to 100 plese enter a valid range");
//     }
//     else
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("Enter number %d: ",j+1);
//             scanf("%d",&array[j]);
//             sum+=array[j];
//         }
//     }
//     printf("The sum will be %d\n",sum);
//     avg=sum/n;
//      printf("The average will be %d\n",avg);
//     return 0;
// }*/

// // to find the sum of matrixes using multidimension array

/*#include <stdio.h>
// void sum_of_matrices(int matrix1[100][100],int matrix2[100][100]){

// }---------------------< to do
int main()
{
    int i, j;
    int matrix1[100][100], matrix2[100][100], sum[100][100];
    printf("Enter the number of a rows:");
    scanf("%d", &i);
    printf("Enter the number of a columns:");
    scanf("%d", &j);
    printf("Now Enter the value of matrix 1\n");
    // values for matrix 1
    for (int k = 0; k < i; k++)
    {
        for (int l = 0; l < j; l++)
        {
            printf("Enter the value of matrix[%d][%d]: ", k + 1, l + 1);
            scanf("%d", &matrix1[k][l]);
        }
    }
    printf("Now Enter the value of matrix 2\n");
    // values for matrix 2
    for (int k = 0; k < i; k++)
    {
        for (int l = 0; l < j; l++)
        {
            printf("Enter the value of matrix[%d][%d]: ", k + 1, l + 1);
            scanf("%d", &matrix2[k][l]);
        }
    }

    // to sum up the matrix
    for (int k = 0; k < i; k++)
    {
        for (int l = 0; l < j; l++)
        {
            sum[k][l] = matrix1[k][l] + matrix2[k][l];
        }
    }
    // for printing the matrix
    printf("The addition of matrix1 and matrix2 is \n\n");
    for (int k = 0; k < i; k++)
    {
        for (int l = 0; l < j; l++)
        {
            printf("%d  ", sum[k][l]);
            if (l == j - 1)
            {
                printf("\n\n");
            }
        }
    }

    return 0;
}*/

// to multiply two matrix

#include <stdio.h>

int main()
{
    int matrix1[100][100], matrix2[100][100], multiplicaton[100][100];
    int rows1, column1, rows2, column2;
    printf("Enter the number of rows of matrix 1: ");
    scanf("%d", &rows1);
    printf("Enter the number of columns of matrix 1: ");
    scanf("%d", &column1);
    printf("Enter the number of rows of matrix 1: ");
    scanf("%d", &rows2);
    printf("Enter the number of columns of matrix 1: ");
    scanf("%d", &column2);
    if (column1 == rows2)
    {
        printf("Enter the values of matrix 1:\n\n");
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < column1; j++)
            {
                printf("Enter the value of a%d%d: ", i + 1, j + 1);
                scanf("%d", &matrix1[i][j]);
            }
        }
        printf("Enter the values of matrix 2:\n\n");
        for (int i = 0; i < rows2; i++)
        {
            for (int j = 0; j < column2; j++)
            {
                printf("Enter the value of a%d%d: ", i + 1, j + 1);
                scanf("%d", &matrix2[i][j]);
            }
        }
    }
    else
    {
        printf("Wrong Configuration of matrices\n Hint:- no. of column in matrix 1 is equal to number of rows in matrix 2");
    }
    printf("\n\n");

    // multiplication of two matrices
    for (int i = 0; i < rows1; i++)
    {
        for (int k = 0; k < column2; k++)
        {
            for (int j = 0; j < column1; j++)
            {
                multiplicaton[i][k] += matrix1[i][j] * matrix2[j][k];
            }
        }
    }

    // printing the multiplication
    printf("The multiplication of matrix1 and matrix2 is \n\n");
    for (int k = 0; k < rows1; k++)
    {
        for (int l = 0; l < column2; l++)
        {
            printf("%d  ", multiplicaton[k][l]);
            
        }
        printf("\n");
    }

    return 0;
}

// to transpose the matrix

// #include <stdio.h>
// int main()
// {
//     int matrix[100][100];
//     int transpose[100][100];
//     int rows, column;
//     printf("Enter the number of rows of matrix: ");
//     scanf("%d", &rows);
//     printf("Enter the number of columns of matrix: ");
//     scanf("%d", &column);
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < column; j++)
//         {
//             printf("Enter the value of a%d%d: ", i + 1, j + 1);
//             scanf("%d", &matrix[i][j]);
//         }
//     }
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < column; j++)
//         {
//             transpose[j][i] = matrix[i][j];
//         }
//     }
//     for (int i = 0; i < rows; i++)
//     {
//         for (int j = 0; j < column; j++)
//         {
//             printf("%d  ", transpose[i][j]);
//             if (j == column - 1)
//             {
//                 printf("\n\n");
//             }
//         }
//     }
//     return 0;
// }