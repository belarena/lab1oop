#include "MyVector.h"
#include <iostream> 
CMyVector::CMyVector(void) {   
	m_vector = NIL;
	m_size = 0;

}
CMyVector::CMyVector(int size, ...){    //конструктор с параметрами ( размер ) вектор.
	m_size = size;
	m_vector = new int[m_size];
	int* marker = &size;
	marker++;
	while (size != 0){
		m_vector[m_size - size] = *marker;
		marker++;
		size--;
	}

}
CMyVector::~CMyVector(void){   
	delete[] m_vector;
}

int CMyVector::getSize(void){ 
	return m_size;
}

void CMyVector::print(void){
	for (int i = 0; i < m_size; i++)
		std::cout << m_vector[i] << std::ends;
	std::cout << std::endl;
}
int CMyVector::sum(void){   
	int s = 0;
	for (int i = 0; i < m_size; i++)
		s += m_vector[i];
	return s;
}
int CMyVector::product(void){ 
	int p = 1;
	for (int i = 0; i < m_size; i++)
		p *= m_vector[i];
	return p;
}
int CMyVector::getM_vector(int i){  //возвращает элемент массива

	return m_vector[i];
}

void CMyVector::setM_vector(int k, int i){ //устанавливает значение элемента
	m_vector[i] = k;
}

void CMyVector::setSize(int k){  //увеличивает размер массива
	m_size += k;
}

void CMyVector::del(int i){        //удаление элемента
	for (int i2 = 0; i2 < m_size; i2++)
	{
		if (i2 == i) {
			for (int i3 = i2; i3 < m_size; i3++)
			{
				m_vector[i3] = m_vector[i3 + 1];
			}
		}
	}
	m_size = m_size - 1;              //размер сместил на единицу
}
void CMyVector::printl(void) {                     //вывод в обратном порядке
	for (int i = m_size - 1; i >= 0; i--)
		std::cout << m_vector[i] << std::ends;
	std::cout << std::endl;
}