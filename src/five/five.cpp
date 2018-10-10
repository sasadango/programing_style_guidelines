# include <iostream>

float data[5];  // 平均と合計を求めるデータ
float total;  // データ項目の合計
float average;  // データ項目の平均値

int main(){
    data[0] = 34.0;
    data[1] = 27.0;
    data[2] = 46.5;
    data[3] = 82.0;
    data[4] = 22.0;

    total = data[0] + data[1] + data[2] + data[3] + data[4];
    average = total / 5.0;
    std::cout << "Total " << total << " Average " << average << '\n';
    return (0);
}