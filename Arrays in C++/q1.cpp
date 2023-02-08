#include <iostream>
using namespace std;

int count(int arr[],int n)
{
int count_odd=0;
for(int i=0;i<n;i++)
{
if(arr[i]%2!=0)
{
count_odd++;
}
}
return count_odd;
}

int main()
{
int n;
cout << "Enter number" << "\n";
cin >> n;
int a[n];
for (int i=0;i<n;i++){
    cin>>a[i];

}
cout <<count(a,n) << "\n";
return 0;
}