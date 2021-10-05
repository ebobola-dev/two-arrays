#include <stdio.h>
#include <locale.h>

#define MAX_SIZE_1 30
#define MAX_SIZE_2 30

int main() {
	setlocale(LC_ALL, "Rus");
	int arr_1[MAX_SIZE_1], arr_2[MAX_SIZE_1];
	int size_1, size_2, cont = 1, exist = 0;
	
	do {

	printf("Введите размеры 1го(макс %d) и 2го(макс %d) массива(size1 size2): ", MAX_SIZE_1, MAX_SIZE_2);
	scanf("%d%d", &size_1, &size_2);

	while (1) {
		if ((size_1 > 0 && size_1 <= MAX_SIZE_1) && (size_2 > 0 && size_2 <= MAX_SIZE_2)) break;
		if ((size_1 <= 0 || size_1 > MAX_SIZE_1)) {
			printf("\nРазмер 1го массива введён неверно(мин 1, макс %d)\n", MAX_SIZE_1);
			printf("Введите размер 1го массива заново: ");
			scanf("%d", &size_1);
		}
		if ((size_2 <= 0 || size_2 > MAX_SIZE_2)) {
			printf("\nРазмер 2го массива введён неверно(мин 1, макс %d)\n", MAX_SIZE_2);
			printf("Введите размер 2го массива заново: ");
			scanf("%d", &size_2);
		}
	}

	printf("\nЗаполните 1ый массив(%d эл-ов)\n", size_1);
	for (int i = 0; i < size_1; i++) {
		printf("Введите %dй элемент: ", i + 1);
		scanf("%d", &arr_1[i]);
	}
	printf("\nЗаполните 2ой массив(%d эл-ов)\n", size_2);
	for (int i = 0; i < size_2; i++) {
		printf("Введите %dй элемент: ", i + 1);
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
				printf("\nСписок эл-ов 1го массива, которых нет во втором:\n");
				exist = 1;
			}
			printf("%d\n", arr_1[i]);
		}
	}
	if (!exist) printf("\nВ 1ом массиве нет эл-ов, которых нет во 2ом\n");
	
	printf("\nВведите 1, чтобы продолжить: ");
	scanf("%d", &cont);
	printf("\n");

	} while (cont == 1);
}

