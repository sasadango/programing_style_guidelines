# include <iostream>
using namespace std;

int main(){
    int year;

    cout << "好きな年を入力してください" << "\n";
    cin >> year;

    if (year % 100 == 0){
        if (year % 400 ==0)
            cout << "うるう年です" << "\n";
        else
            cout << "うるう年ではない" << "\n";
    }
    else if (year % 4 ==0)
        cout << "うるう年です" << "\n";
    else
        cout << "うるう年ではない" << "\n";
}
