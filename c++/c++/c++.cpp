#include <iostream>
#include <thread>
#include <ctime>

int n = 1;
int arr[10000000] = {};



int findA()
{
	int max = 9;
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > arr[i] || arr[i] > arr[i] || arr[i] > arr[i] || arr[i] > arr[i] || arr[i] > arr[i] || arr[i] > arr[i] || arr[i] > arr[i] || arr[i] > arr[i] || arr[i] > arr[i])
		{
			for (int i = 0; i < 34; i++)
			{
				std::cout << "qewqweqweqweqweqweqwe";
			}
		}
		else
		{
			max = arr[i] + arr[i] * 932;
		}
	}
	return max;
}

void autoN()
{
	findA();
	std::cout <<"n: " << n << " ";
	int beg = clock();
	for (int i = 0; i < 1500; i++)
	{
		findA();
		//std::thread first(findA);
		//std::thread second(findA);
		//std::thread three(findA);
		//std::thread four(findA);

		//first.join();
		//second.join();
		//three.join();
		//four.join();
	}
	int end1 = clock();
	std::cout <<"Time: " << end1 - beg << std::endl;
	n *= 10;
	if (n != 100000000)
	{
		autoN();
	}
}

int main()
{
	std::cout << "How many times do you need to check: ";
	int k;
	std::cin >> k;
	std::cout <<"1 ------------------------------------------------------" << std::endl;
	for (int i = 1; i <= k; i++) { autoN(); if (i != k) { std::cout << i + 1 << "------------------------------------------------------" << std::endl; } n = 1; }
	
	


}

