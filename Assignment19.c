#include<stdio.h>
#include<string.h>
#include<stdlib.h>



// solution of question no 1 ###################################################################11111111111111111111111111111111111111111111111111111111111

    // int main()
    // {
    //     char str[5][40];
    //     char vowels[]="aeiou";
    //     int j,i,count;
    //     for( i=0; i<5; i++)
    //     {
    //         printf("\nEnter the string %d: ",i+1);
    //         fgets(str[i],40,stdin);
    //         str[i][strcspn(str[i],"\n")] = '\0';
    //     }
    //     for(i=0; i<5; i++)
    //     {
    //         count = 0;
    //         for(j=0; str[i][j]!=0; j++)
    //         {
    //             int k=j;
    //             if(str[i][j]=='a' || str[i][j]=='e' || str[i][j]=='i' || str[i][j]=='o' || str[i][j]=='u' || str[i][j]=='A' || str[i][j]=='E' || str[i][j]=='I' || str[i][j]=='O' || str[i][j]=='U')
    //             {
    //                 count ++;
    //             }
    //         }
    //         printf("\nNumber of vowels in %d string is %d",i+1,count);
    //     }
    // }


// solution of question no 2 ###################################################################

    // int main()
    // {
    //     char str[10][15];
    //     char copystring[15];
    //     int i,j,k;
    //     for(i=0; i<10; i++)
    //     {
    //         printf("Enter city name %d: ",i+1);
    //         fgets(str[i],15,stdin);
    //         str[i][strcspn(str[i],"\n")] = '\0';
    //     }

    //     for(j=0; j<9; j++){
    //     for(i=0; i<9; i++)
    //     {
    //         k = strcmp(str[i],str[i+1]);
    //         if(k>0)
    //         {
    //             strcpy(copystring,str[i]);
    //             strcpy(str[i],str[i+1]);
    //             strcpy(str[i+1],copystring);
    //         }
    //     }
    //     }
    //     printf("The sorted city names are: ");
    //     for(i=0; i<10; i++)
    //     printf("\n%s",str[i]);
    // }
// solution of question no 3 ###################################################################

    // int main()
    // {
    //     char str[5][40];
    //     int i;
    //     for(i=0; i<5; i++)
    //     {
    //         printf("\nEnter the string %d: ",i+1);
    //         fgets(str[i],40,stdin);
    //         str[i][strcspn(str[i],"\n")] = '\0';
    //     }
    //     printf("####################### Entered strings are #######################");
    //     for(i=0; i<5; i++)
    //     {
    //         printf("\nString %d is: ",i+1);
    //         printf("%s",str[i]);
    //     }
    // }


// solution of question no 4 ###################################################################

    // int main()
    // {
    //     char str[5][40],serachstr[40];
    //     int i,j,count;
    //     for(i=0; i<5; i++)
    //     {
    //         printf("Enter string %d: ",i+1);
    //         fgets(str[i],40,stdin);
    //         str[i][strcspn(str[i],"\n")] = '\0';
    //     }

    //     printf("Enter the string you want to search: ");
    //     fgets(serachstr,40,stdin);
    //     serachstr[strcspn(serachstr,"\n")] = '\0';

    //     for(i=0; i<5; i++)
    //     {
    //         count = 0;
    //         for(j=0; str[i][j]!=0; j++)
    //         {
    //             if(str[i][j] == serachstr[j])
    //             {
    //                 count ++;
    //             }
    //         }
    //             if(j == count)
    //             {
    //                 printf("String found!!!!!!!!!!");
    //                 break;
    //             }
    //     }
    //     if(i==5)
    //     {
    //         printf("String not found!!!!!!!!!");
    //     }
    // }


// solution of question no 5 ###################################################################

    // int main()
    // {
    //     char str[5][20];
    //     int i,j,count;
    //     for(i=0; i<5; i++)
    //     {
    //         printf("Enter the string %d: ",i+1);
    //         fgets(str[i],20,stdin);
    //         str[i][strcspn(str[i],"\n")] = '\0';
    //     }

    //     for(i=0; i<5; i++)
    //     {
    //         count = 0;
    //         for(j=0; str[i][j]!=0; j++)
    //         {
    //             if(str[i][j] == '@')
    //             count ++;
    //         }
    //         if(count!=1)
    //         {
    //             printf("String %d: ",i+1);
    //             printf("Odd email.\n");
    //         }
    //     }
    // }


