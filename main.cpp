#include <iostream>
#include <string>
using namespace std;

int main() {
	 string fullname;
     int age;	
     int currentYear = 2025;
     
 	 cout << "Enter your full name: ";
 	 getline (cin, fullname);
  	 cout << "Enter your age: ";
  	 cin >> age;
  	 cout << "Hello " << fullname << " you are " << age << " years old!\n";



    int yearTurn60 = currentYear + (60 - age);
    cout << "You will turn 60 years old in the year " << yearTurn60 << ".";

    return 0;
    
}
