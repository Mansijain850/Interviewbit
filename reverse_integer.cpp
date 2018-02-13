#include<iostream>
using namespace std;
int rev(int x)
{

    int reversed=0;
    while(x!=0)
    {

        int temp = reversed*10+ x%10;
        if(temp/10!=reversed )
            return 0;
        reversed = temp;
        x=x/10;
    }
    return reversed;
}
int main()
{
    int x;
    cin>>x;
    cout<<rev(x);
    return 0;
}
