#pragma once
#include "Module.h"
#include "Globals.h"

#define PIXEL_TO_METERS(x) x/20
#define METERS_TO_PIXELS(y) y*20

//Forward declaration so that the definition can be searched without having to include the .h
class b2World;

class ModulePhysics : public Module
{
public:
	ModulePhysics(Application* app, bool start_enabled = true);
	~ModulePhysics();

	bool Start();
	update_status PreUpdate();
	update_status PostUpdate();
	bool CleanUp();

private:
	b2World* world;
	bool debug;
};