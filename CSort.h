#pragma once
#include <cassert>
#include <iostream>
using namespace std;

class CSort
{
	int *m_data;
	int m_dataSize;
public:
	CSort(int Max = 100) :m_dataSize(Max) {
		m_data = new int[Max];
		assert(m_data != nullptr);
	}
	~CSort() {
		if (m_data)
			delete[] m_data;
	}
	void initData(int *data) {
		for (int i = 0; i < m_dataSize; i++)
			m_data[i] = data[i];
	}
	int getSize() { return m_dataSize; }
	int *getData() { return m_data; }
	virtual void sorting() = 0;
	void draw() {
		for (int i = 0; i < m_dataSize; i++)
			cout << m_data[i] << "\t";
		cout << endl;
	}
	void indexExchange(int *a, int *b) { int c; c = *a; *a = *b; *b = c; }
};

