#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int Calculator(char *o)
{
	int i;
	float n,n2,r=0,sum=0;
	float *p=(float *)calloc(20,sizeof(float));
	if(*o=='+')
	{
		printf("\n\nEnter numbers(-674 to finish input): ");
	    while(n!=-674)
	    {
		    scanf("%f",&p[i]);
		    n=p[i];
	        i++;
 	    }
 	    i=0;
 	    while(p[i]!=-674)
 	    {
 	    	sum=sum+p[i];
 	    	i++;
		}
		printf("\nSum is= %f",sum);
    }
    if(*o=='-')
	{
	    while(n!=-674)
	    {
	    	printf("\n\nEnter two numbers to subtract: ");
		    scanf("%f %f",&n,&n2);
		    r=n-n2;
		    printf("\nResult is= %.2f\nEnter 1 to continue subtraction or 0 to exit:",r);
		    scanf("%d",&i);
		    if(i==0)
		    break;
 	    }
    }
    if(*o=='*')
	{
		i=0;
		printf("\n\nEnter numbers(-674 to finish input): ");
	    while(n!=-674)
	    {
		    scanf("%f",&p[i]);
		    n=p[i];
	        i++;
 	    }
 	    i=0;
 	    r=1;
 	    while(p[i]!=-674)
 	    {
 	    	r=r*p[i];
 	    	i++;
		}
		printf("\nResult is= %.2f",r);
    }
    if(*o=='u')
	{
	    while(n!=-674)
	    {
	    	printf("\n\nEnter two numbers(n/n): ");
		    scanf("%f %f",&n,&n2);
		    r=n/n2;
		    printf("\nResult is= %.2f\nEnter 1 to continue divison or 0 to exit:",r);
		    scanf("%d",&i);
		    if(i==0)
		    break;
 	    }
    }
    if(*o=='p')
	{
		printf("\n\nEnter a number: ");
		scanf("%f",&n);
		printf("\nEnter power: %.2f^",n);
		scanf("%f",&n2);
 	    r=pow(n,n2);
		printf("\nResult is= %.2f",r);
    }
	if(*o=='l')
	{
		printf("\n\nEnter a number: ");
		scanf("%f",&n);
 	    r=log10(n);
		printf("\nlog(%.2f) = %.2f",n,r);
    }
	if(*o=='s')
	{
		printf("\n\nEnter degrees: ");
		scanf("%f",&n);
		n2=n;
 	    n=n*(3.142/180);
		r=sin(n);
		printf("\nsin(%.2f) = %.3f",n2,r);
    }    
	if(*o=='c')
	{
		printf("\n\nEnter degrees: ");
		scanf("%f",&n);
		n2=n;
 	    n=n*(3.142/180);
		r=cos(n);
		printf("\ncos(%.2f) = %.3f",n2,r);
    } 
	if(*o=='t')
	{
		printf("\n\nEnter degrees: ");
		scanf("%f",&n);
		n2=n;
 	    n=n*(3.142/180);
		r=tan(n);
		printf("\ntan(%.2f) = %.3f",n2,r);
    }
	if(*o=='e')
	{
		printf("\n\nFor e^x Enter x: ");
		scanf("%f",&n);
		r=exp(n);
		printf("\ne^(%.2f) = %.2f",n,r);
    } 
	if(*o=='m')
	{
		printf("\n\nFor 'n' MOD 'x'\nEnter n: ");
		scanf("%f",&n);
		printf("\nEnter x:");
		scanf("%f",&n2);
		r=fmod(n,n2);
		printf("\nResult = %.2f",r);
    }
	if(*o=='r')
	{
		printf("\nEnter a number:");
		scanf("%f",&n);
		r=sqrt(n);
		printf("\nSquare root of %.2f is %.2f",n,r);
    }        
}
int main()
{
	int i,c=1;
	char temp_o;
	printf("Available operators:\n+, -, *, n/n(Enter u), n^(Enter p), loge^x(Enter l),\nSinx(Enter s), Cosx(Enter c), Tanx(Enter t),\ne^(Enter e), Mod(Enter m), Underroot(Enter r)");
	while(c==1)
	{
		printf("\nEnter operator:");
	    scanf(" %c",&temp_o);
	    char *o=(char *)calloc(temp_o,sizeof(char));
	    o=&temp_o;
		Calculator(o);
		printf("\nTo use calculator again press 1, to exit press 0 :");
		scanf("%d",&c);
	}
}
