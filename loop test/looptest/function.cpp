#include<iostream>
#include<string>
void func() {
	int table;
	int limit;
	int result = 0;
	std::cout << "Enter the table number" << std::endl;
	std::cin >> table;
	std::cout << "Enter Limit of Table" << std::endl;
	std::cin >> limit;
	std::cout << "------------------------------------------------------------------------------" << std::endl;
	for (int i = 1;i <= limit;i++) {
		result = table * i;
		std::string oka =std::to_string(table) +  "x" + std::to_string(i) + "=" + std::to_string(result);
		std::cout <<  oka << std::endl;

	}
	std::cin.get();
}