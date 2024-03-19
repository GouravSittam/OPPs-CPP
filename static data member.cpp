#include <iostream>
#include <string.h>
using namespace std;

class Student {
//private:
//    int rollNo;
//    char name[50]; 
//    int marks;

public:
	int rollNo;
    char name[50]; 
    int marks;
    static int cnt;
    
    Student() {
        rollNo=++cnt;
    }

    void getdata() {
        cout << "Enter roll number: ";
        cin >> rollNo;
        cin.ignore(); 
        cout << "Enter name: ";
        cin.getline(name, sizeof(name)); 
        cout << "Enter marks: ";
        cin >> marks;
    }

};

int Student::cnt = 0;
int main() {
    Student s1, s2;
    s1.getdata();
    s2.getdata();

    cout << "Number of objects created: " << Student::cnt << endl;

    return 0;
}

