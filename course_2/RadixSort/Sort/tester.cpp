#include "TQueue.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	int numb = 0;
	int k = 0;
	TQueue test_1;
	TQueue test_2;
	cout << "������� ���������� �����: ";
	cin >> k;
	cout << "������� �����" << "\n";
	for (int i = 0; i < k; i++)
	{
		cin >> numb;
		test_1.Add(numb);
	}
	TQueue test_3(test_1);
	test_2 = test_1;
	cout << "���� �����: " << "\n";
	for (int i = 0; i < k; i++)
	{
		numb = test_1.Del();
		cout << numb << " ";
	}
	cout << "\n";
	cout << "���� ����� �� ������ �������: " << "\n";
	for (int i = 0; i < k; i++)
	{
		numb = test_3.Del();
		cout << numb << " ";
	}
	cout << "\n";
	cout << "���� ����� � ������ �������: " << "\n";
	for (int i = 0; i < k; i++)
	{
		numb = test_2.Del();
		cout << numb << " ";
	}
	cout << "\n";
	return 0;
}