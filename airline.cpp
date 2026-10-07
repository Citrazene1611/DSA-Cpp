/* Airlines Management System — Improved Version
   Original by Ashish Poudel; bug fixes and enhancements added.
*/

#include<iostream>
#include<cstring>
#include<fstream>
#include<vector>
#include<algorithm>
#include<cstdlib>
#define infinity 999999999

using namespace std;

// ---------- Simple ANSI colors for a cleaner terminal look ----------
const string RESET  = "\033[0m";
const string BOLD   = "\033[1m";
const string CYAN    = "\033[36m";
const string GREEN  = "\033[32m";
const string RED    = "\033[31m";
const string YELLOW = "\033[33m";

void clearScreen()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

struct store
{
    long long int cost[20];
    int array[20];
} travel[15];

struct initialdata {
    long long int cost[20];
} ini[15];

class datamodule {
public:
    string city[15];

    datamodule():city{"Delhi","Mumbai","Chennai","Kolkata","Kerala","Hyderabad","Pune","Goa","Bangalore","Amritsar","Jaipur","Patna","Puducherry","Srinagar","Bhopal"}{}

    void costdeclaration() {
        int N, i, j;
        N = 15;

        long long int arr[15][15] = {
            {0,3500,2000,infinity,1000,infinity,infinity,infinity,infinity,7000,4000,1500,infinity,6500,infinity},
            {3500,0,infinity,1520,infinity,infinity,infinity,2500,infinity,infinity,infinity,infinity,infinity,infinity,5000},
            {2000,infinity,0,1500,infinity,3000,infinity,infinity,infinity,infinity,2000,1000,infinity,infinity,1500},
            {infinity,1520,1500,0,infinity,1200,4500,infinity,6000,infinity,infinity,infinity,infinity,infinity,1000},
            {1000,infinity,infinity,infinity,0,1500,infinity,infinity,infinity,infinity,infinity,infinity,infinity,infinity,infinity},
            {infinity,infinity,3000,1200,1500,0,1950,infinity,infinity,infinity,infinity,infinity,infinity,infinity,infinity},
            {infinity,infinity,infinity,4500,infinity,1950,0,infinity,infinity,2050,infinity,infinity,infinity,infinity,infinity},
            {infinity,2500,infinity,infinity,infinity,infinity,infinity,0,5000,infinity,infinity,infinity,infinity,infinity,infinity},
            {infinity,infinity,infinity,6000,infinity,infinity,infinity,5000,0,7000,infinity,infinity,infinity,infinity,infinity},
            {7000,infinity,infinity,infinity,infinity,infinity,2050,infinity,7000,0,infinity,infinity,infinity,infinity,infinity},
            {4000,infinity,2000,infinity,infinity,infinity,infinity,infinity,infinity,infinity,0,infinity,infinity,infinity,infinity},
            {1500,infinity,1000,infinity,infinity,infinity,infinity,infinity,infinity,infinity,infinity,0,infinity,infinity,infinity},
            {infinity,infinity,infinity,infinity,infinity,infinity,infinity,infinity,infinity,infinity,infinity,infinity,0,infinity,infinity},
            {6500,infinity,infinity,infinity,infinity,infinity,infinity,infinity,infinity,infinity,infinity,infinity,infinity,0,infinity},
            {infinity,5000,1500,1000,infinity,infinity,infinity,infinity,infinity,infinity,infinity,infinity,infinity,infinity,0}
        };

        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                travel[i].cost[j] = arr[i][j];
                travel[i].array[j] = j;
                ini[i].cost[j] = arr[i][j];
            }
        }
    }
};

// Renamed from "bellmanfordalgorithm" — this is actually Floyd-Warshall
// (all-pairs shortest path via a triple i,j,k loop), not Bellman-Ford.
class floydwarshallalgorithm : public datamodule {
public:
    int N, i, j, k;
    floydwarshallalgorithm() { N = 15; }

    void algorithmic_implementation() {
        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                for (k = 0; k < N; k++) {
                    if (travel[i].cost[j] > travel[i].cost[k] + travel[k].cost[j]) {
                        travel[i].cost[j] = travel[i].cost[k] + travel[k].cost[j];
                        travel[i].array[j] = k;
                    }
                }
            }
        }
    }
};

