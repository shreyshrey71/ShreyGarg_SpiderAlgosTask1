#include<bits/stdc++.h>

using namespace std;

string sol(string a)
{string z;
 int s=1;
 z="01";
 for(int i=a.size()-1;i>0&&s;i--)
 {if(a[i]=='1')
  {a[i]='0';
   s=0;
  }
  else
  {a[i]='1';
  }
 }
 cout<<a<<" ";
 for(int j=0,s=1;j<2;j++,s=1)
 for(int i=a.size()-1;i>0&&s;i--)
 {if(a[i]=='1')
  {a[i]='0';
  }
  else
  {a[i]='1';
   s=0;
  }
 }
 cout<<a;
}

int main()
{string a,b,c;
 cin>>a;
 cin>>a;
 b=c="1";
 for(int i=1;i<a.length();i++)
 {b+="0";
  c+="1";
 }
 if(a==b||a==c)
 cout<"-1";
 else
 sol(a);
 return 0;
}
