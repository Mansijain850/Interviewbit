#include<bits/stdc++.h>
#include<string.h>
using namespace std;

vector<string> fizbuz(int A)
{

    vector<string> v;
    for(int i=1;i<=A;i++)
    {

        if(i%3==0 && i%5==0)
            v.push_back("FizzBuzz");
        else if(i%3==0)
            v.push_back("Fizz");
        else if(i%5==0)
            v.push_back("Buzz");
        else
        {
            string l = std::to_string(i);

            v.push_back(l));

        }


    }
    return v;
}

int main()
{

    return 0;
}

