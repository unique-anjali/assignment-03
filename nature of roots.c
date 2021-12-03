main()
{
int a,b,c;
float D;
printf("enter the value of a:");
scanf("%d",&a);
printf("enter the value of b:");
scanf("%d",&b);
printf("enter the value of c:");
scanf("%d",&c);
D=(b*b)-4*a*c;
printf("the discriminent D is %.2f\n",D);
if(D<0)
     printf("the roots are imaginary");
else if(D==0)
     printf("the roots are rational,real and equal");
else if(D>0)
     printf("the roots are distinct and real");
getch();
}
