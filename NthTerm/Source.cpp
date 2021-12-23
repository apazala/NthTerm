#include <stdio.h>

int find_nth_term(int n, int a, int b, int c) {
	int ret, i;
	switch (n)
	{
	case 1: 
		ret = a;
		break;

	case 2:
		ret = b;
		break;

	case 3:
		ret = c;
		break;

	default:
		ret = a + b + c;
		for (i = 5; i <= n; i++) {
			a = b;
			b = c;
			c = ret;
			ret = a + b + c;
		}
		break;
	}

	return ret;
}

int main() {
	int n, a, b, c;

	scanf("%d %d %d %d", &n, &a, &b, &c);
	int ans = find_nth_term(n, a, b, c);

	printf("%d", ans);
	return 0;
}