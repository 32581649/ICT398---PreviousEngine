#include <iostream>
#include "Singleton.h"
#include "World.h"

int main(int argc, char* argv[]){
	World* world_instance = Singleton<World>::Instance();
	world_instance->RunGame(&argc, argv, "Zonda Engine Game Demo", "OpenGL", 1024, 768);

	return 0;
}