// solution of question no 6 ###################################################################

    // void reverse(char[]);
    // int main()
    // {
    //     char str[5][30];
    //     int i,j;
    //     for(i=0; i<5; i++)
    //     {
    //         printf("Enter the string %d: ",i+1);
    //         fgets(str[i],20,stdin);
    //         str[i][strcspn(str[i],"\n")] = '\0';
    //     }
    //         for(i=0; i<5; i++)
    //         {
    //             printf("\nString %d is: ",i+1);
    //             reverse(str[i]);
    //         }
    // }

    //     void reverse(char str[])
    //     {
    //         char ch;
    //         char reverseString[30];
    //         int length,start,count,j,k;
    //         strcpy(reverseString,str);
    //         for(length=0; str[length]!=0; length++)
    //         {
    //                 ;
    //         }
    //         count = length;
    //         for ( start = 0; start<length; length--)
    //         {
    //             ch = reverseString[start];
    //             reverseString[start] = reverseString[length-1];
    //             reverseString[length-1] = ch;
    //             start ++;
    //         }
    //         for(j=0; str[j]!=0; j++)
    //         {
            
    //             if(str[j] == reverseString[j])
    //             {
    //                     ; 
    //             }
    //             else
    //             break;
    //         }
    //         if(count == j)
    //         printf("palindrome");
    //         else
    //         printf("not palindrome");
    //     }


// solution of question no 8 ###################################################################

    // int main()
    // {
    //     char str[5][20] = {"the","quick","fox","brown","color"};
    //     int i,word1,word2;
    //     char searchStr1[20],searchStr2[20];
    //     printf("Given list of words are:\n");
    //     for(i=0; i<5; i++)
    //     printf("%s\t",str[i]);
    //     printf("\nEnter the first word: ");
    //     fgets(searchStr1,20,stdin);
    //     searchStr1[strcspn(searchStr1,"\n")] = '\0';
    //     printf("\nEnter the second word: ");
    //     fgets(searchStr2,20,stdin);
    //     searchStr2[strcspn(searchStr2,"\n")] = '\0';
    //     for(i=0; i<5; i++)
    //     {
    //         if(0 == strcmp(searchStr1,str[i]))
    //         {
    //             word1 =i;
    //             break;
    //         }
    //     }
    //     if(i == 5)
    //     {
    //         printf("Word is not in the list!!");
    //         exit(0);
    //     }
    //     for(i=0; i<5; i++)
    //     {
    //         if(0 == strcmp(searchStr2,str[i]))
    //         {
    //             word2 =i;
    //             break;
    //         }
    //     }
    //      if(i == 5)
    //     {
    //         printf("Word is not in the list!!");
    //         exit(0);
    //     }
    //     if(word2 > word1)
    //     printf("The distance between the words is %d ",word2 - word1);
    //     else
    //     printf("The distance between the words is %d ",word1 - word2);
        
    // }


// solution of question no 9 ###################################################################
    // void factorial()
    // {
    //     int fact=1,i,n;
    //     printf("Enter the number you want to find factorial: ");
    //     scanf("%d",&n);
    //     for(i=1; i<=n; i++)
    //     {
    //         fact = fact*i;
    //     }
    //     printf("Factorial is %d ",fact);
    // }
    // int main()
    // {
    //     char str[5][30]={"tushar","aman","prabjot","rajesh","sumit"};
    //     char username[30];
    //     int i,j,length;
    //     printf("Enter the username: ");
    //     fgets(username,30,stdin);
    //     username[strcspn(username,"\n")] = '\0';
    //     for(i=0; i<5; i++)
    //     {
    //         j=0;
    //         length = strlen(str[i]); 
    //         for(length=0; str[i][length]!=0; length++)
    //         {
    //             if(str[i][length] == username[length])
    //             {
    //                 j++;
    //             }
    //         }
    //         if(j==length)
    //         {
    //             factorial();
    //             break;
    //         }
    //     }
    //         if(i == 5)
    //         printf("Username not found in our database");
    // }