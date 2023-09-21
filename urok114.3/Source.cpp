#include<iostream>
#include<cassert>

class Stack
{
	int arr[10];
	int point;
public:
	void reset()
	{
		point = 0;
		for (int i{ 0 }; i < 10; ++i)
		{
			arr[i] = 0;
		}
	}
	bool push(int dob)//переменная для добавления
	{
		if(point == 10)
			return false;
		else
		{
			arr[point] = dob;
			++point;
			return true;
		}

	}
	int pop()
	{
		assert(point > 0);

		return arr[--point];

	}
	void print()
	{
		std::cout << "( ";
		for (int i{ 0 }; i < point; ++i)
		{
			std::cout << arr[i]<<" ";
		}
		std::cout << ")"<<std::endl;
	}

};

int main()
{
	Stack stack;
	stack.reset();

	stack.print();

	stack.push(3);
	stack.push(7);
	stack.push(5);
	stack.print();

	stack.pop();
	stack.print();

	stack.pop();
	stack.pop();

	stack.print();

	return 0;
}