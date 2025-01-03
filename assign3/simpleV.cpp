//과제3
#include <iostream>
using namespace std;

template <typename T>
class SimpleVector{
private:
	//타입에 의존하지 않고 데이터를 받을 수 있는 배열 
	T* data[];
	int currentSize;
	int currentCapacity;

public:
	void resize();

	//기본 생성자 : 크기가 10인 배열 생성
	SimpleVector(){
		data[10];
	}

	//매개변수로 숫자를 받는 생성자 : 해당 숫자에 해당되는 크기의 배열 생성
	//이 때 배열은 동적 배열로 생성
	SimpleVector(int capacity) {
		data = new int[capacity];
	}

	//소멸자
	~SimpleVector() {
		delete data;
	}

	//멤버 함수
	//1. push_back 
	//   배열에 자리가 있을 경우, 인자로 받은 원소를 배열 맨 뒤에 추가 
	//   배열에 자리가 없는 경우, 동작X
	void push_back(const T& value) {
		
		if (data[capacity] != null) {
			data.add(value);
		}
		
	}
	//2. pop_back 
	//   배열에 원소가 있는 경우, 마지막 원소를 제거 
	//   배열에 원소가 없는 경우, 동작X
	void pop_back() {
		if (data[capacity] != null) {
			data.delete[-1];
		}
	}
	//3. size
	//   배열의 현재 원소 개수 반환
	int size() {
		
		currentSize = sizeof(data) / sizeof(data[0]);
		return currentSize;
	}
	//4. capacity
	//   현재 내부 배열의 크기 반환
	int capacity() {
		currentCapacity = sizeof(data);
		return currentCapacity;
	}
};