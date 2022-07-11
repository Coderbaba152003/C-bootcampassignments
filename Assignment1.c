#include<stdio.h>
#include<conio.h>
int main()
{
    int R;      // R for radius of circle
    float A;       // A for Area of circle
    int DD,MM,YYYY;
    int HH,MM1;
    int x,y;
    char name[30];
    
    
    // solution of question 1
    printf(" Hello Students");                                                               printf("\n");

    // solution of question 2
     printf(" Hello\n Students");                                                            printf("\n");

    // solution of question 3
     printf(" \"MySirG\" ");                                                                printf("\n");

     //solution of question 4   
     printf("Enter radius of circle");                                                      printf("\n");
     scanf("%d",&R);
     A=3.14*R*R;
     printf("Area of circle is %f having the radius %d",A,R);                               printf("\n");


    //  solution of question no 5
                y=printf("Hello sir");
               printf("%d",y);                                                                               printf("\n");

     //solution of question no 6
     printf("Enter your name");                                                             printf("\n");
     scanf("%s",&name);
     printf("\"Hello, %s\"",name);                                                           printf("\n");

     // solution of question no 7,8,9
     printf( "%%d" );                                                                        printf("\n");
     printf( "\\n" );                                                                        printf("\n");
     printf( "\\\\");                                                                        printf("\n");


    //solution of question no 10
    printf("Enter DD/MM/YYYY");                                                                  printf("\n");
    scanf("%d%d%d",&DD,&MM,&YYYY);                                                               printf("\n");
    printf("Day-%d,Month-%d,Year-%d",DD,MM,YYYY);                                                printf("\n");


    //solution of question no 11
    printf("Enter time in HH:MM format");                                                        printf("\n");
    scanf("%d%d",&HH,&MM1);                                                                      printf("\n");
    printf("%d Hour and %d Minutes",HH,MM1);                                                     printf("\n");


    //solution of question no 12
    x=printf("ineuron");                                                                    
    printf("\n%d",x);

    /* output of the code is 

    ineuron
    7
    
    */
}