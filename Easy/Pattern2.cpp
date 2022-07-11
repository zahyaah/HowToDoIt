#include <iostream>
using namespace std;
void pattern2(int rows, int columns) {
    int k = 1;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cout << k++ << "\t";
        }
        cout << "\n";
    }
}
int main() {
    int rows, columns; 
    cin >> rows >> columns;
    pattern2(rows, columns);
    return 0;
}