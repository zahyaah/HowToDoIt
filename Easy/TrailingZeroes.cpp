#include <iostream>
using namespace std; 
int main() {
    int num; cin >> num; 
    while (num%10==0) num/=10; 
    cout << num; 
    return 0;
}