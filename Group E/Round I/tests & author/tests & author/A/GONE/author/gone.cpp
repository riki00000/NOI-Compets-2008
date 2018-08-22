#include<cmath>
#include<cstdio>

int n,p;

int main()
{
  scanf("%d%d",&n,&p);
  int t=1;
  int c=0;
  do
  {
   t += (p+1);
   if(t>n) t -= n;
//   printf("%d\n",t);
   c++;
  }
  while(t!=1);
    
    
//  printf("c=%d\n",c); 
  
  double len=sqrt(pow((1-cos((p+1)*(2.0*M_PI/n))),2.0)+
                  pow((sin((p+1)*(2.0*M_PI/n))),2));
  
//  printf("%lf\n",len);
  printf("%0.5lf\n",c*len);
    
}
