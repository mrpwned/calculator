#include <iostream>
#include <string>
#include <math.h>

using namespace std;

int main()
{
	string a, b, c, txt, temp;
	int int_b, int_a, otv;
	int i = 0;
	size_t o = 0;
	string probel = " ";
	size_t probel_size = probel.size();

	cout << "Веди приклад: ";
	getline(cin, txt);

	int emptyy = (txt.empty() ? 1 : 0);
	size_t txt_size = txt.size();
	// ПРЕВЕДЕННЯ
	if (emptyy == 0)
	{
		while (txt_size > o)
		{
			temp = temp.assign(txt, o, txt.find(probel, o) - o);
			o += temp.size() + probel_size;
			i++;

			if (i == 1)
			{
				a = temp;
				int_a = stoi(a);
			}
			else if (i == 3)
			{
				b = temp;
				int_b = stoi(b);
			}
			else if (i == 2)
			{
				c = temp;
			}
		}
	}
	// РОЗРАХУНОК
	if (c == "*")
	{
		otv = int_a * int_b;
	}
	else if (c == "/")
	{
		if (int_b == 0)
		{
			i = 0;
		}
		else
		{
			otv = int_a / int_b;
		}
	}
	else if (c == "+")
	{
		otv = int_a + int_b;
	}
	else if (c == "-")
	{
		otv = int_a - int_b;
	}
	else if (c == "^")
	{
		otv = pow(int_a, int_b);
	}
	else
	{
		i = 0;
	}
	// ВІДПОВІДЬ
	if (i == 3)
	{
		cout << txt << " = " << otv;
	}
	else
	{
		cout << "Це рахувать я не буду)";
	}
	return 0;
}