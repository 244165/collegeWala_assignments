#include <iostream>
using namespace std;
int main()
{
int num;
cout<<"Enter the number : ";
cin>>num;
int count=0;
while (num > 0) {
int parity = num % 2;
if(parity==0)
{
count++;
}
num /= 2;
}
cout << "The number of zeros is : " <<count<< endl;
}