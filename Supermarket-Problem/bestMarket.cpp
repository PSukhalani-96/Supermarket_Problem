#include "Supermarket.cpp"

void findMarket(string item, string Purchase, int quantity, Supermarket market1, Supermarket market2) {
	
	int price1 = 0;			// Supermarket-1 Price for 'item'
	int price2 = 0;			// Supermarket-2 Price for 'item'

	if ( item == "Bread" ){
		price1 = market1.getBreadPrice(quantity);
		price2 = market2.getBreadPrice(quantity);
	}

	else if ( item == "Sugar" ){
		price1 = market1.getSugarPrice(quantity);
		price2 = market2.getSugarPrice(quantity);
	}

	else if ( item == "Rice" ) {
		price1 = market1.getRicePrice(quantity);
		price2 = market2.getRicePrice(quantity);
	}

	else {
		cout << "\nItem Not Available.";
		return;
	}

	if ( price1 < price2 )
		cout <<"\n" << Purchase << "Supermarket 1";
	else
		cout <<"\n" << Purchase << "Supermarket 2";
}