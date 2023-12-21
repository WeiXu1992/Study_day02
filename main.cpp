#include<iostream>
#include<thread>	
#include<chrono>


struct Timer
{
	std::chrono::time_point<std::chrono::steady_clock> start, end;
	std::chrono::duration<float> duration;
public:
	Timer() {

		start = std::chrono::high_resolution_clock::now();
	}

	~Timer()
	{
		end = std::chrono::high_resolution_clock::now();

		duration = end - start;

		float ms = duration.count() * 1000.0f;

		std::cout << ms << "ms" << std::endl;
	}

private:




};

void Function() {
	Timer t;
	for (int i = 0; i < 1000; i++)
	{
		std::cout << "print" << i << std::endl;
	}
}

int main()
{
	/*
	using namespace std::literals::chrono_literals;

	auto start = std::chrono::high_resolution_clock::now();

	std::this_thread::sleep_for(1s);

	auto end = std::chrono::high_resolution_clock::now();

	std::chrono::duration<float> duration = end - start;

	std::cout << duration.count() << std::endl;

	*/

	Function();

	std::cin.get();



}