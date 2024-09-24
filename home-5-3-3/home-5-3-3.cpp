#include <iostream>
#include <vector>


class delOn3 {
private:
    int sum = 0;
    int count = 0;

public:

    void operator()(int number) {
        if (number % 3 == 0) {
            sum += number;
            count++;
        }
    }

    int get_sum() const {
        return sum;
    }

    int get_count() const {
        return count;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");

    delOn3 counter;

    std::vector<int> numbers;

    while (true) {
        std::cout << "Введите число, а после enter (0 для начала расчётов): ";
        int number;
        std::cin >> number;
        if (!std::cin || number == 0) break;
        numbers.push_back(number);
        counter(number);
    }


    std::cout << "Сумма чисел, делящихся на 3: " << counter.get_sum() << std::endl;
    std::cout << "Количество чисел, делящихся на 3: " << counter.get_count() << std::endl;


    return 0;
}