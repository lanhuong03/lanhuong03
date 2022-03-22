#include<iostream>
#include<string.h>
using namespace std;

int main() {
	string s;
	cout << "Nhap vao ho va ten: ";
	getline(cin, s);
	int n = s.length();
	cout << "Ho la: ";
	for(int  i = 0; i < n ; i++) {
		if(s[i] == ' ' && s[i+1] != ' ') {
			break;
		} else {
			cout << s[i];
		}
	}
	
	int k =0;
	for(int i = 0; i < n; i++){
		if(s[i]== ' '){
			k = i;
		}
	}
	
	cout <<"\nTen la: ";
	for(int i = k+1; i <n; i++){
		cout << s[i];
	}

	return 0;
}


