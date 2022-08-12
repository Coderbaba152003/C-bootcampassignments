#include<stdio.h>
#include<string.h>

// solution of question no 1 #############################################################################

    // int lengthcal(char[]);
    // int main()
    // {
    //     char str[40];
    //     printf("Enter the string: ");
    //     fgets(str,40,stdin);
    //     str[strcspn(str,"\n")] = '\0';
    //     printf("Length of the string is %d",lengthcal(str));
    // }

    // int lengthcal(char str[])
    // {
    //     int i;
    //     for(i=0; str[i]!=0; i++)
    //     {
    //         ;
    //     }
    //     return i;
    // }


// solution of question no 2 #############################################################################

    // void reverseString(char[]);
    // int main()
    // {
    //     char str[40];
    //     printf("Enter the string: ");
    //     fgets(str,40,stdin);
    //     str[strcspn(str,"\n")] = '\0';
    //     reverseString(str);
    // }

    // void reverseString(char str[])
    // {
    //     int length,start;
    //     char ch;
    //     for ( length = 0; str[length]!=0; length++)
    //     {
    //         ;
    //     }

    //     for ( start = 0; start<length; length--)
    //     {
    //         ch = str[start];
    //         str[start] = str[length-1];
    //         str[length-1] = ch;
    //         start ++;
    //     }
    //     printf("Reverse string is %s",str);
    // }


// solution of question no 3 #############################################################################

    // void compare(char[],char[]);
    // int main()
    // {
    //     char str1[40],str2[40];
    //     printf("Enter the first string: ");
    //     fgets(str1,40,stdin);
    //     str1[strcspn(str1,"\n")] = '\0';

    //     printf("Enter the second string: ");
    //     fgets(str2,40,stdin);
    //     str2[strcspn(str2,"\n")] = '\0';
    //     compare(str1,str2);
    // }

    // void compare(char str1[],char str2[])
    // {
    //     int a,i,count = 0;
    //     for(i = 0; str1[i]!=0 || str2[i]!=0; i++)
    //     {
    //         if(str1[i]!=str2[i])
    //         {
    //             if(str2[i] > str1[i])
    //             count = 1;
    //             else if(str2[i] < str1[i])
    //             count = -1;
    //             else 
    //             count = 0;
    //         }
    //     }
    //     if(count>0)
    //     printf("Second string is greater than first string");
    //     else if(count<0)
    //     printf("First string is greater than second string");
    //     else
    //     printf("Both strings are equal");
    // }


// solution of question no 4 #############################################################################

    // void uppercase(char[]);
    // int main()
    // {
    //     char str[40];
    //     printf("Enter a string: ");
    //     fgets(str,40,stdin);
    //     str[strcspn(str,"\n")] = '\0';
    //     uppercase(str);
    // }

    // void uppercase(char str[])
    // {
    //     int i;
    //     for(i=0; str[i]!=0; i++)
    //     {
    //         if(str[i]>=97 && str[i]<=122)
    //         str[i] = str[i] - 32;
    //     }
    //     printf("The uppercase string is %s",str);
    // }


// solution of question no 5 #############################################################################

    // void lowercase(char[]);
    // int main()
    // {
    //     char str[40];
    //     printf("Enter a string: ");
    //     fgets(str,40,stdin);
    //     str[strcspn(str,"\n")] = '\0';
    //     lowercase(str);
    // }

    // void lowercase(char str[])
    // {
    //     int i;
    //     for(i=0; str[i]!=0; i++)
    //     {
    //         if(str[i]>='A' && str[i]<='Z')
    //         str[i] = str[i] + 32;
    //     }
    //     printf("The lowercase string is %s",str);
    // }


// solution of question no 6 #############################################################################

    // void alphanumeric(char[]);
    // int main()
    // {
    //     char str[40];
    //     printf("Enter a string: ");
    //     fgets(str,40,stdin);
    //     str[strcspn(str,"\n")] = '\0';
    //     alphanumeric(str);
    // }

    // void alphanumeric(char str[])
    // {
    //     int i,alphacount=0,digitcount=0;
    //     for(i=0; str[i]!=0; i++)
    //     {
    //         if((str[i]>=65 && str[i]<=90) || str[i]>=97 && str[i]<=122)
    //         alphacount ++;
    //         if(str[i]>='0' && str[i]<='9')
    //         digitcount ++;
    //     }
    //     if(alphacount>0 && digitcount>0)
    //     printf("String is alphanumeric");
    //     else
    //     printf("String is not aplhanumeric");
    // }


// solution of question no 7 ##############################################################################

    //  void reverseString(char[],char[]);
    // int main()
    // {
    //     char str[40],copystring[40];
    //     printf("Enter the string: ");
    //     fgets(str,40,stdin);
    //     str[strcspn(str,"\n")] = '\0';
    //     reverseString(str,copystring);
    // }

    // void reverseString(char str[],char copystring[])
    // {
    //     int i,length,start,count;
    //     char ch;
    //     strcpy(copystring,str);
    //     for ( length = 0; str[length]!=0; length++)
    //     {
    //         ;
    //     }
    //     count = length;
    //     for ( start = 0; start<length; length--)
    //     {
    //         ch = str[start];
    //         str[start] = str[length-1];
    //         str[length-1] = ch;
    //         start ++;
    //     }

    //     for(i=0; str[i]!=0; i++) 
    //     {
    //         if(str[i] == copystring[i])
    //         {
    //                 ; 
    //         }
    //         else
    //         break;
    //     }
    //     if(count == i)
    //     printf("String is palindrome");
    //     else
    //     printf("String is not palindrome");
    // }
    


// solution of question no 8 #############################################################################

//  int countwords(char[]);
//     int main()
//     {
//         char str[40];
//         printf("Enter a string: ");
//         fgets(str,40,stdin);
//         str[strcspn(str,"\n")] = '\0';
//         printf("Total number of words in the string is %d",countwords(str));
//     }

//     int countwords(char str[])
//     {
//       int length,i,count=0;
//       for(length = 0; str[length]!=0; length++)
//       {
//         ;
//       }

//       for(i=0; i<length; i++)
//       {
//         if(str[i] != 32 )
//         count ++;
//         while(str[i]!=32)
//         i++;
//       }
//       return count;
//     }


// solution of question no 10 #############################################################################

    // void repeatedchar(char[]);
    // int main()
    // {
    //     char str[40];
    //     printf("Enter a string: ");
    //     fgets(str,40,stdin);
    //     str[strcspn(str,"\n")] = '\0';
    //     repeatedchar(str);
    // }

    // void repeatedchar(char str[])
    // {
    //     int i,j,length;
    //     char temp;
    //     for (length=0; str[length]; length++)
    //     {
    //         ;
    //     }

    //     for(i=0; i<length-1 ;i++)   //  for sorting the string
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
       
    //     for(i=0; i<=length-2; i++)
    //     {
    //         for(j=i; j<=length-2; j++)
    //         {
    //             if(str[i] == str[j+1])
    //             {
    //                 printf("\nRepeated character is %c",str[i]);
    //             }
    //         }
    //     }
    // }
 
