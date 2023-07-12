#include <iostream>

using namespace std;

int main() {
    char current_char = 'A';
    int num_rows;
    
    cout << "Enter the number of rows in the pyramid: ";
    cin >> num_rows;
    
    for (int i = 1; i <= num_rows; i++) {
        // Print spaces to align the letters in the row
        for (int j = 1; j <= num_rows - i; j++) {
            cout << " ";
        }
        
        // Print letters in ascending order
        for (int j = 1; j <= i; j++) {
            cout << current_char << " ";
            current_char++;
        }
        
        // Print letters in descending order
        for (int j = 1; j < i; j++) {
            current_char--;
            cout << current_char << " ";
        }
        
        // Move to the next row
        cout << endl;
        
        // Reset current_char for the next row
        current_char = 'A';
    }
    
    return 0;
}
