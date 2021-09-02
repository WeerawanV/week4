#include<stdio.h>
int main() {
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	if (a > b && a > c) {
		if (b > c) {
			printf("%d", a + b);
		}
		else {
			printf("%d", a + c);
		}
	}
	else if (b > a && b > c) {
		if (a > c) {
			printf("%d", b + a);
		}
		else {
			printf("%d", b + c);
		}
	}
	else if (c > a && c > b) {
		if (a > b) {
			printf("%d", c + a);
		}
		else {
			printf("%d", c + b);
		}
	}
	else if (a == b) {
		if (a > c && b > c ){
			printf("%d", a + b);
		}
		else {
			printf("%d", a + c);
		}
	}
	else if (a == c) {
		if (a > b && c > b) {
			printf("%d", a + c);
		}
		else {
			printf("%d", a + b);
		}
	}
	else if (b == c) {
		if (b > a && c > a) {
			printf("%d", b + c);
		}
		else {
			printf("%d", b + a);
		}
	}
	else if (a == b && a == c && b == c) {
		printf("%d", a + b);
	}
	return 0;
}
