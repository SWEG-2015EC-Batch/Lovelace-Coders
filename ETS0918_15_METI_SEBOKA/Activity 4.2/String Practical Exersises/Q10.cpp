#include <iostream>
#include <cstring> 
using namespace std;

int main() {
    char password[] = {"MyPassword123"}; 
    string passwordTry;

    cout << "Enter the password: ";
    getline(cin, passwordTry);

    for(int i=0; i<strlen(password);i++){
        if(passwordTry[i] != password[i]){
            cout << "Incorrect Password!";
            return 0;
        }
    }
    cout << "Correct!";

    return 0;
}
