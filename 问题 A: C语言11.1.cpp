#include<stdio.h>
#include<string.h>
struct person {
	char name[20];
	int count;
} leader[3] = { "Li", 0, "Zhang", 0, "Fun", 0 };

int main() {
	int n;
	scanf("%d", &n);
	char mid[10];
	for (int i = 1; i <= n; i++) {
		scanf("%s", mid);

		if (!strcmp(mid,"Li"))
			leader[0].count += 1;
		/*注意这里只能用strcmp函数来比较字符串，用==来判断相等没有用*/
		else if (!strcmp(mid, "Zhang"))
			leader[1].count += 1;

		else if (!strcmp(mid, "Fun"))
			leader[2].count += 1;
	}

	printf("%s:%d\n", leader[0].name, leader[0].count);
	printf("%s:%d\n", leader[1].name, leader[1].count);
	printf("%s:%d\n", leader[2].name, leader[2].count);
	return 0;
}