class filehandlingmodule {
public:
    string username1, password1;

    bool log_in(string username, string password) {
        ifstream fileread;
        fileread.open("login.txt");
        while (fileread >> username1 >> password1) {
            if ((username == username1) && (password == password1)) {
                cout << endl << GREEN << "                 Account Login Successful..." << RESET << endl;
                return true;
            }
        }
        cout << endl << RED << "                 Account Login Failed..." << RESET << endl;
        return false;
    }

    void createaccount(string username, string password) {
        ofstream filewrite;
        filewrite.open("login.txt", ios::app);
        filewrite << username << " " << password << "\n";
        filewrite.close();
        cout << endl << GREEN << "                 Account Created ..." << RESET << endl;
    }

    void ticket(string username, vector<string>& firstname, vector<string>& lastname,
                vector<string>& sex, vector<int>& age, int no) {
        ofstream filewrite;
        filewrite.open("ticket.txt", ios::app);
        for (int i = 0; i < no; i++) {
            filewrite << username << " " << firstname[i] << " " << lastname[i] << " "
                      << sex[i] << " " << age[i] << "\n";
        }
        filewrite.close();
    }
};

class inputmodule {
public:
    string source, destination;
    string username, password;

    void user_input(string userchoice[]) {
        clearScreen();
        cout << "\n\n" << BOLD << CYAN << "                                             **************************** Welcome to Travel Management System ****************************" << RESET << endl;
        cout << endl;
        cout << "                 *****************************************" << endl;
        cout << "                 Enter Your City: ";
        cin >> source;
        cout << "                 *****************************************" << endl;
        cout << "                 Enter Your Destination: ";
        cin >> destination;
        cout << "                 *****************************************" << endl;
        userchoice[0] = source;
        userchoice[1] = destination;
    }

    string login() {
        while (1) {
            cout << "\n\n" << BOLD << CYAN << "                                             **************************** Welcome to Travel Management System ****************************" << RESET << endl;
            cout << "\n\n\n\n";
            cout << "                 ENTER                     " << endl;
            cout << "                 *****************************************" << endl;
            cout << "                 ****   1. To Login                  *****" << endl;
            cout << "                 *****************************************" << endl;
            cout << "                 ****   2. To Create New Account     ****" << endl;
            cout << "                 *****************************************" << endl;
            cout << "\n                 Enter Your Choice: ";

            int ch;
            bool res = false;   // FIX: explicitly initialized every iteration
            filehandlingmodule fobj;
            cin >> ch;

            switch (ch) {
                case 1: {
                    clearScreen();
                    cout << "                 Enter Username: ";
                    cin >> username;
                    cout << "                 Enter Your Password: ";
                    cin >> password;
                    res = fobj.log_in(username, password);
                    break;
                }
                case 2: {
                    clearScreen();
                    cout << "                 Enter Username: ";
                    cin >> username;
                    cout << "                 Enter Your Password: ";
                    cin >> password;
                    fobj.createaccount(username, password);
                    // FIX: res stays false here — account creation is not a login
                    break;
                }
                default:
                    cout << RED << "                 Invalid choice. Try again." << RESET << endl;
            }

            if (res == true)
                return username;
        }
    }

    int noofpassenger() {
        int no;
        cout << endl << "                 Enter the no of passengers: ";
        cin >> no;
        return no;
    }
};

class outputmodule {
public:
    string source, destination;

    void initial() {
        clearScreen();
        cout << "\n\n" << BOLD << CYAN << "                                             **************************** Welcome to Travel Management System ****************************" << RESET << endl;
        cout << "\n\n";
        cout << "                 ***************************" << endl;
        cout << "                 *  Facilities Available:  *" << endl;
        cout << "                 ***************************" << endl;
        cout << "\n\n";
        cout << "                 ENTER                     " << endl;
        cout << "                 *****************************************" << endl;
        cout << "                 ****   1. To Display List of Cities  ****" << endl;
        cout << "                 *****************************************" << endl;
        cout << "                 ****   2. To Book Ticket             ****" << endl;
        cout << "                 *****************************************" << endl;
        cout << "                 ****   3. To Exit                    ****" << endl;
        cout << "                 *****************************************" << endl;
    }

