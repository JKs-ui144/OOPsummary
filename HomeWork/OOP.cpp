#include <iostream>
#include <string>

using namespace std;

// 기본 클래스 Animal
class Animal {
public:
	// 기본 생성자
	Animal() {
		//cout << "기본 생성자가 생성되었습니다." << endl;
	}

	// 순수 가상 함수
	virtual void makeSound() = 0;
};

// 파생 클래스 Dog
class Dog : public Animal {
public:
	Dog() {
		//cout << "Dog 기본 생성자가 생성되었습니다." << endl;
	}
	void makeSound() {
		cout << "Dog Sound : Woof! Woof!" << endl;
	}
};

// 파생 클래스 Cat
class Cat : public Animal {
public:
	Cat() {
		//cout << "Cat 기본 생성자가 생성되었습니다." << endl;
	}
	void makeSound() {
		cout << "Cat Sound : meow! meow!" << endl;
	}
};

// 파생 클래스 Cow
class Cow : public Animal {
public:
	Cow() {
		//cout << "Cow 기본 생성자가 생성되었습니다." << endl;
	}
	void makeSound() {
		cout << "Cow Sound : Moooooo!" << endl;
	}
};

// 포인터 배열을 선언과 동적 메모리 할당
int main() {
	Animal* animal[3];
	animal[0] = new Dog();
	animal[1] = new Cat();
	animal[2] = new Cow();

	// makeSound 함수를 호출하는 반복문
	for (int i = 0; i < 3; i++) {
		animal[i]->makeSound();
	}

	// 동적 메모리 해제
	for (int i = 0; i < 3; i++) {
		//cout << "동적 메모리가 해제되었습니다." << endl;
		delete animal[i];
	}
}