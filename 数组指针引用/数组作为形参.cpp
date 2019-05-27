#include <iostream>
// 使用数组名作为是参，数组作为形参，可以看作和使用数组名作为实参，指针作为形参一样的效果
// 如下
void fun(int dat[], const int len)
{
	for (int i = 0; i < len; ++i)
		std::cout << *(dat++) << std::endl; // 可以进行++
	return;
}

// 当需要使用数组的引用作为形参时，需要指明数组的维度，此时，该形参就是实参的别名
// 而数组名本质可以看作指针常量，无法修改指向，因此无法进行++dat操作。
void fun2(int (&dat)[5], const int len)
{
	for (int i = 0; i < len; ++i)
		std::cout << *(dat++) << std::endl; // 无法进行++
	return;
}



int main()
{
	int dat[] = {1,2,3,4,5};
	const int len = 5;
	fun(dat, len);
	fun2(dat, len);
	return 0;
}
