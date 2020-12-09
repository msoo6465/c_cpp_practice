#pragma once
#ifndef __CAL_H__
#define __CAL_H__

class Calculator
{
public:
	void Init();
	float Add(float a,float b);
	float Div(float a, float b);
	float Min(float a, float b);
	float Mul(float a, float b);
	void ShowOpCount();

private:
	int addCount, minCount, divCount, mulCount;
};

#endif