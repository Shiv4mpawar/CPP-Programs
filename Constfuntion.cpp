#include<iostream>
using namespace std;

// constant function is sach a function which can't 
class Demo 
{
    public:
        int A;
        int B;
        const int C;
        const int D;
    Demo() : C(11), D(21)
    {
        A = 0;
        B = 0;
    }

    Demo(int i, int j, int k, int l) :  C(k), D(l) //A(i), B(j)  Allowed but plz dont use 
    { 
        A = i; 
        B = j;
    }
    void fun()
    {
      // A++;     //A
      // B++;      //A
      // C++;      //NA
      // D++;      //NA
     cout<<"Inside fun function \n";
    }
    void gun() const
    {
        // A++;    //NA
        // B++;    //NA
        // C++;    //NA
        // D++;    //NA
       cout<<"Inside const mehod \n";
    }
};
int main() 
{  
    
    Demo obj1(11,21,51,101);
    const Demo obj2(11,21,51,101);

    obj1.fun();
    obj1.gun();

//  obj2.fun();
    obj2.gun();

    cout<<obj1.A<<"\n";
    cout<<obj1.B<<"\n";
    cout<<obj1.C<<"\n";
    cout<<obj1.D<<"\n";

    cout<<obj2.A<<"\n";
    cout<<obj2.B<<"\n";
    cout<<obj2.C<<"\n";
    cout<<obj2.D<<"\n";

    return 0;
}





