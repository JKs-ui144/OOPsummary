#include <iostream>
#include <string>

using namespace std;

// �⺻ Ŭ���� Animal
class Animal {
public:
	// �⺻ ������
	Animal() {
		//cout << "�⺻ �����ڰ� �����Ǿ����ϴ�." << endl;
	}

	// ���� ���� �Լ�
	virtual void makeSound() = 0;
};

// �Ļ� Ŭ���� Dog
class Dog : public Animal {
public:
	Dog() {
		//cout << "Dog �⺻ �����ڰ� �����Ǿ����ϴ�." << endl;
	}
	void makeSound() {
		cout << "Dog Sound : Woof! Woof!" << endl;
	}
};

// �Ļ� Ŭ���� Cat
class Cat : public Animal {
public:
	Cat() {
		//cout << "Cat �⺻ �����ڰ� �����Ǿ����ϴ�." << endl;
	}
	void makeSound() {
		cout << "Cat Sound : meow! meow!" << endl;
	}
};

// �Ļ� Ŭ���� Cow
class Cow : public Animal {
public:
	Cow() {
		//cout << "Cow �⺻ �����ڰ� �����Ǿ����ϴ�." << endl;
	}
	void makeSound() {
		cout << "Cow Sound : Moooooo!" << endl;
	}
};

// ������ �迭�� ����� ���� �޸� �Ҵ�
int main() {
	Animal* animal[3];
	animal[0] = new Dog();
	animal[1] = new Cat();
	animal[2] = new Cow();

	// makeSound �Լ��� ȣ���ϴ� �ݺ���
	for (int i = 0; i < 3; i++) {
		animal[i]->makeSound();
	}

	// ���� �޸� ����
	for (int i = 0; i < 3; i++) {
		//cout << "���� �޸𸮰� �����Ǿ����ϴ�." << endl;
		delete animal[i];
	}
}