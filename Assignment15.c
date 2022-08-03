#include<stdio.h>
#include<conio.h>


// solution of question no 1 ###########################################################################3

        // int greatest(int[],int);
        // int main()
        // {
        //     int n,i;
        //     printf("Enter size of array: ");
        //     scanf("%d",&n);
        //     int arr[n];
        //     printf("Enter %d numbers: ",n);
        //     for(i=0; i<n; i++)
        //     scanf("%d",&arr[i]);
        //     printf("The greatest number in the array is: %d",greatest(arr,n));
        // }

        // int greatest(int arr1[],int n1)
        // {
        //     int i,largest;
        //     largest = arr1[0];
        //     for(i=0; i<n1; i++)
        //     {
        //         if(largest<arr1[i])
        //             largest = arr1[i];
        //     }   return largest;
        // }


// solution of question no 2 ###########################################################################3

        // int smallest(int[],int);
        // int main()
        // {
        //     int n,i;
        //     printf("Enter the size of array: ");
        //     scanf("%d",&n);
        //     printf("Enter %d numbers: ",n);
        //     int arr[n];
        //     for(i=0; i<n ;i++)
        //     scanf("%d",&arr[i]);
        //     printf("The smallest number in the array is %d",smallest(arr,n));
        // }

        // int smallest(int arr1[],int n1)
        // {
        //     int i,smallest;
        //     smallest = arr1[0];
        //     for(i=0; i<n1; i++)
        //     {
        //         if(smallest>arr1[i])
        //         smallest = arr1[i];
        //     }
        //     return smallest;
        // }


// solution of question no 3 ###########################################################################3

        // void sort(int[],int);
        // int main()
        // {
        //     int n,i;
        //     printf("Enter the size of array: ");
        //     scanf("%d",&n);
        //     printf("Enter the %d numbers ",n);
        //     int arr[n];
        //     for(i=0; i<n; i++)
        //     scanf("%d",&arr[i]);
        //     sort(arr,n);
        // }

        // void sort(int arr1[],int n1)
        // {
        //     int i,k,j;
        //     for(i=0; i<n1-1; i++)
        //     {
        //         for(j=0; j<n1-1; j++)
        //         {
        //             if(arr1[j] > arr1[j+1])
        //             {
        //                 k = arr1[j];
        //                 arr1[j] = arr1[j+1];
        //                 arr1[j+1] = k;
        //             }
        //         }
        //     }   printf("After sorting the array is\n");
        //     for(i=0; i<n1; i++)
        //     printf("%5d",arr1[i]);
        // }


// solution of question no 4 ##################################################################

        // void rotate(int[],int,int,int);
        // int main()
        // {
        //     int i,size,n,d;
        //     printf("Enter the size of array: ");
        //     scanf("%d",&size);
        //     int arr[size];
        //     printf("Enter %d numbers: ",size);
        //     for(i=0; i<size; i++)
        //     scanf("%d",&arr[i]);
        //     printf("Enter how many position you want to rotate the array: ");
        //     scanf("%d",&n);
        //     printf("Enter the direction.\nEnter 1 for left.\nEnter 0 for right\n");
        //     scanf("%d",&d);
        //     rotate(arr,size,n,d);
        // }

        // void rotate(int arr1[],int size,int n1,int d1)
        // {
        //     int temp,j,i;
        //     if(d1==1)
        //     {
        //         while(n1!=0)
        //         {
        //                 temp = arr1[0];
        //                 for(j=0; j<=size-1; j++)
        //                 {
        //                     arr1[j] = arr1[j+1];
        //                 }
        //                 arr1[size-1] = temp;
        //                 n1--;
        //         }
        //         printf("After rotating the array is: ");
        //         for(i=0; i<size; i++)
        //         printf("%5d",arr1[i]);
        //     }
        //     else
        //      {
        //         while(n1!=0)
        //         {
        //                 temp = arr1[size-1];
        //                 for(j=size-1; j>=0; j--)
        //                 {
        //                     arr1[j] = arr1[j-1];
        //                 }
        //                 arr1[0] = temp;
        //                 n1--;
        //         }
        //         printf("After rotating the array is: ");
        //         for(i=0; i<size; i++)
        //         printf("%5d",arr1[i]);
        //     }
        // }


// solution of question no 5 ##########################################################################

        // int occurence(int[],int);
        // int main()
        // {
        //         int n,i;
        //         printf("Enter the size of array: ");
        //         scanf("%d",&n);
        //         int a[n];
        //         printf("\nEnter the array elements: ");
        //         for(i=0; i<n; i++)
        //         scanf("%d",&a[i]);
        //         printf("The first adjacent duplicate value is %d",occurence(a,n));
        // }
        // int occurence(int a[],int n)
        // {
        //         int i,count=0;
        //         for(i=0; i<n-1; i++)
        //         {
        //                 if(a[i] == a[i+1])
        //                 {
        //                         count = a[i];
        //                         if(count!=0)
        //                         return count;
        //                 }
        //         }
        //                 if(i == 4)
        //                 return 0;
        // }


