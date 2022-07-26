#include <stdio.h>
#include<math.h>
#include <stdlib.h>
int main()
{
    

// solution of question no 1 #############################################################################################
           
            // int day;
            // printf("Enter month number\n");
            // scanf("%d", &day);
            // switch (day)
            // {
            // case 1:
            //     printf("There are 31 days");
            //     break;
            // case 2:
            //     printf("There are 29 days");
            //     break;
            // case 3:
            //     printf("There are 31 days");
            //     break;
            // case 4:
            //     printf("There are 30 days");
            //     break;
            // case 5:
            //     printf("There are 31 days");
            //     break;
            // case 6:
            //     printf("There are 30 days");
            //     break;
            // case 7:
            //     printf("There are 31 days");
            //     break;
            // case 8:
            //     printf("There are 31 days");
            //     break;
            // case 9:
            //     printf("There are 30 days");
            //     break;
            // case 10:
            //     printf("There are 31 days");
            //     break;
            // case 11:
            //     printf("There are 30 days");
            //     break;
            // case 12:
            //     printf("There are 31 days");
            //     break;

            // default:
            //     printf("Wrong day");
            //     break;
            // }
            // printf("\n");

// solution of question no 2 ##############################################################################################3
           
            // int a,b;
            // int choice;
            // printf("1. Addition\n");
            // printf("2. Subtraction\n");
            // printf("3. Multiplication\n");
            // printf("4. Division\n");
            // printf("5. Exit\n");
            // printf("Enter your choice\n");
            // scanf("%d",&choice);
            // switch (choice)
            // {
            // case 1:
            //     printf("Enter two numbers\n");
            //     scanf("%d%d", &a, &b);
            //     printf("Sum is %d ", a + b);
            //     break;

            // case 2:
            //     printf("Enter two numbers\n");
            //     scanf("%d%d", &a, &b);
            //     printf("Subtraction is %d ", a - b);
            //     break;

            // case 3:
            //     printf("Enter two numbers\n");
            //     scanf("%d%d", &a, &b);
            //     printf("Multiplication is %d ", a * b);
            //     break;

            // case 4:
            //     printf("Enter two numbers\n");
            //     scanf("%d%d", &a, &b);
            //     printf("Division is %d ", a / b);
            //     break;

            // case 5:
            //     break;
            // }


// solution of question no 3 ################################################################################################

            // int day;
            // printf("Enter a day number: ");
            // scanf("%d",&day);
            // switch(day)
            // {
            //     case 1:
            //     printf("Today is Monday. Hello friends!! ");
            //     break;

            //     case 2:
            //     printf("Today is Tuesday. Keep it up!! ");
            //     break;

            //     case 3:
            //     printf("Today is Wednesday. You can do it!! ");
            //     break;

            //     case 4:
            //     printf("Today is Thursday. No one can stop you!! ");
            //     break;
               
            //     case 5:
            //     printf("Today is Friday. Your only limitation is only you!! ");
            //     break;
               
            //     case 6:
            //     printf("Today is Saturday. Your are born to rise!! ");
            //     break;
               
            //     case 7:
            //     printf("Today is Sunday. Your are strong enough to handle the things!! ");
            //     break;

            //     default:
            //     printf("Invalid day number");
            // }


// solution of question no 4 ################################################################################################

            // int selection;
            // int a,b,c;
            // printf("1.  Check for isosceles triangle\n");
            // printf("2.  Check for equilateral triangle\n");
            // printf("3.  Check for right angled triangle\n");
            // printf("4.  Check for Exit\n");
            // printf("\nEnter you choice\n");
            // scanf("%d",&selection);
            // switch(selection)
            // {
            //     case 1:
            //     printf("Enter a,b,c\n");
            //     scanf("%d%d%d",&a,&b,&c);
            //     if((a==b) || (b==c) || (c==a))
            //     printf("Triangle is Isosceles\n");
            //     else
            //     printf("Triangle is not Isosceles\n");
            //     break;

            //     case 2:               
            //     printf("Enter a,b,c\n");
            //     scanf("%d%d%d",&a,&b,&c);
            //     if((a==b && a==c) || (b==a && b==c) || (c==a && c==b))
            //     printf("Triangle is Equilateral\n");
            //     else
            //     printf("Triangle is not Equilateral\n");
            //     break;

            //     case 3:               
            //     printf("Enter a,b,c\n");
            //     scanf("%d%d%d",&a,&b,&c);
            //     if((a*a==b*b+c*c) || (b*b==a*a+c*c) || (c*c==a*a+b*b))
            //     printf("Triangle is right angled triangle\n");
            //     else
            //     printf("Triangle is not a right angled triangle\n");
            //     break;

            //     case 4:
            //     exit(0);

            //     default:
            //     printf("Invalid choice");
            // }


// solution of question no 5 ################################################################################################

            // int num;
            // printf("Enter a number: ");
            // scanf("%d",&num);
            // switch(num)
            // {
            //     case 1:
            //     printf("good");
            //     break;

            //     case 2:
            //     printf("better");
            //     break;

            //     case 3:
            //     printf("best");
            //     break;
            
            //     default:
            //     printf("invalid");
            // }


// solution of question no 6 ################################################################################################

            // int year;
            // printf("Enter a year: ");
            // scanf("%d",&year);
            // switch(year%100==0)
            // {
            //     case 1:
            //     if(year%400==0)
            //     printf("Year is a leap year");
            //     else
            //     printf("Year is not a leap year");
            //     break;

            //     case 0:
            //     if(year%4==0)
            //     printf("Year is a leap year");
            //     else
            //     printf("Year is not a leap year");
            // }


// solution of question no 7 ################################################################################################

              // int units;
              // float subamount,totalamount;
              // printf("Enter the number of units consumed: ");
              // scanf("%d",&units);
              // switch(units < 51)
              // {
              //   case 1:
              //   subamount = (units*0.50);
              //   break;

              //   case 0:
              //       switch(units < 151)
              //       {
              //         case 1:
              //         subamount = ((units-50)*0.75) + 25;
              //         break;

              //         case 0:
              //         switch(units < 251)
              //         {
              //           case 1:
              //           subamount = ((units-150))*1.20 + 100;
              //           break; 

              //           default:
              //           subamount = ((units-250)*1.50) + 220;  
              //         } break;                   
              //       }break;
              // }
              // totalamount = subamount + (subamount*0.20);
              // printf("Your total bill is %.2f Rs",totalamount);
            

// solution of question no 8 ################################################################################################
           
//             int num;
//             printf("Enter a real number: ");
//             scanf("%d",&num);
//             switch(num>=0)
//             {
//                 case 1:
//                 printf("%d",-1*num);
//                 break;

//                 case 0:
//                 printf("%d",-1*num);
//             }



// solution of question no 9 ################################################################################################

            // int num;
            // printf("Enter a number: ");
            // scanf("%d",&num);
            // switch(num%2==0)
            // {
            //     case 1:
            //     printf("Nearest upper odd number is %d",num+1);
            //     break;

            //     case 0:
            //     printf("Nearest upper odd number is %d",num+2);
            // }


// solution of question no 10 ################################################################################################

            // int a1,b1,c1,D;
            // float root_1,root_2;
            // printf("Enter the value of a,b,c to find the roots: ");
            // scanf("%d%d%d",&a1,&b1,&c1);
            // D = (b1*b1)-(4*a1*c1);
            // switch(D>=0)
            // {
            //     case 1:
            //         switch(D>0)
            //         {
            //             case 1:
            //             printf("Roots are real and unequal\n");
            //             root_1 = (-b1+sqrt(D))/(2*a1);
            //             root_2 = (-b1-sqrt(D))/(2*a1);
            //             printf("Root 1 is : %.2f\n",root_1);
            //             printf("Root 2 is : %.2f\n",root_2);
            //             break;

            //             case 0:
            //             printf("Roots are real are equal\n");
            //             root_1 = -b1/2*a1;
            //             printf("Root is : %.2f\n",root_1);
            //             break;
            //         }
            //     break;
                
            //     case 0:
            //     printf("Roots are imaginary\n");
            //     root_1 = -b1/(2.0*a1);
            //     root_2 = sqrt(-D)/(2.0*a1);
            //     printf("Root 1 is : %.2f + %.2f i : \n",root_1,root_2);
            //     printf("Root 2 is : %.2f -%.2f i : \n",root_1,root_2);
                


            // }

}