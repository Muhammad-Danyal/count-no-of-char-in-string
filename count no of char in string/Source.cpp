#include <iostream>
#include"string"
using namespace std;
int main()
{
	char str[20];
	int totChar=0;
	cout << "enter the string for count characters\n";
	cin.getline(str,20);
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] != ' '){
			totChar++;
		}
	}
	cout << "The total characters of the given string= " << totChar;
	return 0;
}