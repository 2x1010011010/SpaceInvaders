#include "../headers/Position.h"

class Entity
{
	public:
		Position position;
		Entity();
		Entity(Position position);
		Entity(float x, float y);
		~Entity();
		void Move(Position position);
		void Move(float x, float y);
};

