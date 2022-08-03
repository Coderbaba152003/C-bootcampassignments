#include<stdio.h>
#include<conio.h>
#include<string.h>


// solution of question no 1 ################################################################################3

    // int main()
    // {
    //     char str[20],i,length=0;
    //     printf("Enter the string:\n");
    //     fgets(str,20,stdin);
    //     str[strcspn(str,"\n")] = '\0';
    //     for(i=0; str[i]; i++)
    //         length ++;
    //     printf("Length of the string is %d",length);
    // }


// solution of question no 2 ################################################################################3

    // int main()
    // {
    //     char str[20],character;
    //     int i,count=0;

    //     printf("Enter the string: ");
    //     fgets(str,20,stdin);
    //     printf("Enter the character you want to search in the string: ");
    //     scanf("%c",&character);
    //     for(i=0; str[i]!=0; i++)
    //     {
    //         if(character == str[i])
    //         count ++;
    //     }
    //     printf("The total number of character occured is %d ",count);
    // }


// solution of question no 3 ################################################################################3

    // int main()
    // {
    //     char str[30];
    //     int i,count = 0;
    //     printf("Enter the string: ");
    //     fgets(str,30,stdin);
    //     str[strcspn(str,"\n")] = '\0';
    //     for(i=0; str[i]!=0; i++)
    //     {
    //         if('a' == str[i] || 'e' == str[i] || 'i' == str[i] || 'o' == str[i] || 'u' == str[i])
    //         {
    //             count ++;
    //         }
    //     }
    //         printf("Total number of vowels in the string is %d ",count);
    // }


// solution of question no 4 ################################################################################3

    // int main()
    // {
    //     char str[40];
    //     int i;
    //     printf("Enter a string: ");
    //     fgets(str,40,stdin);
    //     for(i=0; str[i]!=0; i++)
    //     {
    //         if(str[i]>=97 && str[i]<=122)
    //         {
    //             str[i] = str[i] - 32;
    //         }
    //     }
    //     printf("Uppercase string is %s",str);
    // }


// solution of question no 5 ################################################################################3

    //    int main()
    // {
    //     char str[40];
    //     int i;
    //     printf("Enter a string: ");
    //     fgets(str,40,stdin);
    //     for(i=0; str[i]!=0; i++)
    //     {
    //         if(str[i]>=65 && str[i]<=90)
    //         {
    //             str[i] = str[i] + 32;
    //         }
    //     }
    //     printf("Lowercase string is %s",str);
    // }


// solution of question no 6 ################################################################################3

    // int main()
    // {
    //     char str[40];
    //     int length,start;
    //     printf("Enter the string you want to reverse: ");
    //     fgets(str,40,stdin);
    //     str[strcspn(str,"\n")] = '\0';
    //     for (length=0; str[length]!=0; length++)
    //     {
    //         ;
    //     }
    //     for (start=0; start<length; length--)
    //     {
    //         char ch = str[start];
    //         str[start] = str[length-1];
    //         str[length-1] = ch;
    //         start ++;
    //     }
    //     printf("Reverse string is %s",str);
    // }



// solution of question no 7 ################################################################################3

    // int main()
    // {
    //     char str[40];
    //     int i,alphacount=0,specialcount=0,digitcount = 0;
    //     printf("Enter a string: ");
    //     fgets(str,40,stdin);
    //     str[strcspn(str,"\n")] = '\0';
    //     for(i=0; str[i]!=0; i++)
    //     {
    //         if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i] <='Z'))
    //         alphacount ++;
    //         else if(str[i]>='0' && str[i]<='9')
    //         digitcount ++;
    //         else
    //         specialcount ++;
    //     }
    //     printf("\n Total number of alphabets is: %d",alphacount);
    //     printf("\n Total number of digits is: %d",digitcount);
    //     printf("\n Total number of special characters is: %d",specialcount);

    // }

// solution of question no 8 ################################################################################3

    // int main()
    // {
    //     char str[40],Str[40];
    //     int i;
    //     printf("Enter the string you want to copy: ");
    //     fgets(str,40,stdin);
    //     str[strcspn(str,"\n")] = '\0';
    //     for(i=0; str[i]!=0; i++)
    //     Str[i] = str[i];
    //     Str[i] = '\0';
    //     printf("Copied string is %s",Str);
    // }


// solution of question no 9 ################################################################################3

    // int main()
    // {
    //     char str[40],temp;
    //     int i,j,length=0;
    //     printf("Enter the unsorted string: ");
    //     fgets(str,40,stdin);
    //     str[strcspn(str,"\n")] = '\0';
    //     for(length=0; str[length]; length++)
    //     {
    //         ;
    //     }
    //     for(i=0; i<length-1 ;i++)
    //     {
    //         for(j=0; j<length-1; j++)
    //         {
    //             if(str[j] > str[j+1])
    //             {
    //                 temp = str [j];
    //                 str[j] = str[j+1];
    //                 str[j+1] = temp;
    //             }
    //         }
    //     }
    //     printf("Sorted string is %s",str);

    // }


// solution of question no 10 ################################################################################3

    // int main()
    // {
    //     char str[40],temp;
    //     int i,j,count =0,length,flag;
    //     printf("Enter the string: ");
    //     fgets(str,40,stdin);
    //      str[strcspn(str,"\n")] = '\0';
    //     for(length=0; str[length]; length++)
    //     {
    //         ;
    //     }
    //     for(i=0; i<length-1 ;i++)
    //     {
    //         for(j=0; j<length-1; j++)
    //         {
    //             if(str[j] > str[j+1])
    //             {
    //                 temp = str [j];
    //                 str[j] = str[j+1];
    //                 str[j+1] = temp;
    //             }
    //         }
    //     }
    //     for(i=0; i<length; i++)
    //     {
    //         if(str[i]!=str[i+1]){
    //         count = 0;
    //         temp = str[i];
    //         for(j=0; j<length; j++)
    //         {
                
    //                 if(temp == str[j])
    //                 count ++;
                
    //         }
    //         printf("\nFrequency of %c is %d",temp,count);
    //         }
    //     }
    // }
