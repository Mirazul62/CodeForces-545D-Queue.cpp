#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,a[100000],sum=0,count=0,i,j,l=0,r=1;
    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];

    sort(a,a+n);
    for(i=0; i<n; i++)
    {

        if(sum<=a[i])
        {
             sum+=a[i];
             count++;
            /// cout<<a[i]<<" "<<sum<<" "<<count<<endl;
        }
        else;
    }
   cout<<count;
}
