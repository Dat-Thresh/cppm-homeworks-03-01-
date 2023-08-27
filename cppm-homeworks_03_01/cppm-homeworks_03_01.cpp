// cppm-homeworks_03_01.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Calculator {
private:
    double num1;
    double num2;
public:
   
    //записывает число1
    bool set_num1(double num1) {
        if (num1 == 0) {
            return false;
        }
        this->num1 = num1;
        return true;
    };
    //записывает число2
    bool set_num2(double num2) {
        if (num2 == 0) {
            return false;
        }
        this->num2 = num2;
        return true;
    };
    //сложение
    double add() {
        return num1 + num2;
    }
    //умножение
    double multiply() {
        return num1 * num2;
    }
    //вычитание: число1 - число 2
    double substract_1_2() {
        return num1 - num2;
    };
    //вычитание: число2 - число1
    double substract_2_1() {
        return num2 - num1;
    }
    //деление: число1/число2
    double divide_1_2() {
        return num1 / num2;
    }
    double divide_2_1() {
        return num2 / num1;
    }
};


int main()
{
    setlocale(LC_ALL, "rus");
    double check;
    Calculator result;
    //гоняем бесконечно
    while (true) {
        //пока не введет число1 не равное нулю, будем спрашивать
        do {
            std::cout << "Введите num1: ";
            std::cin >> check;
            if (check == 0) {
                std::cout << "Неверный ввод!" << std::endl;
            }
        } while (!result.set_num1(check));
        //пока не введет число2 не равное нулю, будем спрашивать
        do {
            std::cout << "Введите num2: ";
            std::cin >> check;
            if (check == 0) {
                std::cout << "Неверный ввод!" << std::endl;
            }
        } while (!result.set_num2(check));

        std::cout << "num1" << " + " << "num2 = " << result.add() << std::endl;
        std::cout << "num1" << " - " << "num2 = " << result.substract_1_2() << std::endl;
        std::cout << "num2" << " - " << "num1 = " << result.substract_2_1() << std::endl;
        std::cout << "num1" << " * " << "num2 = " << result.multiply() << std::endl;
        std::cout << "num1" << " / " << "num2 = " << result.divide_1_2() << std::endl;
        std::cout << "num2" << " / " << "num1 = " << result.divide_2_1() << std::endl << std::endl;
    }
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
