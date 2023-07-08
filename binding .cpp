#include<iostream>
using namespace std;

class Demo
{
    public: 
        void Fun()
        {
            cout<<"Inside Fun "<<"\n";              // 1000 FORM TEXT SECTION 
        }
        void Gun()
        {
            cout<<"Inside Gun "<<"\n";              // 2000 FORM TEXT SECTION 
        }
};

int main()
{
    Demo obj;

    cout<<sizeof(Demo)<<"\n";

    obj.Fun();          // CALL 1000                CALL ______
    obj.Gun();          // CALL 2000                CALL ______

    return 0;           
} 