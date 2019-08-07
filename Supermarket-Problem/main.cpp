#include "bestMarket.cpp"

int main() {

	string item;

	vector<string> productList;
	string purchase;

	while(getline(cin, item)) {
		
		if ( item == "done" || item == "Done")
			break;	
		productList.push_back(item);	
	}

	Supermarket supermarket1(15,60,40);
	Supermarket supermarket2(10,62,41); 

	cout << "----------------Purchase Items----------------";

	for(int i=0; i<productList.size(); i++) {
		
		stringstream ss(productList[i]);
		string product;
		
		int index = -1;
		int quantity = 0;

		if ( productList[i].find("-") != string::npos ){
			index = productList[i].find("-");
			quantity = stoi(productList[i].substr(index+1, productList[i].size()-index-1));
		}

		ss >> product;
 		purchase = productList[i].substr(0, index+2);
		findMarket(product, purchase, quantity, supermarket1, supermarket2);
	}
	cout << "\n----------------------------------------------";

	cout << endl;
	return 0;
}