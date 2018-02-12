/*     dividend
          |
          V
divisor |  |
     \ 6| 9 |1/<-divisor

        - 6
        ----|   |
          \3| 9 |3/
             -9
             ----
              0 <-remainder is zero so we stopped
#include<iostream>
using namespace std;
int gc(int A, int B)
{
    while(B!=0)
    {
         int temp=B;
    B=A%B;
    A=temp;

    }
   return A;
}
int main()
{
    int A, B;
    cin>>A;
    cin>>B;
    cout<<gc(A,B);
    return 0;

}
