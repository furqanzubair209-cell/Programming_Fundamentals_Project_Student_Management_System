#include <iostream>
#include <string>
using namespace std;
string name[5], department[5], phoneNumber[5];
int age[5], rollNumber[5];
float marks[5];
int main() {
    char choice;
    int studentIndex;
    cout << "---- Student Management System ----\n";
    for (int i = 0; i < 5; i++)
	 {
        cout << "\nEnter details for student " << i + 1 << ":\n";
        cout << "Enter name: ";
        cin >> name[i];
        cout << "Enter roll number: ";
        cin >> rollNumber[i];
        cout << "Enter age: ";
        cin >> age[i];
        cout << "Enter department: ";
        cin >> department[i];
        cout << "Enter marks (out of 100): ";
        cin >> marks[i];
        cout << "Enter phone number: ";
        cin >> phoneNumber[i];
    }

    while (true) {
        cout << "\nSelect an option:\n";
        cout << "a. View Student Details\n";
        cout << "b. Update Marks\n";
        cout << "c. Check Pass/Fail Status\n";
        cout << "d. View Grade\n";
        cout << "e. Update Age\n";
        cout << "f. Update Department\n";
        cout << "g. Check Scholarship Eligibility\n";
        cout << "h. View Attendance Requirement\n";
        cout << "i. View Phone Number\n";
        cout << "j. Update Phone Number\n";
        cout << "k. Calculate GPA\n";
        cout << "l. Exit Program\n";
        cout << "Enter your choice (a/b/c/d/e/f/g/h/i/j/k/l): ";
        cin >> choice;
        if (choice == 'l') 
		{
            cout << "Exiting program. Goodbye!\n";
            break;
        }
        cout << "Enter the student number (1-5): ";
        cin >> studentIndex;
        if (studentIndex < 1 || studentIndex > 5) {
            cout << "Invalid student number! Please try again.\n";
            continue;
        }
        studentIndex--; 
        if (choice == 'a') 
		{
            cout << "\n--- Student Details ---\n";
            cout << "Name: " << name[studentIndex] << "\n";
            cout << "Roll Number: " << rollNumber[studentIndex] << "\n";
            cout << "Age: " << age[studentIndex] << "\n";
            cout << "Department: " << department[studentIndex] << "\n";
            cout << "Marks: " << marks[studentIndex] << "/100\n";
            cout << "Phone Number: " << phoneNumber[studentIndex] << "\n";
        } 
		else if (choice == 'b')
		 {
            cout << "Enter new marks (out of 100): ";
            cin >> marks[studentIndex];
            cout << "Marks updated successfully!\n";
        } 
		else if (choice == 'c')
		 {
            if (marks[studentIndex] >= 40)
			 {
                cout << "Student has passed!\n";
            }
			 else
			 {
                cout << "Student has failed!\n";
            }

        } 
		else if (choice == 'd')
		 {
            cout << "\n--- Student Grade ---\n";
            if (marks[studentIndex] >= 90)
			 {
                cout << "Grade: A\n";
            }
			 else if (marks[studentIndex] >= 80) 
			 {
                cout << "Grade: B\n";
            } 
			else if (marks[studentIndex] >= 70) 
			{
                cout << "Grade: C\n";
            }
			 else if (marks[studentIndex] >= 60) 
			 {
                cout << "Grade: D\n";
            }
			 else if (marks[studentIndex] >= 50) 
			 {
                cout << "Grade: E\n";
            } 
			else 
			{
                cout << "Grade: F\n";
            }

        } 
		else if (choice == 'e')
		 {
            cout << "Enter new age: ";
            cin >> age[studentIndex];
            cout << "Age updated successfully!\n";
        } 
		else if (choice == 'f')
		 {
            cout << "Enter new department: ";
            cin >> department[studentIndex];
            cout << "Department updated successfully!\n";
        } 
		else if (choice == 'g') 
		{
            if (marks[studentIndex] >= 85)
			 {
                cout << "Student is eligible for a scholarship!\n";
            } 
			else
			 {
                cout << "Student is not eligible for a scholarship.\n";
            }
        }
		 else if (choice == 'h')
		  {
            cout << "\n--- Attendance Requirement ---\n";
            if (department[studentIndex] == "Science" || department[studentIndex] == "science")
			 {
                cout << "Attendance requirement for Science department: 75%\n";
            } 
			else if (department[studentIndex] == "Arts" || department[studentIndex] == "arts")
			 {
                cout << "Attendance requirement for Arts department: 65%\n";
            } 
			else if (department[studentIndex] == "Commerce" || department[studentIndex] == "commerce") 
			{
                cout << "Attendance requirement for Commerce department: 70%\n";
            } 
			else
			 {
                cout << "Attendance requirement: 60%\n";
            }
        } 
		else if (choice == 'i') 
		{
            cout << "\n--- Student Phone Number ---\n";
            cout << "Phone Number: " << phoneNumber[studentIndex] << "\n";
        }
		 else if (choice == 'j')
		  {
            cout << "Enter new phone number: ";
            cin >> phoneNumber[studentIndex];
            cout << "Phone number updated successfully!\n";
        } 
		else if (choice == 'k')
		 {
            float gpa;
            if (marks[studentIndex] >= 90)
			 {
                gpa = 4.0;
            } 
			else if (marks[studentIndex] >= 80)
			 {
                gpa = 3.7;
            }
			 else if (marks[studentIndex] >= 70)
			  {
                gpa = 3.0;
            }
			 else if (marks[studentIndex] >= 60)
			  {
                gpa = 2.5;
            }
			 else if (marks[studentIndex] >= 50)
			  {
                gpa = 2.0;
            }
			 else 
			 {
                gpa = 1.0;
            }
            cout << "Calculated GPA: " << gpa << "\n";
        } 
		else 
		{
            cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}

