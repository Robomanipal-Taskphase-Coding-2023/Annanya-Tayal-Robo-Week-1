#include <iostream>
using namespace std;
int main()
{
    int m,n;
    cout<<"Enter the numbers";
    int x=0,y=0;
    cin>>m;
    cin>>n;
    for(int i = 1; i<m; i++)
    {
        if(m%i==0) x+=i;
    }
    
    for(int i = 1; i<n; i++)
    {
        if(n%i==0) y+=i;
    }
    ((x==n)&&(y==m))?cout<<"Amicable numbers":cout<<"Not amicable numbers";
}