#include<stdio.h>

struct student{
	char name[50];
	int age;
	int sdt;
	char add[100];
};



void scanStudent(struct student sdt ,int n){
	for(int i = 0; i<n; i++){
	printf("vui long nhap ten sinh vien: ");
	gets(sdt[i]);
	printf("nhap vao tuoi cua sinh vien: ");
	scanf("%d", &sdt.age);
	printf("Nhap vao so dien thoai cua sinh vien: ");
	scanf("%d", &sdt.sdt);
	getchar();
	printf("Nhap vao dia chi cua sinh vien: ");
	gets(sdt.add);
	}
}

void printStudent(struct student std[],int n){
	printf("ten sinh vien: %s\n", std.name);
	printf("tuoi sinh vien: %d\n", std.age);
	printf("so dien thoai sinh vien: %d\n", std.sdt);
	printf("dia chi sinh vien: %s\n", std.add);
}

int main(){
	struct student sdt1;
	int n;
	scanf("%d", &n);
	printStudent(sdt1);
}
