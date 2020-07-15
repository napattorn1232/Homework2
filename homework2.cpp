#include <iostream>
#include <string>
using namespace std;
void main()
{
	string fname, lname;
	int salary , sale , commision , total ;

	cout << "***Homework2***" << endl;

	cout << "Enter Name : "; 
	cin >> fname >> lname ;
	
	cout << "Enter Salary : ";
	cin >> salary ;
	
	cout << "Enter sale : " ;
	cin >> sale ;
	
	cout << "Enter commision : " ;
	cin >> commision ;

	cout << "- - - - -output- - - - - - -" << endl;
	
	cout << " Your name = " << fname << " " << lname << endl;

	total = (sale*commision/100)+salary ;
	cout << " Total Revenue " << total << " Bath" << endl;
	cout << "------------------------------------------" << endl;


}
//Napattotn Seusat 6306021621031 No.14 sec B 
