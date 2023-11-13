#include <iostream>
#include <cstring>

using namespace std;

bool combi(char user[8]){
    bool up = false;
    bool low = false;
    for (int i = 0; i <= strlen(user); i++){
        if (isupper(user[i])){
            up = true;
        } else if (islower(user[i])) {
            low = true;
        }
    }
    return up && low;
}

bool digit(char pass[6]){
    bool dig = false;
    for (int i = 0; i <= strlen(pass); i++){
        if (isdigit(pass[i])){
            dig = true;
        }
    }
    return dig;
}

int main(){

    char user[8];
    char pass[6];


    cout << "Username: ";
    cin >> user;

    cout << "Password: ";
    cin >> pass;

    if (strlen(user) > 8 || strlen(pass) > 6){
        cout << "\nToo much characters" << endl;
    } else {
        if (combi(user) && digit(pass)){
            cout << "\nWelcome!" << endl;
        } else if (combi(user) == true && digit(pass) == false){
            cout << "\nOnly digits are allowed for the password" << endl;
        } else if (combi(user) == false && digit(pass) == true){
            cout << "\nUse uppercase and lowecase combination for the username" << endl;
        } else {
            cout << "\nUse letters for the username and digits for the password" << endl;
        }
    }


    return 0;
}
