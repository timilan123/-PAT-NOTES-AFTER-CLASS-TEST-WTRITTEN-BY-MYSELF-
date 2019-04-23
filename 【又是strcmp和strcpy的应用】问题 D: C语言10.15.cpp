#include<stdio.h>
#include<string.h>
void swap(char p1[], char p2[])
{
	char p[100];
	strcpy(p, p1);
	strcpy(p1, p2);
	strcpy(p2, p);
}

int main() {
	char s1[100], s2[100], s3[100];
	gets_s(s1);
	gets_s(s2);
	gets_s(s3);
	if (strcmp(s1, s3) > 0)
		swap(s1, s3);
	if (strcmp(s2, s3) > 0)
		swap(s2, s3);
	if (strcmp(s1, s2) > 0)
		swap(s1, s2);
	puts(s1);
	puts(s2);
	puts(s3);
	return 0;
}
