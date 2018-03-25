#include "scene_state.h"
#include "../components/cmp_sprite.h"
#include "../components/cmp_basic_movement.h"
#include <LevelSystem.h>

using namespace std;
using namespace sf;

void StateScene::Load()
{
	
}

void StateScene::UnLoad() { Scene::UnLoad(); }

void StateScene::Update(const double& dt)
{
	Scene::Update(dt);
}

void StateScene::Render()
{
	Scene::Render();
}