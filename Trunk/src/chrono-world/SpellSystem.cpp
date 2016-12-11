//
// CHRONO EMU (C) 2016
//
// Spell System
//

#include "StdAfx.h"

/*********************************
 *                               *
 * DATABASE LOADED SPELL UPDATES *
 *                               *
 *********************************/


//
// Direction required for spell.
// SQL Table: spell_direction
//
// STRUCTURE:
// 
// EntryID      - ID of the Spell
// ReqDirection - Is Infront or Behind
//
void ObjectMgr::LoadSpellInFront()
{
	SpellEntry* sp;
	QueryResult * result = WorldDatabase.Query("SELECT * FROM spell_direction");
	if (result)
	{
		Log.Notice("ObjectMgr", "Loading %u spell_direction from database...", result->GetRowCount());
		do
		{
			Field * f = result->Fetch();
			uint32 sf_spellId = f[0].GetUInt32();
			uint32 sf_isinfront = f[1].GetUInt32();

			if (sf_spellId)
			{
				sp = dbcSpell.LookupEntryForced(sf_spellId);
				if (sp != nullptr)
				{
					if (sf_isinfront)
						sp->in_front_status = sf_isinfront;
				}
			}
		} while (result->NextRow());
		delete result;
	}
}

//
// Spell Proc on Name Hash
// SQL Table: spell_proc
//
// STRUCTURE:
//
// spellID - ID of the Spell
// ProcOnNameHash - Spell Name Hash see SpellNameHashes.h
//
void ObjectMgr::LoadSpellProcs()
{
	SpellEntry* sp;
	QueryResult * result = WorldDatabase.Query("SELECT * FROM spell_proc");
	if (result)
	{
		Log.Notice("ObjectMgr", "Loading %u spell_proc from database...", result->GetRowCount());
		do
		{
			Field * f = result->Fetch();
			uint32 spe_spellId = f[0].GetUInt32();
			uint32 spe_NameHash = f[1].GetUInt32();

			if (spe_spellId)
			{
				sp = dbcSpell.LookupEntryForced(spe_spellId);
				if (sp != nullptr)
				{
					int x;
					for (x = 0; x < 3; ++x)
						if (sp->ProcOnNameHash[x] == 0)
							break;

					if (x != 3)
					{
						sp->ProcOnNameHash[x] = spe_NameHash;
					}
					else
						sLog.outError("Wrong ProcOnNameHash for Spell: %u!", spe_spellId);
				}
			}

		} while (result->NextRow());
		delete result;
	}
}

//
// Spell Effects & Information
//
// STRUCTURE:
//
// spellID        - ID of the Spell
// procFlags      - How does the spell proc?
// SpellGroupType - N/A?
// procChance     - % Chance to occur
// procCharges    - How many times can it proc / stack
//
void ObjectMgr::LoadSpellFixes()
{
	SpellEntry* sp;
	QueryResult * result = WorldDatabase.Query("SELECT * FROM spellfixes");
	if (result)
	{
		Log.Notice("ObjectMgr", "Loading %u spellfixes from database...", result->GetRowCount());
		do
		{
			Field * f = result->Fetch();
			uint32 sf_spellId = f[0].GetUInt32();
			uint32 sf_procFlags = f[1].GetUInt32();
			uint32 sf_SpellGroupType = f[2].GetUInt32();
			uint32 sf_procChance = f[3].GetUInt32();
			uint32 sf_procCharges = f[4].GetUInt32();

			if (sf_spellId)
			{
				sp = dbcSpell.LookupEntryForced(sf_spellId);
				if (sp != nullptr)
				{
					if (sf_procFlags)
						sp->procFlags = sf_procFlags;

					if (sf_SpellGroupType)
						sp->SpellGroupType = sf_SpellGroupType;

					if (sf_procChance)
						sp->procChance = sf_procChance;

					if (sf_procCharges)
						sp->procCharges = sf_procCharges;
				}
			}
		} while (result->NextRow());
		delete result;
	}
}

//
//FORCED CREATURE SPELL TARGETING
//
void ObjectMgr::LoadSpellForcedTargets()
{
	SpellEntry* sp;
	QueryResult * result = WorldDatabase.Query("SELECT * FROM spell_forced_targets");
	if (result)
	{
		Log.Notice("ObjectMgr", "Loading %u spell_forced_targets from database...", result->GetRowCount());
		do
		{
			Field * f = result->Fetch();
			uint32 spellid = f[0].GetUInt32();
			uint32 forcedtarget = f[1].GetUInt32();

			if (spellid)
			{
				sp = dbcSpell.LookupEntryForced(spellid);
				if (sp != nullptr)
				{
					if (forcedtarget)
						sp->forced_creature_target = forcedtarget;
				}
			}
		} while (result->NextRow());
		delete result;
	}
}

//
// Spell Coef Override
// This will allow you to override the default coefs for the spell.
//
void ObjectMgr::LoadSpellCoefOverride()
{
	SpellEntry* sp;
	QueryResult * result = WorldDatabase.Query("SELECT * FROM spell_coef_override");
	if (result)
	{
		Log.Notice("ObjectMgr", "Loading %u spell_coef_override from database...", result->GetRowCount());
		do
		{
			Field * f = result->Fetch();
			uint32 spellid = f[0].GetUInt32();
			uint32 DSpellOverride = f[1].GetFloat();
			uint32 OTSpellOverride = f[2].GetFloat();
			uint32 APSpellOverride = f[3].GetFloat();
			uint32 RAPSpellOverride = f[4].GetFloat();

			if (spellid)
			{
				sp = dbcSpell.LookupEntryForced(spellid);
				if (sp != nullptr)
				{
					if (DSpellOverride)
						sp->Dspell_coef_override = DSpellOverride;
					if (OTSpellOverride)
						sp->OTspell_coef_override = OTSpellOverride;
					if (APSpellOverride)
						sp->AP_coef_override = APSpellOverride;
					if (RAPSpellOverride)
						sp->RAP_coef_override = RAPSpellOverride;
				}
			}
		} while (result->NextRow());
		delete result;
	}
}