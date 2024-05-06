#include<bits/stdc++.h>

using namespace std;

int main(){
	
	int num = 0;
	string tempStr;
	
	// Storing Data Into A File Named myFile.txt
	
	ofstream myFile, myNewFile;
	myFile.open("myFile.txt");
	
	while(num <= 10){
		myFile <<"Number "<< num << endl;
		num += 1;
	}
	myFile.close();
	
	
	// Displying Output On Screen
	
	ifstream myFile2;
	myFile2.open("myFile.txt");
	myNewFile.open("myNewFile.txt");
	
	while(getline(myFile2, tempStr)){
		cout << tempStr << endl;
		myNewFile<<tempStr<<endl;
	}
	myFile2.close();
	myNewFile.close();
	
	return 0;
}
