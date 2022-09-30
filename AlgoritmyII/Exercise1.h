#pragma once
#include <string>
class Exercise1
{
private:
	int *elements;
	int *elementsBackup;
	int elementsLength;
	 int addition;

public:
	Exercise1(unsigned int, bool = true);
	~Exercise1();

	void Example1();
	void Example2();
	void Example3();
	void Example4();
	void Example5();


	int* GetElements();
	int GetElementsLength();
	void ResetElements();

	bool BruteForceElementUniqueness(int*, unsigned int);
	bool PresortElementUniqueness(int*, unsigned int, int (*)(const void*, const void*));
	int BruteForceMode(int*, unsigned int);
	int PresortMode(int*, unsigned int, int (*)(const void*, const void*));
	bool AdditionControl(int* elements, unsigned int elementsLength, int addition, int (*)(const void*, const void*));
};

