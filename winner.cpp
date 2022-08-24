#include <iostream>
using namespace std;

int main()
{
    int n;
    char arr[n] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k'};
    int count = 1;
    for (int i = 0; i < n; i++)
    {

        count++;
        if (count == 5)
            count = 1;
        if (count == 4)
        {
            if (count + 1 < n)
            {
                arr[count] = arr[count + 1];
            }
            else
                n--;
        }
    }
    cout<<arr[];
}