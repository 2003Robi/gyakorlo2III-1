#include <iostream>

using namespace std;
int factori(int n,int m)
{
    int p1,p2,d,k=0;
    d=2;
    while(m!=1 && n!=1)
    {
        p1=0;
        while(n%d==0)
        {
            p1++;
            n=n/d;
        }
        p2=0;
        while(m%d==0)
        {
            p2++;
            m=m/d;
        }
        if(p1==p2 && p1!=0)
            k++;
        d++;
    }
    return k;
}
int main()
{
    cout << factori(16500,10780)<< endl;
    return 0;
}
