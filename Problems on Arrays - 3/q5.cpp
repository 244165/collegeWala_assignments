#include <iostream>
using namespace std;

vector<int> count(int arr[],int n)
{
vector<int> ans(nums.size());
int pre[nums.size()];
pre[0]=nums[0];
int pos[nums.size()];
pos[nums.size()-1]=nums[nums.size()-1];
for(int i=1;i<nums.size();i++)
{
pre[i]=nums[i]*pre[i-1];
}
cout<<pos[nums.size()-1];
for(int i=nums.size()-2;i>=0;i--)
{
pos[i]=pos[i+1]*nums[i];
}
for(int i=0;i<nums.size()-1;i++)
{
if(i==0)
{
ans[0]=pos[1];
}else{
ans[i]=pos[i+1]*pre[i-1];
}
}
ans[nums.size()-1]=pre[nums.size()-2];
return ans;
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
vector<int> ans = count(a,n) << "\n";
for(int i=0;i<n;i++)
{
    cout<<ans[i];
}
return 0;
}