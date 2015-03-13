#include <iostream>
#include <iterator>
#include <vector>

//Program to merge two sorted lists
//Need to make this generic to work on any type of container

	std::vector<int> merge(std::vector<int> a,std::vector<int> b)
	{
		int i = 0,j= 0;
		std::vector<int> result;
		while(i < a.size() && j < b.size())
		{
			if(a[i] < b[j])
			{
				result.push_back(a[i++]);
			}
			else
			{
				result.push_back(b[j++]);
			}
		}
		while(i < a.size())
		{
			result.push_back(a[i++]);
		}
		while(j < b.size())
		{
			result.push_back(b[j++]);
		}
		return result;
	}
	
	int main(int argc, char** argv) {
		std::vector<int> a;
		a.push_back(1);
		a.push_back(3);
		a.push_back(5);
		a.push_back(6);
		std::vector<int> b;
		b.push_back(2);
		b.push_back(4);
		b.push_back(7);
		std::vector<int> c = merge(a,b);
		
		std::copy(c.begin(), c.end(), std::ostream_iterator<int>(std::cout," "));
		std::cout << "My first C++ program in windows";
		return 0;
	}
