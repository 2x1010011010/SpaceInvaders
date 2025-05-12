#include <raylib.h>

class Entity
{
	public:
		Vector2 position;
		Entity();
		Entity(Vector2 position);
		~Entity();
		void Move(Vector2 position);
		void Move(float x, float y);
};

