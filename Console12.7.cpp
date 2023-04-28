
#include "is_kperiodic.h"
#include <chrono>

int main()
{
	//В наихудшем случае временная сложность алгоритма O(n)
	//в лучшем O(1)
	int k = 11;
	std::string str = "IsKPeriodicIsKPeriodicIsKPeriodicIsKPeriodicIsKPeriodicIsKPeriodicIsKPeriodicIsKPeriodicIsKPeriodicIsKPeriodicIsKPeriodicIsKPeriodic";
	
	std::chrono::duration<double> elapsed;

	auto start = std::chrono::high_resolution_clock::now();
	
	isKPeriodic(str, k);
   
	auto finish = std::chrono::high_resolution_clock::now();
	elapsed = finish - start;
	std::cout << "Elapsed time: " << elapsed.count() << " sec" << "\n";

	k = 22;
	isKPeriodic(str, k);

	std::string str1 = "IsKPeriodicIsKPeriodicIsKPeriodicIsKPeriodicIsKPeriodicIsKPeriodicIsKPeriodic1IsKPeriodicIsKPeriodicIsKPeriodicIsKPeriodicIsKPeriodic";
	k = 11;

	auto start1 = std::chrono::high_resolution_clock::now();
	
	isKPeriodic(str1, k);
	
	auto finish1 = std::chrono::high_resolution_clock::now();
	elapsed = finish1 - start1;
	std::cout << "Elapsed time: " << elapsed.count() << " sec" << "\n";

}



