
#pragma once


#include "GameObject.h"

// All Urho3D classes reside in namespace Urho3D
using namespace Urho3D;

const int potionHealAmount = 5;

class Potion : public GameObject
{
	OBJECT(Potion);
public:
    Potion( Context* context );
    ~Potion();
	/// Register object factory.
	static void RegisterObject(Context* context);

	//////////////////////////////////////////////////////////////////////////
	/// LogicComponent
	//////////////////////////////////////////////////////////////////////////
	/// Called when the component is added to a scene node. Other components may not yet exist.
	virtual void Start();

	//////////////////////////////////////////////////////////////////////////
	/// GameObject
	//////////////////////////////////////////////////////////////////////////
	virtual void ObjectCollision(GameObject* otherObject, VariantMap& eventData);
	
protected:
	int healAmount;

private:

	
};

