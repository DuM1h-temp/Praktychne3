#include <stdio.h>
#include <Windows.h>

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
    int p;
    printf("������ ������: ");
    scanf("%d", &p);

    if (p < 1 || p > 30) {
        printf("������ �������� p!\n");
        return 1;
    }

    long long a[31];
    long long b[31];

    a[1] = 2;
    b[1] = 0;

	int i;
    for (i = 2; i <= p; i++) {
        a[i] = a[i - 1] + b[i - 1];
        b[i] = a[i - 1];
    }

    long long result = a[p] + b[p];
    printf("ʳ������ %d-��������� �����: %lld\n", p, result);

    return 0;
}

