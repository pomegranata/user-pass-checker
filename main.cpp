#include <iostream>
#include <cstring>

using namespace std;



bool digit (char pass[6]){
    bool dig = false;
    for (int i = 0; i <= strlen(pass); i++){
        if (isdigit(pass[i])){
            dig = true;
        }
    }
    return dig;
}

int main()
{

    bool kombinasi(char user[8]){
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
    char user[8];
    char pass[6];


    cout << "Username (masukkan maksimal 8 karakter): ";
    cin >> user;

    cout << "Password (masukkan maksimal 6 karakter): ";
    cin >> pass;

    if (strlen(user) > 8 || strlen(pass) > 6){
        cout << "\nKarakter melebihi kapasitas" << endl;
    } else {
        if (kombinasi(user) && digit(pass)){
            cout << "\nData berhasil direkam" << endl;
        } else {
            cout << "\nGunakan kombinasi huruf besar dan kecil untuk username serta gunakan angka untuk password" << endl;
        }
    }


    return 0;
}
