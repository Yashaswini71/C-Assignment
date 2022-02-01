#include<stdio.h>
  void st(void);
  int b=3;
  static int c=4;
  int main()
  {
          int a=2;
          register int d=5;
          static int e=6;
         printf("a is auto=%d\nb is external=%d\nc is static global=%d\nd is register=%d\ne is local static=%d\n",a,b,c,d,e);
         st();
}
void st(void)
{
         printf("b is external in sub fun=%d\n\nc is static global in sub fun=%d\n",b,c);
}
