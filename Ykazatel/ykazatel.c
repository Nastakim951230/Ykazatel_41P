#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#define N 1000000
#define L 10
int a[N];

void Redak(int i)
{
	int* p = &i;
	printf("\n Ваше число %d", *p);
	printf("\nХотите изменить число, если да то нажмите 1, если нет то нажмите любую цифру");

}

void Dina()
{
	for (int i = 0; i < N; i++)
	{
		a[i] = i;
		printf("%d ", a[i]);
	}
	system("pause>nul");
	int* l = malloc(N * sizeof(int));
	system("pause>nul");
	printf("\nВыделение памяти под указатель\n");
	free(l);
	printf("Очистка памяти под указатель");
	system("pause>nul");
}

void arr_make(int arr[], int min, int max) {
	int* minyk = &min;
	int* maxyk = &max;
	for (int i = 0; i < L; i++) {
		arr[i] = rand() % (*maxyk + *minyk);
		printf("%d ", arr[i]);
	}
	printf("\n");
}



int* Piramida(int n)
{
	int* a = calloc(n, sizeof(int));
	for (int i = 0; i < n; i++)
	{
		*(a + i) = i;
	}
	return a;
}
void show(int* a, int n)
{
	int i = 0;
	int l = 1;
	while (i < n)
	{
		for (int j = 0; j < l; j++)
		{
			printf("%d ", *(a + i));
			i++;
		}
		l++;
		printf("\n");
	}
}


int main(void)
{

	system("chcp 1251>nul");
	int n;

	printf("Выберите вариант:\n1. Редактирование и вывод значения целочисленной при обращении к ней из консольного окна\n2. Динамическое создание и удаление массива из одного миллиона элементов типа int. значения элементов массива должны быть равны значению их индексов.\n3. Функция для вывода на экран консоли массива произвольной длины (сам массив передается в качестве аргумента функции)\n4. используя указатели, сформировать треугольную матрицу\n");
	scanf_s("%d", &n);
	switch (n)
	{
	case 1:
	{
		system("cls");
		int i;
	A:
		printf("Введите число ");
		scanf_s("%d", &i);
		Redak(i);
		int s;
		scanf_s("%d", &s);
		switch (s)
		{
		case 1:
		{
			goto A;
			break;
		}
		default: {
			
			break;
		}
		}
		system("pause");
		system("cls");
	}
	case 2: {
		system("cls");
		Dina();
		system("pause");
		system("cls");
	}
	case 3: {
		system("cls");
		int arrI[L], max, min;
		
		printf("\nВведите максимальное число \n");
		scanf_s("%d", &max);
		printf("\nВведите минимальное число \n");
		scanf_s("%d", &min);

		arr_make(arrI, min, max);
		system("pause");
		system("cls");
	}

	case 4: {
		system("cls");
		int n = 15;
		int* a = Piramida(n);
		show(a, n);\
		system("pause");
		system("cls");
	}
	default:
		break;
	}

}