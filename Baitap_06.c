#include<stdio.h>
#include<conio.h>

main()
{
	
	float diem_toan, diem_ly, diem_hoa;
		
	
	printf("Hay nhap diem toan: ");
	scanf("%f/n", &diem_toan);
	
	printf("Hay nhap diem ly: ");
	scanf("%f/n", &diem_ly);
	
	printf("Hay nhap diem hoa: ");
	scanf("%f/n", &diem_hoa);
	
	
	printf("Tong diem 3 mon la: %f\n", diem_toan+diem_ly+diem_hoa);
	
	printf("Diem trung binh 3 mon la: %f", (diem_toan+diem_ly+diem_hoa)/3);
	
		
	getch();	
}
