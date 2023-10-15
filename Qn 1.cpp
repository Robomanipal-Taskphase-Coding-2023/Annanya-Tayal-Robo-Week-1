#include <iostream>
using namespace std;
int main()
{
    char ar[100];
    cout<<"Enter number of characters:"<<endl;
    int a;
    cin>>a;
    int i;
    for(i=0;i<a;i++)
    {
        cout<<"\nEnter character\n";
        cin>>ar[i];
    }
    for(i=0;i<a;i++)
    {
        for(int j=0;j<a-i-1;j++)
        {
            if(ar[j]>ar[j+1])
            {
                char temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
        }
    }
    cout<<"sorted array:"<<ar;
    return 0;
}
