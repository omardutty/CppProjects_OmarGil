#include"DynArrays.hh"
#include<iostream>


DynArray::DynArray(void) {
	m_capacity=DYN_ARRAY_DEFAULT_SIZE;													
	m_size= 0;
	int *m_data=new int[m_capacity];
}

DynArray::DynArray(size_t size) {
	m_capacity = size;
	m_size = 0;
	int *m_data = new int[m_capacity];
}

DynArray::DynArray(size_t size, const int &value) {
	m_capacity = size;
	m_size = 0;
	int *m_data = new int[m_capacity];
	for (int i = 0; i < m_capacity; i++) {
		m_data[i] = value;
	}
}

DynArray::DynArray(int *arr, size_t size) {
	m_capacity = size;
	int *arr = new int[m_capacity];
	for (int i = 0; i < m_capacity; i++) {
		arr[i] = m_data[i];
	}
}

DynArray::~DynArray(void) {
	delete[] m_data;
}

DynArray& DynArray::operator= (const DynArray &x) {
	m_size = x.m_size;
	m_capacity = x.m_capacity;
}

int* begin(void) /*const*/ {
	int *begin;
	return ;
}

void resize(size_t n) {
	size_t m_capacity = n;
}

void push(const int &val) {
	size_t m_size = m_size + 1;
	
}

bool operator== (const DynArray& lhs, const DynArray& rhs) {
	return lhs.m_capacity == rhs.m_capacity && lhs.m_size == rhs.m_size;
}