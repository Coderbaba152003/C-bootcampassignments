#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
    int a[4][4]={10,7,5,3,6,15,11,4,9,1,13,8,12,14,2,32};
    int b[4][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,32};
    int i,j,moves=5,direction,k=3,l=3,temp;
    char pname[30],key;
    printf("\n\n\n\n*******************************************NUMBER SHIFTING GAME*******************************************");
    printf("\n\n\n\n\n\n\n");
    printf("You are given a 4*4 matrix with random values filled like: \n\n\n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            if(a[i][j] == 32)
            printf(" ");
            else
            printf("%d\t",a[i][j]);
        }   printf("\n");
    }
/*
    printf("\n\n\n You have to convert this random matrix to matrix which looks like this: \n\n");
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            
            if(a[i][j]==32)
            printf(" ");
            else
            printf("%d\t",b[i][j]);
        }   printf("\n");
    }

    printf("\n\nGame Rules:\n");
    printf("\t1. You can move only one step at a time with the arrow key.\n");
    printf("\t2. You can move numbers at an empty position only.\n");
    printf("\t3. For each valid move : your total number of moves will be decreased by 1.\n");
    printf("\n\nWinning Situation :\n");
    printf("\t1. Number in a 4*4 matrix should be in order from 1 to 15");
    printf("\n\nPress any key to start the game!! ");
    getch();
    system("cls");  */
    printf("\n\nEnter the player name: ");
    fgets(pname,30,stdin);
    pname[strcspn(pname,"\n")] = '\0';
    printf("Good Luck %s\n",pname);
    while(moves!=0)
    {
        printf("Enter the direction: ");
        scanf("%d",&direction);
        if(direction == 1)
        {
        
            l--;
            temp = a[k][l];printf("%d",temp);
            a[k][l] = 32;printf("%d",a[k][l]);
            a[k][l+1] = temp;printf("%d",a[k][l+1]);
            for(i=0; i<4; i++)
            {
                for(j=0; j<4; j++)
                {
                    
                    if(a[i][j]==32)
                    printf(" ");
                    else
                    printf("%d\t",a[i][j]);
                }   printf("\n");
            }
        }
    

        else if(direction == 2)
        {
        
            k--;
            temp = a[k][l];//printf("%d",temp);
            a[k][l] = 32;
            a[k+1][l] = temp;
            
            for(i=0; i<4; i++)
            {
                for(j=0; j<4; j++)
                {
                    
                    if(a[i][j]==32)
                    printf(" ");
                    else
                    printf("%d\t",a[i][j]);
                }   printf("\n");
            }
        }

        else if(direction==3)
        {
            l++;
            temp = a[k][l];
            a[k][l] = 32;
            a[k][l-1] = temp;

            for(i=0; i<4; i++)
            {
                for(j=0; j<4; j++)
                {
                    
                    if(a[i][j]==32)
                    printf(" ");
                    else
                    printf("%d\t",a[i][j]);
                }   printf("\n");
            }
        }

        else if(direction==4)
        {
            k++;
            temp = a[k][l];
            a[k][l] = 32;
            a[k-1][l] = temp;

            for(i=0; i<4; i++)
            {
                for(j=0; j<4; j++)
                {
                    
                    if(a[i][j]==32)
                    printf(" ");
                    else
                    printf("%d\t",a[i][j]);
                }   printf("\n");
            }
        }
        else
        {
            printf("Wrong Key Pressed\n");
            moves++;
        }
        moves--;
    }

}
     
