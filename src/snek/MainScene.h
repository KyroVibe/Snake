#pragma once

#include "Snake.h"
#include "../engine/core/Engine.h"
#include "../engine/scene/Scene.h"

class MainScene: public Scene {
public:
	MainScene();
	~MainScene();

	void Tick();
	void Render();

	void Died();
private:
	Snake _player;
};