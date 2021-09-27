#pragma once
#include <iostream>
#include "MapLoader.h"

using namespace std;

enum GameEngineCommand { invalidCommand, loadMap, validateMap, addPlayer, assignCountries, issueOrder, endIssueOrders, execOrder, endExecOrders, winGame, endGame };

enum GameEngineState { start, mapLoaded, mapValidated, playersAdded, assignReinforcement, issueOrders, executeOrders, win };

class GameEngine {



// private members of the GameEngine class
private:

	MapLoader* mapLoader;

	GameEngineState currentState;
	void loadMap(std::string mapName);


// public members of the GameEngine class
public:

	GameEngine();
	~GameEngine();
	void sendCommand(GameEngineCommand command);
	void validateMap();
};
