//BMI Calculation VERSION 2 program
 #include <iostream>
using namespace std;
int main(){
 double weight, height, BMI;
 char gender;
 
  cout << "Enter your gender (M for male, F for female): ";
    cin >> gender;
   cout << " enter weight in kilograms: ";
    cin >> weight;
    cout << " enter your height in meters: ";
    cin >> height;
    
    BMI = weight / (height * height);//calculate BMI
   cout << "the BMI is: " << BMI;



 if (gender == 'F') 
    if (BMI < 18.5) 
        cout << "You are underweight.";
    
    else if (BMI >= 18.5    &&    BMI <= 24.9) 
        cout << "You are at a healthy weight.";
     else if (BMI >= 25    &&    BMI <= 29.9) 
        cout << "You are overweight.";
    
    else 
        cout << "You are obese.";
    

    
   else if (gender == 'M') 
    if (BMI < 20.5 ) 
        cout << "You are underweight.";
    
    else if (BMI >= 20.5  &&     BMI <= 25.9) 
        cout << "You are at a normalweight.";
    

    else if (BMI >= 26    &&   BMI <= 29.9) 
        cout << "You are overweight.";
    
    else 
        cout << "You are obese.";
return 0;
}

