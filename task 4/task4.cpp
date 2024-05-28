#include <iostream>
#include <limits> // Include for numeric_limits
#include <ios>    // Include for streamsize

using namespace std;

int main() {
    int userInput;

    // Prompt the user for an integer value between 5 and 10
    cout << "Please enter an integer value between 5 and 10: ";
    
    // Keep prompting until a valid integer between 5 and 10 is entered
    while (!(cin >> userInput) || userInput < 5 || userInput > 10) {
        cout << "Invalid input. Please enter an integer value between 5 and 10: ";
        cin.clear(); // Clear input stream
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
    }

    // Output a message to inform the user that their input value has been accepted
    cout << "Your input value " << userInput << " has been accepted." << endl;

    return 0;
}