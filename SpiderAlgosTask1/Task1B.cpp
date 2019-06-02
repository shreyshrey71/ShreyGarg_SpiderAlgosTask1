#include<bits/stdc++.h>

using namespace std;

int main()
{string a,b;
 int r=0;
 cin>>a;
 cin>>a;
 while(a.size()%2==0)
 {b=a;
  a.resize(a.size()/2);
  if(b==a+a)
  r++;
 }
 cout<<r;
 return 0;
}
