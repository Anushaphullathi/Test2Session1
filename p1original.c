#include <stdio.h>
#include<math.h>
void input(float *x1,float *y1,float *x2,float *y2)
{
  printf("Enter the value of x1,y1,x2 and y2\n");
  scanf("%f %f %f %f",x1,y1,x2,y2);
}
void find_distance(float x1, float y1, float x2, float y2, float *area)
{
  *area=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
void output(float x1, float y1,float x2, float y2, float area)
{
printf("the distance b/w two points %f %f and %f %f  is %f:",x1,y1,x2,y2,area);
}
int main()
{
float a,b,c,d,distance;
  input(&a,&b,&c,&d);
  find_distance(a,b,c,d,&distance);
  output(a,b,c,d,distance);
  return 0;
}