///1352A. Sum of Round Numbers

#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
    cin>>t;
    while(t--)
    {
        vector <int> ans;
        int n,x=1;
        cin>>n;
        while(n!=0)
        {
            x*=10;
            int p=n%x;
            if(p!=0) ans.push_back(p);
            n-=p;
        }
        cout<<ans.size()<<endl;
        for(int i=0;i<ans.size();i++)
        {
            cout<<ans[i]<<" " ;
        }
    }


}
