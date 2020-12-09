#pragma once
#ifndef __PNT_H_

class Printer {
public:
	void SetString(char* str);
	void ShowString();

private:
	char* inStr;
};

#endif // !__PNT_H_
