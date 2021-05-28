#include <iostream>

int main(int argc, char const *argv[]) {

    // первое задание;
    int a = 8;
    const int b = 7;
    bool result; 
    result = (a + b) >= 10 && (a + b) <= 20;
    std::cout << "1. " << (a + b) << ": " << result << std::endl;
    a = 2;
    result = (a + b) >= 10 && (a + b) <= 20;
    std::cout << "1. " << (a + b) << ": " << result << std::endl;
    a = 15;
    result = (a + b) >= 10 && (a + b) <= 20;
    std::cout << "1. " << (a + b) << ": " << result << std::endl;

    // второе задание;
    int number = 2;
    result = true;
    size_t i = 2;
    while (i < number) {
        if (number % i == 0) {
            result = false;
            break;
        }
		i++;
    }
    std::cout << "2. " << number << ": " << result << std::endl;
    number = 7;
    result = true;
    i = 2;
    while (i < number) {
        if (number % i == 0) {
            result = false;
            break;
        }
		i++;
    }
    std::cout << "2. " << number << ": " << result << std::endl;
    number = 6;
    result = true;
    i = 2;
    while (i < number) {
        if (number % i++ == 0) {
            result = false;
            break;
        }
    }
    std::cout << "2. " << number << ": " << result << std::endl;
	
	// третье задание
    result = (a == 10 || b == 10) || (a + b == 10);
    std::cout << "3. " << a << ", " << b << ": " << result << std::endl;
    number = 5;
    result = (number == 10 || b == 10) || (number + b == 10);
    std::cout << "3. " << number << ", " << b << ": " << result << std::endl;
    number = 10;
    result = (number == 10 || b == 10) || (number + b == 10);
    std::cout << "3. " << number << ", " << b << ": " << result << std::endl;
	
	return 0;
}