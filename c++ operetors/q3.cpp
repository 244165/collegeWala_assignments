#include <iostream>
using namespace std;
int main()
{
int total, boys, girls;
boys = 17;
total = (80*45)/100; //total students getting grade A
girls = total - boys; //total number of girls getting grade A
cout << "Number of girls getting grade A = " << girls << endl;
return 0;
}