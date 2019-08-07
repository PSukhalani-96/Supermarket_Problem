using namespace std;
#include <iostream>
#include <algorithm>
#include <string.h>
#include <vector>
#include <sstream>

class Supermarket {

	private:
		int breadPrice;
		int ricePrice;
		int sugarPrice;

	public:
		Supermarket(int, int, int);
		int getBreadPrice(int);
		int getRicePrice(int);
		int getSugarPrice(int);
};

Supermarket::Supermarket(int bread, int rice, int sugar) {
	breadPrice = bread;
	ricePrice = rice;
	sugarPrice = sugar;
}

int Supermarket::getBreadPrice(int quantity) {
	return quantity*breadPrice;
}

int Supermarket::getRicePrice(int quantity) {
	return quantity*ricePrice;
}

int Supermarket::getSugarPrice(int quantity) {
	return quantity*sugarPrice;
}