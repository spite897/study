
#include<stdio.h>
#include<iostream>
#include<string>
#include<vector>

#define CLASS
#define TEST class_test()

using std::cout;
using std::endl;

std::vector<int> vec;

std::string d;
char global_var = 124;
int* p = nullptr;

//inline �������� Լ���� ��
//��ĳ�Ա�������ⶨ���Ƽ�����Ϊ��������  inline int statement����

int iostream_test() {

	using namespace std;
	int input = 0;
	cout << "iostream" << endl;
	cin >> input;
	cout << input << endl;
	std::cout << "std::cout" << std::endl;

	return 0;
}

namespace a1 {
	std::string var1 = "hjnjjx";
	char var2[7] = "hjnjjx";
}
int namespace_test() {

	char global_var[6] = "spite";
	printf("global_var:%s\n", global_var);
	printf("::global_var:%d\n", ::global_var);

	return 0;
}
// float& ǿ��ת��ʱ���ı��ڴ�
int type_test() {
	
	int a = 10;
	float f = reinterpret_cast<float&>(a);
	printf("a:%d\n", a);
	printf("�ͼ�ת�� ����ָ��ת��\t");
	printf("reinterpret_cast:%f\n" , f);
	printf("����ת�� ȥ�������� \t");
	printf("const_cast:%f\n", f);
	printf("��̬ת�� �ж����� \t");
	printf("dynamic_cast:%f\n", f);
	printf("��̬ת�� \t");
	printf("static_cast:%f\n", static_cast<float>(a));
	return 0;
}

int vector_test() {
	std::cout << "����Ԫ�� .push_back()" << std::endl;
	vec.push_back(10);
	std::cout << "����Ԫ�� [] or .at()" << std::endl;
	std::cout << "��ȡ��С .size" << std::endl;
	for (int &i : vec) std::cout << i;
	std::cout << ".erase(begin) .begin .clear()" << std::endl;
	return 0;
}

#ifdef CONST
class Example {
public:
	int get_value() const {
		return value_; // const �ؼ��ֱ�ʾ�ó�Ա���������޸Ķ����е����ݳ�Ա
	}
	void set_value(int value) const {
		value_ = value; // mutable �ؼ��������� const ��Ա�������޸ĳ�Ա����
	}
private:
	mutable int value_;
};
#endif 
#ifdef CLASS
class Father {
public:
	std::string getName();
	Father(const char* n);//��ͨ���캯��
	Father(const Father &obj);//�������캯�� ��ֵʱ����
	~Father();			//��������
	friend void printName(Father F);//�ܵ���private��ȫ�ֺ���

	/*
	virtual void function(){};	�麯�� ��̬��ʵ��
	virtual void function() = 0; ���麯�� �����಻����ʵ��
	*/
protected:
	std::string name;
private:
	int strategy;
};

void printName(Father F) {
	cout << "Father's name" << F.name << endl;
	cout << "Father'strategy" << F.strategy << endl;
}
inline Father::Father(const char* n) : name(n) {
	std::cout << "Father created" << std::endl;
	this->strategy = 256133;
}
inline Father :: Father(const Father& obj) {
	cout << "Father Copy Be Used" << endl;
}
inline Father::~Father() {
	std::cout << "Father destroyed" << std::endl;
}
inline std::string Father::getName() {
	return this->name;
}

//���η��̳м��������� �������е���ָ�����ܵļ��ܵ�ָ���̶ȣ���������׼��
class Son : public Father {
	/*
	���಻��ֱ�ӵ��ø���private��Ա ����ֱ���޸�
	����ͬ����Ա���ᱨ�� �ڸ����Ա������ʹ�ø����еĳ�Ա���� ���෴֮
	*/
};
#endif

int class_test() {
	Father* F = new Father("LaoLi");
	std::cout << F->getName();
	Father* F2 = new Father(*F);
	delete F ;
	delete F2;
	return 0;
}


int main(){
	d = "string";
	printf("hello world\n");

	TEST;

	return 0;
}