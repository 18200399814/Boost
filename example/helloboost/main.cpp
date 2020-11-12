// helloboost.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <boost/version.hpp>
#include <boost/config.hpp>
#include <boost/thread/thread.hpp>

static void sayHello();

int main(void)
{
	std::cout << BOOST_VERSION << std::endl;
	std::cout << BOOST_LIB_VERSION << std::endl;
	std::cout << BOOST_PLATFORM << std::endl;
	std::cout << BOOST_COMPILER << std::endl;
	std::cout << BOOST_STDLIB << std::endl;

	boost::thread my_thread(&sayHello);
	my_thread.join();

	return 0;
}

void sayHello()
{
	std::cout << "Hello World!\n";
}