#include <stdio.h>
#include <locale.h>

#define MAX_SIZE_1 30
#define MAX_SIZE_2 30

int main() {
	setlocale(LC_ALL, "Rus");
	int arr_1[MAX_SIZE_1], arr_2[MAX_SIZE_1];
	int size_1, size_2, cont = 1, exist = 0;
	
	do {

	printf("������� ������� 1��(���� %d) � 2��(���� %d) �������(size1 size2): ", MAX_SIZE_1, MAX_SIZE_2);
	scanf("%d%d", &size_1, &size_2);

	while (1) {
		if ((size_1 > 0 && size_1 <= MAX_SIZE_1) && (size_2 > 0 && size_2 <= MAX_SIZE_2)) break;
		if ((size_1 <= 0 || size_1 > MAX_SIZE_1)) {
			printf("\n������ 1�� ������� ����� �������(��� 1, ���� %d)\n", MAX_SIZE_1);
			printf("������� ������ 1�� ������� ������: ");
			scanf("%d", &size_1);
		}
		if ((size_2 <= 0 || size_2 > MAX_SIZE_2)) {
			printf("\n������ 2�� ������� ����� �������(��� 1, ���� %d)\n", MAX_SIZE_2);
			printf("������� ������ 2�� ������� ������: ");
			scanf("%d", &size_2);
		}
	}

	printf("\n��������� 1�� ������(%d ��-��)\n", size_1);
	for (int i = 0; i < size_1; i++) {
		printf("������� %d� �������: ", i + 1);
		scanf("%d", &arr_1[i]);
	}
	printf("\n��������� 2�� ������(%d ��-��)\n", size_2);
	for (int i = 0; i < size_2; i++) {
		printf("������� %d� �������: ", i + 1);
		scanf("%d", &arr_2[i]);
	}

	for (int i = 0; i < size_1; i++) {
		int find = 0;
		for (int j = 0; j < size_2; j++) {
			if (arr_1[i] == arr_2[j]) {
				find = 1;
				break;
			}
		}
		if (!find) {
			if (!exist) {
				printf("\n������ ��-�� 1�� �������, ������� ��� �� ������:\n");
				exist = 1;
			}
			printf("%d\n", arr_1[i]);
		}
	}
	if (!exist) printf("\n� 1�� ������� ��� ��-��, ������� ��� �� 2��\n");
	
	printf("\n������� 1, ����� ����������: ");
	scanf("%d", &cont);
	printf("\n");

	} while (cont == 1);
}

