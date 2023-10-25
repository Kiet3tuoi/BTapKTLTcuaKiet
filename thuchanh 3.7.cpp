#include<stdio.h>
#include<math.h>
int main()
{
	float a,b,c,delta,x1,x2;
	printf("\n Nhap so a:");
	scanf("%f", &a);
	printf("\n Nhap so b:");
	scanf("%f", &b);
	printf("\n Nhap so c:");
	scanf("%f", &c);
    {
    	delta=b*b-4*a*c;
    	if(delta>0)
    	x1=(-b+sqrt(delta))/(2*a);
    	x2=(-b-sqrt(delta))/(2*a);
    	printf("\n Nghiem thu nhat la:%0.2f", x1);
    	printf("\n Nghiem thu hai la:%0.2f", x2);
		if(delta==0)
		{
			printf("\n phuong trinh co nghiem kep: x1=x2=%0.2f",-b/2*a);
		}

		if(delta<0)
		{
		printf("\n Phuong trinh vo nghiem");
	    }

    }
	return 0;
}
