#include<iostream>
using namespace std;

int main()
{
	int a;
	char e[10];
	cin >> a;
	while (a--)
	{
		int d[10] = { 0,0,0,0,0,0,0,0,0,0 };
		
		if (cin >> e)
		{
			int sum[10]= { 0,0,0,0,0,0,0,0,0,0 };
			for(int m=0;m<strlen(e);m++)
			{
				char b = e[m];
				int c[10] = { 0,0,0,0,0,0,0,0,0,0 };
				switch (b)
				{
				case 'c':
					c[1] = 1;c[2] = 1;c[3] = 1;
					c[6] = 1; c[7] = 1; c[8] = 1; c[9] = 1;
					break;
				case 'd':
					c[1] = 1; c[2] = 1; c[3] = 1;
					c[6] = 1; c[7] = 1; c[8] = 1;
					break;
				case 'e':
					c[1] = 1; c[2] = 1; c[3] = 1;
					c[6] = 1; c[7] = 1;
					break;
				case 'f':
					c[1] = 1; c[2] = 1; c[3] = 1;
					c[6] = 1;
					break;
				case 'g':
					c[1] = 1; c[2] = 1; c[3] = 1;
					break;
				case 'a':
					c[1] = 1; c[2] = 1;
					break;
				case 'b':
					c[1] = 1;
					break;
				case 'C':
					c[2] = 1;
					break;
				case 'D':
					c[0] = 1; c[1] = 1; c[2] = 1; c[3] = 1;
					c[6] = 1; c[7] = 1; c[8] = 1;
					break;
				case 'E':
					c[0] = 1; c[1] = 1; c[2] = 1; c[3] = 1;
					c[6] = 1; c[7] = 1;
					break;
				case 'F':
					c[0] = 1; c[1] = 1; c[2] = 1; c[3] = 1;
					c[6] = 1;
					break;
				case 'G':
					c[0] = 1; c[1] = 1; c[2] = 1; c[3] = 1;
					break;
				case 'A':
					c[0] = 1; c[1] = 1; c[2] = 1;
					break;
				case 'B':
					c[0] = 1; c[1] = 1;
					break;
				}
				for (int i = 0; i < 10; i++)
				{
					d[i] += c[i];
					if (d[i] == 1 && c[i]==1)
						sum[i]++;
				}
				for (int j = 0; j < 10; j++)
					d[j] = c[j];
			}
			for (int k = 0; k < 10; k++)
			{
				cout << sum[k];
				if (k < 9)
					cout << " ";
			}
			cout << endl;
		}
		
	}
}