#include<iostream>
using namespace std;

int checkPrime(int);

int highestValueDigit(int);

int power(int,int);

void swap(int &,int &);

int add(int,int,int=0);

float area(int);
int area(int,int);
float area(float,float);

float maximum(float,float);
int maximum(int,int);

float add_different_types(float,int);
float add_different_types(int,float);

int inFibonacci(int);
int main()
{

    // solution of question no 1 #########################################################################
    // int num;
    // cout<<"Enter a number: ";
    // cin>>num;
    // int r = checkPrime(num);
    // if(r==1)
    // cout<<"Number is not prime";
    // else
    // cout<<"Number is prime";




    // solution of question no 2 #########################################################################
    // int num;
    // cout<<"Enter the number: ";
    // cin>>num;
    // cout<<"Highest value digit in the number is: "<<highestValueDigit(num);





    // solution of question no 3 #########################################################################
    // int x,y;
    // cout<<"Enter the value of x and y ";
    // cin>>x>>y;
    // cout<<"X raised to the Power Y is: "<<power(x,y);



    // solution of question no 5 #########################################################################
    // int num;
    // cout << "\nEnter A Number To Check Whether It is A Term In Fibonacci Series or Not => ";
    // cin >> num;
    // if (inFibonacci(num))
    //     cout << num << " is A Term In Fibonacci Series";
    // else
    //     cout << num << " is Not A Term In Fibonacci Series";



    // solution of question no 6 #########################################################################
    // int num1,num2;
    // cout<<"Enter Two numbers to swap: ";
    // cin>>num1>>num2;
    // cout<<"Before Swapping:"<<endl;
    // cout<<"Num1 = "<<num1<<endl;
    // cout<<"Num2 = "<<num2<<endl;
    // swap(num1,num2);
    // cout<<"After Swapping:"<<endl;
    // cout<<"Num1 = "<<num1<<endl;
    // cout<<"Num2 = "<<num2<<endl;



    // solution of question no 7 #########################################################################
    // int num1,num2,num3;
    // cout<<"Enter two numbers for addtion:"<<endl;
    // cin>>num1>>num2;
    // cout<<"Sum of the two numbers is: "<<add(num1,num2);
    // cout<<"\nEnter three numbers for addition:"<<endl;
    // cin>>num1>>num2>>num3;
    // cout<<"Sum of the three numbers is: "<<add(num1,num2,num3);



    // solution of question no 8 #########################################################################
    // int radius,length,breadth;
    // float base,height;
    // cout<<"Enter radius of circle: ";
    // cin>>radius;
    // cout<<"\nEnter length and breadth of rectangle: ";
    // cin>>length>>breadth;
    // cout<<"\nEnter base and height of triangle: ";
    // cin>>base>>height;
    // cout<<"\nArea of circle is: "<<area(radius);
    // cout<<"\nArea of rectangle is: "<<area(length,breadth);
    // cout<<"\nArea of triangle is: "<<area(base,height);



    // solution of question no 9 #########################################################################
    // float num1,num2;
    // float num3,num4;
    // cout<<"Enter two numbers: ";
    // cin>>num1>>num2;
    // cout<<"Maximum Number is: "<<maximum(num1,num2);
    // cout<<endl<<"Enter two numbers: ";
    // cin>>num3>>num4;
    // cout<<"Maximum Number is: "<<maximum(num3,num4);




    // solution of question no 10 #########################################################################
    // float num1;
    // int num2;
    // cout<<"Enter real number and then integer number: ";
    // cin>>num1>>num2;
    // cout<<"Sum is: "<<add_different_types(num1,num2);
    // cout<<"\nEnter integer number and then real number: ";
    // int num3;
    // float num4;
    // cin>>num3>>num4;
    // cout<<"Sum is: "<<add_different_types(num3,num4);
}

// All functions Definations:*********************************************************************
// ***********************************************************************************************

int checkPrime(int Num)
{
    int count = 0;
    for(int i=2; i<Num; i++)
    {
        if(Num%i == 0)
        {
            count ++;
            break;
        }
    }
    if(count == 1)
    return 1;
    else
    return 0;
}



int highestValueDigit(int num)
{
    int temp = num;
    int i,d,largest=0;
    while(temp!=0)
    {
        d = temp%10;
        if(d >= largest)
        largest = d;
        temp = temp/10;
    }
    return largest;
}

int power(int x,int y)
{
    int i,result=1;
    for(i=1; i<=x; i++)
    {
        result = result*y;
    }
    return result;
}


void swap(int &x,int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}


int add(int x,int y,int z)
{
    return x+y+z;
}


float area(int radius)
{
    return 3.14*radius*radius;
}
int area(int l,int b)
{
    return l*b;
}
float area(float base,float height)
{
    return 0.5*base*height;
}



float maximum(float x,float y)
{
    if(x>y)
    return x;
    else
    return y;
}




float add_different_types(float x,int y)
{
    return x+y;
}
float add_different_types(int x,float y)
{
    return x+y;
}


int inFibonacci(int num)
{
    int prev = -1, next = 1, result = 0;

    while (result < num)
    {
        result = prev + next;
        prev = next;
        next = result;
    }
    if (result == num)
        return 1;

    return 0;
}