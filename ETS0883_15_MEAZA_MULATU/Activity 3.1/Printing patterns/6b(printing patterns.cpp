#include <iostream>

using namespace std;

int main()
{
    int menu;
    cout<<" enter 1 to see pattern of rectangle"<<endl
        <<" enter 2 to see pattern of hollow rectangle"<<endl
        <<" enter 3 to see pattern of half pyramid"<<endl
        <<" enter 4 to see pattern of inverted half pyramid"<<endl
        <<" enter 5 to see pattern of hollow inverted half pyramid"<<endl
        <<" enter 6 to see pattern of full pyramid"<<endl
        <<" enter 7 to see pattern of inverted pyramid"<<endl
        <<" enter 8 to see pattern of hollow pyyramid"<<endl
        <<" enter 9 to see pattern of rectangular pattern of numbers"<<endl
        <<" enter 10 to see pattern of half pyramid of numbers"<<endl
        <<" enter 11 to see pattern of reversed pyramid of numbers"<<endl
        <<" enter 12 to see pattern of rectangle of small letters"<<endl
        <<" enter 13 to see pattern of rectangle of capital letters"<<endl
        <<" enter 14 to see pattern of half pyramid of capital letters"<<endl;
    cin>>menu;
    switch(menu){
    case 1:
        cout<<"you chose pattern of rectangle"<<endl;
        for(int i=1;i<=4;i++){//i refers to number of row
          for(int j=1;j<=7;j++){//j refers to number of column
             cout<<"* ";}
             cout<<endl;}
    break;
    case 2:
        cout<<"you chose pattern of hollow rectangle"<<endl;
        for(int i=1;i<=6;i++){//i refers to number of row
          for(int j=1;j<=10;j++){//j refers to number of column
                if(i==1||i==6||j==1||j==10)
                cout<<".";
                else
                    cout<<" ";}
                cout<<endl;}
    break;
    case 3:
        cout<<"you chose pattern of half pyramid"<<endl;
        for(int i=1;i<=6;i++){//i refers to number of row
        for(int j=1;j<=i;j++){//j refers to number of column
         cout<<". ";}
        cout<<endl;}
  break;
    case 4:
        cout<<"you chose pattern of inverted half pyramid"<<endl;
        for(int i=6;i>=1;i--){//i refers to number of row
         for(int j=1;j<=i;j++){//j refers to number of column
         cout<<".";}
        cout<<endl;}
   break;
    case 5:
        cout<<"you chose pattern of hollow inverted half pyramid"<<endl;
        for(int i=6;i>=1;i--){//i refers to number of row
        for(int j=1;j<=5;j++){//j refers to number of column
            cout<<" ";}
            for( int k=1;k<=i;k++)
                if(k==1||k==i||i==6)
                cout<<".";
            else
                cout<<" ";
        cout<<endl;}
   break;
    case 6:
        cout<<"you chose pattern of full pyramid"<<endl;
        for(int i=1;i<=6;i++){//i refers to number of row
            for(int k=5;k>=i;k--){// k is used to show empty spaces
                cout<<" ";
            }
           for(int j=1;j<=i;j++){//j refers to number of column
            cout<<" .";}
           cout<<endl;}
  break;
    case 7:
        cout<<"you chose pattern of inverted full pyramid"<<endl;
        for(int i=1;i<=6;i++){//i refers to number of row
            for(int k=1;k<=i;k++){// k is used to show empty spaces
                cout<<" ";
            }
           for(int j=6;j>=i;j--){//j refers to number of column
            cout<<" .";}
           cout<<endl;}
  break;
    case 8:
         cout<<"you chose pattern of hollow full pyramid"<<endl;
        for(int i=1;i<=6;i++){//i refers to number of row
            for(int k=5;k>=i;k--){// k is used to show empty spaces
                cout<<" ";
            }
           for(int j=1;j<=2*i-1;j++){//j refers to number of column
            if(j==1||j==2*i-1||i==6)
            cout<<" .";
            else
                cout<<" ";}
           cout<<endl;}
  break;
    case 9:
         cout<<"you chose rectangle of numbers"<<endl;
         for(int i=1;i<6;i++){//i refers to number of row
            for(int j=1;j<6;j++){// k is used to show empty spaces
                cout<<j<<" ";}
            cout<<endl;}
 break;
    case 10:
         cout<<"you chose half pyramid of numbers"<<endl;
         for(int i=1;i<=5;i++){//i refers to number of row
            for(int j=1;j<=i;j++){// k is used to show empty spaces
                cout<<j<<" ";}
            cout<<endl;}
 break;
    case 11:
         cout<<"you chose reversed half pyramid of numbers"<<endl;
         for(int i=1;i<=5;i++){//i refers to number of row
               for(int k=4;k>=i;k--){
                cout<<" ";}
            for(int j=6;j>=i;j--){// k is used to show empty spaces
                cout<<j<<" ";}
            cout<<endl;}
break;
    case 12:
        cout<<"you chose rectangle of small letters"<<endl;
        for(char i='a';i<='e';i++){
           for(char j='a';j<='e';j++){
            cout<<j<<" ";}
            cout<<endl;}
break;
    case 13:
         cout<<"you chose rectangle of capital letters"<<endl;
          for(char j='A';j<='X';j++){
                if(j=='G'||j=='M'||j=='S')
                cout<<endl;
                 cout<<j<<" ";}

break;
    case 14:
         cout<<"you chose half pyramid of letters"<<endl;
         for(char i='A';i<='E';i++){//i refers to number of row
            for(char j='A';j<=i;j++){// k is used to show empty spaces
                cout<<j<<" ";}
            cout<<endl;}
 break;




    }

    return 0;
}
