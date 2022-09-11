#include<iostream>
#include<string.h>
using namespace std;

// solution of question no 1 ##########################################################

// class Complex
// {
//     private:
//         int a,b;
//     public:
//         void setData(int x,int y)
//         {
//             a = x;
//             b = y;
//         }
        
//         void showData()
//         {
//             cout<<"Complex number is: "<<a<<" + "<<b<<"i"<<endl;
//         }

//         Complex add(Complex C)
//         {
//             Complex temp;
//             temp.a = a + C.a;
//             temp.b = b + C.b;
//             return temp;
//         }
// };

// int main()
// {
//     Complex c1,c2,c3;
//     c1.setData(4,6);
//     c2.setData(6,8);
//     c3 = c1.add(c2);
//     c1.showData();
//     c2.showData();
//     cout<<"After Addition:"<<endl;
//     c3.showData();
//     return 0;
// }




// solution of question no 2 ##########################################################

// class Time
// {
//     private:
//         int h,m,s;
//     public:
//         void setTime(int hours,int mins,int secs)
//         {
//             h = hours;
//             m = mins;
//             s = secs;
//         }

//         void showTime()
//         {
//             cout<<"Time is=> "<<h<<"h : "<<m<<"m : "<<s<<"s "<<endl;
//         }

//         void normalize()
//         {
//             if(s > 60)
//             {
//                 m = m + (s/60);
//                 s = s%60;
//             }  

//             if(m > 60){
//             h = h + (m/60);
//             m = m%60;
//             } 
//         }

//         Time add(Time T)
//         {
//             Time temp;
//             temp.h = h + T.h;
//             temp.m = m + T.m;
//             temp.s = s + T.s;
//             return temp;
//         }
// };
// int main()
// {
//     Time t1,t2,t3;
//     t1.setTime(4,60,60);
//     t2.setTime(6,5,10);
//     t3 = t1.add(t2);
//     t3.normalize();
//     t3.showTime();
//     return 0;
// }




// solution of question no 3 ##########################################################

// class Cube
// {
//     private:
//         int l;
//     public:
//         Cube()
//         {
//             l = 2;
//         }

//         void calVolume()
//         {
//             l = l*l*l;
//             cout<<"Volume of the cube is: "<<l<<endl;
//         }
// };
// int main()
// {
//     Cube c1,c2;
//     c1.calVolume();
//     c2.calVolume();
//     return 0;
// }




// solution of question no 4 ##########################################################

// class Counter
// {
//     int count;

// public:
//     Counter(int n)
//     {
//         count = n;
//     }
//     void decreCounter()
//     {
//         count--;
//     }

//     int stopCounter()
//     {
//         if (count == -1)
//             return 1;
//         return 0;
//     }

//     void showCounter()
//     {
//         cout << "\nCounter => " << count << endl;
//     }
// };

// int main()
// {
//     Counter c(90);

//     while (1)
//     {
//         c.showCounter();
//         c.decreCounter();
//         if (c.stopCounter())
//             break;
//     }

//     return 0;
// }





// solution of question no 5 ##########################################################

// class Date
// {
//     private:
//         int dd,mm,yy;
//     public:
//         Date()
//         {
//             dd = 10;
//             mm = 9;
//             yy = 2022;
//         }
//         Date(int DD,int MM,int YY)
//         {
//             dd = DD;
//             mm = MM;
//             yy = YY;
//         }
//         void showDate()
//         {
//             cout<<dd<<"/"<<mm<<"/"<<yy<<endl;
//         }
// };
// int main()
// {
//     Date d1,d2(11,10,2023);
//     d1.showDate();
//     d2.showDate();
//     return 0;
// }




// solution of question no 6 ##########################################################

// class student
// {
//     private:
//         int rollno;
//         char name[30];
//     public:
//         student()
//         {
//             rollno = 1;
//             strcpy(name,"Tushar");
//         }
//         student(int r,const char *n)
//         {
//             rollno = r;
//             strcpy(name,n); 
//         }

//         void showDetails()
//         {
//             cout<<"Rollno: "<<rollno<<endl;
//             cout<<"Name: "<<name<<endl;
//         }
// };
// int main()
// {
//     student s1,s2(2,"MySirG");
//     s1.showDetails();
//     s2.showDetails();
//     return 0;
// }





// solution of question no 7 ##########################################################

// class Box
// {
//     private:
//         float length,breadth,height,volume;
//     public:
//         Box()
//         {
//             length = 1;
//             breadth = 1;
//             height = 1;
//         }

//         Box(float l,float b,float h)
//         {
//             length = l;
//             breadth = b;
//             height = h;
//         }

//         void calVol()
//         {
//             volume = length*breadth*height;
//             cout<<"Volume of the box is: "<<volume<<endl;
//         }
// };
// int main()
// {
//     Box b1,b2(3,5,6);
//     b1.calVol();
//     b2.calVol();
//     return 0;
// }





// solution of question no 8 ##########################################################

// class Bank
// {
//     private:
//         float principal,rate,year,simpleInterest;
//     public:
//         void readData()
//         {
//             cout<<"Enter principal: ";
//             cin>>principal;
//             cout<<"Enter rate: ";
//             cin>>rate;
//             cout<<"Enter Year: ";
//             cin>>year;
//         }

//         void calSI()
//         {
//             simpleInterest = (principal*rate*year)/100;
//             cout<<"Simple Interest is: "<<simpleInterest;
//         }
// };
// int main()
// {
//     Bank b1;
//     b1.readData();
//     b1.calSI();
//     return 0;
// }




// solution of question no 9 ##########################################################

// class Bill
// {
//     char name[50];
//     float units;
//     float billAmt;

// public:
//     void getData()
//     {
//         cout << "Enter Name => ";
//         cin.getline(name, 50);
//         cout << "Enter Electricity Units => ";
//         cin >> units;
//     }

//     void calculateBill()
//     {
//         float copyUnits = units;
//         float bA = 0;
//         if (copyUnits >= 100)
//         {
//             bA += 100 * 1.20;
//             copyUnits -= 100;
//             if (copyUnits >= 100)
//             {
//                 bA += 100 * 2;
//                 copyUnits -= 100;
//                 bA += copyUnits * 3;
//             }
//             else
//                 bA += copyUnits * 2;
//         }
//         else
//             bA += copyUnits * 1.20;

//         billAmt = bA;
//     }

//     void showBill()
//     {
//         cout << "Bill Amount => " << billAmt << endl;
//     }
// };

// int main()
// {
//     Bill b1;
//     b1.getData();
//     b1.calculateBill();
//     b1.showBill();
//     return 0;
// }






// solution of question no 10 ##########################################################

// class StaticCount
// {
//     private:
//         static int count;
//     public:
//         void incrementCount()
//         {
//             count++;
//         }
//         void showcount()
//         {
//             cout<<"Count: "<<count<<endl;
//         }
// };
// int StaticCount::count;
// int main()
// {
//     StaticCount s1;
//     s1.incrementCount();
//     s1.incrementCount();
//     s1.incrementCount();
//     s1.showcount();
//     return 0;
// }
