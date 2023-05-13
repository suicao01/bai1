#include <iostream>
#include<vector>

using namespace std;



int main() {
int n,a[1000],sum=0;
cin>>n;
vector<int> b;
for (int i=0;i<n;i++) {
    cin>>a[i];
}
for (int i=1;i<=n-2;i++) {
   if (a[i]<a[i+1] &&a[i]<a[i-1]) {
    b.push_back(a[i]);
   }
}
if ((int)b.size()==0) {
    cout<<"Khong co";
    sum=-1;
    //return 0;
}
for (int i=0;i<(int)b.size();i++) {
    sum+=b[i];
    cout<<b[i]<<" ";
}
cout<<endl<<sum;


}
