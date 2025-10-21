#pragma once

#include <concepts>

template<typename T>
concept Application = requires(T app, float deltaTime, int button, int key, int x, int y, float wheel)
{
    // Lifecycle methods
    { app.Init() } -> std::same_as<void>;
    { app.Tick(deltaTime) } -> std::same_as<void>;
    { app.Shutdown() } -> std::same_as<void>;
	
    // Mouse input methods
    { app.MouseUp(button) } -> std::same_as<void>;
    { app.MouseDown(button) } -> std::same_as<void>;
    { app.MouseMove(x, y) } -> std::same_as<void>;
    { app.MouseWheel(wheel) } -> std::same_as<void>;
	
    // Keyboard input methods
    { app.KeyUp(key) } -> std::same_as<void>;
    { app.KeyDown(key) } -> std::same_as<void>;
	
    // Screen access
    { app.screen } -> std::convertible_to<Surface*>;
};

template<typename T>
concept ApplicationMinimal = requires(T app, float deltaTime, int button, int key, int x, int y, float wheel)
{
    // Lifecycle methods
    { app.Init() } -> std::same_as<void>;
    { app.Tick(deltaTime) } -> std::same_as<void>;
    { app.Shutdown() } -> std::same_as<void>;
	
    // Screen access
    { app.screen } -> std::convertible_to<Surface*>;
};
