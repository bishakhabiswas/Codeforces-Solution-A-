///230B. T-primes

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[1000000]={0};
    for(int i=2;i<=1000000;i++)
    {     if(arr[i]==0){
        for(int j=2;i*j<=1000000;j++)
        {
          arr[i*j]=1;
        }

    }
    }

    int t;
    cin>>t;
    long long int b;
    long long int sq;
    for(int i=1;i<=t;i++)
    {
      cin>>b;
      sq= sqrt(b);
      if(b==1) cout<<"NO"<<endl;
     else if(sq*sq==b && arr[sq]==0)
      {
          cout<<"YES"<<endl;
      }
      else{
            cout<<"NO"<<endl;
            }
    }

}


