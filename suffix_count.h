//y partner is Sriahalya Thirumurugan
#include <iostream>
#include <string>
using namespace std;

int suffixCount(std::string S, int L) {
    //makes substring of suffix
	string suffix = S.substr(S.length()-L);
	
	int suffC= 0;
	//find first instance of suffix
	int suffPos = S.find(suffix);
	//increase count when suffix is found and goes to next instance
	while(suffPos != string::npos){
	    suffC++;
	    suffPos = S.find(suffix,suffPos+1);
	}
	return suffC;
}