#include <iostream>  
#include <vector>  
#include <windows.h>  
using namespace std;
// aftours: LeRMoN, Kolia, XeSh, FlasH. school Shag, code: house worken. my tg:https://t.me/LERMONfupa <- click Ctrl+Left mouse, im check sms.Надеюсь правильно написал. \\   
// 1  
void SetCursor(int x, int y, int color) {
    cout << "\033[" << y << ";" << x << "H" << "\033[38;5;" << color << "m";
}

// 2  
void Line(int length, char character, int color, bool horizontal) {
    SetCursor(0, 0, color);
    if (horizontal) {
        for (int i = 0; i < length; i++) {
            cout << character;
        }
    }
    else {
        for (int i = 0; i < length; i++) {
            SetCursor(0, i, color);
            cout << character;
        }
    }
    SetCursor(0, length + 1, color);
}

// 3  
bool chettt(int number) {
    if (number <= 1) return false;
    for (int i = 2; i <= sqrt(number); i++) {
        if (number % i == 0) return false;
    }
    return true;
}

// 4  
double average(const vector<double>& numbers) {
    if (numbers.empty()) return 0.0;
    double sum = 0.0;
    for (double number : numbers) {
        sum += number;
    }
    return sum / numbers.size();
}

int main() {
    SetCursor(0, 0, 12);
    Line(20, '@', 12, true);
    cout << "\n";
    cout << "Is 7 prime? " << (chettt(7) ? "Yes" : "No") << "\n";

    vector<double> arr = { 1, 2, 3, 4, 5 };
    cout << "average: " << average(arr) << "\n";

    return 0;
}