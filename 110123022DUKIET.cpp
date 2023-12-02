#include<stdio.h>
#include<conio.h>
void xuatmang2c(int a[50][50], int m, int n);
void nhapmang2c(int a[50][50], int m, int n);
void gtlnmang2c(int a[50][50], int m, int n);
void gtnnmang2c(int a[50][50], int m, int n);
int main()
{
	int m, n;
	int a[50][50];
    printf("\n Nhap so dong m= ");
	scanf("%d",&m);
	printf("\n Nhap so cot n= ");
	scanf("%d",&n);
    nhapmang2c(a,m,n);
    xuatmang2c(a,m,n);
    gtlnmang2c(a,m,n);
    gtnnmang2c(a,m,n);
}
    void nhapmang2c(int a[50][50], int m, int n)
{
    for(int i=0; i<m; i++)
        for(int j=0; j<n; j++)
          {
            printf("\n Nhap phan tu a[i][j]= ");
            scanf("%d", &a[i][j]);
          }
}
    void xuatmang2c(int a[50][50], int m, int n) 
	{
          	for(int i=0; i<m; i++)
               {
               
			    for(int j=0; j<n; j++)
                      	printf("\t %d", a[i][j]);
               	
               printf("\n");
           }
}
void gtlnmang2c(int a[50][50], int m, int n){

	int max=a[0][0];
	{
    for(int i=0; i<m; i++)
    	for (int j=0; j<n; j++)
    	   {
		   if(a[i][j]>max)
    	   	 max=a[i][j];
    	   }
    	   printf("\n Phan tu lon nhat trong mang:%d", max);
    }
}
void gtnnmang2c(int a[50][50], int m, int n)
{
	int min=a[0][0];
	{
	for(int i=0; i<m; i++)
    	for (int j=0; j<n; j++)
    	{
    		if(a[i][j]<min)
    		min=a[i][j];
    	}
    	 printf("\n Phan tu nho nhat trong mang:%d", min);
	}
}

    
    
    
    
    
    
    
    
     
