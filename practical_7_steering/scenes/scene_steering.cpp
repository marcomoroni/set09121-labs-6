#include "scene_steering.h"
#include "../components/cmp_sprite.h"
#include "../components/cmp_basic_movement.h"
#include <LevelSystem.h>
#include <random>
#include <chrono>

using namespace std;
using namespace std::chrono;
using namespace sf;

void SteeringScene::Load()
{
	auto player = makeEntity();
	player->setPosition(Vector2f(Engine::GetWindow().getSize().x / 2, Engine::GetWindow().getSize().y / 2));
	auto s = player->addComponent<ShapeComponent>();
	s->setShape<CircleShape>(10.0f);
	s->getShape().setFillColor(Color::Red);
	player->addComponent<BasicMovementComponent>();
}

void SteeringScene::UnLoad() { Scene::UnLoad(); }

void SteeringScene::Update(const double& dt) { Scene::Update(dt); }

void SteeringScene::Render() { Scene::Render(); }