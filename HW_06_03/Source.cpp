
#include<iostream> 
#include<stdio.h>
#include<locale.h>
#include<time.h>
#include<Windows.h>
#include <iomanip>
#include<cstring>
using namespace std;
void task1()
{
	char str[100];
	cin.ignore();
	cin.getline(str, 100);
	int f = strnlen_s(str, 100);
	for (size_t i = 0; i <= f; i++)
	{
		if (i == (f - 7))
		{
			switch (str[i])
			{
			case 49:cout << "îäčí ěčëëčîí  "; break;
			case 50:cout << "äâŕ ěčëëčîíŕ  "; break;
			case 51:cout << "ňđč ěčëëčîíŕ  "; break;
			case 52:cout << "÷ĺňűđĺ ěčëëčîíŕ  "; break;
			case 53:cout << "ď˙ňü ěčëëčîíîâ  "; break;
			case 54:cout << "řĺńňü  ěčëëčîíîâ  "; break;
			case 55:cout << "ńĺěü ěčëëčîíîâ  "; break;
			case 56:cout << "âîńĺěü  ěčëëčîíîâ  "; break;
			case 57:cout << "äĺâ˙ňü ěčëëčîíîâ    "; break;
			default:
				break;
			}
		}
		if (i == (f - 6) || i == (f - 3))
		{
			switch (str[i])
			{
			case 49:cout << "ńňî  "; break;
			case 50:cout << "äâĺńňč  "; break;
			case 51:cout << "ňđčńňŕ  "; break;
			case 52:cout << "÷ĺňűđĺńňŕ "; break;
			case 53:cout << "ď˙ňüńîň  "; break;
			case 54:cout << "řĺńňüńîň  "; break;
			case 55:cout << "ńĺěüńîň  "; break;
			case 56:cout << "âîńĺěüńîň    "; break;
			case 57:cout << "äĺâ˙ňüńîň    "; break;
			default:
				break;
			}
		}
		if (i == (f - 5) || i == (f - 2))
		{
			switch (str[i])
			{
			case 49:cout << "äĺń˙ňü  "; break;
			case 50:cout << "äâŕäöŕňü  "; break;
			case 51:cout << "ňđčäöŕňü  "; break;
			case 52:cout << "ńîđîę "; break;
			case 53:cout << "ď˙ňüäĺń˙ň  "; break;
			case 54:cout << "řĺńňüäĺń˙ň  "; break;
			case 55:cout << "ńĺěüäĺń˙ň  "; break;
			case 56:cout << "âîńĺěüäĺń˙ň    "; break;
			case 57:cout << "äĺâ˙íîńňî    "; break;
			default:
				break;
			}
		}
		if (i == (f - 4))
		{
			switch (str[i])
			{
			case 48:cout << " ňűń˙÷ "; break;
			case 49:cout << "ňűń˙÷ŕ  "; break;
			case 50:cout << "äâĺ ňűń˙÷č  "; break;
			case 51:cout << "ňđč ňűń˙÷č  "; break;
			case 52:cout << "÷ĺňűđĺ ňűń˙÷č "; break;
			case 53:cout << "ď˙ňü ňűń˙÷  "; break;
			case 54:cout << "řĺńňü ňűń˙÷  "; break;
			case 55:cout << "ńĺěü ňűń˙÷ "; break;
			case 56:cout << "âîńĺěü ňűń˙÷    "; break;
			case 57:cout << "äĺâ˙ňü ňűń˙÷    "; break;
			default:
				break;
			}
		}
		if (i == f - 1)
		{
			switch (str[i])
			{
			case 48:cout << "  "; break;
			case 49:cout << "îäčí  "; break;
			case 50:cout << "äâŕ  "; break;
			case 51:cout << "ňđč  "; break;
			case 52:cout << "÷ĺňűđĺ  "; break;
			case 53:cout << "ď˙ňü   "; break;
			case 54:cout << "řĺńňü   "; break;
			case 55:cout << "ńĺěü  "; break;
			case 56:cout << "âîńĺěü     "; break;
			case 57:cout << "äĺâ˙ňü     "; break;
			default:
				break;
			}
		}
	}

}



int main()
{
	setlocale(LC_ALL, "");
	srand(time(NULL));
	int a, d;
	do
	{
		printf("Which task");
		scanf_s("%d", &d);
		switch (d)
		{
		case 1: task1(); break;

		default:
			break;
		}
		printf(" do you want continue y(1)/no(2)");
		scanf_s("%d", &a);
	} while (a == 1);
	system("pause");
}