# include <iostream>
# include "main.h"

int main(int argc, char const *argv[]) {
	
	// ������ �������
std::cout << a * (b + (c * 1.0f / d)) << std::endl;
   
   // ������ �������
int num = 20;
 std::cout << "less: " << ((num <= 21) ? 21 - num : (num - 21) * 2) << std::endl;
 num = 22;
 std::cout << "more: " << ((num <= 21) ? 21 - num : (num - 21) * 2) << std::endl;
   
return 0;
}