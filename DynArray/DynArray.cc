#include"DynArrays.hh"
#include<iostream>


DynArray::DynArray(void) {
	m_capacity=DYN_ARRAY_DEFAULT_SIZE;													
	m_size= 0;
	m_data=new int[m_capacity];
}

DynArray::DynArray(size_t size) {
	m_capacity = size;
	m_size = 0;
	int *m_data = new int[m_capacity];
}

DynArray::DynArray(size_t size, const int &value) {
	m_capacity = size;
	m_size = size;
	m_data = new int[size];
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

void DynArray::resize(size_t n) {
	m_capacity = n;
}

void reserve(size_t n) {

}

void DynArray::shrink(void) {
	m_capacity = m_size;
}

bool DynArray::empty(void) const {
	for (int i = 0; i < m_capacity; i++) {
		if (m_data[i] != 0) {
			return false;
		}
		else {
			return true;
		}
	}
}

void DynArray::push(const int &val) {
	
	if (m_capacity==m_size) {
		m_capacity += m_size / 2;
		int *arr = new int[m_capacity];
		for (int i = 0; i < m_size; i++) {
			arr[i] = m_data[i];
		}
		delete[] m_data;
		m_data = arr;
		
	}
	m_data[m_size] = val;
	m_size += 1;
}


bool operator== (const DynArray& lhs, const DynArray& rhs) {
	return lhs.m_capacity == rhs.m_capacity && lhs.m_size == rhs.m_size;
}

bool operator!= (const DynArray& lhs, const DynArray& rhs) {
	return lhs.m_capacity != rhs.m_capacity || lhs.m_size != rhs.m_size;
}

bool operator<  (const DynArray& lhs, const DynArray& rhs) {
	return lhs.m_capacity < rhs.m_capacity;
}

bool operator<= (const DynArray& lhs, const DynArray& rhs) {
	return lhs.m_capacity <= rhs.m_capacity;
}

bool operator>  (const DynArray& lhs, const DynArray& rhs) {
	return lhs.m_capacity > rhs.m_capacity;
}

bool operator>= (const DynArray& lhs, const DynArray& rhs) {
	return lhs.m_capacity >= rhs.m_capacity;
}

void DynArray::fill(int *first, int *last, int value) {
	for (int i = *first; i < *last; i++) {
		m_data[i] = value;
	}
}