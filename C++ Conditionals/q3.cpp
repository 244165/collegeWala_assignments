#include <iostream>
using namespace std;
int main()
{
int CP,SP, amt; //Input cost price and selling price of a product
cout<<"Enter cost price: ";
cin>>CP;
cout<<"Enter selling price: ";
cin>>SP;
if(SP > CP)
{
amt = SP - CP; //Calculate Profit
cout<<"Profit = "<<amt;
}
else if(CP > SP)
{
amt = CP - SP; //Calculate Loss
cout<<"Loss = "<<amt;
}
else
{
cout<<"No Profit No Loss."; // Neither profit nor loss
}
return 0;
}