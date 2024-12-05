#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Struct to store student information
struct Student {
    string name;
    string course;
    string department;
    int yearLevel;
    int age;
    string contactInfo;
};

// Function to display student details
void displayStudent(const Student& student) {
    cout << "Name: " << student.name << endl;
    cout << "Course: " << student.course << endl;
    cout << "Department: " << student.department << endl;
    cout << "Year Level: " << student.yearLevel << endl;
    cout << "Age: " << student.age << endl;
    cout << "Contact Info: " << student.contactInfo << endl;
    cout << "-----------------------------" << endl;
}

// Function to create a new student
Student createStudent() {
    Student student;
    cout << "Enter Name: ";
    getline(cin, student.name);
    cout << "Enter Course: ";
    getline(cin, student.course);
    cout << "Enter Department: ";
    getline(cin, student.department);
    cout << "Enter Year Level: ";
    cin >> student.yearLevel;
    cout << "Enter Age: ";
    cin >> student.age;
    cin.ignore();  // To handle newline after age input
    cout << "Enter Contact Info: ";
    getline(cin, student.contactInfo);
    return student;
}

// Function to update student information
void updateStudent(Student& student) {
    cout << "Updating student: " << student.name << endl;
    cout << "Enter new Course: ";
    getline(cin, student.course);
    cout << "Enter new Department: ";
    getline(cin, student.department);
    cout << "Enter new Year Level: ";
    cin >> student.yearLevel;
    cout << "Enter new Age: ";
    cin >> student.age;
    cin.ignore();  // To handle newline after age input
    cout << "Enter new Contact Info: ";
    getline(cin, student.contactInfo);
}

// Function to delete a student
void deleteStudent(vector<Student>& students, int index) {
    if (index >= 0 && index < students.size()) {
        students.erase(students.begin() + index);
        cout << "Student deleted successfully!" << endl;
    } else {
        cout << "Invalid index!" << endl;
    }
}

int main() {
    vector<Student> students;
    int choice;

    do {
        cout << "\nStudent Information System" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. View All Students" << endl;
        cout << "3. Update Student" << endl;
        cout << "4. Delete Student" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();  // To handle newline after choice input

        switch (choice) {
        case 1: {
            // Add student
            Student student = createStudent();
            students.push_back(student);
            cout << "Student added successfully!" << endl;
            break;
        }
        case 2: {
            // View all students
            if (students.empty()) {
                cout << "No students available!" << endl;
            } else {
                for (size_t i = 0; i < students.size(); ++i) {
                    cout << "Student " << i + 1 << ":" << endl;
                    displayStudent(students[i]);
                }
            }
            break;
        }
        case 3: {
            // Update student
            int index;
            cout << "Enter the student index to update (1 to " << students.size() << "): ";
            cin >> index;
            cin.ignore();  // Handle newline
            if (index > 0 && index <= students.size()) {
                updateStudent(students[index - 1]);
                cout << "Student updated successfully!" << endl;
            } else {
                cout << "Invalid student index!" << endl;
            }
            break;
        }
        case 4: {
            // Delete student
            int index;
            cout << "Enter the student index to delete (1 to " << students.size() << "): ";
            cin >> index;
            deleteStudent(students, index - 1);
            break;
        }
        case 5:
            cout << "Exiting the system." << endl;
            break;
        default:
            cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
