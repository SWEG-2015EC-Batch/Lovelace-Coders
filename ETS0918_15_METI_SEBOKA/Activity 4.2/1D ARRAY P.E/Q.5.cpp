#include <iostream>

using namespace std;

int main(){

    float marks[]= {98, 35, 67, 74, 80, 90, 55, 65};
    string status[] = {" Excellent", " Very Good", " Fair", " Poor", " Fail"};

    cout << "Results:\n";

    for (int i =0; i < 8; i++){
        if (marks[i] >= 80){
            cout << marks[i] << "\t" << status[0] << '\n';
        }
        else if (marks[i] >= 60){
            cout << marks[i] << "\t" << status[1] << '\n';
        }
        else if (marks[i] >= 50){
            cout << marks[i] << "\t" << status[2] << '\n';
        }
        else if (marks[i] >= 40){
            cout << marks[i] << "\t" << status[3] << '\n';
        }else{ 
            cout << marks[i] << '\t' << status[4] << '\n';
        }
    }
 


    return 0;
    
}
