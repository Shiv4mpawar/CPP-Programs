#include<iostream>
using namespace std;

class Demo
{
    public:
        int A;
        int B;

        // parameterise consturctor with default arguments
        Demo(int i = 10, int j = 20)
        {
            A = i;
            B = j;
        }
};

int main()
{
    Demo obj1;         
    Demo obj2(11);     
    Demo obj3(11,21);  

    cout<<obj1.A<<"\t"<<obj1.B<<"\n";        //10    20
    cout<<obj2.A<<"\t"<<obj2.B<<"\n";        //11    20
    cout<<obj3.A<<"\t"<<obj3.B<<"\n";        //11    21

    return 0;
}


