#include <iostream>
int main(){
	int a;
	std::cin >> a;
	int b = (a < 21) ? a - 21 : 2 * (a - 21);
	std::cout << b;
}