#include<stdio.h>
#include<time.h>
int main(){
	int total;
	int a;
	int mtree(int ,int);
 	printf("½Ð¿é¤J¼h¼Æ:");
 
 	scanf("%d",&a);
 	clock_t t1,t2;
 	t1=clock();
	a=a*2-1;
	mtree(1,a);
}
int printblank(int x){
if(x<=0)
{
	return 0;
}
	x--;
	printf(" ");
	return printblank(x);
		
		
}

int printstar(int b){
	if(b<=0)
	{
		return 0;
	}
	b--;
	printf("*");
	return printstar(b);
	}
int  mtree (int b,int a )
{

   int j,k,c;
   clock_t t1,t2;
   c=(a-b)/2;
     
 

    printblank(c);
    printstar(b);
    printblank(c);
	printf("\n");

if(b>a)
{
	return 0;
}
if(b!=a)
{
	return mtree(b+2,a);
}	
t2=clock();
printf("%lf\n",(t2-t1)/(double)(CLOCKS_PER_SEC));
		
 

 

}

