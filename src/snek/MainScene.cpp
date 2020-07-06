#include "MainScene.h"

#include <iostream>

#include "engine/core/Input.h"
#include "engine/Debug.h"

#define SNAKE_DEFAULT_LENGTH 3
#define SNAKE_DEFAULT_X 5
#define SNAKE_DEFAULT_Y 5

MainScene::MainScene() : Scene("MainScene"), _player(SNAKE_DEFAULT_LENGTH, SNAKE_DEFAULT_X, SNAKE_DEFAULT_Y) { }

MainScene::~MainScene() { }

void MainScene::Tick() {
	_player.Tick();
}

void MainScene::Render() {
	_player.Render(Engine::GetInstance()->GetWindow());
}