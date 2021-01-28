#include <AssignmentScene.h>
int main() 
{
	Game game;
	game.AddScene(new AssignmentScene());
	game.InitGame(0);
	game.m_SceneIndex = 0;


	return 0; 
} 
