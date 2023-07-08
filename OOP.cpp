// class = Characteristics + behaviours 
// Class = Data + Functions

#include<iostream>
using namespace std;

class Demo
{
    public:
      int No1;
      int No2;

      void fun()
      {
        cout<<"Inside fun\n";
      }
};

   int main()
{ 
   Demo obj1;
   Demo obj2;

   cout<<"Size of object1 :"<<sizeof(obj1)<<"\n";
   cout<<"Size fo object2 :"<<sizeof(obj2)<<"\n";

   obj1.No1 = 10;
   obj1.No2 = 20;
   
   obj2.No1 = 30;
   obj2.No2 = 40;

  obj1.fun();      //Inside fun 
  obj2.fun();     //Inside fun

  return 0;
}