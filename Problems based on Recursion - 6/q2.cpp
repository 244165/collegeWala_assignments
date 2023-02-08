#include <iostream>
using namespace std;
void helper(int arr[] , int size)
{    
        if (size < 1)
        {
            return;
        }
         for (int i = 0; i < size ; i++)
        {
            if(i == size - 1)
            {
                cout << arr[i] << " ";
            }
            else
            {
                cout << arr[i] << ", ";
            }
        }
        cout << endl;
        int level[size - 1];
        for (int i = 0; i < size - 1; i++)
        {
            int sum = arr[i] + arr[i + 1];
            level[i] = sum;
        }
        helper(level, size - 1);
}
int main()
{
    int n;
    cout<<"Enter the size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the array elements : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    helper(arr,n);
}