#include<stdio.h>
#include<stdlib.h>

// solution of question no 1 ##################################################################

        // int main()
        // {
        //     int a[3][3],b[3][3],c[3][3],i,j;
        //     printf("Enter numbers in first 3*3 array: ");
        //     for(i=0; i<=2; i++)
        //     {
        //         for(j=0; j<=2; j++)
        //         {
        //             scanf("%d",&a[i][j]);
        //         }
        //     }
        //     printf("Enter numbers in second 3*3 array: ");
        //     for(i=0; i<=2; i++)
        //     {
        //         for(j=0; j<=2; j++)
        //         {
        //             scanf("%d",&b[i][j]);
        //         }
        //     }
        //     printf("First matrix is:\n");
        //     for(i=0; i<=2; i++)
        //     {
        //         for(j=0; j<=2; j++)
        //         {
        //             printf("%3d",a[i][j]);
        //         }   printf("\n");
        //     }   
        //       printf("\nSecond matrix is:\n");
        //     for(i=0; i<=2; i++)
        //     {
        //         for(j=0; j<=2; j++)
        //         {
        //             printf("%3d",b[i][j]);
        //         }   printf("\n");
        //     }   
        //     for(i=0; i<=2; i++)
        //     {
        //         for(j=0; j<=2; j++)
        //         {
        //             c[i][j] = a[i][j] + b[i][j];
        //         }
        //     }
        //     printf("\nSum of the two matrices is:\n");
        //      for(i=0; i<=2; i++)
        //     {
        //         for(j=0; j<=2; j++)
        //         {
        //             printf("%3d",c[i][j]);
        //         }   printf("\n");
        //     }   
        // }


// solution of question no 2 ##################################################################

        // int main()
        // {
        //         int a[3][3],b[3][3],c[3][3],i,j,k,sum=0;
        //         printf("Enter 3*3 numbers in the first matrix: ");
        //         for(i=0; i<3; i++)
        //         {
        //                 for(j=0; j<3; j++)
        //                 {
        //                         scanf("%d",&a[i][j]);
        //                 }
        //         }
        //         printf("Enter 3*3 numbers in the second matrix: ");
        //         for(i=0; i<3; i++)
        //         {
        //                 for(j=0; j<3; j++)
        //                 {
        //                         scanf("%d",&b[i][j]);
        //                 }
        //         }
        //         printf("\n First matrix is:\n");
        //          for(i=0; i<3; i++)
        //         {
        //                 for(j=0; j<3; j++)
        //                 {
        //                         printf("%4d",a[i][j]);
        //                 }       printf("\n");
        //         }
        //         printf("\n Second matrix is:\n");
        //          for(i=0; i<3; i++)
        //         {
        //                 for(j=0; j<3; j++)
        //                 {
        //                         printf("%4d",b[i][j]);
        //                 }       printf("\n");
        //         }

        //         for (int i = 0; i < 3; i++)
        //         {
        //                 printf("| ");
        //                 for (int j = 0; j < 3; j++)
        //                 {
        //                         int sum = 0;
        //                         for (int k = 0; k < 3; k++)
        //                         {
        //                                 sum += a[i][k] * b[k][j];
        //                         }
        //                         printf("%4d    ", sum);
        //                 }
        //         }
        //         printf(" |");
        //         printf("\n");
        // }



// solution of question no 3 ##################################################################

        // int main()
        // {
        //     int rows,cols,j,i;
        //     printf("Enter the number of rows of matrix: ");
        //     scanf("%d",&rows);
        //     printf("Enter the number of columns of matrix: ");
        //     scanf("%d",&cols);
        //     int a[rows][cols],b[rows][cols];
        //     printf("Enter the matrix elements:\n");
        //     for(i=0; i<=rows-1; i++)
        //     {
        //         for(j=0; j<=cols-1; j++)
        //         {
        //             scanf("%d",&a[i][j]);
        //         }
        //     }

        //     for(i=0; i<=rows-1; i++)
        //     {
        //         for(j=0; j<=cols-1; j++)
        //             b[i][j] = a[j][i];
        //     }

        //     printf("original matrix:\n");
        //      for(i=0; i<=rows-1; i++)
        //     {
        //         for(j=0; j<=cols-1; j++)
        //         {
        //             printf("%3d",a[i][j]);
        //         }   printf("\n");
        //     }
        //     printf("After transpose the matrix is:\n");
        //      for(i=0; i<=rows-1; i++)
        //     {
        //         for(j=0; j<=cols-1; j++)
        //         {
        //              printf("%3d",b[i][j]);
        //         }   printf("\n");
        //     } 
        // }


