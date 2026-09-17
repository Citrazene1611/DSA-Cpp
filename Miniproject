#include <iostream>
#include <string>
using namespace std;

const int MAX_STUDENTS = 50;
const double MEAL_RATE = 40.0;

int rollNumber[MAX_STUDENTS];
string studentName[MAX_STUDENTS];
int breakfastCount[MAX_STUDENTS];
int lunchCount[MAX_STUDENTS];
int dinnerCount[MAX_STUDENTS];
int totalStudents = 0;

int findStudentIndex(int roll)
{
    for (int i = 0; i < totalStudents; i++)
    {
        if (rollNumber[i] == roll)
        {
            return i;
        }
    }
    return -1;
}

void addStudent()
{
    if (totalStudents >= MAX_STUDENTS)
    {
        cout << "Student list is full. Cannot add more students.\n";
        return;
    }

    int roll;
    cout << "Enter Roll Number: ";
    cin >> roll;

    if (findStudentIndex(roll) != -1)
    {
        cout << "A student with this roll number already exists.\n";
        return;
    }

    string name;
    cout << "Enter Name: ";
    cin.ignore();
    getline(cin, name);

    rollNumber[totalStudents] = roll;
    studentName[totalStudents] = name;
    breakfastCount[totalStudents] = 0;
    lunchCount[totalStudents] = 0;
    dinnerCount[totalStudents] = 0;

    totalStudents++;
    cout << "Student added successfully.\n";
}

void viewAllStudents()
{
    if (totalStudents == 0)
    {
        cout << "No students added yet.\n";
        return;
    }

    cout << "\nRoll No\tName\n";
    cout << "----------------------\n";
    for (int i = 0; i < totalStudents; i++)
    {
        cout << rollNumber[i] << "\t" << studentName[i] << endl;
    }
}

void searchStudent()
{
    int roll;
    cout << "Enter Roll Number to search: ";
    cin >> roll;

    int idx = findStudentIndex(roll);
    if (idx == -1)
    {
        cout << "No student found with this roll number.\n";
        return;
    }

    cout << "Roll No : " << rollNumber[idx] << endl;
    cout << "Name    : " << studentName[idx] << endl;
    cout << "Breakfasts: " << breakfastCount[idx]
         << " | Lunches: " << lunchCount[idx]
         << " | Dinners: " << dinnerCount[idx] << endl;
}

void recordMeal()
{
    int roll;
    cout << "Enter Roll Number: ";
    cin >> roll;

    int idx = findStudentIndex(roll);
    if (idx == -1)
    {
        cout << "No student found with this roll number.\n";
        return;
    }

    int mealChoice;
    cout << "1. Breakfast  2. Lunch  3. Dinner\n";
    cout << "Enter choice: ";
    cin >> mealChoice;

    if (mealChoice == 1)
    {
        breakfastCount[idx]++;
        cout << "Breakfast recorded for " << studentName[idx] << ".\n";
    }
    else if (mealChoice == 2)
    {
        lunchCount[idx]++;
        cout << "Lunch recorded for " << studentName[idx] << ".\n";
    }
    else if (mealChoice == 3)
    {
        dinnerCount[idx]++;
        cout << "Dinner recorded for " << studentName[idx] << ".\n";
    }
    else
    {
        cout << "Invalid meal choice.\n";
    }
}

int calculateTotalMeals(int idx)
{
    return breakfastCount[idx] + lunchCount[idx] + dinnerCount[idx];
}

double calculateBill(int idx)
{
    return calculateTotalMeals(idx) * MEAL_RATE;
}

void generateBill()
{
    int roll;
    cout << "Enter Roll Number: ";
    cin >> roll;

    int idx = findStudentIndex(roll);
    if (idx == -1)
    {
        cout << "No student found with this roll number.\n";
        return;
    }

    int totalMeals = calculateTotalMeals(idx);
    double bill = calculateBill(idx);

    cout << "\n---------- MESS BILL ----------\n";
    cout << "Roll No     : " << rollNumber[idx] << endl;
    cout << "Name        : " << studentName[idx] << endl;
    cout << "Breakfasts  : " << breakfastCount[idx] << endl;
    cout << "Lunches     : " << lunchCount[idx] << endl;
    cout << "Dinners     : " << dinnerCount[idx] << endl;
    cout << "Total Meals : " << totalMeals << endl;
    cout << "Rate/Meal   : Rs. " << MEAL_RATE << endl;
    cout << "Total Bill  : Rs. " << bill << endl;
    cout << "--------------------------------\n";
}

void displaySummaryReport()
{
    if (totalStudents == 0)
    {
        cout << "No students added yet.\n";
        return;
    }

    cout << "\n----------------------------------------------------------\n";
    cout << "Roll No\tName\t\tTotal Meals\tBill (Rs.)\n";
    cout << "----------------------------------------------------------\n";

    for (int i = 0; i < totalStudents; i++)
    {
        cout << rollNumber[i] << "\t" << studentName[i] << "\t\t"
             << calculateTotalMeals(i) << "\t\t" << calculateBill(i) << endl;
    }
    cout << "----------------------------------------------------------\n";
}

void showMenu()
{
    cout << "\n======== HOSTEL MESS MANAGEMENT SYSTEM ========\n";
    cout << "1. Add Student\n";
    cout << "2. View All Students\n";
    cout << "3. Search Student\n";
    cout << "4. Record Meal (Breakfast/Lunch/Dinner)\n";
    cout << "5. Generate Bill for a Student\n";
    cout << "6. Display Summary Report\n";
    cout << "7. Exit\n";
    cout << "=================================================\n";
    cout << "Enter your choice: ";
}

int main()
{
    int choice;

    do
    {
        showMenu();
        cin >> choice;

        switch (choice)
        {
            case 1: addStudent(); break;
            case 2: viewAllStudents(); break;
            case 3: searchStudent(); break;
            case 4: recordMeal(); break;
            case 5: generateBill(); break;
            case 6: displaySummaryReport(); break;
            case 7: cout << "Exiting program. Goodbye!\n"; break;
            default: cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 7);

    return 0;
}
