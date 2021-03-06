	// Full Credits to LUAppArc
#ifndef UNITFUNCTIONS_H
#define UNITFUNCTIONS_H

namespace luaUnit
{
	int GossipCreateMenu(lua_State * L, Unit * ptr);
	int GossipMenuAddItem(lua_State * L, Unit * ptr);
	int GossipSendMenu(lua_State * L, Unit * ptr);
	int GossipComplete(lua_State * L, Unit * ptr);
	int GossipSendPOI(lua_State * L, Unit * ptr);
	int GetName(lua_State * L, Unit * ptr);
	int SendChatMessage(lua_State * L, Unit * ptr);
	int MoveTo(lua_State * L, Unit * ptr);
	int SetMovementType(lua_State * L, Unit * ptr);
	int CastSpell(lua_State * L, Unit * ptr);
	int CastSpellOnTarget(lua_State * L, Unit * ptr);
	int FullCastSpell(lua_State * L, Unit * ptr);
	int FullCastSpellOnTarget(lua_State * L, Unit * ptr);
	int SpawnGameObject(lua_State * L, Unit * ptr);
	int SpawnCreature(lua_State * L, Unit * ptr);
	int GetX(lua_State * L, Unit * ptr);
	int GetY(lua_State * L, Unit * ptr);
	int GetZ(lua_State * L, Unit * ptr);
	int GetO(lua_State * L, Unit * ptr);
	int IsPlayer(lua_State * L, Unit * ptr);
	int IsCreature(lua_State * L, Unit * ptr);
	int RegisterEvent(lua_State * L, Unit * ptr);
	int RemoveEvents(lua_State * L, Unit * ptr);
	int SendBroadcastMessage(lua_State * L, Unit * ptr);
	int SendAreaTriggerMessage(lua_State * L, Unit * ptr);
	//int KnockBack(lua_State * L, Unit * ptr);
	int MarkQuestObjectiveAsComplete(lua_State * L, Unit * ptr);
	int LearnSpell(lua_State * L, Unit * ptr);
	int UnlearnSpell(lua_State * L, Unit * ptr);
	int HasFinishedQuest(lua_State * L, Unit * ptr);
	int GetItemCount(lua_State * L, Unit * ptr);
	int IsInCombat(lua_State * L, Unit * ptr);
	int GetMainTank(lua_State * L, Unit * ptr);
	int GetAddTank(lua_State * L, Unit * ptr);
	int ClearThreatList(lua_State * L, Unit * ptr);
	int GetTauntedBy(lua_State * L, Unit * ptr);
	int SetTauntedBy(lua_State * L, Unit * ptr);
	int GetSoulLinkedWith(lua_State * L, Unit * ptr);
	int SetSoulLinkedWith(lua_State * L, Unit * ptr);
	int ChangeTarget(lua_State * L, Unit * ptr);
	int GetHealthPct(lua_State * L, Unit * ptr);
	int GetManaPct(lua_State * L, Unit * ptr);
	int Emote(lua_State * L, Unit * ptr);
	int SetHealthPct(lua_State * L, Unit * ptr);
	int Despawn(lua_State * L, Unit * ptr);
	int GetUnitBySqlId(lua_State * L, Unit * ptr);
	int PlaySoundToSet(lua_State * L, Unit * ptr);
	int RemoveAura(lua_State * L, Unit * ptr);
	int StopMovement(lua_State * L, Unit * ptr);
	int GetInstanceID(lua_State * L, Unit * ptr);
	int GetClosestPlayer(lua_State * L, Unit * ptr);
	int GetRandomPlayer(lua_State * L, Unit * ptr);
	int GetRandomFriend(lua_State * L, Unit * ptr);
	int AddItem(lua_State * L, Unit * ptr);
	int RemoveItem(lua_State * L, Unit * ptr);
	int CreateCustomWaypointMap(lua_State * L, Unit * ptr);
	int CreateWaypoint(lua_State * L, Unit * ptr);
	int DestroyCustomWaypointMap(lua_State * L, Unit * ptr);
	int MoveToWaypoint(lua_State * L, Unit * ptr);
	int SetCombatCapable(lua_State * L, Unit * ptr);
	int SetCombatMeleeCapable(lua_State * L, Unit * ptr);
	int SetCombatRangedCapable(lua_State * L, Unit * ptr);
	int SetCombatSpellCapable(lua_State * L, Unit * ptr);
	int SetCombatTargetingCapable(lua_State * L, Unit * ptr);
	int SetNPCFlags(lua_State * L, Unit * ptr);
	int SetModel(lua_State * L, Unit * ptr);
	int SetScale(lua_State * L, Unit * ptr);
	int SetFaction(lua_State * L, Unit * ptr);
	int SetStandState(lua_State * L, Unit * ptr);
	int TeleportUnit(lua_State * L, Unit * ptr);
	int GetPlayerClass(lua_State * L, Unit * ptr);
	int ClearHateList(lua_State * L, Unit * ptr);
	int WipeHateList(lua_State * L, Unit * ptr);
	int WipeTargetList(lua_State * L, Unit * ptr);
	int WipeCurrentTarget(lua_State * L, Unit * ptr);
	int GetHealth(lua_State * L, Unit * ptr);
	int GetMaxHealth(lua_State * L, Unit * ptr);
	int SetHealth(lua_State * L, Unit * ptr);
	int SetMaxHealth(lua_State * L, Unit * ptr);
	int SetFieldFlags(lua_State * L, Unit * ptr);
	int PvPFlagged(lua_State * L, Unit * ptr);
	int GetModel(lua_State * L, Unit * ptr);
	int GetRunSpeed(lua_State *  L, Unit * ptr);
	int GetFlySpeed(lua_State * L, Unit * ptr);
	int Disconnect(lua_State * L, Unit * ptr);
	int GetZone(lua_State * L, Unit * ptr);
	int GetMapId(lua_State * L, Unit * ptr);
	int SendWideBroadcastMessage(lua_State * L, Unit * ptr);
	int IsBehind(lua_State * L, Unit * ptr);
	int RemoveFlag(lua_State * L, Unit * ptr);
	int IsFlying(lua_State * L, Unit * ptr);
	int SetFactionStanding(lua_State * L, Unit * ptr);
	int GetLevel(lua_State * L, Unit * ptr);
	int IsAlive(lua_State * L, Unit * ptr);
	int IsStealthed(lua_State * L, Unit * ptr);
	int IsGM(lua_State * L, Unit * ptr);
	int IsHorde(lua_State * L, Unit * ptr);
	int IsAlliance(lua_State * L, Unit * ptr);
	int HasAmountOfPlayers(lua_State * L, Unit * ptr);
	int HasGMTagOn(lua_State * L, Unit * ptr);
	int CastSpellAoF(lua_State * L, Unit * ptr);
	int RemoveAllAuras(lua_State * L, Unit * ptr);
	int TogglePvP(lua_State * L, Unit * ptr);
	int ApplyRestState(lua_State * L, Unit * ptr);
	int ResurrectPlayer(lua_State * L, Unit * ptr);
	int SetEmoteState(lua_State * L, Unit * ptr);
	int GetPlayerAccountName(lua_State * L, Unit * ptr);
	int RemoveStealth(lua_State * L, Unit * ptr);
	int Die(lua_State * L, Unit * ptr);
	int SetStealth(lua_State * L, Unit * ptr);
	int WorldQuery(lua_State * L, Unit * ptr);
	int CharacterQuery(lua_State * L, Unit * ptr);
	int AddCreatureLoot(lua_State * L, Unit * ptr);
	int SystemMessageToPlr(lua_State * L, Unit * ptr);
	int SaveToDB(lua_State * L, Unit * ptr);
	int IsInvincible(lua_State * L, Unit * ptr);
	int IsAttacking(lua_State * L, Unit * ptr);
	int SetInvincible(lua_State * L, Unit * ptr);
	int IsInRange(lua_State * L, Unit * ptr);
	int FinishQuest(lua_State * L, Unit * ptr);
	int IfQuestCanBeFinished(lua_State * L, Unit * ptr);
	int SetQuestComplete(lua_State * L, Unit * ptr);
	int SubtractTime(lua_State * L, Unit * ptr);
	int MoveToPlayer(lua_State * L, Unit * ptr);
	int EventCreatureYell(lua_State * L, Unit * ptr);
	int EventCreatureDelete(lua_State * L, Unit * ptr);
	int EventCastSpell(lua_State * L, Unit * ptr);
	int EventCreatureYell(lua_State * L, Unit * ptr);
	int EventPlaySound(lua_State * L, Unit * ptr);
	int EventCastSpellOnSelf(lua_State * L, Unit * ptr);
	int MonsterMove(lua_State * L, Unit * ptr);
	int SetPosition(lua_State * L, Unit * ptr);
	int SetCurrentAgent(lua_State * L, Unit * ptr);
	int AddAISpell(lua_State * L, Unit * ptr);
	int RegisterAIUpdateEvent(lua_State * L, Unit * ptr);
	int ModifyAIUpdateEvent(lua_State * L, Unit * ptr);
	int RemoveAIUpdateEvent(lua_State * L, Unit * ptr);
	int SetDamageDone(lua_State * L, Unit * ptr);
	int GetDamageDone(lua_State * L, Unit * ptr);
	int SetAIState(lua_State * L, Unit * ptr);
	int DisableRespawn(lua_State * L, Unit * ptr);
	int ModifySpeed(lua_State  * L, Unit * ptr);
	int SetInvisible(lua_State * L, Unit * ptr);
	int GetInRangePlayers(lua_State * L, Unit * ptr);
	int GetInRangeFriends(lua_State * L, Unit * ptr);
	int RemoveFromWorld(lua_State * L, Unit * ptr);
	int GetCreatureNearestCoords(lua_State * L, Unit * ptr);
	int GetGameObjectNearestCoords(lua_State * L, Unit * ptr);
	int GetUInt32Value(lua_State * L, Unit * ptr);
	int GetUInt64Value(lua_State * L, Unit * ptr);
	int IsMoving(lua_State * L, Unit * ptr);
	int IsAttacking(lua_State * L, Unit * ptr);
	int GetDistance(lua_State * L, Unit * ptr);
	int GetCurrentSpellName(lua_State * L, Unit * ptr);
	int GetCurrentSpellId(lua_State * L, Unit * ptr);
	int ModThreat(lua_State * L, Unit * ptr);
	int RemoveThreat(lua_State * L, Unit * ptr);
	int GetThreat(lua_State * L, Unit * ptr);
	int CalcDistance(lua_State * L, Unit * ptr);
	int GetPowerType(lua_State * L, Unit * ptr);
	int SetNextTarget(lua_State * L, Unit * ptr);
	int GetNextTarget(lua_State * L, Unit * ptr);
	int GetSpawnX(lua_State * L, Unit * ptr);
	int GetSpawnY(lua_State * L, Unit * ptr);
	int GetSpawnZ(lua_State * L, Unit * ptr);
	int GetSpawnO(lua_State * L, Unit * ptr);
	int GetInstanceMode(lua_State * L, Unit * ptr);
	int KnockBack(lua_State * L, Unit * ptr);
	int Root(lua_State * L, Unit * ptr);
	int Unroot(lua_State * L, Unit * ptr);
	// New functions start
	int GetSelection(lua_State * L, Unit * ptr);
	int SendMeetingStoneQueue(lua_State * L, Unit * ptr);
	int IsInFeralForm(lua_State * L, Unit * ptr);
	int SetSelection(lua_State * L, Unit * ptr);
	int GetStanding(lua_State * L, Unit * ptr);
	int ModStanding(lua_State * L, Unit * ptr);
	int SetStanding(lua_State * L, Unit * ptr);
	int SetAtWar(lua_State * L, Unit * ptr);
	//int IsAtWar(lua_State * L, Unit * ptr);
	int GetStandingRank(lua_State * L, Unit * ptr);
	int UpdateInRangeSet(lua_State * L, Unit * ptr);
	int GetRepRankFromStanding(lua_State * L, Unit * ptr);
	int GetPVPRank(lua_State * L, Unit * ptr);
	int SetPVPRank(lua_State * L, Unit * ptr);
	int IsGroupLeader(lua_State* L, Unit * ptr);
	int IsGroupMember(lua_State * L, Unit * ptr);
	int SetBanned(lua_State * L, Unit * ptr);
	int UnSetBanned(lua_State  * L, Unit * ptr);
	int SetBindPoint(lua_State * L, Unit * ptr);
	int ResetTalents(lua_State * L, Unit * ptr);
	int GetBindPosition(lua_State * L, Unit * ptr);
	int AllowFallDamage(lua_State * L, Unit * ptr);
	int GetSoulStone(lua_State * L, Unit * ptr);
	int GetSoulStone(lua_State * L, Unit * ptr);
	int SetSoulStone(lua_State * L, Unit * ptr);
	int SetReincarnate(lua_State * L, Unit * ptr);
	int EjectFromInstance(lua_State * L, Unit * ptr);
	int SetPlayerName(lua_State * L, Unit * ptr);
	int OnUnitEvent(lua_State * L, Unit * ptr);
	int GetRandomEnemy(lua_State * L, Unit * ptr);
	/* Date : 01/05/2009 */
	int GetEntry(lua_State * L, Unit * ptr);
	int Energize(lua_State * L, Unit * ptr);
	int Heal(lua_State * L, Unit * ptr);
	int GetAP(lua_State * L, Unit * ptr);
	int GetPlayerRace(lua_State * L, Unit * ptr);
	int GetSummon(lua_State * L, Unit * ptr);
	int IsInParty(lua_State * L, Unit * ptr);
	int IsInRaid(lua_State * L, Unit * ptr);
	int IsCasting(lua_State * L, Unit * ptr);
	int SetAttackTimer(lua_State * L, Unit * ptr);
	int SetDeathState(lua_State * L, Unit * ptr);
	int GetDeathState(lua_State * L, Unit * ptr);
	int ShareHealth(lua_State * L, Unit * ptr);
	int GetStandState(lua_State * L, Unit * ptr);
	/* End Date : 01/05/2009 */
	/* Date : 01/07/2009 */
	int SetUInt32Value(lua_State * L, Unit * ptr);
	int SetUInt64Value(lua_State * L, Unit * ptr);
	int GetGUID(lua_State * L, Unit * ptr);
	int CalcRadAngle(lua_State * L, Unit * ptr);
	int EnableFlight(lua_State * L, Unit * ptr);
	int DisableFlight(lua_State * L, Unit * ptr);
	int AttackReaction(lua_State * L, Unit * ptr);
	int IsInWorld(lua_State * L, Unit * ptr);
	int PlaySpellVisual(lua_State * L, Unit * ptr);
	int ImmuneMechanic(lua_State * L, Unit * ptr);
	/* End Date : 01/07/2009 */
	/* Date : 01/13/2009 */
	int GetCurrentWaypoint(lua_State * L, Unit * ptr);
	int SetAllowedToEnterCombat(lua_State * L, Unit *  ptr);
	int GetDistanceSq(lua_State * L, Unit * ptr);
	int SetOutOfCombatRange(lua_State * L, Unit * ptr);
	int SetSpawnLocation(lua_State * L, Unit * ptr);
	int GetInRangeUnits(lua_State * L, Unit * ptr);
	int DeleteAllWaypoints(lua_State * L, Unit * ptr);
	int ChangeWaypoint(lua_State * L , Unit * ptr);
	int DeleteWaypoint(lua_State * L, Unit * ptr);
	int SaveInstanceToDB(lua_State * L, Unit * ptr);
	int ResetSavedInstances(lua_State * L, Unit * ptr);
	/* End Date: 01/13/2009 */
}
#endif
