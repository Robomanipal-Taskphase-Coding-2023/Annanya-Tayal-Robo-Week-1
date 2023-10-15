#include <iostream>

using namespace std;
static int arr[50];
void bubble(int n)
{
    for(int u = 0 ; u < n; u++)
    {
        for(int v = 0 ; v < n-1 ; v++)
        {
            if(arr[v]>arr[v+1])
            {
                int temp = arr[v];
                arr[v] = arr[v+1];
                arr[v+1]=temp;
            }
        }
    }
}
void selection(int n)
{
    for(int i = 0; i < n ; i++)
    {
        int index = i;
        int min = arr[i];
        for(int j = i ; j < n ; j++)
        {
            if(arr[j]<min) 
            { min = arr[j]; index = j;}
            
        }
        int temp = arr[i];
        arr[i]=min;
        arr[index]=temp;
        
    }
}

int main()
{
    cout<<"Enter the no. of elements:";
    int n;
    cin>>n;
    cout<<"Enter the elements:";
    
    for(int i = 0 ; i<n; i++)
    {
        cin>>arr[i];
    }
    int choice;
    cout<<"Enter your choice :"<<"\n"<<"1. Bubble Sort \n"<<"2. Selection Sort \n" ;
    cin>>choice;

    switch(choice)
    {
    case 1:
    bubble(n);
    break;

    case 2:
    selection(n);
    break;

    default:
    cout<<"Wrong choice";
    return 1; 
    }
    for(int i = 0 ; i<n; i++)
    {
        cout<<arr[i];
    }
}
    