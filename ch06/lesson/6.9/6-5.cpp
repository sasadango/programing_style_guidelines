// 従業員の1週間の労働時間と時給からその週の賃金を算出するプログラムを生成する
// 40時間を超えた分の労働時間は残業扱いにし，1.5倍の時給で計算する

# include <iostream>
using namespace std;

int main(){
    int hour = 0;
    int hour_ = 0;
    int money = 0;
    int salary = 0;

    cout << "労働時間を入力してください．" << "\n";
    cin >> hour;
    cout << "あなたの時給を教えてください．" << "\n";
    cin >> money;

    if (hour >= 40){
        hour_ = hour - 40;
    }

    salary = (40 + hour_ * 1.5) * money;
    cout << "あなたの賃金は:" << salary << "\n";
}
