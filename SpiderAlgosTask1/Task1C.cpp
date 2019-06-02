#include<bits/stdc++.h>
using namespace std;

int a[7][7]={{0,10,8,7,16,9,43},{10,100,80,70,160,90,430},{8,80,64,56,128,72,344},{7,70,56,49,112,63,301},{16,160,128,112,256,144,688},{9,90,72,63,144,81,387},{43,430,344,301,688,387,1849}};

int main()
{int b[4][2],r[6],temp[4],f=1;
 cout<<"hello User!!!Welcome to an interactive game...\nSelect a random sequence with \"7,8,9,10,16,43\"\nPlease answer the queries asked by me\
 in the form of xth term multiplied by yth term for x,y\n\n"; 
 for(int i=0;i<4;i++)
 {cout<<i+f<<","<<i+f+1<<" :";
  
  cin>>temp[i];
  if(i==1)
  f++;
 }
 f=1;
 for(int i=0;i<4;i++,f=1)
 {for(int j=1;j<7&&f;j++)
  {for(int k=1;k<7&&f;k++)
   {if(a[j][k]==temp[i])
    {b[i][0]=a[j][0];
     b[i][1]=a[0][k];
     f=0;
	}
   }
  }
 }
 if(b[0][0]==b[1][0])
 {r[1]=b[0][0];
  r[0]=b[0][1];
  r[2]=b[1][1]; 
 }
 else if(b[0][1]==b[1][0])
 {r[1]=b[0][1];
  r[0]=b[0][0];
  r[2]=b[1][1]; 
 }
 else if(b[0][1]==b[1][1])
 {r[1]=b[0][1];
  r[0]=b[0][0];
  r[2]=b[1][0]; 
 }
 else if(b[0][0]==b[1][1])
 {r[1]=b[0][0];
  r[0]=b[0][1];
  r[2]=b[1][0]; 
 }
 if(b[2][0]==b[3][0])
 {r[4]=b[2][0];
  r[3]=b[2][1];
  r[5]=b[3][1]; 
 }
 else if(b[2][1]==b[3][0])
 {r[4]=b[2][1];
  r[3]=b[2][0];
  r[5]=b[3][1]; 
 }
 else if(b[2][1]==b[3][1])
 {r[4]=b[2][1];
  r[3]=b[2][0];
  r[5]=b[3][0]; 
 }
 else if(b[2][0]==b[3][1])
 {r[4]=b[2][0];
  r[3]=b[2][1];
  r[5]=b[3][0]; 
 }
 cout<<"The sequence is :- ";
 for(int i=0;i<6;i++)
 cout<<r[i]<<" ";
}
