#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h> 
struct SinhVien{
    char TenSV[50];
    char MaSV[50];
    char Lop[50];
    int NamSinh;
};
void Nhap(SinhVien sv[], int n){
    for(int i=0; i<n; i++){
        printf("\nNhap thong tin sinh vien thu %d:",i);
        printf("\nNhap ten sinh vien:");
        fflush(stdin);
        gets(sv[i].TenSV);
        printf("\nNhap ma sinh vien:");
        fflush(stdin);
        gets(sv[i].MaSV);
        printf("\nNhap lop:");
        fflush(stdin);
        gets(sv[i].Lop);
        printf("\nNhap nam sinh:");
        scanf("%d", &sv[i].NamSinh);
    }
}
void Xuat(SinhVien sv[], int n){
    printf("\n-----THONG TIN SINH VIEN----\n");
    printf("TenSv \t\t MaSV \t Lop \t NamSinh \n");
    for(int i=0; i<n; i++){
        printf("%s \t %s \t %s \t %d \n",sv[i].TenSV,sv[i].MaSV,sv[i].Lop,sv[i].NamSinh);
    }
}
int main(){ 
    SinhVien sv[100];
    int n; 
    printf("Nhap so sinh vien:");
    scanf("%d",&n);
    Nhap(sv,n);
    Xuat(sv,n);
}
