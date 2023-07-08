#include<iostream>
using namespace std;
class Demo
{
    public:
        int Addition(int No1, int No2) //Additon@2ii(Demo *this, int No1, int No2)
        {
            cout<<"Addtion of 2 integers "<<"\n";
            return No1 + No2;
        }
        int Addition(int No1, int No2, int No3)  // Addition@3iii(Demo *this, int No1, int No2, int No3)
        {
            cout<<"Addtion of 3 integers "<<"\n";
            return No1 + No2 + No3;
        }
        float Addition(float No1, float No2)      // Addition@2ff(Demo *this, float No1, float No2)
        {
            cout<<"Addtion of 2 float "<<"\n";
            return No1 + No2;
        }
        double Addition(double No1, double No2)          // Addition@2dd(Demo *this, double No1, double No2)
        {
            cout<<"Addtion of 2 double "<<"\n";
            return No1 + No2;
        }
};
int main()
{
    Demo obj1;
    Demo obj2;

    int iRet = obj1.Addition(10,11);       // Addtion@2ii(&obj,10,11)
    cout<<"Addtion of integers is : "<<iRet<<"\n";

    iRet = obj1.Addition(10,11,51);           // Addtion@3iii(&obj1,10,11,51)
    cout<<"Addtion of integers is : "<<iRet<<"\n";    

    float fRet = obj1.Addition(10.5f,90.7f);            //Addition@2ff(&obj1,10.5f,90.7f)
    cout<<"Addtion of float is : "<<fRet<<"\n";
    
    double dRet = obj1.Addition(10.5,90.7);            //Addition@2dd(&obj1,10.5,90.7)
    cout<<"Additon of double is : "<<dRet<<"\n";
    return 0;
}
        /*
         Changing datatypes
        void fun(int A, int B);
        void fun(float A, float B);
        */
