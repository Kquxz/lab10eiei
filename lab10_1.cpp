#include<iostream>
using namespace std;

int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	int numst = 0;
	int n = 0;
	char grade[n];
	cout << "Please input grade of each student (A-F) or input 0 to exit.\n";
	do{
		cout << "Student [" <<++numst<< "]: ";
		cin >> grade[n]; //The loop must be terminated when grade = '0'
		if(grade[n] == 'A'){ // if grade is A
			count[0]++;
		}else if(grade[n] == 'B'){ // if grade is B
			count[1]++;
		}else if(grade[n] == 'C'){
			count[2]++;
		}else if(grade[n] == 'D'){
			count[3]++;
		}else if(grade[n] == 'F'){
			count[4]++;
		}else if(grade[n] == '0'){
			--numst;
			break;
		}else if(grade[n] != 'A'||'B'||'C'||'D'||'F'||'0'){
			cout << "Wrong input. Please input again.\n";
			--numst;
		} 
	}while(true);
	
	
	cout << "In total " << numst << " students.\n";
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];	
	//	and so on ... for grade = C, D, F	
	
	return 0;
}
