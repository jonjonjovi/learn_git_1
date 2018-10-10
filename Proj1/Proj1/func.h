#pragma once
class test {
	int val;
public:
	test() {
		val = 1;
	} 
	test(int a) :val{ a } {}
	
	int mul(int b);
	int div(int a);
};
