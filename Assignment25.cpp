#include<iostream>
using namespace std;


// solution of question no 1 ########################################################

// class Complex
// {
//     private:
//         int real,imag;
//     public:
//         void setvalue(int x, int y)
//         {
//             real = x;
//             imag = y;
//         }
        
//         void printdata()
//         {
//             cout<<"Complex number is: "<<real<<" + "<<imag<<"i"<<endl;
//         }
// };

// int main()
// {
//     Complex c1;
//     c1.setvalue(4,5);
//     c1.printdata();
//     return 0;
// }




// solution of question no 2 ########################################################

// class Time
// {
//     private:
//         int hours,mins,secs;
//     public:
//     void settime(int h, int m, int s)
//     {
//         hours = h;
//         mins = m;
//         secs = s;
//     }

//     void printdata()
//     {
//         cout<<"Time is: "<<hours<<" hh: "<<mins<<" mins: "<<secs<<" secs"<<endl;
//     }
// };

// int main()
// {
//     Time t1;
//     t1.settime(12,45,18);
//     t1.printdata();
//     return 0;
// }






// solution of question no 3 ########################################################

// class Factorial
// {
//     private:
//         int i,fact=1,num;
//     public:
//     void getdata()
//     {
//         cout<<"Enter the number to find facorial: ";
//         cin>>num;
//     }

//     void calfactorial();
// };
// void Factorial::calfactorial()
// {
//     for(i=1; i<=num; i++)
//     fact =fact*i;
//     cout<<"Factorial is: "<<fact;
// }

// int main()
// {
//     Factorial f1;
//     f1.getdata();
//     f1.calfactorial();
// }





// solution of question no 4 ########################################################

// class LargestNumber
// {
//     private:
//         int num1,num2,num3;
//     public:
//     void setnum(int x,int y,int z)
//     {
//         num1 = x;
//         num2 = y;
//         num3 = z;
//     }

//     void largestOfThree()
//     {
//         if(num1>num2 && num1>num3)
//         cout<<"Largest is: "<<num1;
//         else if(num2>num1 && num2>num3)
//         cout<<"Largest is: "<<num2;
//         else
//         cout<<"Largest is: "<<num3;
//     }
// };

// int main()
// {
//     LargestNumber t1;
//     t1.setnum(43,235,65);
//     t1.largestOfThree();
//     return 0;
// }





// solution of question no 5 ########################################################

// class ReverseNumber
// {
//     private:
//         int num;
//         int d,r=0;
//     public:
//         void setnum(int x)
//         {
//             num = x;
//         }

//         void ReverseNum();
// };

// void ReverseNumber::ReverseNum()
// {
//     int temp = num;   
//     while(temp>0)
//     {
//         d = temp%10;
//         r = (r*10) + d;
//         temp = temp/10;
//     }
//     cout<<"Reverse of the number is: "<<r;
// }

// int main()
// {
//     ReverseNumber r1;
//     r1.setnum(567);
//     r1.ReverseNum();
//     return 0;
// }



// solution of question no 6 ########################################################

// class Square
// {
//     private:
//         int num;
//     public:
//         void setnum(int x)
//         {   
//             num = x;
//         }

//         void calsquare()
//         {
//             num = num*num;
//         }

//         void print()
//         {
//             static int count;
//             count ++;
//             cout<<"Square is: "<<num<<endl;
//             cout<<"Number of times the function is called is: "<<count;
//         }
// };

// int main()
// {
//     Square s1;
//     s1.setnum(6);
//     s1.calsquare();
//     s1.print();
//     return 0;
// }




// solution of question no 8 ########################################################

// class Rectangle
// {
//     private:
//         float area,length,breadth;
//     public:
//         void setvalue(float l, float b)
//         {
//             length = l;
//             breadth = b;
//         }
//         void calarea()
//         {
//             area = length*breadth;
//             cout<<"Area is: "<<area;
//         }
// };

// int main()
// {
//     Rectangle r1;
//     r1.setvalue(4,7);
//     r1.calarea();
//     return 0;
// }




// solution of question no 9 ########################################################

// class Circle
// {
//     private:
//         float area,radius;
//     public:
//         void setvalue(float r)
//         {
//            radius = r;
//         }
//         void calarea()
//         {
//             area = 3.14*radius*radius;
//             cout<<"Area is: "<<area;
//         }
// };

// int main()
// {
//     Circle c1;
//     c1.setvalue(4);
//     c1.calarea();
//     return 0;
// }




// solution of question no 10 ########################################################

// class Area
// {
//     private:
//         float radius,length,breadth,side,area;
//     public:
//         void setForCircle(float r)
//         {
//             radius = r;
//         }

//         void setForSquare(float s)
//         {
//             side = s;
//         }

//         void setForrectangle(float l,float b)
//         {
//             length = l;
//             breadth = b;
//         }

//         void calAreaforCircle()
//         {
//             area = 3.14*radius*radius;
//             cout<<"Area of circle is: "<<area<<endl;
//         }

//         void calAreaforSquare()
//         {
//             area = side*side;
//             cout<<"Area of square is: "<<area<<endl;
//         }
//         void calAreaforRectangle()
//         {
//             area = length*breadth;
//             cout<<"Area of rectangle is: "<<area<<endl;
//         }
// };

// int main()
// {
//     Area a1,a2,a3;
//     a1.setForCircle(4);
//     a2.setForrectangle(5,7);
//     a3.setForSquare(9);
//     a1.calAreaforCircle();
//     a2.calAreaforRectangle();
//     a3.calAreaforSquare();
//     return 0;
// }
