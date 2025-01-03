//����3
#include <iostream>
using namespace std;

template <typename T>
class SimpleVector{
private:
	//Ÿ�Կ� �������� �ʰ� �����͸� ���� �� �ִ� �迭 
	T* data[];
	int currentSize;
	int currentCapacity;

public:
	void resize();

	//�⺻ ������ : ũ�Ⱑ 10�� �迭 ����
	SimpleVector(){
		data[10];
	}

	//�Ű������� ���ڸ� �޴� ������ : �ش� ���ڿ� �ش�Ǵ� ũ���� �迭 ����
	//�� �� �迭�� ���� �迭�� ����
	SimpleVector(int capacity) {
		data = new int[capacity];
	}

	//�Ҹ���
	~SimpleVector() {
		delete data;
	}

	//��� �Լ�
	//1. push_back 
	//   �迭�� �ڸ��� ���� ���, ���ڷ� ���� ���Ҹ� �迭 �� �ڿ� �߰� 
	//   �迭�� �ڸ��� ���� ���, ����X
	void push_back(const T& value) {
		
		if (data[capacity] != null) {
			data.add(value);
		}
		
	}
	//2. pop_back 
	//   �迭�� ���Ұ� �ִ� ���, ������ ���Ҹ� ���� 
	//   �迭�� ���Ұ� ���� ���, ����X
	void pop_back() {
		if (data[capacity] != null) {
			data.delete[-1];
		}
	}
	//3. size
	//   �迭�� ���� ���� ���� ��ȯ
	int size() {
		
		currentSize = sizeof(data) / sizeof(data[0]);
		return currentSize;
	}
	//4. capacity
	//   ���� ���� �迭�� ũ�� ��ȯ
	int capacity() {
		currentCapacity = sizeof(data);
		return currentCapacity;
	}
};