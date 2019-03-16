#include <iostream>
#include "IVehicle.h"
#include "Source.h"

void main() {
	IVehicle* bmw = new BMWCar();
	IVehicle* toyota = new ToyotaCar();
	
	toyota->run();
	bmw->run();

	system("pause");
}