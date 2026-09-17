#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdio>
using namespace std;

const char* FILE_NAME = "student.txt";
const char* TEMP_NAME = "temp.txt";

class Student
{
private:
    int rollNo;
    char name[50];
    char course[30];
    float marks;

public:
    void input()
    {
        cout << "Enter Roll Number : ";
        cin >> rollNo;
        cout << "Enter Name : ";
        cin >> name;
        cout << "Enter Course : ";
        cin >> course;
        cout << "Enter Marks : ";
        cin >> marks;
    }

    void display()
    {
        cout.setf(ios::left);
        cout.width(10); cout << rollNo;
        cout.width(17); cout << name;
        cout.width(15); cout << course;
        cout.width(10); cout << marks << endl;
    }

    int getRollNo() { return rollNo; }
    const char* getName() { return name; }
    const char* getCourse() { return course; }
    float getMarks() { return marks; }

    void setName(const char* n) { strcpy(name, n); }
    void setCourse(const char* c) { strcpy(course, c); }
    void setMarks(float m) { marks = m; }

    void write(ofstream& out)
    {
        out << rollNo << " " << name << " " << course << " " << marks << endl;
    }

    bool read(ifstream& in)
    {
        return (in >> rollNo >> name >> course >> marks) ? true : false;
    }
};

bool rollExists(int rollNo)
{
    ifstream in(FILE_NAME);
    if (!in) return false;
    Student s;
    while (s.read(in))
    {
        if (s.getRollNo() == rollNo)
        {
            in.close();
            return true;
        }
    }
    in.close();
    return false;
}

void addStudent()
{
    Student s;
    s.input();
    if (rollExists(s.getRollNo()))
    {
        cout << "Roll Number already exists. Student not added." << endl;
        return;
    }
    ofstream out(FILE_NAME, ios::app);
    if (!out)
    {
        cout << "Unable to open file." << endl;
        return;
    }
    s.write(out);
    out.close();
    cout << "Student added successfully." << endl;
}

void displayAll()
{
    ifstream in(FILE_NAME);
    if (!in)
    {
        cout << "No records found." << endl;
        return;
    }
    Student s;
    bool found = false;
    cout << "-------------------------------------------------------------" << endl;
    cout.setf(ios::left);
    cout.width(10); cout << "Roll No";
    cout.width(17); cout << "Name";
    cout.width(15); cout << "Course";
    cout.width(10); cout << "Marks" << endl;
    cout << "-------------------------------------------------------------" << endl;
    while (s.read(in))
    {
        s.display();
        found = true;
    }
    cout << "-------------------------------------------------------------" << endl;
    in.close();
    if (!found)
        cout << "No records found." << endl;
}

void searchStudent()
{
    int rollNo;
    cout << "Enter Roll Number to search : ";
    cin >> rollNo;

    ifstream in(FILE_NAME);
    if (!in)
    {
        cout << "Student Record Not Found." << endl;
        return;
    }
    Student s;
    bool found = false;
    while (s.read(in))
    {
        if (s.getRollNo() == rollNo)
        {
            cout << "Roll No : " << s.getRollNo() << endl;
            cout << "Name    : " << s.getName() << endl;
            cout << "Course  : " << s.getCourse() << endl;
            cout << "Marks   : " << s.getMarks() << endl;
            found = true;
            break;
        }
    }
    in.close();
    if (!found)
        cout << "Student Record Not Found." << endl;
}

void searchByName()
{
    char name[50];
    cout << "Enter Name to search : ";
    cin >> name;

    ifstream in(FILE_NAME);
    if (!in)
    {
        cout << "Student Record Not Found." << endl;
        return;
    }
    Student s;
    bool found = false;
    while (s.read(in))
    {
        if (strcmp(s.getName(), name) == 0)
        {
            cout << "Roll No : " << s.getRollNo() << endl;
            cout << "Name    : " << s.getName() << endl;
            cout << "Course  : " << s.getCourse() << endl;
            cout << "Marks   : " << s.getMarks() << endl;
            found = true;
        }
    }
    in.close();
    if (!found)
        cout << "Student Record Not Found." << endl;
}

void updateStudent()
{
    int rollNo;
    cout << "Enter Roll Number to update : ";
    cin >> rollNo;

    ifstream in(FILE_NAME);
    if (!in)
    {
        cout << "Student Record Not Found." << endl;
        return;
    }
    ofstream out(TEMP_NAME);
    Student s;
    bool found = false;

    while (s.read(in))
    {
        if (s.getRollNo() == rollNo)
        {
            found = true;
            char name[50], course[30];
            float marks;
            cout << "Enter New Name : ";
            cin >> name;
            cout << "Enter New Course : ";
            cin >> course;
            cout << "Enter New Marks : ";
            cin >> marks;
            s.setName(name);
            s.setCourse(course);
            s.setMarks(marks);
        }
        s.write(out);
    }
    in.close();
    out.close();
    remove(FILE_NAME);
    rename(TEMP_NAME, FILE_NAME);

    if (found)
        cout << "Student updated successfully." << endl;
    else
        cout << "Student Record Not Found." << endl;
}