// solution of question no 4 ##################################################################

        // int main()
        // {
        //     int rows,cols,i,j,sum=0;
        //     printf("Enter number of rows of matrix: ");
        //     scanf("%d",&rows);
        //     printf("Enter number of columns of matrix: ");
        //     scanf("%d",&cols);
        //     int a[rows][cols];
        //     printf("Enter the matrix elements:\n");
        //     for(i=0; i<rows; i++)
        //     {
        //         for(j=0; j<cols; j++)
        //         { 
        //             scanf("%d",&a[i][j]);
        //         }
        //     }   
        //     for(i=0; i<rows; i++)
        //     {
        //         for(j=0; j<cols; j++)
        //         {
        //             if(i+j == cols-1)
        //             {
        //                sum = sum + a[i][j];
        //             }
        //         }
        //     }
        //     printf("Sum of numbers of right diagonal of the matrix is %d",sum);
        // }


// solution of question no 5 ##################################################################

        // int main()
        // {
        //     int rows,cols,i,j,sum=0;
        //     printf("Enter number of rows of matrix: ");
        //     scanf("%d",&rows);
        //     printf("Enter number of columns of matrix: ");
        //     scanf("%d",&cols);
        //     int a[rows][cols];
        //     printf("Enter the matrix elements:\n");
        //     for(i=0; i<rows; i++)
        //     {
        //         for(j=0; j<cols; j++)
        //         { 
        //             scanf("%d",&a[i][j]);
        //         }
        //     }   
        //     for(i=0; i<rows; i++)
        //     {
        //         for(j=0; j<cols; j++)
        //         {
        //             if(i == j)
        //             {
        //                sum = sum + a[i][j];
        //             }
        //         }
        //     }
        //     printf("Sum of numbers of left diagonal of the matrix is %d",sum);
        // }


// solution of question no 6 ##################################################################

        // int main()
        // {
        //         int i,j,sum_of_rows=0,sum_of_cols=0;
        //         int rows,cols;
        //         printf("Enter the rows and columns of the matrix: ");
        //         scanf("%d%d",&rows,&cols);
        //         int a[rows][cols];
        //         printf("Enter the matrix elements:\n");
        //         for(i=0; i<rows; i++)
        //         {
        //                 for(j=0; j<cols; j++)
        //                 {
        //                         scanf("%d",&a[i][j]);
        //                 }
        //         }
        //         printf("\nMatrix is:\n");
        //         for(i=0; i<rows; i++)
        //         {
        //                 for(j=0; j<cols; j++)
        //                 {
        //                         printf("%4d",a[i][j]);
        //                 }       printf("\n");
        //         }
        //         printf("\n*******************Sum of rows*******************");
        //         for(i=0; i<rows; i++)
        //         {
        //                 sum_of_rows = 0;
        //                 for(j=0; j<cols; j++)
        //                 {
        //                         sum_of_rows = sum_of_rows +a[i][j];
        //                 }
        //                 printf("\nSum of numbers of %d row is %d ",i+1,sum_of_rows);

        //         }
        //         printf("\n*******************Sum of columns*******************");
        //         for(j=0; j<cols; j++)
        //         {
        //                 sum_of_cols = 0;
        //                 for(i=0; i<rows; i++)
        //                 {
        //                         sum_of_cols = sum_of_cols + a[i][j];
        //                 }
        //                 printf("\nSum of numbers of %d cols is %d ",j+1,sum_of_cols);
        //         }
        // }


// solution of question no 7 ##################################################################

