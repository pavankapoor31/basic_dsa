#include <iostream>
using namespace std;

int main()
{
    int n;
    n=11;
    char arr[n] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k'};
    int count = 1;
    for (int i = 0; i <=n; i++)
    {
        count++;
        if (count == 5)
            count = 1;
        if (count == 4)
        {   
            if ((i + 1)< n)
            {
                for(int k=i; k<n-1;k++){
                arr[k] = arr[k + 1];
                }
            }
            n--;
            
        }
        if(i==n)
            i=0;
        if(n==1)
        {
            cout<<arr[1];
            break;
        }
    }
    

    // cout<<arr[n]<<endl;
}