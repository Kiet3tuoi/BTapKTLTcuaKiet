#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
void xoa(char s[50], int vitrixoa);
void xoakt(char s[50]);
void chon2(char s[50]);
void nhap1c(int a[50], int n);
int chuanhoa(char s[50]);
int main(){
	char s[50], s2[50], key;
	int a[50], n;
    while(true){
    	system("cls");
    	printf("*************************************************\n");
        printf("**           THAO TAC TREN CHUOI               **\n");
        printf("**         1. Nhap mang 1 chieu                **\n");
        printf("**         2. Dem so tu trong chuoi            **\n");
        printf("**         3. Ghep chuoi                       **\n");
        printf("**         4. Kiem tra doi xung                **\n");
        printf("**         5. Dem ky tu                        **\n");
        printf("**         0. Thoat                            **\n");
        printf("*************************************************\n");
        fflush(stdin);
        printf("\n An phim chon: ");
        scanf("%d",&key);
        switch(key){
        	case 1:
        		fflush(stdin);
        		nhap1c(a,n);
        		printf("\n Bam phim bat ky de tiep tuc ");
        		getch();
        		break;
        	case 2:
        		fflush(stdin);
        		chon2(s);
        		printf("\n Bam phim bat ky de tiep tuc ");
        		getch();
        		break;
}
}
}
void nhap1c(int a[50], int n){
	printf("\n Nhap so phan tu mang: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		printf("\n Nhap phan tu mang a[%d]= ",i);
		scanf("%d",&a[i]);
	}
}
void chon2(char s[50]){
	printf("\n Nhap chuoi: ");
	gets(s);
	printf("\n Chuoi chuan hoa: ");
	chuanhoa(s);
	puts(s);
}
int chuanhoa(char s[50]){
	strlwr(s);
	xoakt(s);
	s[0]=s[0]-32;
		for(int i=0; i<strlen(s); i++){
		if(s[i]==' '&&s[i+1]!=' '){
			s[i+1]=s[i+1]-32;
		}
	}
}

void xoakt(char s[50]){
	for(int i=0; i<strlen(s);i++){
		if(s[i]==' '&&s[i+1]==' '){
			xoa(s,i);
			i--;
		}
		if(s[0]==' '){
			xoa(s,0);
		}
		if(s[strlen(s)-1]==' '){
			xoa(s,strlen(s)-1);
		}
		
	}
}
void xoa(char s[50], int vitrixoa)
{
	int n=strlen(s);
	for(int i=vitrixoa;i<n;i++){
		s[i]=s[i+1];
		s[i-1]='\0';
		}
}


        	
