#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num,odd=0,even=0;
    int i=0;
    cin>>num;
    while(num>0)
    {
        if(i==0)
        {
            even+=num%10;
        }
        else
        {
            odd+=num%10;
        }
       num=num/10;
       i=1-i;
    }

    if(((int)(abs(odd-even)))%11==0)
    {
        cout << "the number is multiple of eleven" << endl;
    }
    else cout<< "nice try~"<<endl;

    return 0;
}
