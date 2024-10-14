#include <iostream>
using namespace std;

int main()
{
	float sugarPriceUSD, ricePricePound, sardinesPricePound, coffeePriceUSD, milkPriceUSD;
	float sugarQty, riceQty, sardinesQty, coffeeQty, milkQty;
	float exchange, usdToPhp, poundToPhp;
	float totalCostPhp = sugarCostPHP + riceCostPHP + sardinesCostPHP + coffeeCostPHP + milkCostPHP;
	cout << "Enter conversation rate (USD to PHP):";
	cin >> usdToPhp;
	cout << "Enter conversation rate (Pound to PHP):";
	cin >> poundToPhp;
	cout << "Enter the price of sugar:";
	cin >> sugarPriceUSD;
	cout << "Enter the price of rice:";
	cin >> ricePricePound;
	cout << "Enter the price of sardines:";
	cin >> sardinesPricePound;
	cout << "Enter the price of coffee:";
	cin >> coffeePriceUSD;
	cout << "Enter the price of milk:";
	cin >> milkPriceUSD;
	
	cout << "Enter the Quality of sugar:";
	cin >> sugarQty;
	cout << "Enter the Quality of rice:";
	cin >> riceQty;
	cout << "Enter the Quality of sardines:";
	cin >> sardinesQty;
	cout << "Enter the Quality of coffee:";
	cin >> coffeeQty;
	cout << "Enter the Quality of milk:";
	cin >> milkQty;
	
	cout << "sugarCostPhp = sugarPriceUSD * usdToPhp * sugarQty:";
	cout << "ricePricePound = ricePricePound * poundToPhp * riceQty:";
	cout << "sardinesPricePound = sardinesPricePound * poundToPhp * riceQty:";
	cout << "coffeeCostPHP = coffeePriceUSD * usdToPhp * coffeeQty:";
	cout << "milkCostPHP = milkPriceUSD * usdToPhp * milkQty:";
	cout << "totalCostPHP = sugarCostPHP + riceCostPHP + sardinesCostPHP + coffeeCostPHP + milkCostPHP:";
	return 0;
}