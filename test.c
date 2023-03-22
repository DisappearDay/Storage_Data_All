#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>



//int main() {
//	char a = -1;
//
//	// 10000000000000000000000000000001----原码
//	// 11111111111111111111111111111110----反码
//	// 11111111111111111111111111111111----补码
//	// 11111111
//	//拿出来的时候补符号位1
//	signed b = -1;
//	// 11111111
//	//拿出来的时候补符号位1
//	unsigned c = -1;
//	// 11111111
//	// //拿出来的时候补0，因为是无符号数
//	//存入的是一样的，拿出来有限制条件，所以不一样了
//	printf("%d,%d,%d", a, b, c);  //-1，-1，255
//	return 0;
//}
//int main() {
//	char a = -128;
//	printf("%u\n", a);//u表示打印一个无符号的十进制整数。 11111111111111111111111110000000
//	return 0;
//}
//
//
//
//int main() {
//	char a = 128;
//	printf("%u\n", a);// 因为char存不下128所以，128会转换->127+1，则和char=-128内容相同
//	return 0;
//}

//int main() {
//	int a = -20;
//	unsigned int b = 10;
//	printf("%d\n", a + b);
// return 0;
//}

//int main() {
//	unsigned int i = 0;
//	for (i = 9; i >= 0; i--) {
//		printf("%u\n", i);
//	}
//	return 0;
//}


//strlen的寻找结束标志是'\0';
//int main() {
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++) {
//		a[i] = -1 - i;
//	}
//	printf("%d", strlen(a));  //-1 -2 ···-127  -128 127···3 2 1 (总共255)---  0(结束)
//	return 0;
//}


//死循环
//int main() {
//	unsigned char i = 0;
//	for (i = 0; i <= 255; i++) {
//		printf("hello world!\n");
//	}
//	return 0;
//}

//int main() {
//	double a = 1E10;//1.0×10~10  一点零乘以十的十次方
//	printf("%lf", a);
//	return 0;
//}

//int main() {
//	int a = 9;
//	float* pf = (float*)&a;
//	printf("%d\n", a);
//	printf("%lf\n", *pf);
//	*pf = 9.0;
//	printf("%d\n", a);
//	printf("%lf\n", *pf);
//	return 0;
//}


//int main() {
//	float a = 10.25;
//	// 1010.01
//	// S=0
//	// E=3
//	// M=1.01001
//	// -1^S * M * 2^E
//	// 0 10000010 01001000000000000000000
//	//0100 0001 0010 0100 0000 0000 0000 0000
//	// 0X 41240000
//	printf("%f\n",a);
//}
