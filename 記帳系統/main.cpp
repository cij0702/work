#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include "Income.h"
#include "Expense.h"
#include "AccountBook.h"
using namespace std;

int main() {
    AccountBook book;
    int choice;

    do {
        cout << "\n===== 記帳系統 =====" << endl;
        cout << "1. 新增收入" << endl;
        cout << "2. 新增支出" << endl;
        cout << "3. 顯示所有紀錄" << endl;
        cout << "4. 查看目前存款" << endl;
        cout << "0. 離開" << endl;
        cout << "請輸入選項：";
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            double amount;
            string date, description, source;

            cout << "輸入金額：";
            cin >> amount;
            cin.ignore();

            cout << "輸入日期（格式：YYYY-MM-DD）：";
            getline(cin, date);

            cout << "輸入描述：";
            getline(cin, description);

            cout << "輸入收入來源：";
            getline(cin, source);

            book.addRecord(new Income(amount, date, description, source));
            cout << "收入已新增。\n";

        }
        else if (choice == 2) {
            double amount;
            string date, description;
            int categoryChoice;

            cout << "輸入金額：";
            cin >> amount;
            cin.ignore();

            cout << "輸入日期（格式：YYYY-MM-DD）：";
            getline(cin, date);

            cout << "輸入描述：";
            getline(cin, description);

            cout << "選擇支出類別：" << endl;
            cout << "1. 食物" << endl;
            cout << "2. 交通" << endl;
            cout << "3. 娛樂" << endl;
            cout << "4. 日用品" << endl;
            cout << "請選擇：";
            cin >> categoryChoice;

            ExpenseCategory cat = Food;
            switch (categoryChoice) {
            case 1: cat = Food; break;
            case 2: cat = Transportation; break;
            case 3: cat = Entertainment; break;
            case 4: cat = Necessities; break;
            default: cout << "類別錯誤，預設為 食物。\n"; break;
            }

            book.addRecord(new Expense(amount, date, description, cat));
            cout << "支出已新增。\n";

        }
        else if (choice == 3) {
            cout << "\n 所有紀錄如下：\n";
            book.showAll();
        }
        else if (choice == 4) {
            cout << "目前存款為：$" << book.getBalance() << "\n";
        }
        else if (choice != 0) {
            cout << "無效的選項，請重新輸入。\n";
        }

    } while (choice != 0);

    cout << "感謝使用，再見！\n";
    return 0;
}
