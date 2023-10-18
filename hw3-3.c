#include <stdio.h>
main()
{
int a=0,b=0,c=0,x,y,e,f;

scanf("%d %d",&x,&y);
e=x;
f=y;
while(x>0){
	a=x%10;
	x=x/10;
	c=c+a;
	
}
while(y>0){
	a=y%10;
	y=y/10;
	b=b+a;
	}
	if(c>b){
		printf("%d",f);
	}
	if(c<b){
		printf("%d",e);
	}
	if(c==b&&e>f){
		printf("%d",f);
	}
	if(c==b&&e<f){
		printf("%d",e);
	}
}


