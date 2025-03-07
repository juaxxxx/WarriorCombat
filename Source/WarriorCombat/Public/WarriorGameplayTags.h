// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "NativeGameplayTags.h"

namespace WarriorGameplayTags
{
	/* Input Tags */
	WARRIORCOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Move);
	WARRIORCOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_Look);
	WARRIORCOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_EquipAxe);
	WARRIORCOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(InputTag_UnequipAxe);

	/* Player Tags */
	WARRIORCOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Weapon_Axe);

	WARRIORCOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Event_Equip_Axe);
	WARRIORCOMBAT_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Player_Event_Unequip_Axe);


}