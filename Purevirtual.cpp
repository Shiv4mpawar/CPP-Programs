#include<iostream>
using namespace std;

// Abstract class : It is a class which cointains at least single pure virtual funtiin in it.

class Base 
{
    public:
        int A,B;

        int Addition(int i, int j)                  // Concrete funtion 
        {
            return i+j;
        }
        int Subtraction(int i, int j)           // concrete funtion
        {
            return i-j;
        }
        virtual int Multiplcation(int i, int j) = 0; // Abstract function
};

class Derived : public Base
{
    public : 
        int X,Y;

        int Subtraction(int i, int j)
        {
            int Ans = 0;
            Ans = i - j;
            return Ans;
        }

        int Multiplcation(int i, int j)   // Concrete funtion 
        {
            return i*j;
        }     

};

int main()
{
  //  Base Bobj;              // NA
   Base *bp = new Derived();
    int Ret = 0;
     
    Ret = bp->Multiplcation(10,11);
    cout<<"Addition is :"<<Ret<<"\n";

    return 0;
}