    void list_cities(int N) {
        datamodule o;
        clearScreen();
        cout << "\n\n" << BOLD << CYAN << "                                             **************************** Welcome to Travel Management System ****************************" << RESET << endl;
        cout << "\n\n";
        cout << "                 The listed cities are:" << endl;
        cout << "                 *****************************************" << endl;
        for (int i = 0; i < N; i++) {
            cout << "                 *          " << o.city[i] << endl;
        }
        cout << "                 *****************************************" << endl;
    }

    void ticket(long long int total_price, int no, string source, string destination, string username) {
        clearScreen();
        cout << "\n\n" << BOLD << YELLOW << "                                     **************************** E-TICKET ****************************" << RESET << endl;
        cout << endl << "                                     This Ticket is issued for: " << username << endl;
        cout << endl << "                                     Source: " << source << endl;
        cout << endl << "                                     Destination: " << destination << endl;
        cout << endl << "                                     Total No of Passengers: " << no << endl;
        cout << endl << GREEN << "                                     Total Cost: Rs. " << total_price << RESET << endl;
        cout << "\n\n                                     ****************************************************************************" << endl;
    }

    void passengerdetailedticket(int no, vector<string>& firstname, vector<string>& lastname,
                                   vector<string>& sex, vector<int>& age) {
        for (int i = 0; i < no; i++) {
            cout << "                                     Passenger " << (i + 1) << " Details:" << endl << endl;
            cout << "                                     First Name: " << firstname[i] << endl;
            cout << "                                     Last Name: " << lastname[i] << endl;
            cout << "                                     Sex: " << sex[i] << endl;
            cout << "                                     Age: " << age[i] << endl;
            cout << "\n\n                                     ****************************************************************************" << endl;
        }
        int ch;
        cout << endl << "                                     Enter 1 to continue: ";
        cin >> ch;
        if (ch == 1) {
            initial();
        }
    }

