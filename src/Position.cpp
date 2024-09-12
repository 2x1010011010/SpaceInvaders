#include "headers/Position.h"

Position::Position() : x(0), y(0) {};

Position::Position(float xVal, float yVal) : x(xVal), y(yVal) {};

void Position::SetPosition(float xVal, float yVal) {
	x = xVal;
	y = yVal;
}

Position Position::GetPosition(){ 
	return *this; 
}