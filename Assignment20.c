#include<stdio.h>
#include<string.h>
// solution of question no 1 #################################################################################

// void swap(int *, int *);
// int main()
// {
//     int num1,num2;
//     printf("Enter two numbers to swap: ");
//     scanf("%d%d",&num1,&num2);
//     printf("Before swapping:\n");
//     printf("Num1 => %d",num1);
//     printf("\nNum2 => %d",num2);
//     printf("\nAfter swapping:\n");
//     swap(&num1,&num2);
//     printf("Num1 => %d",num1);
//     printf("\nNum2 => %d",num2);  
// }

// void swap(int *Num1,int *Num2)
// {
//     int temp;
//     temp = *Num1;
//     *Num1 = *Num2;
//     *Num2 = temp;
// }


// solution of question no 2 #################################################################################

// void swap_string(char *,char *);
// int main()
// {
//     char str1[40],str2[40];
//     printf("Enter the first string: ");
//     fgets(str1,40,stdin);
//     str1[strcspn(str1, "\n")] = '\0';
//     printf("\nEnter the second string: ");
//     fgets(str2,40,stdin);
//     str2[strcspn(str2, "\n")] = '\0';
//     printf("Before swapping:\n");
//     printf("String1 => %s",str1);
//     printf("\nString2 => %s",str2);
//     printf("\nAfter swapping:\n");
//     swap_string(str1,str2);
//     printf("String1 => %s",str1);
//     printf("\nString2 => %s",str2);
// }

// void swap_string(char *Str1,char *Str2)
// {
//     char temp[40];
//     strcpy(temp,Str1);
//     strcpy(Str1,Str2);
//     strcpy(Str2,temp);
// }


// solution of question no 3 #################################################################################

// void sort_array(int *,int);
// int main()
// {
//     int n,i;
//     printf("Enter the size of array: ");
//     scanf("%d",&n);
//     int arr[n];
//     printf("Enter the unordered elements: ");
//     for(i=0; i<n; i++)
//     scanf("%d",&arr[i]);
//     printf("Unorderd Array:\n");
//     for(i=0; i<n; i++)
//     printf("%5d",arr[i]);
//     printf("\nOrdered Array:\n");
//     sort_array(arr,n);
//     for(i=0; i<n; i++)
//     printf("%5d",arr[i]);   
// }

// void sort_array(int *a,int n)
// {
//     int temp,i,j;
//     for(i=0; i<n-1; i++)
//     {
//         for(j=0; j<n-1; j++)
//         {
//             if( *(a+j) > *(a+(j+1)) )
//             {
//                 temp = *(a+j);
//                 *(a+j) = *(a+(j+1));
//                 *(a+(j+1)) = temp;
//             }
//         }
//     }
// }


// solution of question no 4 #################################################################################

// int main()
// {
//     int a[10]={0},*p,count=10,i;
//     p = a;
//     printf("\nThe empty Array is:\n");
//     for(i=0; i<10; i++)
//     printf("%5d",*(p+i));
//     for(i=0; i<10; i++)
//     {
//         *(p+i) = count;
//         count = count + 10;
//     }
//     printf("\nAfter Insertion using pointers,Array is:\n");
//     for(i=0; i<10; i++)
//     printf("%5d",*(p+i));
// }


// solution of question no 5 #################################################################################

// int main()
// {
//     int num1,num2,*p1,*p2;
//     printf("Enter two numbers: ");
//     scanf("%d%d",&num1,&num2);
//     p1 = &num1;
//     p2 = &num2;
//     if(*p1 > *p2)
//     printf("Greater is %d",*p1);
//     else
//     printf("Greater is %d",*p2);
// }


// solution of question no 6 #################################################################################

// int main()
// {
//     int i,count=0;
//     char str[40],*ptr;
//     ptr = str;
//     printf("Enter a String: ");
//     fgets(str,40,stdin);
//     str[strcspn(str,"\n")] = '\0';
//     for(i=0; str[i]!=0; i++)
//     {
//         if(*(ptr+i) != 0)
//         count ++;
//     }
//     printf("The Length of string is: %d",count);
// }


// solution of question no 7 #################################################################################

// int main()
// {
//     char str[40],i,*ptr;
//     ptr = str;
//     int vowels=0,consonants=0;
//     printf("Enter a string: ");
//     fgets(str,40,stdin);
//     str[strcspn(str,"\n")] = '\0';
//     for(i=0; str[i]!=0; i++)
//     *(ptr+i) = *(ptr+i) - 32;
    
//     for(i=0; str[i]!=0; i++)
//     {
//         if( (*(ptr+i) >= 'A' && *(ptr+i)<='Z') || (*(ptr+i) >= 0 && *(ptr+i)<= 10))
//         {
//             if(*(ptr+i)=='A' || *(ptr+i)=='E' || *(ptr+i)=='I' || *(ptr+i)=='O' || *(ptr+i)=='U')
//             vowels ++;
//             else
//             consonants ++;
//         } 
//     }
//     printf("Total number of vowels: %d",vowels);
//     printf("\nTotal number of consonants: %d",consonants);   
// }


// solution of question no 8 #################################################################################

// int main()
// {
//     int a[100],n,i,*ptr,sum =0;
//     ptr = a;
//     printf("Enter the size of Array: ");
//     scanf("%d",&n);
//     printf("Enter the %d elements: ",n);
//     for(i=0; i<n; i++)
//     {
//         scanf("%d",ptr+i);
//         sum = sum + *(ptr+i);
//     }
//     printf("The sum of the elements is: %d",sum);
// }


// solution of question no 9 #################################################################################

// int main()
// {
//     int a[100],n,i,*ptr;
//     ptr = a;
//     printf("Enter the size of Array: ");
//     scanf("%d",&n);
//     printf("Enter the %d elements: ",n);
//     for(i=0; i<n; i++)
//     scanf("%d",ptr+i);
//     printf("Array in reverse order is:\n");
//     for(i=n-1; i>=0; i--)
//     printf("%5d",*(ptr+i)); 
// }

// solution of question no 10 #################################################################################

// int main()
// {
//     int i,length=0;
//     char str[40],*ptr;
//     printf("Enter a string: ");
//     fgets(str,40,stdin);
//     str[strcspn(str,"\n")] = '\0';
//     for(i=0; str[i]!=0; i++)
//     {
//         length ++;
//     }
//     for(i=length; i>=0; i--){
//     ptr = &str[i];
//     printf("%c",*ptr);
//     }
// }