//         int main()
//         {
//                 int rows,cols,i,j,sum=0;
//                 printf("Enter rows and columns of the matrix: ");
//                 scanf("%d%d",&rows,&cols);
//                 int a[rows][cols];
//                 printf("Enter the matrix numbers:\n");
//                 for(i=0; i<rows; i++)
//                 {
//                   for(j=0; j<rows; j++)
//                   scanf("%d",&a[i][j]);
//                 }
//                   printf("\n original matrix:\n");
//                 for(i=0; i<rows; i++)
//                   {
//                         for(j=0; j<cols; j++)
//                         {
//                                 printf("%3d",a[i][j]);
//                         }       printf("\n");
//                   }
//                   for(i=0; i<rows; i++)
//                   {
//                         for(j=0; j<cols; j++)
//                         {
//                                 if(i>j)
//                                 printf("%3d",a[i][j]);
//                                 else
//                                 printf("   ");
//                         }       printf("\n");
//                   }
//         }


// solution of question no 8 ##################################################################

        // int main()
        // {
        //         int rows,cols,i,j,sum=0;
        //         printf("Enter rows and columns of the matrix: ");
        //         scanf("%d%d",&rows,&cols);
        //         int a[rows][cols];
        //         printf("Enter the matrix numbers:\n");
        //         for(i=0; i<rows; i++)
        //         {
        //           for(j=0; j<rows; j++)
        //           scanf("%d",&a[i][j]);
        //         }
        //           printf("\n original matrix:\n");
        //         for(i=0; i<rows; i++)
        //           {
        //                 for(j=0; j<cols; j++)
        //                 {
        //                         printf("%3d",a[i][j]);
        //                 }       printf("\n");
        //           }
        //           printf("\n");
        //           for(i=0; i<rows; i++)
        //           {
        //                 for(j=0; j<cols; j++)
        //                 {
        //                         if(j>i)
        //                         printf("%3d",a[i][j]);
        //                         else
        //                         printf("   ");
        //                 }       printf("\n");
        //           }
        // }

     
// solution of question no 9 ##################################################################

        // int main()
        // {
        //         int rows,cols,i,j,count;
        //         printf("Enter the number of rows of matrix: ");
        //         scanf("%d",&rows);
        //         printf("Enter the number of columns of matrix: ");
        //         scanf("%d",&cols);
        //         int a[rows][cols];
        //         printf("Enter the matrix elements\n");
        //         for(i=0; i<rows; i++)
        //         {
        //                 for(j=0; j<cols; j++)
        //                 scanf("%d",&a[i][j]);
        //         }
        //         printf("The matrix is\n");
        //         for(i=0; i<rows; i++)
        //         {
        //                 for(j=0; j<cols; j++)
        //                 {
        //                         printf("%4d",a[i][j]);
        //                 }       printf("\n");
        //         }
        //         count = 0;
        //         for(i=0; i<rows; i++)
        //         {
        //                 for(j=0; j<cols; j++)
        //                 {
        //                         if(0 == a[i][j])
        //                         count ++;
        //                 }
        //         }
        //         if(count> (rows*cols)/2)
        //         printf("\nMatrix is sparse");
        //         else
        //         printf("\nMatrix is not sparse");
        // }


// solution of question no 10 ##################################################################

        // int main()
        // {
        //         int rows,cols,i,j,count=0,flag=0,ans=0;
        //         printf("Enter the number of rows of the matrix: ");
        //         scanf("%d",&rows);
        //         printf("Enter the number of columns of the matrix: ");
        //         scanf("%d",&cols);
        //         int a[rows][cols];
        //         printf("Enter the matrix elements\n");
        //         for(i=0; i<rows; i++)
        //         {
        //                 for(j=0; j<cols; j++)
        //                 scanf("%d",&a[i][j]);
        //         }
        //         printf("\n Matrix is: \n");
        //         for(i=0; i<rows; i++)
        //         {
        //                 for(j=0; j<cols; j++)
        //                 {
        //                         printf("%4d",a[i][j]);
        //                 }       printf("\n");
        //         }
                
        //         for(i=0; i<rows; i++)
        //         {       
        //                 count = 0;
        //                 for(j=0; j<cols; j++)
        //                 {
        //                         if(1 == a[i][j])
        //                         count ++;
        //                 }
        //                 if(count>flag)
        //                 {                              
        //                         flag = count;
        //                         ans ++;
        //                 }
        //         }
        //         printf("Row having maximum number of 1's is %d",ans);
        // }


