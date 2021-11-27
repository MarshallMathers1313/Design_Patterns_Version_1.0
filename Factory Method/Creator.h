#pragma once
#include "Product.h"

class Creator
{
public:
	virtual Product* createProduct() = 0;
};

class Creator1 : public Creator
{
public:
	Product* createProduct()override
	{
		return new Product1;
	}
};

class Creator2 : public Creator
{
public:
	Product* createProduct()override
	{
		return new Product2;
	}
};