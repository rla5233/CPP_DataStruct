#include <iostream>
#include <vector>

class MyVector
{
public:

private:

};

int main()
{
	{
		std::vector<int> NewVector = std::vector<int>();
		
		for (int i = 0; i < 10; i++)
		{
			NewVector.push_back(i);
		}

		for (int i = 0; i < NewVector.size(); i++)
		{
			std::cout << NewVector[i] << " ";
		}
	}

}