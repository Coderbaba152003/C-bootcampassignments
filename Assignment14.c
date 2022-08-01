#include<stdio.h>
#include<stdlib.h>


// solution of question no 1 ################################################################3

// int main()
// {
//     int arr[10],i,sum=0;
//     printf("Enter values in the array:\n");
//     for(i=0;i<10;i++)
//     scanf("%d",&arr[i]);
//     for(i=0;i<10;i++)
//     sum = sum + arr[i];
//     printf("sum of the numbers stored in the array is %d ",sum);
// }



// solution of question no 2 ##################################################################

// int main()
// {
//     int arr[10],i;
//     float sum=0;
//     printf("Enter values in the array:\n");
//     for(i=0;i<10;i++)
//     scanf("%d",&arr[i]);
//     for(i=0;i<10;i++)
//     sum = sum + arr[i];
//     sum = sum/10;
//     printf("Average of the numbers stored in the array is %.3f ",sum);
// }


// solution of question no 3 ##################################################################

// int main()
// {
//     int arr[10],i;
//     float sum_of_even=0,sum_of_odd=0;
//     printf("Enter values in the array:\n");
//     for(i=0;i<10;i++)
//     scanf("%d",&arr[i]);  
//     for(i=0;i<10;i++)
//     {
//         if(arr[i]%2==0)
//         sum_of_even = sum_of_even + arr[i];
//         else
//         sum_of_odd = sum_of_odd + arr[i];
//     } 
//     printf("Sum of even numbers stored in the array is %.2f ",sum_of_even);
//     printf("\nSum of odd numbers stored in the array is %.2f ",sum_of_odd);
// }


// solution of question no 4 ##################################################################

//  int main()
// {
//     int arr[10],i,k=0;
//     printf("Enter values in the array:\n");
//     for(i=0; i<10; i++)
//     scanf("%d",&arr[i]);
//     for(i=0; i<10; i++) 
//     {
//         if(arr[i]>k)
//         k = arr[i];
//     }
//     printf("Greatest number stored in the array is %d ",k);
// }


// solution of question no 5 ##################################################################

//  int main()
// {
//     int arr[10],i,k;
//     printf("Enter values in the array:\n");
//     for(i=0; i<10; i++)
//     scanf("%d",&arr[i]);
//     k = arr[0];
//     for(i=0; i<10; i++) 
//     {
//         if(arr[i]<k)
//         k = arr[i];
//     }
//     printf("Smallest number stored in the array is %d ",k);
// }


// solution of question no 6 ##################################################################

// int main()
// {
//     int arr[10],i,j,k;
//     printf("Enter values in the array: ");
//     for(i=0; i<10; i++)
//     scanf("%d",&arr[i]);
//     for(i=0; i<10-1; i++)
//     {
//         for(j=0;j<=8;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 k = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = k;
//             }
//         }
//     }
//     printf("After sorting the array is: \n");
//     for(i=0; i<10; i++)
//     printf("%4d",arr[i]);
// }



// solution of question no 7 ##################################################################

// int main()
// {
//     int arr[10],i,j,k;
//     printf("Enter values in the array: ");
//     for(i=0; i<10; i++)
//     scanf("%d",&arr[i]);
//     for(i=0; i<10-1; i++)
//     {
//         for(j=0;j<=8;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 k = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = k;
//             }
//         }
//     }
//     printf("Second largest number in the array is: %d",arr[8]);
// }



// solution of question no 8 ##################################################################

// int main()
// {
//     int arr[10],i,j,k;
//     printf("Enter values in the array: ");
//     for(i=0; i<10; i++)
//     scanf("%d",&arr[i]);
//     for(i=0; i<10-1; i++)
//     {
//         for(j=0;j<=8;j++)
//         {
//             if(arr[j]>arr[j+1])
//             {
//                 k = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = k;
//             }
//         }
//     }
//     printf("Second smallest number in the array is: %d",arr[1]);
// }


// solution of question no 9 ##################################################################

// int main()
// {
//     int n,i;
//     printf("Enter how many numbers: ");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter array elements: ");
//     for(i=0;i<n;i++)
//     scanf("%d",&arr[i]);
//     printf("Elements in reverse order is:\n");
//     for(i=n-1; i>=0; i--)
//     printf("%4d",arr[i]);
// }


// solution of question no 10 ##################################################################

// int main()
// {
//     int n;
//     printf("Enter the size of array: ");
//     scanf("%d",&n);
//     int arr[n],copy[n],i;
//     printf("Enter the %d numbers: ",n);
//     for(i=0; i<n; i++)
//     scanf("%d",&arr[i]);
//     for(i=0; i<n; i++)
//     copy[i] = arr[i];
//     printf("First array is:");
//     for(i=0; i<n; i++)
//     printf("%5d",arr[i]);
//     printf("\nCopied array is:");
//     for(i=0; i<n; i++)
//     printf("%5d",copy[i]);
// }