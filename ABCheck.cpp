#include <iostream>
#include <string>
using namespace std;

bool CheckBackward(size_t found, string str){
	int b = *str.begin();
	if((found-4) <= *str.begin()) return true;   // size_t range - 0 to 65535
	return false;
}
bool CheckFurther(size_t found, string str){
	int h = str.end() - str.begin();
	if((found+4) < (str.end() - str.begin()))
		return true;

	return false;
}

bool CheckForB(size_t found,string str){
	if(CheckFurther(found,str)){
		if(str.at(found+4) == 'b' ){
			return true;
		}
	}

	if(CheckBackward(found,str)){
		if(str.at(found-4) == 'b' ){
			return true;
		}
	}
	return false;
}



bool ABCheck(string str){

	size_t found = str.find_first_of('a');

	while(found != -1){

		if(!CheckForB(found,str)){
			found = str.find_first_of('a',found+1);
		}else { 
			cout << "true" << endl;
			return true;
		}
	}
	cout << "false"<< endl;
	return false;
}



void main(){

	string str;
	ABCheck("after badly");
	ABCheck("Laura sobs");
	ABCheck("kbaaaaatfd");

}
