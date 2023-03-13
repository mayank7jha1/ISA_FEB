
template<typename T>

class vector1 {
	T *a;
	int Total_Size;
	int Current_Bucket;
public:

	vector1() {
		Current_Bucket = 0;
		Total_Size = 1;
		a = new T[Total_Size];
	}

	void push_back(T d) {

		if (Current_Bucket == Total_Size) {
			//Double karna hain dynamic array ke size ko

			T *b = a;//Because we needed to have a reference of a for copying

			a = new T[2 * Total_Size];

			//Copying Element inside the new array;

			Total_Size = 2 * Total_Size;

			for (int i = 0; i < Current_Bucket; i++) {
				a[i] = b[i];
			}

			delete[] b;
		}

		a[Current_Bucket] = d;
		Current_Bucket++;
	}

	void pop_back() {
		Current_Bucket--;
	}

	int front() {
		return a[0];
	}

	int back() {
		return a[Current_Bucket - 1];
	}

	bool empty() {
		if (Current_Bucket == 0) {
			return true;
		} else {
			return false;
		}
	}

	int size() {
		return Current_Bucket;
	}

	int capacity() {
		return Total_Size;
	}


	T operator[](int i) {
		return a[i];
	}
};