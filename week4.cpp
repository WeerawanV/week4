#include<stdio.h>
int main() {
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);
	if (a != b && a != c && b != c) {
		if (a + b > a + c && a + b > b + c) {
			printf("%d", a + b);
		}
		else if (a + c > a + b && a + c > b + c) {
			printf("%d", a + c);
		}
		else if (b + c > a + b && b + c > a + c) {
			printf("%d", b + c);
		}
	}
	if (a == b && a != c && b != c){
		if (a > c && b > c){
			printf("%d", a + b);
		}
		else {
			printf("%d", a + c);
		}
	}
	if (a == c && a != b && c != b){
		if (a > b && c > b){
			printf("%d", a + c);
		}
		else {
			printf("%d", a + b);
		}
	}
	if (b == c && b != a && c != a){
		if (b > a && c > a){
			printf("%d", b + c);
		}
		else {
			printf("%d", b + a);
		}
	}
	if (a == b && a == c && b == c) {
		printf("%d", a + b);
	}
	return 0;
}

