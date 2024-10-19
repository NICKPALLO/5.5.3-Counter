#include <iostream>
#include <vector>

class Iter
{
public:
	Iter():sum(0),count(0){}

	void operator() (std::vector<int> vec)
	{
		for (const int& i : vec)
		{
			if (i % 3 == 0)
			{
				sum += i;
				++count;
			}
		}
	}
	int get_sum()
	{
		return sum;
	}
	int get_count()
	{
		return count;
	}
private:
	int sum;
	int count;
};


int main()
{
	std::vector<int> vec { 4, 1, 3, 6, 25, 54 };
	Iter iter;

	iter(vec);

	std::cout << iter.get_sum() << std::endl;
	std::cout << iter.get_count() << std::endl;
	return 0;
}