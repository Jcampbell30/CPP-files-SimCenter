#include <iostream>
#include <vector>

int main()
{
int * a;

	std::vector<int *> my_buffers;
	std::vector<int> my_counters;
	
	int num_things_to_make = 4;
	
	// Allocating things
	for(int i = 1; i <= num_things_to_make; i++)
	{
		int curr_count = 2*i;
		my_counters.push_back(curr_count);
		int * new_memory = new int[curr_count];
		// std::cout << "Made <" << curr_count << "> items at: " << new_memory << std::endl;
		my_buffers.push_back(new_memory);
	}
	
	// Setting values
	for(int i = 0; i < num_things_to_make; i++)
	{
		int * curr_buffer = my_buffers[i];
		for(int j = 0; j < my_counters[i]; j++)
		{
			curr_buffer[j] = 1000 + (j*100) + (i*10);
		}
	}
	
	// Actual test code 
	std::cout << "&my_buffers: " << &my_buffers << std::endl;
	for(int i = 0; i < num_things_to_make; i++)
	{
		std::cout << "\tmy_buffers[" << i << "]: " << my_buffers[i] << std::endl;
		std::cout << "\t*(my_buffers[" << i <<"]): " << *my_buffers[i] << std::endl;
		std::cout << "\t&(my_buffers[" << i <<"]): " << &my_buffers[i] << std::endl;
		for(int j = 0; j < my_counters[i]; j++)
		{
			std::cout << "\t\t(my_buffers[" << i << "])[" << j <<"]: " << my_buffers[i][j] << std::endl;
			std::cout << "\t\t&((my_buffers[" << i << "])[" << j <<"]): " << &(my_buffers[i][j]) << std::endl;
		}
	}
	
}
	