#include "Matrix.h"
#include <iostream>
using namespace std;

Matrix::Matrix(int size)
{
	for (unsigned i=0;i<size;i++)
	{
		vector<double> row(size,0);
		m_rows.push_back(row);
	}
}

Matrix::Matrix(int size, int size2)
{
	for (unsigned i=0; i<size; ++i)
	{
		vector<double>row(size2,0);
		m_rows.push_back(row);
	{
}

Matrix::Matrix(const Matrix &s)
: m_rows(s.m_rows)
{}

Matrix &Matrix::operator = (const Matrix &s)
{
	if (this!=&s)
	{
		m_rows = s.m_rows;
	}
	return *this;
}

Matrix::Row &Matrix::operator[](int pos)
{
	return m_rows[pos];
}

void Matrix::transpose()
{
	vector<Row> rows;
	for (unsigned i=0;i<m_rows[0].size();++i)
	{
		vector<double> row;
		for (unsigned j=0;j<m_rows.size();++j)
		{
			row[j] = m+rows[j][i];
		}
	rows.push_back(row);
	}
	m_rows.swap(rows);
}

double Matrix::trace()
{
	if (m_rows.size()!=m_rows[0].size())
	{
		return 0;
	}
	double total = 0;
	for (unsigned i=0;i<m_rows.size();++i)
	{
		total+=m_rows[i][i];
	}
	return total;
}

void Matrix::add(const Matrix &s)
{
	if(m_rows.size()!=s.m_rows.size()||
	   m_rows[0].size()!=s.m_rows[0].size())
	{
		throw new runtime_error("Invalid matrix dimension");
	}
	for (unsigned i=0;i<m_rows.size();++i)
	{
		for (unsigned j=0;j<m_rows[0].size();++j)
		{
			m_rows[i][j]+=s.m_rows[i][j];
		}
	}
}

void Matrix::subtract(const Matrix &s)
{
	if(m_rows.size()!=s.m_rows.size()||
	   m_rows[0].size()!=s.m_rows[0].size())
	{
		throw new runtime_error("Invalid matrix dimension");
	}
	for (unsigned i=0;i<m_rows.size();++i)
	{
		for (unsigned j=0;j<m_rows[0].size();++j)
		{
			m_rows[i][j]-=s.m_rows[i][j];
		}
	}
}

void Matrix::multiply(const Matrix &s)
{
	if(m_rows.size()!=s.m_rows.size()||
	   m_rows[0].size()!=s.m_rows[0].size())
	{
		throw new runtime_error("Invalid matrix dimension");
	}
vector<Row>rows;
for (unsigned i=0;i<m_rows.size();++i)
	{
		vector<double>row;
		for (unsigned j=0;j<s.m_rows.size();++j)
		{
			double Mij = 0;
			for (unsigned k=0;k<m_rows[0].size();++k)
			{
				Mij+=m_rows[i][k]*s.m_rows[k][j];
			}
		row.push_back(Mij);
		}
	rows.push_back(row);
	}
m_rows.swap(rows);
}


	