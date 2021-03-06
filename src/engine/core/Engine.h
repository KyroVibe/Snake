#pragma once

#include <thread>

#include "Window.h"
#include "engine/core/Scene.h"

class Engine {
public:
	static Engine* GetInstance() {
		static Engine _instance = Engine(800, 800, "Shitty Snake v1.0.0");
		return &_instance;
	}

	~Engine();

	void MainLoop();

	Window* GetWindow() { return _window; }
private:

	Engine(int windowWidth, int windowHeight, const char* windowName);

	Window* _window;
	Scene* _currentScene;
	bool _halt = false;
	// std::thread _coreThread;
};