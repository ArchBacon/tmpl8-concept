// Template, 2024 IGAD Edition
// Get the latest version from: https://github.com/jbikker/tmpl8
// IGAD/NHTV/BUAS/UU - Jacco Bikker - 2006-2024

#pragma once

#include "application.h"

namespace Tmpl8
{
class Game
{
public:
	// game flow methods
	void Init();
	void Tick( float deltaTime );
	void Shutdown() { /* implement if you want to do something on exit */ }
	// input handling
	void MouseMove( int x, int y ) { mousePos.x = x; mousePos.y = y; }
	// data members
	int2 mousePos {0, 0};
	Surface* screen = nullptr;
	
	Sprite* sprite;
	float uptime = 0.0f;
};

static_assert(ApplicationMinimal<Game>, "Game must satisfy the Application concept");
	
} // namespace Tmpl8