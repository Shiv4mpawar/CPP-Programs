#include<iostream>
#include<string.h>
using namespace std;

int strlenX(char *str)          //(char str[])     //int strlenX(char *Str)
{
    int iCnt = 0;

    while(*str != '\0')
    {
        str++;
        iCnt++;
    }
    return iCnt;
}

int main()
{
    char Arr[10];
    int iRet = 0;

    cout<<"Enter your first name : "<<"\n";
    cin>>Arr;

    iRet = strlenX(Arr);        // strlenX(100);

    cout<<"Length of name is : "<<iRet<<"\n";

    return 0;
}