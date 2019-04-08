#include<stdio.h>
#include<stdlib.h>
#include <time.h>
#define N 30
void main()
{
    int a,b,e,k,i,n,num=0;
    float c,d,f;

    do{
    printf("\n请输入数字类型(1.整数 2.小数) -1为退出程序: ");
     scanf("%d",&n);

    switch(n)
    {
        case 1:
		{
           for(i=0;i<N;i++)
		   {
             a=rand()%50+1;
             b=rand()%50+1;
             e=rand()%50+1;
             k=rand()%4+1;
			 if(num%5==0)
			   printf("\n");
             printf("%d",a);
             switch(k)
			 {
             case 1:printf("+");break;
             case 2:printf("-");break;
             case 3:printf("*");break;
             case 4:printf("/");break;
			 }
			 printf("%d",b);
			 switch(k)
			 {
             case 1:printf("-");break;
             case 2:printf("*");break;
             case 3:printf("/");break;
             case 4:printf("+");break;
			 }
			printf("%d=        ",e);
            
            //printf("%d",e);
             
           num++; 
		  }
    break;
    }
    break;
	int k;
    case 2:
    {
     for(i=0;i<N;i++)
    {
    c=rand()*0.001+1;
    d=rand()*0.001+1;
    f=rand()*0.001+1;
    k=rand()%4+1;
	if(num%3==0)
		printf("\n");
    printf("%0.2f",c);
    switch(k)
    {
    case 1:printf("+");break;
    case 2:printf("-");break;
    case 3:printf("*");break;
    case 4:printf("/");break;
    }
    printf("%0.2f",d);
	switch(k)
    {
    case 1:printf("*");break;
    case 2:printf("-");break;
    case 3:printf("+");break;
    case 4:printf("/");break;
    }
    printf("%0.2f=     ",f);
	num++;
    }
    break;
    }
    break;
    }
    }while(n!=-1);
}