#pragma once
#define NIL    0x00000000
#define NULL      0 
#define maxsize 30
class CMyVector{
private:
	int m_size;
	int* m_vector;

public:
	enum { no_error, memory_limit, exit_array };
	CMyVector(void);
	CMyVector(int size, ...);
	~CMyVector(void);
	int getLastError(void);
	int getSize(void);
	int operator[](int);
	void print(void);
	int sum(void);
	int product(void);
	int getM_vector(int i);
	void setM_vector(int k, int i);
	void setSize(int k);
	void del(int i);
	void printl(void);
};