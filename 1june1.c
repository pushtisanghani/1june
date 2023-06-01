#include<stdio.h>

fact(int n)
{
  int factorial;
  if(n==0)
  {
  	   return 1;
  }
  else
  {
  	  factorial=n*fact(n-1);
  }	
       return factorial;
}

main()
{
  int a,ans;
  printf("enter value A=");
  scanf("%d",&a);
  ans=fact(a);
  printf("factorial is=%d",ans);	
}
