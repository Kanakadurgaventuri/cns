/*
Exp:1(a)
V.K.Makarajyothi
23K61A05I7
24/11/26
*/
#include<stdio.h>
#include<string.h>
void main() {
	char str[] = "Hello World";
	int length, i;
	char ch;
	length = strlen(str);
	for(i = 0; i < length; i++) {
		ch = str[i] ^ 0;
		printf("%c", ch);
	}
}
