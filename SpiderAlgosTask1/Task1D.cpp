#include<bits/stdc++.h>

using namespace std;

int main()
{int n,r,x,y;
 cin>>n>>r>>x>>y;
 r=0;
 int c[n],s[n];
 for(int i=0;i<n;i++)
 cin>>c[i];
 for(int i=0;i<n;i++)
 {cin>>s[i];
  if(c[i])
  {if(s[i])
   r+=x;
   else
   r-=y;
  }
 }
 if(r<0)
 cout<<"demoted";
 else if(r>0)
 cout<<"promoted";
 else
 cout<<"no change";
 return 0;
}
