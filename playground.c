#include "stdafx.h"
#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
	int n, check;
	struct flight
	{
		int flight_number;
		char plane[20];
		char destination[20];
		struct {
			int h;
			int min;
		} departure;
	};
	flight ptrFlights[n];

	return 0;

}