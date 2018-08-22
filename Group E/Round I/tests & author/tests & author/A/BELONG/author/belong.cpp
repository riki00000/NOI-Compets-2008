#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;
long long N=5, P, Q;
int rec(char *s,int l)
{if (l<=0) return 0;
 if (l==1) return *s=='1';
 if (s[0]=='1' && s[1]=='1' && rec(&s[2],l-2)) return 1;
 for (int i=1;i<l-1;i++)
  if (s[i]=='0' && rec(s,i) && rec(&s[i+1],l-i-1)) return 1;
 return 0;
}
char *strrev(char *s)
{char c;
 for (int i=0,j=strlen(s)-1;i<j;i++,j--)
 {c=s[i];s[i]=s[j];s[j]=c;}
 return s;
}
int inM1(long long a)
{char b[64],i;
 for (i=0;a;i++)
  {b[i]='0'+ (a&1); a>>=1;}
 b[i]=0;
 strrev(b);
 return rec(b,strlen(b));
}
int inM2(long long a)
{char d[64],c=0;
 do
 {d[c++]=a&1;
  a>>=1;
 }while (a);
 if (!(c&1)) return 0;
 for (c--;c>=0;c-=2) if (!d[c]) return 0;
 return 1;
}
int main()
{cin>>N>>P>>Q;
 //cout<<inM1(N)<<inM1(P)<<inM1(Q)<<endl;
 cout<<inM2(N)<<inM2(P)<<inM2(Q)<<endl;
 return 0;
}
