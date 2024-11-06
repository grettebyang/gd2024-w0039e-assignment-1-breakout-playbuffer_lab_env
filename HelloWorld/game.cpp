#pragma once
#include "game.h"

#define PLAY_IMPLEMENTATION
#define PLAY_USING_GAMEOBJECT_MANAGER
#include "Play.h"
#include "constants.h"
using namespace std;

void SpawnBall() 
{
	const int objectId = Play::CreateGameObject(ObjectType::TYPE_BALL, { DISPLAY_WIDTH / 2, DISPLAY_HEIGHT - 60 }, 4, "ball");
}

//The function StepFrame takes in a float value that represents the elapsed time since last step
//Takes one simulation step and renders a single frame of the application
void StepFrame(float elapsedTime)
{
	//Returns a vector that contains the object ids for all balls that have been created
	const vector<int> ballIds = Play::CollectGameObjectIDsByType(TYPE_BALL);

	//Loop through vector and draw each ball in it
	for (int ball : ballIds)
	{
		Play::DrawObject(Play::GetGameObject(ball));
	}
}

