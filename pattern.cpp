#include<iostream>
using namespace std;
int main()
{
    bool r=true;
    cout<<"bool="<<r<<"\n";
    int k=r;
    cout<<"int="<<k<<"\n";
    float f=34.23;
    cout<<"float="<<f<<"\n";
    k=f;
    cout<<"int="<<k;
}


///
#include<iostream>
using namespace std;
int main()
{
    for(int i=0; i<4; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<char(i+65)<<"\t";
        }
        cout<<"\n";
    }
}