    int display_price(string source, string destination, int N, string username) {
        datamodule o;
        inputmodule in;
        int i, j;
        long long int choiceofpassenger = 0;   // FIX: explicit default, not garbage

        for (i = 0; i < N; i++) {
            for (j = 0; j < N; j++) {
                if (source == o.city[i] && destination == o.city[j]) {

                    // FIX: guard against "no route exists at all"
                    if (travel[i].cost[j] == infinity) {
                        cout << endl << RED << "                 Sorry, there is no possible route between "
                             << source << " and " << destination << "." << RESET << endl;
                        cout << endl << "                 Do You Want to Continue(Y/N)? ";
                        char ch;
                        cin >> ch;
                        if (ch == 'Y' || ch == 'y') initial();
                        return 0;
                    }

                    cout << endl;
                    if (ini[i].cost[j] == infinity) {
                        // No direct flight — must go via other cities
                        cout << "                 There is no direct flight from " << source << " to " << destination
                             << ". So, travel via other cities is only possible." << endl;
                        cout << "                 The Price is: Rs. " << travel[i].cost[j] << endl << endl;
                        cout << "                                     The Route is: " << source;
                        int c1 = i, c2 = j;
                        while (c1 != c2) {
                            cout << " --> " << o.city[travel[c1].array[j]];
                            c1 = travel[c1].array[j];
                        }
                        cout << endl << endl;
                        choiceofpassenger = 2;   // FIX: route is the only option available
                    }
                    else if (ini[i].cost[j] == travel[i].cost[j]) {
                        // Direct flight is already the cheapest
                        cout << "                 There is a direct flight available from " << source << " to "
                             << destination << ", and it is the cheapest option." << endl;
                        cout << "                 The Price is: Rs. " << travel[i].cost[j] << endl;
                        choiceofpassenger = 1;   // FIX: direct == route price here, but set explicitly
                    }
                    else {
                        // Direct flight exists, but a cheaper route via other cities is available
                        cout << "                 There is a direct flight available from " << source << " to " << destination << "." << endl;
                        cout << "                 The Price is: Rs. " << ini[i].cost[j] << endl << endl;
                        cout << "                 *****************************************" << endl << endl;
                        cout << "                 You can go via other cities that will cost you less than the direct flight." << endl;
                        cout << "                 The Price is: Rs. " << travel[i].cost[j] << endl << endl;
                        cout << "                                     The Route is: " << source;
                        int c1 = i, c2 = j;
                        while (c1 != c2) {
                            cout << " --> " << o.city[travel[c1].array[j]];
                            c1 = travel[c1].array[j];
                        }
                        cout << endl << endl;
                        cout << "                 Press 1 to go by direct flight and Press 2 to go via other cities: ";
                        cin >> choiceofpassenger;
                    }

                    char c;
                    cout << endl;
                    cout << "                 Do You want to Continue(Y/N)? ";
                    cin >> c;
                    if (c == 'Y' || c == 'y') {
                        int no = in.noofpassenger();

                        // FIX: replaced non-standard VLAs with vectors
                        vector<string> firstname(no), lastname(no), sex(no);
                        vector<int> age(no);

                        for (int p = 0; p < no; p++) {
                            cout << endl;
                            cout << "                 *****************************************" << endl;
                            cout << "                 Passenger " << (p + 1) << ":" << endl << endl;
                            cout << "                 First Name: ";
                            cin >> firstname[p];
                            cout << endl << "                 Last Name: ";
                            cin >> lastname[p];
                            cout << endl << "                 Sex(Male/Female/Other): ";
                            cin >> sex[p];
                            cout << endl << "                 Age: ";
                            cin >> age[p];
                        }

                        long long int total_price;
                        if (choiceofpassenger == 1) {
                            total_price = no * ini[i].cost[j];
                        } else {
                            total_price = no * travel[i].cost[j];
                        }

                        cout << endl << GREEN << "                 The total Price is: Rs. " << total_price << RESET << endl;
                        char y;
                        cout << "                 Do You want to confirm Your Ticket(Y/N)? ";
                        cin >> y;
                        if (y == 'Y' || y == 'y') {
                            filehandlingmodule f;
                            f.ticket(username, firstname, lastname, sex, age, no);
                            ticket(total_price, no, source, destination, username);
                            passengerdetailedticket(no, firstname, lastname, sex, age);
                        } else {
                            cout << endl << "                 Thank You For choosing Us...";
                            cout << endl << "                 Do You Want to Continue(Y/N)? ";
                            char ch2;
                            cin >> ch2;
                            if (ch2 == 'Y' || ch2 == 'y') {
                                initial();
                            }
                            return 0;
                        }
                    } else {
                        cout << endl << "                 Thank You For choosing Us...";
                        cout << endl << "                 Do You Want to Continue(Y/N)? ";
                        char ch2;
                        cin >> ch2;
                        if (ch2 == 'Y' || ch2 == 'y') {
                            initial();
                        }
                    }
                    return 0;
                }
            }
        }

        cout << RED << "                 Sorry, the city name entered was not recognized." << RESET << endl;
        cout << endl << "                 Do You Want to Continue(Y/N)? ";
        char ch;
        cin >> ch;
        if (ch == 'Y' || ch == 'y') {
            initial();
        }
        return 0;
    }
};

int main() {
    int N = 15;

    datamodule obj;
    obj.costdeclaration();

    floydwarshallalgorithm ob;
    ob.algorithmic_implementation();

    string userchoice[2];
    inputmodule obj1;

    string username = obj1.login();

    outputmodule object;
    object.initial();

    while (1) {
        int choice;
        cout << "\n                 Enter Your Choice: ";
        cin >> choice;
        switch (choice) {
            case 1: {
                object.list_cities(N);
                cout << "\n\n                 Press 1 to Continue...";
                int cont;
                cin >> cont;
                if (cont == 1) {
                    object.initial();
                }
                break;
            }
            case 2: {
                obj1.user_input(userchoice);
                object.display_price(userchoice[0], userchoice[1], N, username);
                break;
            }
            case 3: {
                cout << endl << "                 Thank you for using the Travel Management System. Goodbye!" << endl;
                return 0;
            }
            default:
                cout << RED << "                 Invalid choice. Please try again." << RESET << endl;
        }
    }
    return 0;
}