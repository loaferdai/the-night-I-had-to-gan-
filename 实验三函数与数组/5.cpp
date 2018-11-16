#include <iostream>
using namespace std;
int main() {
	char s[] = "C is a general purpose, procedural, imperative computer programming language developed in 1972 by Dennis Ritchie at the Bell Telephone Laboratories for use with the Unix operating system.";
	int length = sizeof(s) / sizeof(char);
	int result[5] = { 0 };
	for (int i = 0; i < length - 1; i++) {
		if (s[i] >= 65 && s[i] <= 90) 
		{ 
			result[0]++;
		}
		else if (s[i] >= 97 && s[i] <= 122) 
		{ 
			result[1]++;
		}
		else if (s[i] >= 48 && s[i] <= 57) 
		{ 
			result[2]++;
		}
		else if (s[i] == 32) 
		{ 
			result[3]++;
		}
		else if (s[i] == 44) 
		{ 
			result[4]++;
		}
	}
	cout << "大写" << result[0] << "个" << endl
		 << "小写" << result[1] << "个" << endl
		 << "数字" << result[2] << "个" << endl
		 << "空格" << result[3] << "个" << endl
		 << "逗号" << result[4] << "个" << endl;
	system("pause");
	return 0;
}