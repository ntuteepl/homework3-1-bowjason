#include <stdio.h>
int main()
{
int s1,d1,s2,d2,s3,d3,x=1,a=0,b=0;
scanf("%d %d %d %d %d %d",&s1,&d1,&s2,&d2,&s3,&d3);
if(s2<=s1&&s1<=d2||s2<=d1&&d1<=d2||s3<=s1&&s1<=d3||s3<=d1&&d1<=d3){
	x=x+1;
	a=a+1;
}
if(s2<=s3&&s3<=d2||s2<=d3&&d3<=d2||s1<=s3&&s3<=d1||s1<=d3&&d3<=d1){
	x=x+1;
	a=a+1;
}
if(s3<=s2&&s2<=d3||s3<=d2&&d2<=d3||s1<=s2&&s2<=d1||s1<=d2&&d2<=d1){
	x=x+1;
a=a+1;
}
if(d1==s2||d1==s3||d2==s1||d2==s3||d3==s1||d3==s2){
	x=x-1;b=1;
}

if(a>=2){
	x=x-1;
}
if(a==3&&b!=1){
	x=3;
}
if(s1==s2&&s2==s3&&d1==d2&&d2==d3){
	x=3;
}
printf("%d",x);
}

