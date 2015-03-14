
#pragma once



#include <Urho3D/Core/Object.h>
#include <Urho3D/Container/Str.h>
#include <Urho3D\Input\Controls.h>

namespace Urho3D
{
	class Connection;
}

// All Urho3D classes reside in namespace Urho3D
using namespace Urho3D;

class HiscoreEntry
{
public:
	HiscoreEntry()
	{
		score = 0;
	}
	~HiscoreEntry()
	{

	}
	int score;
	String name;
};


class Player 
{

public:

    Player(  );
    ~Player();
	int score;
	String name;
	unsigned int nodeID;

	SharedPtr<Connection> connection;
	Controls lastControls;

};

