#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main (){
	ifstream source;
	ofstream dest;
	source.open("cheerbook.txt");
	dest.open("cheerbook_copy.txt");
	
	dest << "-------------------- BOOM ---------------------\n";
	string text;
	while (getline(source,text)){
		dest << text << endl;
	}
	dest << "-------------------- HA!! ---------------------";
	
	

    source.close();
    dest.close();
	return 0;
}
