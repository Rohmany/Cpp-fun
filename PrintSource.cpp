#include <iostream>

using namespace std;

int main(int argv, char *argc[]) {
	FILE *Source;
	Source = fopen(__FILE__, "r");
	char myChar;
	myChar = fgetc(Source);
	while (myChar != EOF) {
		cout << myChar;
		myChar = fgetc(Source);
	}
	getchar();
	return 0;
}
