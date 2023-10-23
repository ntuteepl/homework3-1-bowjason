#include <stdio.h>
int main()
{
int s1,d1,s2,d2,s3,d3,x=1,a=2,b=3,c=4,d=6;
scanf("%d %d %d %d %d %d",&s1,&d1,&s2,&d2,&s3,&d3);
if(s1<=s2&&s2<=d1||s1<=d2&&d2<=d1||s1<=s3&&s3<=d1||s1<=d3&&d3<=d1){
	x=x+1;
	a=9;
}else a=1;
if(s2<=s1&&s1<=d2||s2<=d1&&d1<=d2||s2<=s3&&s3<=d2||s2<=d3&&d3<=d2){
	x=x+1;
	b=7;
}else b=1;
if(s3<=s2&&s2<=d3||s3<=d2&&d2<=d3||s3<=s1&&s1<=d3||s3<=d1&&d1<=d3){
	x=x+1;
	c=8;
}else c=1;
if(s1==d2||s1==d3||s2==d1||s2==d3||s3==d1||s3==d2){
	x=x-2;
	d=7;
	if(s1==d2&&s1==d3&&s2==d1&&s2==d3&&s3==d1&&s3==d2){
		x=x+3;
	}
}
if(s1==s2&&s2==s3&&d1==d2&&d2==d3){
	x=3;
}

if(a==9&&b==7&&c==8) {
	x=x-1;
}
if(a==b&&b==c){
	x=1;
}
printf("%d",x);
}
