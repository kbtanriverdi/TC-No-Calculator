#include <iostream>
#include <string>

using namespace std;

void check(long long int a) {
	long long int b = a;
	int firstTen = 0;
    string sinp = to_string(a);
	int oddNum = 0;
	int evenNum = 0;
	b /= 100;
	for (int i=0; i < 9; i++) {
		firstTen += b % 10;
		if (i % 2 == 0) {
			oddNum += (int)sinp[i]-'0';
		}
		else {
			evenNum += (int)sinp[i]-'0';
		}
	}
	int tmp;
	tmp = oddNum * 7 + 9 * evenNum;
	int tmp2;
	tmp2 = oddNum * 8;
	int tenth = a % 100;
	tenth /= 10;
	int elev = a % 10;
	if ((tmp%10)==(tenth) && (tmp2%10)==(elev)) {
		cout << a << " is a valid TC No" << endl;
	}
	else {
		cout << a << " is not a valid TC No" << endl;
	}
	return;
}

int main(){
	long long int inp=0;
	cout << "Enter an 11 digit TC no: ";
	cin >> inp;
	cout << endl;
	check(inp);
	cin >> inp;
	return 0;
}