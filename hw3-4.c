#include <stdio.h>
int main()
{
int x,y,z=0,a,b=0,c,d=0,e=0,f=0,g=0,h=0,i=0,j=0,k=0,l=0,m=0,n=0,v=0;

scanf("%d",&x);
while(scanf("%d",&y)){
	e=x;
	g=y;
	while(y>0){
		a=y%10;
		y=y/10;
		b=b+1;
		c=x%10;
		x=x/10;
		if(b==1&&a==c){
		d=d+1;
		n=1;
				}
		if(b==2&&a==c){
		d=d+1;n=2;
					}
		if(b==3&&a==c){
		d=d+1;n=3;
					}
		if(b==4&&a==c){
		d=d+1;n=4;
					}
	
	
	}
	
	while(i<4){
		int a[i],b[i];
		f=g%10;
		h=e%10;
		a[i]=h;
		b[i]=f;
		e=e/10;	
		g=g/10;
		
		
		
		if((b[0]==a[0]||b[0]==a[1]||b[0]==a[2]||b[0]==a[3])&&j!=1&&n<1){
			z=z+1; 
			j=1;
			v=1;
			
		}
	    if((b[1]==a[0]||b[1]==a[1]||b[1]==a[2]||b[1]==a[3])&&k!=2&&n<2){
			z=z+1 ;
			k=2;
			
		}
		if((b[2]==a[0]||b[2]==a[1]||b[2]==a[2]||b[2]==a[3])&&l!=3&&n<3){
			z=z+1;
			l=3;
			v=1;
		}
		if((b[3]==a[0]||b[3]==a[1]||b[3]==a[2]||b[3]==a[3])&&m!=4&&n<4){
			z=z+1;
			m=4;
			
	    }
	
	i=i+1; 
	}
	if(v!=1){
		z=0;
	}
		
	printf("%d",d);printf("A");printf("%d",z);printf("B");
	}
	
}
