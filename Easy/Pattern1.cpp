#include <iostream>
using namespace std;
void pattern1(int rows, int columns) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << i << j << " ";
        }
        cout << "\n";
    }
}
int main() {
    int rows, columns;
    cin >> rows >> columns; 
    pattern1(rows, columns);
    return 0;
}