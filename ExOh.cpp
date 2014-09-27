#include <iostream>
#include <string>
using namespace std;


bool ExOh(string str){

	string::iterator it;
	int count_x = 0, count_o = 0;

	for (it= str.begin(); it != str.end(); it++)
	{
		if ((*it) == 'x')
		{
			count_x++;
		}
		else 
		{
			count_o++;
		}
	}

	if( count_x == count_o) {
		cout << "true";
		return true;
	}else{
		cout << "false";
		return false;
	}
}



void main(){

	string str;
	ExOh("xoxoox");
	ExOh("oooxoo");
}
