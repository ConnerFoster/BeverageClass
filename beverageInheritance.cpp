#include <iostream>
#include <string>
using namespace std;

class Beverage {
protected:
	string name;
	string description = "great";
	string servingSize;
	int calories;
	string price; 
public:
	Beverage(string n, string d, string ss, int c, string p) {
		name = n;
		description = d;
		servingSize = ss;
		calories = c;
		price = p;
		cout << "Creating Beverage " << n << endl;
	}
	~Beverage() {
		cout << "\nDestroying Beverage " << name << endl;
	}
	string getName() {
		return name;
	}
	string getDescription() {
		return description;
	}
	string getServingSize() {
		return servingSize;
	}
	int getCalories() {
		return calories;
	}
	string getPrice() {
		return price;
	}
    string toString() {
		return "Beverage: " + name + "\nDescription: " + description + "\nServing Size: " + servingSize + "\nCalories: " + to_string(calories)
			+ "\nPrice: $" + price;
	}
	void setName(string newName) {
		cout << "What would you like to change the name of the beverage to? " << endl;
		cin >> newName;
		name = newName;
	}
	void setDescription(string newDesc) {
		cout << "What would you like to change the description of the beverage to? " << endl;
		cin >> newDesc;
		description = newDesc;
	}
	void setServSize(string newSS) {
		cout << "What would you like to change the serving size of the beverage to? " << endl;
		cin >> newSS;
		servingSize = newSS;
	}
	void setCalories(int newCal) {
		cout << "What would you like to change the calorie amount of the beverage to? " << endl;
		cin >> newCal;
		calories = newCal;
	}
	void setPrice(string newPrice) {
		cout << "What would you like to change the price of the beverage to? " << endl;
		cin >> newPrice;
		price = newPrice;
	}

};
class Coffee : public Beverage {
private: 
	string hotOrCold;
	string caffeine;
	string roastType;
	string strength;
	string creamer;
	string sweetener;
public:
	Coffee(string n, string d, string ss, int c, string p, string hC, string caff, string roast, string stren, string cream, string sweet) :
		Beverage(n, d, ss, c, p) {
		hotOrCold = hC;
		caffeine = caff;
		roastType = roast;
		strength = stren;
		creamer = cream;
		sweetener = sweet;
		cout << "Creating Coffee " << n << endl;
	}
	~Coffee() {
		cout << "Destroying coffee " << name << endl;
	}
	string getHC() {
		return hotOrCold;
	}
	string getCaffeine() {
		return caffeine;
	}
	string getRoast() {
		return roastType;
	}
	string getStrength() {
		return strength;
	}
	string getCreamer() {
		return creamer;
	}
	string getSweetener() {
		return sweetener;
	}
	void setHC(string newHC) {
		cout << "What would you like to set the sweetener to? " << endl;
		cin >> newHC;
		hotOrCold = newHC;
	}
	void setCaffeine(string newCaff) {
		cout << "What would you like to set the caffeine to? " << endl;
		cin >> newCaff;
		caffeine = newCaff;
	}
	void setRoast(string newRoast) {
		cout << "What would you like to set the roast type to? " << endl;
		cin >> newRoast;
		roastType = newRoast;
	}
	void setStrength(string newStrength) {
		cout << "What would you like to set the strength to? " << endl;
		cin >> newStrength;
		strength = newStrength;
	
};

int main() {

	Beverage myBeverage("Frappe", "An Iced Coffee with a lot of sugar and other goodies", "3 cups", 750, "8.50");
	cout << myBeverage.toString();
	

	return 0;
}
