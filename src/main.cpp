// #include "raylib.h"
#include <iostream>
#include <vector>
int main()
{
	// InitWindow(800,600,"3D Particle Physics");
	// if(!IsWindowReady())
	// {
	// 	return 1;
	// }
	
	std::vector<int> vec;
	vec.reserve(50);
	size_t cap = vec.capacity();
	std::cout << cap << std::endl;
	vec.resize(25);
	vec[30] = 1;
	cap = vec.capacity();
	std::cout << cap << std::endl;
	

	for(size_t i = 0; i<vec.size(); ++i)
	{
		std::cout << vec[i] << ' ';
	}
	std::cout << std::endl;


	return 0;
}
