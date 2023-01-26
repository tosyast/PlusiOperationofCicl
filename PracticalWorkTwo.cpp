#include <iostream>
#include <string>
using namespace std; //объявление
#include <windows.h>


int main()
{
    SetConsoleCP(1251); 
    SetConsoleOutputCP(1251);
    string Console;
    int sum = 0;
    
    do {
        std::cout << "Введите число. Для выхода из программы напишите End";
        std::cout << "\n";
        cin >> Console;
        int number = atoi(Console.c_str());
        int s;
        int long factorial = 1;
        bool f = true;
        if (Console != "End" && number > 0) {
            
                for (s = 1; s <= number; s++) {
                    factorial *= s;
                }
                std::cout << "Факториал: ";
                cout << factorial;
                std::cout << "\n";
        }
        if (number < 0) {
            std::cout << "Число отрицательное";
            cout << "\n";
        }
        if (number > 0) {
            for ( int i = 2; i <= sqrt(number); i++) {
                if (number % i == 0) {
                    f = false;
                   break;
                }
            }
            if (f == true) {
                std::cout << "Число простое";
                sum += number;
                cout << "\n";
            }
        }
        std::cout << "----------";
        cout << "\n";
        if (Console == "End") {
            std::cout << "Сумма простых чисел:";
            cout << "\n";
            std::cout << sum;
        }
        

    } while (Console != "End");
    

}



