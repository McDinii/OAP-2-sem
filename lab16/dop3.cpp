////1 variant
///*������ ������ �, � ������ � ����������� ��� �������� ������� �, 
//������� ������ ������. ������ � ������������� �� ��������, ���������
//��������� ����������: ��������, ���������� ������� ��������.*/
//#include<iostream>
//#define N 10
//using namespace std;
//void scanf_array(int* arr, int size)
//{
//	int i;
//	for (i = 0; i < size; ++i)
//		scanf_s("%d", &arr[i]);
//}
//
//void bubblesort(int* arr, int size)
//{
//
//	int i, j, t;
//	for (i = 1; i < size; i++)
//		for (j = size - 1; j >= i; j--)
//			if (arr[j - 1] < arr[j])
//			{
//				t = arr[j - 1];
//				arr[j - 1] = arr[j];
//				arr[j] = t;
//			}
//
//}
//
//void insertSort(int* A, int size)
//{
//	int t, i, j;
//	for (i = 1; i < size; i++)
//	{
//		t = A[i];
//		for (j = i - 1; j >= 0 && A[j] < t; j--)
//			A[j + 1] = A[j];
//		A[j + 1] = t;
//	}
//}
//
//
//void print_array(int* arr, int size)
//{
//	int i;
//	for (i = 0; i < size; ++i)
//		printf("%d ", arr[i]);
//}
//int main()
//{
//	setlocale(LC_CTYPE, "Russian");
//	int A[N];
//	int B[N];
//	int size = 0;
//	int max_index_of_array;
//	int i = 2;
//	cout << "������� �������� �������" << endl;
//	scanf_array(A, N);
//	for (; i < N; i += 2)
//		B[size++] = A[i];
//
//	cout << "������:"; print_array(B, size);
//	cout << endl;
//	bubblesort(B, size);
//	cout << "���������� ���������:"; print_array(B, size);
//	cout << endl;
//	insertSort(B, size);
//	cout << "���������� ������� ��������:"; print_array(B, size);
//	cout << endl;
//	return 0;
//}