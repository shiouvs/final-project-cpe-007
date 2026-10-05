#include <iostream>
#include <string>
#include <cstring>
#include <cctype>
#include <limits>

using namespace std;

int main(){
    int size = 20;
    char name[size];
    int rate, ans, num, work;
    string days[7] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};

    cout << "===== Welcome to CROWS! =====" << endl;
    cout << "Please enter your name: ";
    cin.getline(name, size);
    cout << "Do you commute to work or work from home?" << endl;
    cin >> ans;
    cout << "Rate from 1-5 your mood today" << endl;
    cin >> rate; //once rated, ibabase yung schedule sa mood nya kasi baka maging overwhelming para sakanya yung sched na magegenerate

    cout << "====Weekly Schedule====\n";

    while (true) {
        cout << "Pick a day (0 is Sunday and 6 is Saturday): ";
        cin >> num;

        // If the input is wrong, fix it and continue the loop
        if (cin.fail()) {
            cout << "That is not a valid number. Try again." << endl;
            cin.clear(); // Reset the error flag
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear bad input
            continue; // Go back to the top of the while loop
        }

        if (num >= 0 && num < 7) {
            cout << days[num] << endl;
            break; // Exit the loop
        } else {
            cout << "Invalid number. Try again." << endl;
        }
    }
    //pwede magdelete kapag ayaw ng sched tas gagawa ulit ng bago. while() para reset HAHAHA
    while (true) {
        cout << "Enter your work schedule(numbers used are from 00:00 to 24:00): ";
        cin >> work;
    }    
    return 0;
}