// solution of question no 6 ###########################################################################

        // void reverse(int[],int);
        // int main()
        // {
        //         int n,i;
        //         printf("Enter the size of array: ");
        //         scanf("%d",&n);
        //         int arr[n];
        //         printf("Enter %d numbers: ",n);
        //         for(i=0; i<n; i++)
        //         scanf("%d",&arr[i]);
        //         reverse(arr,n);
        // }
        // void reverse(int arr1[],int n1)
        // {
        //         int i;
        //         printf("After reversing the array is:\n");
        //         for(i=n1-1; i>=0; i--)
        //         printf("%5d",arr1[i]);
        // }


// solution of question no 7 ######################################################################

        // int occurences(int[],int);
        // int main()
        // {
        //         int i,n;
        //         printf("Enter the size of array: ");
        //         scanf("%d",&n);
        //         int arr[n];
        //         printf("Enter %d numbers: ",n);
        //         for(i=0; i<n; i++)
        //         scanf("%d",&arr[i]);
        //         printf("Total number of occurences is %d",occurences(arr,n));
        // }

        // int occurences(int arr1[],int n1)
        // {
        //         int i,j,check,count=0;
        //         for(i=0; i<=n1-1; i++)
        //         {
        //                 check = arr1[i];
        //                 for(j=i+1; j<=n1-2; j++)
        //                 {
        //                         if(check == arr1[j+1])
        //                         count++;
        //                 }
        //         }
        //         return count;
        // }


// solution of question no 8 ###########################################################################

        // void unique(int[],int);
        // int main()
        // {
        //         int n,i;
        //         printf("Enter size of array: ");
        //         scanf("%d",&n);
        //         int arr[n];
        //         printf("Enter %d elements: ",n);
        //         for(i=0; i<n; i++)
        //         scanf("%d",&arr[i]);
        //         unique(arr,n);
        // }

        // void unique(int arr[],int n1)
        // {
        //         int i,j,temp,count=0;
        //         for(i=0; i<=n1-1; i++)
        //         {
        //                 count = 0;
        //                 temp = arr[i];
        //                 for(j=0; j<=n1-1; j++)
        //                 {
        //                         if(temp==arr[j])
        //                         {
        //                         count++;                                        ;
        //                         }
        //                         else
        //                         {
        //                                 ;
        //                         }
        //                 }
        //                         if(count==1)
        //                         {
        //                                 printf("\nUnique numbers are %d",temp);
        //                         }
        //         }       
        // }


// solution of question no 9 ##################################################################

        // void merge(int[],int[],int);
        // void descending(int[],int);
        // int main()
        // {
        //         int n,i;
        //         printf("Enter size of array: ");
        //         scanf("%d",&n);
        //         printf("Enter %d numbers of first array: ",n);
        //         int arr1[n],arr2[n];
        //         for(i=0; i<n; i++)
        //         scanf("%d",&arr1[i]);
        //         printf("\nEnter %d numbers of second array: ",n);
        //         for(i=0; i<n; i++)
        //         scanf("%d",&arr2[i]);
        //         merge(arr1,arr2,n);
        // }

        // void merge(int arr1[],int arr2[],int n)
        // {
        //         int i,arr3[n];
        //         for(i=0; i<n; i++)
        //         {
        //                 arr3[i*2] = arr1[i];
        //                 arr3[(i*2)+1] =arr2[i];
        //         }
        //         descending(arr3,2*n);
        // }
        
        // void descending(int arr3[],int n)
        // {
        //         int i,j,temp;
        //         for(i=0; i<n-1; i++)
        //         {
        //                 for(j=0; j<=n-2; j++)
        //                 {
        //                         if(arr3[j]<arr3[j+1])
        //                         {
        //                                 temp = arr3[j];
        //                                 arr3[j] = arr3[j+1];
        //                                 arr3[j+1] = temp;
        //                         }
        //                 }
        //         }
        //         printf("The sorted merge array is\n");
        //         for(i=0; i<n ;i++)
        //         printf("%5d",arr3[i]);
        // }


// solution of question no 10 ##################################################################

        // void frequency(int[],int);
        // int main()
        // {
        //         int i,n;
        //         printf("Enter the size of array: ");
        //         scanf("%d",&n);
        //         int arr[n];
        //         printf("Enter %d numbers: ",n);
        //         for(i=0; i<n; i++)
        //         scanf("%d",&arr[i]);
        //         sort(arr,n);
        //         frequency(arr,n);
        // }

        // void frequency(int arr[],int n)
        // {
        //         int i,j,temp,count=0;
        //         for(i=0; i<n ;i++)
        //         {
        //                 if(arr[i]!=arr[i+1]){
        //                 count = 0;
        //                 temp = arr[i];
        //                 for(j=0; j<n;j++)
        //                 {
                                                               
        //                                 if(temp == arr[j])
        //                                 count ++;
                                
        //                 }
                        
        //                         printf("\nFrequency of %d is %d",temp,count);
        //                 }
        //         }
                
                                           
        // }
