#include "../../Project/Project/Pool.cpp"
#include <iostream>

int main() {
	cout << "Creating pool" << endl;
	Pool objects = Pool();
	cout << "Filling pool" << endl;
	while (true) {
		if (!objects.Add())
			break;
	}
	cout << "Number of objects in pool " << objects.GetActive() << endl;
	cout << "Removing even indices" << endl;
	for (int i = 0; i < objects.Size(); i++) {
		objects.Remove(i * 2);
	}
	cout << "Number of objects in pool " << objects.GetActive() << endl;
	cout << "Attempting to deactivate an inactive object" << endl;
	if (objects.Remove(0))
		cout << "This message should not be seen" << endl;
	else
		cout << "Deactivation was unsucessful (Intended behavior)" << endl;
	cout << "Adding one object" << endl;
	objects.Add();
	cout << "Number of objects in pool " << objects.GetActive() << endl;
	cout << "Press any key to close" << endl;
	cin.get();
	return 0;
}