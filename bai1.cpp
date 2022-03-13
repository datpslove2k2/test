// Tinh dien tich hinh thang
#include <stdio.h>
main () {
	float a, b, h, s;
	printf ("Nhap day lon, day be, chieu cao: \n");
	scanf ("%f%f%f", &a, &b, &h);
	s = h*((a+b)/2);
	printf ("Dien tich cua hinh thang la: %0.2f \n", s);
	return 0;
}
