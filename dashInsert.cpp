#include <iostream>
#include <string>
using namespace std;

bool LastCharIsOdd(int num){
	if(num % 2 != 0) return true;
	return false;
}

string GetLastDigit(int num){
	string f_str = to_string(num % 10);
	return f_str;
}

string Reverse(string str){
	string result="";

	for (int i = 0; i < str.length( ) ; i++) { 
		result = str[i] + result ; 
		} 

	return result;

}

string dashInsert(int num){
	string str;
	while(num > 9){
		if(!LastCharIsOdd(num)){
			str.append(GetLastDigit(num));
			num /= 10;
		}else {
			if(LastCharIsOdd(num) && LastCharIsOdd(num / 10)){
				str.append(GetLastDigit(num));
				num /= 10;
				str.append("-");
			}else {
				str.append(GetLastDigit(num));
				num /= 10;	
			}
		}
	}
	str.append(GetLastDigit(num));
	str = Reverse(str);
	cout << str;
	return str;
}


void main(){
	int num;
	dashInsert(99946);
	dashInsert(56730);

}
