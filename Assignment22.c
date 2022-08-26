#include <stdio.h>
#include <conio.h>
#include <malloc.h>

/************************* Functions Declarations *************************/

// Function To Input Variable Length String And Store It In An Array
char *inputVariableLengthString();

// Main Function Start
int main()
{
    // 1. Define A Function To Input Variable Length String And Store It In An Array Without Any Memory Wastage :-
    // char *str;
    // str = inputVariableLengthString();
    // if (str)
    //     printf("Your Entered String => %s", str);
    // else
    //     printf("Sorry !!! Memory Not Allocated");
    // free(str);

    
    
    // 2. WAP to ask the User to Input A Number of Data Values he Would Like To Enter, Then Create An Array Dynamically to Accommodate the Data Values. Now take the Input from user and Display the Average of Data Values :-
    // int n, sum = 0;
    // printf("How Many Values You Want To Enter => ");
    // scanf("%d", &n);
    // int *ptr = (int*)calloc(n, sizeof(int));
    // if (ptr)
    // {
    //     printf("Enter %d Values => ", n);
    //     for (int i = 0; i < n; i++)
    //     {
    //         scanf("%d", ptr + i);
    //         sum += *(ptr + i);
    //     }
    //     float average = (float)sum / n;
    //     printf("\nAverage of All Values => %.2f", average);
    // }
    // else
    //     printf("Sorry !!! Memory Not Allocated");
    // free(ptr);

    
    
    // 3. WAP to Calculate Sum of n Numbers Entered By User Using malloc() and free() :-
    // int n, sum = 0;
    // printf("How Many Numbers You Want To Enter => ");
    // scanf("%d", &n);
    // int *ptr =(int*)malloc(n * sizeof(int));
    // if (ptr)
    // {
    //     printf("Enter %d Numbers => ", n);
    //     for (int i = 0; i < n; i++)
    //     {
    //         scanf("%d", ptr + i);
    //         sum += *(ptr + i);
    //     }
    //     printf("\nSum of All Numbers => %d", sum);
    // }
    // else
    //     printf("Sorry !!! Memory Not Allocated");
    // free(ptr);

    
    
    // 4. WAP to Input And Print Text Using DMA :-
    // char *ptr;
    // ptr =(char*)calloc(100, sizeof(char));
    // if (ptr)
    // {
    //     printf("\nEnter Any String => ");
    //     fgets(ptr, 100, stdin);
    //     printf("You Entered => %s", ptr);
    // }
    // else
    //     printf("Sorry !!! Memory Not Allocated");
    // free(ptr);

    
    
    // 5. WAP to Read A 1D Array. Printf Sum of All Along With Inputted Numbers Using DMA :-
    // int n, sum = 0;
    // printf("How Many Numbers You Want To Enter => ");
    // scanf("%d", &n);
    // int *ptr =(int*)calloc(n, sizeof(int));
    // if (ptr)
    // {
    //     printf("Enter %d Numbers => ", n);
    //     for (int i = 0; i < n; i++)
    //         scanf("%d", ptr + i);
    //     printf("\nEntered Numbers => ", n);
    //     for (int i = 0; i < n; i++)
    //     {
    //         printf("%d ", i[ptr]);
    //         sum += *(ptr + i);
    //     }
    //     printf("\nSum of All Numbers => %d", sum);
    // }
    // else
    //     printf("Sorry !!! Memory Not Allocated");
    // free(ptr);

    
    
    // 6. WAP to Find The Largest Element In An Array Using DMA
    // int n, largest;
    // printf("How Many Numbers You Want To Enter => ");
    // scanf("%d", &n);
    // int *ptr = (int*)calloc(n, sizeof(int));
    // if (ptr)
    // {
    //     printf("Enter %d Numbers => ", n);
    //     for (int i = 0; i < n; i++)
    //         scanf("%d", ptr + i);
    //     largest = ptr[0];
    //     printf("\nEntered Numbers => ", n);
    //     for (int i = 0; i < n; i++)
    //     {
    //         printf("%d ", i[ptr]);
    //         if (*(i + ptr) > largest)
    //             largest = *(i + ptr);
    //     }
    //     printf("\nLargest Number => %d", largest);
    // }
    // else
    //     printf("Sorry !!! Memory Not Allocated");
    // free(ptr);

    
    
    // 7. WAP To Demonstrate Memory Leak in C :-
    // printf("Enter Two Numbers =>");
    // {
    //     // Pointers num1 and num2 Will Be Destroyed After Control Goes Out From This Block And Outside Thsi Block We Cannot free Memory Allocated Dynamically. So, it Cause Memory Leak
    //     int *num1 = (int *)malloc(sizeof(int));
    //     int *num2 = (int *)malloc(sizeof(int));
    //     printf("\nSum of %d and %d => %d", *num1 + *num2);
    // }
    // printf("\nProgram End...");

    
    
    // 8. WAP To Demonstrate Dangling Pointer in C :-
    // printf("Enter 5 Numbers =>");
    // int *ptr;
    // ptr = (int *)calloc(5, sizeof(int));
    // for (int i = 0; i < 5; i++)
    //     scanf("%d", ptr + i);
    // printf("Entered Numbers =>");
    // for (int i = 0; i < 5; i++)
    //     printf("%d ", ptr[i]);
    // free(ptr);
    // Now ptr Became Dangling Pointer Because it Still Contain Address of Memory Which is Not Reserved

    
    
    // 9. WAP to Allocate Memory Dynamically of Size in Bytes Entered By User . Also Handle The Case When Memory Allocation Failed :-
    // int n;
    // printf("How Many Bytes You Want To Allocate => ");
    // scanf("%d", &n);
    // void *ptr = malloc(n);
    // if (ptr)
    //     printf("Memory Successfully Allocated");
    // else
    //     printf("Sorry !!! Memory Not Allocated");
    // free(ptr);

    
    
    
    // 10. WAP to Find The Largest And Smallest In An Array Using DMA
    // int n, largest, smallest;
    // printf("How Many Numbers You Want To Enter => ");
    // scanf("%d", &n);
    // int *ptr = (int *)calloc(n, sizeof(int));
    // if (ptr)
    // {
    //     printf("Enter %d Numbers => ", n);
    //     for (int i = 0; i < n; i++)
    //         scanf("%d", ptr + i);
    //     largest = smallest = ptr[0];
    //     for (int i = 0; i < n; i++)
    //     {
    //         if (ptr[i] > largest)
    //             largest = ptr[i];
    //         else if (ptr[i] < smallest)
    //             smallest = ptr[i];
    //     }
    //     printf("\nLargest Number => %d", largest);
    //     printf("\nSmallest Number => %d", smallest);
    // }
    // else
    //     printf("Sorry !!! Memory Not Allocated");
    // free(ptr);


    getch();
    return 0;
}

// Main Function End

/************************* Functions Definitions *************************/

// Function To Input Variable Length String And Store It In An Array

char *inputVariableLengthString()
{
    int length;
    printf("\nEnter Length of String Which You Want To Enter => ");
    scanf("%d", &length);
    fflush(stdin);
    char *ptr = (char *)calloc(length + 1, sizeof(char));
    if (ptr)
    {
        printf("%d \n", ptr);
        printf("Enter String => ");
        fgets(ptr, length, stdin);
    }
    return ptr;
}