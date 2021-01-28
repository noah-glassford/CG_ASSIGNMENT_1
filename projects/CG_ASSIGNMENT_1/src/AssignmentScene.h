#pragma once
#include <ElementEngine.h>
class AssignmentScene : public Scene
{
public:
	void InitScene() override;
	void Update() override;
private:
	entt::registry* m_sceneReg = nullptr;
};