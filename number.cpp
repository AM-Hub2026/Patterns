#include <iostream>
using namespace std;

int main (){
    int num;
    cout << "Enter Number:";
    cin >> num;
    // outer loop
    for(int i=1;i<=num;i++){
        // inner loop
        for(int j=1;j<=num;j++){
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}