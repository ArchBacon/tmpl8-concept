// Template, 2024 IGAD Edition
// Get the latest version from: https://github.com/jbikker/tmpl8
// IGAD/NHTV/BUAS/UU - Jacco Bikker - 2006-2024

#include "precomp.h"
#include "game.h"

// -----------------------------------------------------------
// Initialize the application
// -----------------------------------------------------------
void Game::Init()
{
	sprite = new Sprite(new Surface("assets/ball.png"), 1);
}

// -----------------------------------------------------------
// Main application tick function - Executed once per frame
// -----------------------------------------------------------
void Game::Tick(float deltaTime)
{
	screen->Clear(0xFFFFFF);
	uptime += (deltaTime / 1000);
    
	// Rotation parameters
	float radius = 100.0f;  // Distance from center in pixels
	float speed = 0.5f;     // Rotations per second
    
	// Convert time to angle
	float angle = 2.0f * PI * speed * uptime;
    
	// Calculate position on circle
	float x = radius * cos(angle);
	float y = radius * sin(angle);
    
	sprite->Draw(screen, x + mousePos.x, y + mousePos.y);
}