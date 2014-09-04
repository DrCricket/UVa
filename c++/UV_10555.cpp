#include<cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>


using namespace std;

int main(void)
{
  double a= 19.999999999;
  int c=10000;
  double b=(a-floor(a))*c;
  int d=(int)floor(a)*c+(int)(b+.5);

  printf("%f %d\n",b,d);
  while(1) {
     if(d%10==0) {
    d=d/10;
    c=c/10;
 }
 else break;
  }
  printf("%d/%d",d,c);
  return 0;
}
