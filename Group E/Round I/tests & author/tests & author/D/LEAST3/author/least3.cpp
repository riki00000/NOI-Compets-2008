#include <iostream>
using namespace std;
int main(void)
{int a,b,c,d;
 cin>>a>>b>>c;
 if (a>b){d=a;a=b;b=d;}
 if (b>c){d=b;b=c;c=d;}
 if (a>b){d=a;a=b;b=d;}
 if (a%3==0) cout<<a;
 else if (b%3==0) cout<<b;
 else if (c%3==0) cout<<c;
 else if ((a+b)%3==0) cout<<a<<b;
 else if ((a+c)%3==0) cout<<a<<c;
 else if ((b+c)%3==0) cout<<b<<c;
 else cout<<a<<a<<a;
 cout<<endl;
 return 0;
}
