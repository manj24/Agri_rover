# include <stdio.h>
# include <conio.h>
# include <math.h>

void main()
{
int j;
float k=0;
float a[2] ;
float b=0;
float Hx;
float Hy;
float Hxy;
float P=0.0;
float Py1,Py2;
float Px1y1,Px2y1,Px1y2,Px2y2;
float Hy_x;
float Ixy;
printf("\nEnter ur probabilities");
for (j=0;j<2;j++)
{
scanf("%f",&a[j]);
}
for (j=0;j<2;j++)
{
printf("\nUr probabilities are %f",a[j]);
}
for(j=0;j<2;j++)
{
k=k+a[j];
}
if(k==1)
{
 for(j=0;j<2;j++)
 {
 b+=a[j]*(log10(1/a[j]))/(log10(2));
   Hx=b; 
   Py1=a[0]*(1-P)+a[1]*P;
    Py2=a[1]*(1-P)+a[0]*P;
    Hy=Py1*(log10(1/Py1)/log10(2))+Py2*(log10(1/Py2)/log10(2));
    Px1y1=(1-P)*a[0];
   Px2y1=P*a[1];
   Px1y2=P*a[0];
   Px2y2=(1-P)*a[1];

   Hxy=Px1y1*(log10(1/Px1y1)/log10(2))+Px2y2*(log10(1/Px2y2)/log10(2));
    Hy_x=Px1y1*(log10(1/(1-P))/log10(2))+Px2y2*(log10(1/(1-P))/log10(2));
    Ixy=(Hy-Hy_x);
 }
 }
 else
 {
 printf("\nPlz check ur probabilities");
 }
 if(k==1)
 {
 printf("\n Result for Input Entropy Hx is %f",Hx);
 printf("\n Result for Output Entropy Hy is %f",Hy);
 printf("\nResult for Joint Entropy H(x,y) is %f",Hxy);
 printf("\nResult for Conditional Entropy H(y_x) is %f",Hy_x);
  printf("\nResult for Mutual Information I(x,y) is %f",Ixy);
}
getch();
}

