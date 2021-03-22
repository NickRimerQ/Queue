#include "Header.h"
#include "Queue(methods).cpp"

int main()
{
	Queue<int> art;
	for (int i = 0; i < 5; i++)
	{
		art.push_back(i);
	}

	art.pop_front();

	cout << "------------------------------------" << endl;
	cout << "The value of the first element is " << art.Head() << endl;
	cout << "The value of the last element is " << art.Tail() << endl;
	cout << "------------------------------------" << endl;
	cout << "Queue size is " << art.retSize() << endl;
	cout << "------------------------------------" << endl;

	art.clear();

	cout << art.Empty() << endl;
	return 0;
}