#include<stdio.h>
#include<conio.h>

main()
{
	
	float r, a, x, y; //ban_kinh_hinh_tron: r, canh_hinh_vuong: a, chieu_dai_hinh_chu_nhat: x, chieu_rong_hinh_chu_nhat: y;
	
	printf("Hay nhap ban kinh hinh tron: ");
	scanf("%f/n", &r);
	printf("Chu vi hinh tron la: %f\n", 2*3.14159*r);
	printf("Dien tich hinh tron la: %f\n", 3.14159*r*r);
	
	printf("Hay nhap canh hinh vuong: ");
	scanf("%f/n", &a);
	printf("Chu vi hinh vuong la: %f\n", a*4);
	printf("Dien tich hinh vuong la: %f\n", a*a);

	printf("Hay nhap chieu dai hinh chu nhat: ");
	scanf("%f/n", &x);
	
	printf("Hay nhap chieu rong hinh chu nhat: ");
	scanf("%f/n", &y);
	
	printf("Chu vi hinh chu nhat la: %f\n", (x+y)*2);
	printf("Dien tich hinh chu nhat la: %f\n", x*y);
	
	getch();	
}
