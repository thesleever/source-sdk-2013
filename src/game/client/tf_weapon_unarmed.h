//========= Copyright Valve Corporation, All rights reserved. ============//
//
// Purpose: 
//
//=============================================================================

#ifndef TF_WEAPON_UNARMED_H
#define TF_WEAPON_UNARMED_H
#ifdef _WIN32
#pragma once
#endif

#include "tf_weaponbase_melee.h"

#ifdef CLIENT_DLL
#define CTFUnarmed C_TFUnarmed
#endif

//=============================================================================
//
// Unarmed weapon class.
//
class CTFUnarmed : public CTFWeaponBaseMelee
{
public:

	DECLARE_CLASS(CTFUnarmed, CTFWeaponBaseMelee);
	DECLARE_NETWORKCLASS();
	DECLARE_PREDICTABLE();

	CTFUnarmed() {}
	virtual int			GetWeaponID(void) const { return TF_WEAPON_UNARMED; }

	virtual void ItemPreFrame();
	//virtual void PrimaryAttack();
	//virtual void SecondaryAttack();
	virtual bool Holster(CBaseCombatWeapon* pSwitchingTo);

	//virtual void SendPlayerAnimEvent(CTFPlayer* pPlayer);

	//virtual void DoViewModelAnimation(void);

	virtual bool HideWhileStunned(void) { return false; }

	//void Punch(void);

#ifdef GAME_DLL
	//virtual void OnEntityHit(CBaseEntity* pEntity, CTakeDamageInfo* info);
#endif

	virtual bool AllowTaunts(void);

	//int			 GetFistType(void) { int iMode = 0; CALL_ATTRIB_HOOK_INT(iMode, set_weapon_mode); return iMode; };

	virtual void SetWeaponVisible(bool visible) OVERRIDE;
	virtual bool Deploy(void);

private:

	CTFUnarmed(const CTFUnarmed&) {}
};

#endif // TF_WEAPON_UNARMED_H