void deleteStudent()
{
    int rollNo;
    cout << "Enter Roll Number to delete : ";
    cin >> rollNo;

    ifstream in(FILE_NAME);
    if (!in)
    {
        cout << "Student Record Not Found." << endl;
        return;
    }
    ofstream out(TEMP_NAME);
    Student s;
    bool found = false;

    while (s.read(in))
    {
        if (s.getRollNo() == rollNo)
        {
            found = true;
            continue;
        }
        s.write(out);
    }
    in.close();
    out.close();
    remove(FILE_NAME);
    rename(TEMP_NAME, FILE_NAME);

    if (found)
        cout << "Student deleted successfully." << endl;
    else
        cout << "Student Record Not Found." << endl;
}

int countStudents()
{
    ifstream in(FILE_NAME);
    if (!in) return 0;
    Student s;
    int count = 0;
    while (s.read(in)) count++;
    in.close();
    return count;
}

void averageMarks()
{
    ifstream in(FILE_NAME);
    if (!in)
    {
        cout << "No records found." << endl;
        return;
    }
    Student s;
    float total = 0;
    int count = 0;
    while (s.read(in))
    {
        total += s.getMarks();
        count++;
    }
    in.close();
    if (count == 0)
        cout << "No records found." << endl;
    else
        cout << "Average Marks : " << (total / count) << endl;
}

void highestLowest()
{
    ifstream in(FILE_NAME);
    if (!in)
    {
        cout << "No records found." << endl;
        return;
    }
    Student s;
    bool first = true;
    Student highest, lowest;
    while (s.read(in))
    {
        if (first)
        {
            highest = s;
            lowest = s;
            first = false;
        }
        else
        {
            if (s.getMarks() > highest.getMarks()) highest = s;
            if (s.getMarks() < lowest.getMarks()) lowest = s;
        }
    }
    in.close();
    if (first)
    {
        cout << "No records found." << endl;
        return;
    }
    cout << "Highest Marks : " << highest.getRollNo() << " " << highest.getName() << " " << highest.getMarks() << endl;
    cout << "Lowest Marks  : " << lowest.getRollNo() << " " << lowest.getName() << " " << lowest.getMarks() << endl;
}

void sortByRollNo()
{
    ifstream in(FILE_NAME);
    if (!in)
    {
        cout << "No records found." << endl;
        return;
    }
    Student temp;
    Student list[1000];
    int n = 0;
    while (temp.read(in)) list[n++] = temp;
    in.close();

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (list[j].getRollNo() > list[j + 1].getRollNo())
            {
                Student swapTemp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = swapTemp;
            }
        }
    }

    cout << "-------------------------------------------------------------" << endl;
    cout.setf(ios::left);
    cout.width(10); cout << "Roll No";
    cout.width(17); cout << "Name";
    cout.width(15); cout << "Course";
    cout.width(10); cout << "Marks" << endl;
    cout << "-------------------------------------------------------------" << endl;
    for (int i = 0; i < n; i++) list[i].display();
    cout << "-------------------------------------------------------------" << endl;
}

int main()
{
    int choice;
    do
    {
        cout << "\n****************************************" << endl;
        cout << "     STUDENT MANAGEMENT SYSTEM" << endl;
        cout << "****************************************\n" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display All Students" << endl;
        cout << "3. Search Student" << endl;
        cout << "4. Update Student" << endl;
        cout << "5. Delete Student" << endl;
        cout << "6. Count Total Students" << endl;
        cout << "7. Search Student by Name" << endl;
        cout << "8. Average Marks" << endl;
        cout << "9. Highest and Lowest Marks" << endl;
        cout << "10. Sort by Roll Number" << endl;
        cout << "11. Exit" << endl;
        cout << "\nEnter Your Choice : ";
        cin >> choice;

        switch (choice)
        {
            case 1: addStudent(); break;
            case 2: displayAll(); break;
            case 3: searchStudent(); break;
            case 4: updateStudent(); break;
            case 5: deleteStudent(); break;
            case 6: cout << "Total Students : " << countStudents() << endl; break;
            case 7: searchByName(); break;
            case 8: averageMarks(); break;
            case 9: highestLowest(); break;
            case 10: sortByRollNo(); break;
            case 11: cout << "Exiting..." << endl; break;
            default: cout << "Invalid Choice." << endl;
        }
    } while (choice != 11);

    return 0;
}
