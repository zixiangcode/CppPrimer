#include <iostream> 
#include <string>

int main()
{
	std::cout << "bool:\t\t" << sizeof(bool) << " bytes" << "\n" << "\n";
	std::cout << "char:\t\t" << sizeof(char) << " bytes" << "\n";
	std::cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes" << "\n";
	std::cout << "char16_t:\t" << sizeof(char16_t) << " bytes" << "\n";
	std::cout << "char32_t:\t" << sizeof(char32_t) << " bytes" << "\n" << "\n";
	std::cout << "short:\t\t" << sizeof(short) << " bytes" << "\n";
	std::cout << "int:\t\t" << sizeof(int) << " bytes" << "\n";
	std::cout << "long:\t\t" << sizeof(long) << " bytes" << "\n";
	std::cout << "long long:\t" << sizeof(long long) << " bytes" << "\n" << "\n";
	std::cout << "float:\t\t" << sizeof(float) << " bytes" << "\n";
	std::cout << "double:\t\t" << sizeof(double) << " bytes" << "\n";
	std::cout << "long double:\t" << sizeof(long double) << " bytes" << "\n" << "\n";

	const int constValue = 5;
	// constValue = const_cast<int&>(constValue);
	int nonConstValue = const_cast<int&>(constValue);
	std::cout << nonConstValue << "\n";

	// const char c = 'c';
	// const char *pc = &c;
	// char *p = const_cast<char*>(pc);
	// *p = '1';
	// std::cout << *p << "\n";

	int a = 10;
	double b = static_cast<double>(a); // 合法

	int *pa = &a;
	double *pb = reinterpret_cast<double*>(pa); // 错误，不可以存在具体类型指针的转换
	// int *pb = static_cast<int*>(pa); // 合法，由 int* 转为 int* 是允许的
	
	return 0;
}