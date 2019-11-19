#pragma once
class IGameEvents
{
public:

	static IGameEvents g_gameEvents;
	static bool g_logGameEventMessages;





	/* 0   */	virtual void AchievementEarned(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HaloTitleId, int32 AchievementId);
	/* 1   */	virtual void AshesToAshes(wchar_t* UserId, GUID PlayerSessionId);
	/* 2   */	virtual void Assist(wchar_t* UserId, int32 SectionId, GUID PlayerSessionId, wchar_t* MultiplayerCorrelationId, int32 GameplayModeId, int32 DifficultyLevelId, GUID RoundId, int32 PlayerRoleId, int32 PlayerWeaponId, int32 EnemyRoleId, int32 KillTypeId, float LocationX, float LocationY, float LocationZ, int32 EnemyWeaponId, wchar_t* HaloTitleId, int32 MapId, int32 EnemyClassId, int32 GameCategoryId, bool MatchMade);
	/* 3   */	virtual void AudioLogClaimed(wchar_t* UserId, GUID PlayerSessionId, int32 AudioLogId);
	/* 4   */	virtual void Base(wchar_t* UserId, GUID PlayerSessionId);
	/* 5   */	virtual void Betrayal(wchar_t* UserId, int32 SectionId, GUID PlayerSessionId, wchar_t* MultiplayerCorrelationId, int32 GameplayModeId, int32 DifficultyLevelId, GUID RoundId, int32 PlayerRoleId, int32 PlayerWeaponId, int32 EnemyRoleId, int32 KillTypeId, float LocationX, float LocationY, float LocationZ, int32 EnemyWeaponId, wchar_t* HaloTitleId, int32 MapId, int32 EnemyClassId, int32 GameCategoryId, bool MatchMade);
	/* 6   */	virtual void BIFactControllerSettings(wchar_t* UserId, GUID PlayerSessionId, bool IsGuest, wchar_t* HaloTitleID, int32 GameCategoryID, int32 ControllerConfigurationID, bool LookInverted);
	/* 7   */	virtual void BIFactDeepLink(wchar_t* UserId, GUID PlayerSessionId);
	/* 8   */	virtual void BIFactDeepLinkRecieve(wchar_t* UserId, GUID PlayerSessionId, wchar_t* DeepLinkCorrelationID, wchar_t* DeepLinkURL);
	/* 9   */	virtual void BIFactDeepLinkSend(wchar_t* UserId, GUID PlayerSessionId, wchar_t* DeepLinkCorrelationID, wchar_t* DeepLinkURL);
	/* 10  */	virtual void BIFactDualWield(wchar_t* UserId, GUID PlayerSessionId, bool IsGuest, wchar_t* HaloTitleID, int32 GameCategoryID, int32 LeftWeaponID, int32 RightWeaponID, uint64 DualWieldTimeStamp);
	/* 11  */	virtual void BIFactGameSession(wchar_t* UserId, GUID PlayerSessionId, uint64 SessionStartTimeStamp, uint64 SessionEndTimeStamp, wchar_t* HaloTitleID, uint64 SubTitleStartTimeStamp, uint64 SubTitleEndTimeStamp, int32 GameCategoryID, wchar_t* LocaleID, int32 MapID, int32 ArmorID, uint64 SkullsUsed, wchar_t* HopperID, int32 PlayerCount, bool Matchmade, int32 MatchmakingRank, double MatchmakingRating, int32 MatchmakingXP, bool Won, uint64 Score, uint64 TeamScore, int32 Standing, bool FirstPlace, int32 Kills, int32 Deaths, int32 Assists, int32 Betrayals, int32 Suicides);
	/* 12  */	virtual void BIFactLoadout(wchar_t* UserId, GUID PlayerSessionId, bool IsGuest, wchar_t* HaloTitleID, int32 GameCategoryID, int32 PrimaryWeaponID, int32 SecondaryWeaponID, int32 GrenadeID, int32 ShieldID);
	/* 13  */	virtual void BIFactMatchmaking(wchar_t* UserId, GUID PlayerSessionId, bool IsGuest, wchar_t* LobbyID, uint64 LobbyEntryTimeStamp, bool JoinedMatch, uint64 JoinMatchTimeStamp, int32 MatchmakingRank, double MatchmakingRating, int32 MatchmakingXP, int32 PartySize, GUID PartyID);
	/* 14  */	virtual void BIFactMatchmakingDetails(wchar_t* UserId, GUID PlayerSessionId, int32 NumPlayersInParty, bool GSRFired, bool BecameActiveInSession, bool ConnectedToPeerGameHost, bool GameStarted, uint64 LobbyEntryTimeStamp, uint64 LobbyExitTimeStamp, int32 ExitReason, wchar_t* GameUniqiueID, bool IsArbiter, bool IsThunderheadGame, int32 NumPlayers, int32 NumPreserveSessionTicketsCreated);
	/* 15  */	virtual void BIFactMedia(wchar_t* UserId, GUID PlayerSessionId, bool IsGuest, wchar_t* HaloTitleID, uint64 MediaStartTimeStamp, bool WasSkipped, uint64 MediaSkipTimeStamp, wchar_t* MediaID);
	/* 16  */	virtual void BirdOfPrey(wchar_t* UserId, GUID PlayerSessionId);
	/* 17  */	virtual void BitsAndPiecesDestroyed(wchar_t* UserId, GUID PlayerSessionId);
	/* 18  */	virtual void BroadcastingAssist(wchar_t* UserId, GUID PlayerSessionId, int64 TimeStamp, int32 CurrentAssists);
	/* 19  */	virtual void BroadcastingDeath(wchar_t* UserId, GUID PlayerSessionId, int64 TimeStamp, wchar_t* VictimXuid, uint32 VictimTeamId, wchar_t* KillerXuid, uint32 KillerTeamId, wchar_t* AssistantXuids, uint32 DamageReportingModifier, int32 StockId, int32 AttachmentIds, int32 DamageTypeId, int32 CurrentDeaths);
	/* 20  */	virtual void BroadcastingHeartbeat(wchar_t* UserId, GUID PlayerSessionId, int64 Heartbeat);
	/* 21  */	virtual void BroadcastingKill(wchar_t* UserId, GUID PlayerSessionId, int64 TimeStamp, wchar_t* VictimXuid, uint32 VictimTeamId, wchar_t* KillerXuid, uint32 KillerTeamId, wchar_t* AssistantXuids, uint32 DamageReportingModifier, int32 StockId, int32 AttachmentIds, int32 DamageTypeId, int32 CurrentKills);
	/* 22  */	virtual void BroadcastingMatchEnd(wchar_t* UserId, GUID PlayerSessionId, int64 TimeStamp);
	/* 23  */	virtual void BroadcastingMatchRoundEnd(wchar_t* UserId, GUID PlayerSessionId, int64 TimeStamp);
	/* 24  */	virtual void BroadcastingMatchRoundStart(wchar_t* UserId, GUID PlayerSessionId, int64 TimeStamp, int32 RoundNumber);
	/* 25  */	virtual void BroadcastingMatchStart(wchar_t* UserId, GUID PlayerSessionId, int64 TimeStamp, int32 MapVariantID, int32 GameVariantID, wchar_t* PlaylistID);
	/* 26  */	virtual void BroadcastingMedal(wchar_t* UserId, GUID PlayerSessionId, int64 TimeStamp, int32 MedalId);
	/* 27  */	virtual void BroadcastingPlayerJoined(wchar_t* UserId, GUID PlayerSessionId, int64 TimeStamp, int32 TeamId);
	/* 28  */	virtual void BroadcastingPlayerLeft(wchar_t* UserId, GUID PlayerSessionId, int64 TimeStamp);
	/* 29  */	virtual void BroadcastingPlayerSpawn(wchar_t* UserId, GUID PlayerSessionId, int64 TimeStamp);
	/* 30  */	virtual void BroadcastingPlayerSwitchedTeams(wchar_t* UserId, GUID PlayerSessionId, int64 TimeStamp, int32 TeamId, wchar_t* WebColor);
	/* 31  */	virtual void BroadcastingScore(wchar_t* UserId, GUID PlayerSessionId, int32 ControllerIndex, int64 Timestamp, int32 CurrentRoundScore, int32 CurrentTotalScore, int32 CurrentRoundTeamScore, int32 CurrentTotalTeamScore);
	/* 32  */	virtual void BroadcastingStart(wchar_t* UserId, GUID PlayerSessionId, uint32 GameType, uint32 Map, uint32 TopPlayerRank, wchar_t* PlayerIDs, GUID MatchID, bool PlayerIsCaster, int64 MatchStartTime);
	/* 33  */	virtual void CampaignDifficulty(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HaloTitleId, wchar_t* CampaignDifficulty);
	/* 34  */	virtual void ChallengeCompleted(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HaloTitleId, int32 ChallengeId);
	/* 35  */	virtual void ClassicModeSwitched(wchar_t* UserId, GUID PlayerSessionId, int32 MapId);
	/* 36  */	virtual void CleverGirl(wchar_t* UserId, GUID PlayerSessionId);
	/* 37  */	virtual void ClueClaimed(wchar_t* UserId, GUID PlayerSessionId, int32 ClueId);
	/* 38  */	virtual void CoopMissionCompleted(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HaloTitleId, int32 MissionId, int32 MapId, int32 MissionScore, bool IronSkullUsed, bool BlackEyeSkullUsed, bool ToughLuckSkullUsed, bool CatchSkullUsed, bool CloudSkullUsed, bool FamineSkullUsed, bool ThunderstormSkullUsed, bool TiltSkullUsed, bool MythicSkullUsed, bool BlindSkullUsed, int32 DifficultyId);
	/* 39  */	virtual void CoopSpartanOpsMissionCompleted(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HaloTitleId, int32 MapId, int32 DifficultyId);
	/* 40  */	virtual void CompletionCount(wchar_t* UserId, GUID PlayerSessionId, int32 Count);
	/* 41  */	virtual void Customization(wchar_t* UserId, GUID PlayerSessionId, int32 Texture0, int32 Texture1, int32 Color0, int32 Color1, int32 Color2, wchar_t* ServiceId, wchar_t* ClanId, int32 AvatarId, int32 NameplateId);
	/* 42  */	virtual void DashboardContext(wchar_t* UserId, GUID PlayerSessionId, wchar_t* DashboardContext);
	/* 43  */	virtual void Death(wchar_t* UserId, int32 SectionId, GUID PlayerSessionId, wchar_t* MultiplayerCorrelationId, int32 GameplayModeId, int32 DifficultyLevelId, GUID RoundId, int32 PlayerRoleId, int32 PlayerWeaponId, int32 EnemyRoleId, int32 KillTypeId, float LocationX, float LocationY, float LocationZ, int32 EnemyWeaponId, wchar_t* HaloTitleId, int32 MapId, int32 EnemyClassId, int32 GameCategoryId, bool MatchMade, bool HeadShot);
	/* 44  */	virtual void DollFound(wchar_t* UserId, GUID PlayerSessionId, int32 DollId);
	/* 45  */	virtual void EliteWin(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HaloTitleId, bool MatchMade);
	/* 46  */	virtual void Emblem(wchar_t* UserId, GUID PlayerSessionId, int32 Texture0, int32 Texture1, int32 Color0, int32 Color1, int32 Color2);
	/* 47  */	virtual void EnemyDefeated(wchar_t* UserId, int32 SectionId, GUID PlayerSessionId, wchar_t* MultiplayerCorrelationId, int32 GameplayModeId, int32 DifficultyLevelId, GUID RoundId, int32 PlayerRoleId, int32 PlayerWeaponId, int32 EnemyRoleId, int32 KillTypeId, float LocationX, float LocationY, float LocationZ, int32 EnemyWeaponId, wchar_t* HaloTitleId, int32 MapId, int32 EnemyClassId, int32 GameCategoryId, bool MatchMade, bool HeadShot);
	/* 48  */	virtual void FriendsBestedOnHeroLeaderboard(wchar_t* UserId, GUID PlayerSessionId, int32 LeaderboardId, int32 LeaderboardRows);
	/* 49  */	virtual void GameProgress(wchar_t* UserId, GUID PlayerSessionId, float CompletionPercent);
	/* 50  */	virtual void GameVarSaved(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HaloTitleId, int32 BaseGameCategory, wchar_t* GameVarName);
	/* 51  */	virtual void GrenadeStick(wchar_t* UserId, int32 SectionId, GUID PlayerSessionId, wchar_t* MultiplayerCorrelationId, int32 GameplayModeId, int32 DifficultyLevelId, GUID RoundId, int32 PlayerRoleId, int32 PlayerWeaponId, int32 EnemyRoleId, int32 KillTypeId, float LocationX, float LocationY, float LocationZ, int32 EnemyWeaponId, int32 EnemyClassId);
	/* 52  */	virtual void HelloNurse(wchar_t* UserId, GUID PlayerSessionId);
	/* 53  */	virtual void InGamePresence(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HaloTitle, int32 CampaignDifficulty, int32 MultiplayerMap);
	/* 54  */	virtual void ISeeYou(wchar_t* UserId, GUID PlayerSessionId);
	/* 55  */	virtual void Joinability(wchar_t* UserId, GUID PlayerSessionId, bool InGame);
	/* 56  */	virtual void Lobby(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HaloTitleId, wchar_t* Lobby);
	/* 57  */	virtual void MainMenuPresence(wchar_t* UserId, GUID PlayerSessionId, wchar_t* MainMenuPresence);
	/* 58  */	virtual void MapVarSaved(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HaloTitleId, int32 BaseMapId, wchar_t* MapVarName);
	/* 59  */	virtual void MatchmakingHopper(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HaloTitleId, wchar_t* MatchmakingHopper);
	/* 60  */	virtual void MediaUsage(wchar_t* AppSessionId, wchar_t* AppSessionStartDateTime, uint32 UserIdType, wchar_t* UserId, wchar_t* SubscriptionTierType, wchar_t* SubscriptionTier, wchar_t* MediaType, wchar_t* ProviderId, wchar_t* ProviderMediaId, wchar_t* ProviderMediaInstanceId, GUID BingId, uint64 MediaLengthMs, uint32 MediaControlAction, float PlaybackSpeed, uint64 MediaPositionMs, uint64 PlaybackDurationMs, wchar_t* AcquisitionType, wchar_t* AcquisitionContext, wchar_t* AcquisitionContextType, wchar_t* AcquisitionContextId, int32 PlaybackIsStream, int32 PlaybackIsTethered, wchar_t* MarketplaceLocation, wchar_t* ContentLocale, float TimeZoneOffset, uint32 ScreenState);
	/* 61  */	virtual void MeldOfferPresented(wchar_t* UserId, GUID PlayerSessionId, GUID OfferGuid, GUID ProductGuid, wchar_t* Page, int32 SourceTileIndex);
	/* 62  */	virtual void MeldOfferResponded(wchar_t* UserId, GUID PlayerSessionId, GUID OfferGuid, GUID ProductGuid, int32 UpsellOutcome);
	/* 63  */	virtual void MeldPageAction(wchar_t* UserId, GUID PlayerSessionId, int32 ActionTypeId, int32 ActionInputMethodId, wchar_t* Page, wchar_t* TemplateId, wchar_t* DestinationPage, wchar_t* Content, int32 SourceTileIndex, int32 SourceTileX, int32 SourceTileY, int32 SourceTileWidth, int32 SourceTileHeight);
	/* 64  */	virtual void MeldPageView(wchar_t* UserId, GUID PlayerSessionId, wchar_t* Page, wchar_t* RefererPage, int32 PageTypeId, wchar_t* PageTags, wchar_t* TemplateId, wchar_t* Content, wchar_t* FilterContext, int32 FilterDirection);
	/* 65  */	virtual void MissionCompleted(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HaloTitleId, int32 MapId, int32 GameCategoryId, bool Coop, uint64 TimePlayedMS, uint64 DatePlayedUTC, int32 DifficultyId, uint64 MissionScore64, uint64 SkullUsedFlags, int32 NumPlayers, wchar_t* PlayerSectionStats, int32 Kills, float Multiplier, int32 Penalties, float SkullMultiplier, int32 TotalSoloMissionsComplete, int32 TotalCoopMissionsComplete);
	/* 66  */	virtual void MortardomWraithsKilled(wchar_t* UserId, GUID PlayerSessionId);
	/* 67  */	virtual void MultiplayerGameEngine(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HaloTitleId, wchar_t* MultiplayerGameEngine);
	/* 68  */	virtual void MultiplayerMap(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HaloTitleId, wchar_t* MultiplayerMap);
	/* 69  */	virtual void MultiplayerRoundEnd(wchar_t* UserId, GUID RoundId, int32 SectionId, GUID PlayerSessionId, wchar_t* MultiplayerCorrelationId, int32 GameplayModeId, int32 MatchTypeId, int32 DifficultyLevelId, float TimeInSeconds, int32 ExitStatusId);
	/* 70  */	virtual void MultiplayerRoundStart(wchar_t* UserId, GUID RoundId, int32 SectionId, GUID PlayerSessionId, wchar_t* MultiplayerCorrelationId, int32 GameplayModeId, int32 MatchTypeId, int32 DifficultyLevelId);
	/* 71  */	virtual void NappersCaught(wchar_t* UserId, GUID PlayerSessionId);
	/* 72  */	virtual void NewsStoryRead(wchar_t* UserId, GUID PlayerSessionId, wchar_t* StoryId);
	/* 73  */	virtual void ObjectiveEnd(wchar_t* UserId, int32 SectionId, GUID PlayerSessionId, wchar_t* MultiplayerCorrelationId, int32 GameplayModeId, int32 DifficultyLevelId, int32 ObjectiveId, int32 ExitStatusId);
	/* 74  */	virtual void ObjectiveStart(wchar_t* UserId, int32 SectionId, GUID PlayerSessionId, wchar_t* MultiplayerCorrelationId, int32 GameplayModeId, int32 DifficultyLevelId, int32 ObjectiveId);
	/* 75  */	virtual void PageAction(wchar_t* UserId, GUID PlayerSessionId, int32 ActionTypeId, int32 ActionInputMethodId, wchar_t* Page, wchar_t* TemplateId, wchar_t* DestinationPage, wchar_t* Content);
	/* 76  */	virtual void PageView(wchar_t* UserId, GUID PlayerSessionId, wchar_t* Page, wchar_t* RefererPage, int32 PageTypeId, wchar_t* PageTags, wchar_t* TemplateId, wchar_t* Content);
	/* 77  */	virtual void PhantomHunter(wchar_t* UserId, GUID PlayerSessionId);
	/* 78  */	virtual void PigsCanFly(wchar_t* UserId, GUID PlayerSessionId);
	/* 79  */	virtual void PlayerCheckedInToday(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HaloTitleId);
	/* 80  */	virtual void PlayerDefeated(wchar_t* UserId, int32 SectionId, GUID PlayerSessionId, wchar_t* MultiplayerCorrelationId, int32 GameplayModeId, int32 DifficultyLevelId, GUID RoundId, int32 PlayerRoleId, int32 PlayerWeaponId, int32 EnemyRoleId, int32 EnemyWeaponId, float LocationX, float LocationY, float LocationZ);
	/* 81  */	virtual void PlayerGameResults(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HaloTitleId, int32 GameIndex, int32 GameIndexByCategory, int32 GameIndexByTitle, int32 GameIndexByTitleCategory, int32 MapId, int32 GameCategoryId, bool MatchMade, bool Won, uint64 TimePlayedMS, uint64 DatePlayedUTC, uint64 Score64, int32 Standing, bool FirstPlace, int32 MedalCount, int32 Kills, int32 Deaths, int32 Assists, int32 HeadShots, int32 MostKillsInARow, wchar_t* CustomStat1ID, int32 CustomStat1, wchar_t* CustomStat2ID, int32 CustomStat2, wchar_t* CustomStat3ID, int32 CustomStat3, wchar_t* CustomStat4ID, int32 CustomStat4, GUID MatchId);
	/* 82  */	virtual void PlayerGameResultsDamageStat(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HaloTitleId, int32 GameIndex, int32 MapId, bool MatchMade, int32 DamageReportingType, int32 DamageStatisticType, int32 DamageCount, int32 GameCategoryId);
	/* 83  */	virtual void PlayerGameResultsGriefingStat(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HaloTitleId, int32 GameIndex, int32 MapId, bool MatchMade, float Betrayals, float ShieldDamage, float BodyDamage, float BetrayalPenalty, float ShieldDamagePenalty, float BodyDamagePenalty);
	/* 84  */	virtual void PlayerGameResultsGriefingStats(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HaloTitleId, int32 GameIndex, int32 MapId, bool MatchMade, float Betrayals, float ShieldDamage, float BodyDamage, float BetrayalPenalty, float ShieldDamagePenalty, float BodyDamagePenalty);
	/* 85  */	virtual void PlayerGameResultsInterestStats(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HaloTitleId, int32 GameCategoryId, int32 GameIndex, int32 MapId, bool MatchMade, int32 OrdnanceDrops, int32 OrdnanceStrikes, uint64 TimeMSDriven, int32 UnitsDriven, uint64 TimeMSPiloted, int32 UnitsPiloted, uint64 TimeMSPassenger, int32 UnitsMovedPassenger, uint64 TimeMSOnFoot, int32 UnitsMovedOnFoot, int32 DriverAssists, int32 ArmorAbilityUseJetpack, int32 ArmorAbilityUseHologram, int32 ArmorAbilityUseReflectiveShield, int32 ArmorAbilityUseActiveCamo, int32 ArmorAbilityUseThrusterPack, int32 ArmorAbilityUseAutoTurret, int32 ArmorAbilityUseXRay);
	/* 86  */	virtual void PlayerGameResultsMedal(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HaloTitleId, int32 GameIndex, int32 MapId, bool MatchMade, int32 MedalType, int32 MedalCount);
	/* 87  */	virtual void PlayerSessionEnd(wchar_t* UserId, GUID PlayerSessionId, wchar_t* MultiplayerCorrelationId, int32 GameplayModeId, int32 DifficultyLevelId, int32 ExitStatusId);
	/* 88  */	virtual void PlayerSessionPause(wchar_t* UserId, GUID PlayerSessionId, wchar_t* MultiplayerCorrelationId);
	/* 89  */	virtual void PlayerSessionResume(wchar_t* UserId, GUID PlayerSessionId, wchar_t* MultiplayerCorrelationId, int32 GameplayModeId, int32 DifficultyLevelId);
	/* 90  */	virtual void PlayerSessionStart(wchar_t* UserId, GUID PlayerSessionId, wchar_t* MultiplayerCorrelationId, int32 GameplayModeId, int32 DifficultyLevelId);
	/* 91  */	virtual void PlayerSpawned(wchar_t* UserId, int32 SectionId, GUID PlayerSessionId, wchar_t* MultiplayerCorrelationId, int32 GameplayModeId, int32 DifficultyLevelId, GUID RoundId, int32 PlayerRoleId, float LocationX, float LocationY, float LocationZ);
	/* 92  */	virtual void PlaylistCompleted(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HaloTitleId, uint32 PlaylistId, uint64 Score64, uint64 TimeMS, int32 Penalties, wchar_t* MissionStats, bool IsCoop);
	/* 93  */	virtual void PlaylistProgress(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HaloTitleId, int32 PlaylistId, int32 NumMapsCompleted, uint64 Score64, bool IsCoop, int32 NumPlayers, bool ShouldPostTime, uint64 TotalPlayListTimeMS);
	/* 94  */	virtual void RankedStatsDNFInfo(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HopperName, double FinishesOverStarts, int32 FinishesMinusStarts, int32 FinishesPlusPenaltiesMinusStarts, double FinishesPlusPenaltiesOverStarts);
	/* 95  */	virtual void RankedStatsOverride(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HopperName, double Rating, double Variance, int32 Halo2Level, int32 Halo2XP, bool IsRanked);
	/* 96  */	virtual void RankedStatsPenalty(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HopperName, int32 NumPenaltiesApplied);
	/* 97  */	virtual void RankedStatsUpdate(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HopperName, double Rating, double Variance, int32 Halo2Level, int32 Halo2XP, bool IsRanked, bool PenaltyApplied);
	/* 98  */	virtual void RankedUpSpartanIv(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HaloTitleId, int32 SpartanIvRank, int32 SpecialisationType);
	/* 99  */	virtual void RealtimeFlagCaptured(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HaloTitleId, int32 MapId, bool MatchMade);
	/* 100 */	virtual void RealtimeMedal(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HaloTitleId, int32 MapId, int32 GameCategoryId, int32 GameMode, bool MatchMade, int32 MedalType, int32 MedalCount);
	/* 101 */	virtual void RealtimePilotedVehicle(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HaloTitleId, int32 MapId, bool MatchMade, int32 VehicleId, uint64 TimeMS, int32 Distance);
	/* 102 */	virtual void RivalID(wchar_t* UserId, GUID PlayerSessionId, int64 RivalID);
	/* 103 */	virtual void SectionEnd(wchar_t* UserId, int32 SectionId, GUID PlayerSessionId, wchar_t* MultiplayerCorrelationId, int32 GameplayModeId, int32 DifficultyLevelId, int32 ExitStatusId, int32 MissionId);
	/* 104 */	virtual void SectionStart(wchar_t* UserId, int32 SectionId, GUID PlayerSessionId, wchar_t* MultiplayerCorrelationId, int32 GameplayModeId, int32 DifficultyLevelId, int32 MissionId);
	/* 105 */	virtual void SectionStats(wchar_t* UserId, GUID PlayerSessionId, int32 MissionId, int32 SectionId, int32 SectionOrdinal, float ScoreWithoutTimeBonus, float ScoreWithTimeBonus, float TimeInSeconds);
	/* 106 */	virtual void SessionSizeUpdate(wchar_t* UserId, GUID PlayerSessionId, int32 SessionSize, int32 SessionSizeMax);
	/* 107 */	virtual void SizeIsEverything(wchar_t* UserId, GUID PlayerSessionId);
	/* 108 */	virtual void SkeetShooter(wchar_t* UserId, GUID PlayerSessionId);
	/* 109 */	virtual void SkullClaimed(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HaloTitleId, int32 SkullId, int32 DifficultyId);
	/* 110 */	virtual void SoloMissionCompleted(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HaloTitleId, int32 MapId, int32 DifficultyId, int32 MissionScore, bool IronSkullUsed, bool BlackEyeSkullUsed, bool ToughLuckSkullUsed, bool CatchSkullUsed, bool CloudSkullUsed, bool FamineSkullUsed, bool ThunderstormSkullUsed, bool TiltSkullUsed, bool MythicSkullUsed, bool BlindSkullUsed);
	/* 111 */	virtual void SoloSpartanOpsMissionCompleted(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HaloTitleId, int32 MapId, int32 DifficultyId);
	/* 112 */	virtual void SpartanOpsMissionCompleted(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HaloTitleId, int32 MapId, int32 MissionId, int32 DifficultyId, bool IsCoop);
	/* 113 */	virtual void Supercombine(wchar_t* UserId, int32 SectionId, GUID PlayerSessionId, wchar_t* MultiplayerCorrelationId, int32 GameplayModeId, int32 DifficultyLevelId, GUID RoundId, int32 PlayerRoleId, int32 PlayerWeaponId, int32 EnemyRoleId, int32 KillTypeId, float LocationX, float LocationY, float LocationZ, int32 EnemyWeaponId, int32 EnemyClassId);
	/* 114 */	virtual void SurvivalSpace(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HaloTitleId, wchar_t* SurvivalSpace);
	/* 115 */	virtual void TerminalFound(wchar_t* UserId, GUID PlayerSessionId, int32 TerminalId);
	/* 116 */	virtual void TerminalId(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HaloTitleId, int32 SkullId, int32 DifficultyId);
	/* 117 */	virtual void TicketsEarned(wchar_t* UserId, GUID PlayerSessionId, int32 TicketCount);
	/* 118 */	virtual void TitleCompleted(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HaloTitleId);
	/* 119 */	virtual void TitleLaunched(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HaloTitleId);
	/* 120 */	virtual void ValhallaSign(wchar_t* UserId, GUID PlayerSessionId, int32 SignId);
	/* 121 */	virtual void ViewOffer(wchar_t* UserId, GUID PlayerSessionId, GUID OfferGuid, GUID ProductGuid);
	/* 122 */	virtual void VIPStatusEarned(wchar_t* UserId, GUID PlayerSessionId);
	/* 123 */	virtual void WhatAboutTanksDestroyed(wchar_t* UserId, GUID PlayerSessionId);
	/* 124 */	virtual void WonWarGame(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HaloTitleId);
	/* 125 */	virtual void ZanzibarSign(wchar_t* UserId, GUID PlayerSessionId, int32 SignId);
	/* 126 */	virtual void FirefightGameResults(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HaloTitleId, bool MatchMade, uint64 TimePlayedMS, uint32 Kills, uint32 MostKillsInARow, uint32 SetsCompleted, uint32 WavesCompleted, uint32 GeneratorsDestroyed);
	/* 127 */	virtual void EnemyDefeated_0(); // probably zombie defeated as these are in alphabetical order
	/* 128 */	virtual void Member128();
	/* 129 */	virtual void Member129();
	/* 130 */	virtual void Member130();
	/* 131 */	virtual void Member131();
	/* 132 */	virtual void Member132();
	/* 133 */	virtual void Member133();
	/* 134 */	virtual __int64 Member134(_QWORD);
	/* 135 */	virtual void Member135();
	/* 136 */	virtual GUID* __fastcall GetPlayerSessionId(GUID* pGuid);
	/* 137 */	virtual void Member137();
	/* 138 */	virtual void CheckpointSaved();
	/* 139 */	virtual void Member139();

	struct __declspec(align(8)) UnknownType
	{
		QWORD qword0;
		QWORD* qword1;
		QWORD* qword2;
		DWORD dword0;
		DWORD dword1;
		QWORD qword4;
		QWORD* qword5;
		QWORD* qword6;
		DWORD dword2;
		DWORD dword3;
		DWORD dword4;
		DWORD dword5;
	};

	_WORD word0;
	_WORD word1;
	GUID playerSessionId;
	__unaligned __declspec(align(1)) _QWORD qword0;
	__unaligned __declspec(align(1)) _QWORD qword1;
	__unaligned __declspec(align(1)) _QWORD qword2;
	__unaligned __declspec(align(1)) _QWORD qword3;
	__unaligned __declspec(align(1)) _QWORD qword4;
	__unaligned __declspec(align(1)) _QWORD qword5;
	__unaligned __declspec(align(1)) _QWORD qword6;
	__unaligned __declspec(align(1)) _QWORD qword7;
	_DWORD dword0;
	_DWORD dword1;
	_DWORD dword2;
	_RTL_CRITICAL_SECTION rtlCriticalSection;
	_QWORD qword8;
	UnknownType unknownStruct;
	_QWORD qword9;
	_QWORD qwordA;
	_QWORD qwordB;


};


/* functions defs also in `ecellcategory_services.bond`
virtual void ConnectedToLobbyHost(GUID MatchmakingAttemptId, GUID MpsdId);
virtual void ControlSchemeChanged(GUID MatchId, uint64 PlayerXuid, int32 ControlScheme);
virtual void CoopMissionCompleted(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HaloTitleId, int32 MissionId, int32 MapId, int32 MissionScore, bool IronSkullUsed, bool BlackEyeSkullUsed, bool ToughLuckSkullUsed, bool CatchSkullUsed, bool CloudSkullUsed, bool FamineSkullUsed, bool ThunderstormSkullUsed, bool TiltSkullUsed, bool MythicSkullUsed, bool BlindSkullUsed, int32 DifficultyId);
virtual void CoopSpartanOpsMissionCompleted(wchar_t* UserId, GUID PlayerSessionId, wchar_t* HaloTitleId, int32 MapId, int32 DifficultyId);
virtual void GameplayEnd(GUID MatchId);
virtual void GameplayStart(GUID MatchId);
virtual void GraphicsConfiguration(int32 GpuDeviceId, std::string GpuName, std::string GpuVendor, std::string GpuAdapterDescription, std::string GpuDriverName, std::string GpuDriverVersion, int64 DedicatedVideoMemoryMB, int64 ShaderSystemMemory, int32 MonitorResolutionX, int32 MonitorResolutionY, std::string GpuNodeCount, std::string MonitorHdrCapabilities, bool IsHdr, int32 MonitorIndex, std::string MonitorModel);
virtual void GraphicsConfigurationUE(int32 GpuVendorId, int32 GpuDeviceId, int32 GpuDeviceRevision, std::string GpuVendor, std::string GpuAdapterDescription, std::string GpuDriverVersion, std::string GpuInternalDriverVersion, std::string GpuDriverDate, int64 DedicatedVideoMemoryMB, int32 MonitorResolutionX, int32 MonitorResolutionY, int32 MonitorDPI, std::string MonitorName, bool SupportsHdr, bool IsHdr, int32 DesktopResolutionX, int32 DesktopResolutionY, int32 MonitorCount);
virtual void HitchDetected(float BeforeFrameTime, float AfterFrameTime);
virtual void HostMigration(GUID MatchId, GUID PriorMatchId, GUID OriginalMatchId, int32 HostMigrationReasonId);
virtual void InstallState(int32 InstallStateIndex, uint32 ChunkId);
virtual void LogMessage(GUID LogSessionId, wchar_t* Category, wchar_t* Message);
virtual void MatchEnd(GUID MatchId, int32 EndReasonId);
virtual void MatchmakingStateChange(GUID MatchmakingAttemptId, std::string HopperName, GUID MpsdId, std::string OldStateName, std::string NewStateName, int32 RetryIndex, int32 ErrorId, int32 TimeFromPreviousInSeconds, int32 PartyStateIndex, int32 InstallStateIndex, GUID MatchId, std::string HopperStatName, bool IsMixTape);
virtual void MatchStart(GUID MatchId, std::string HopperName, int32 EngineTitleId, int32 GameBaseVariantId, wchar_t* GameVariantName, int32 MapId, std::string MapName, int32 CampaignDifficultyIndex, std::string CampaignSkulls, GUID PriorMatchId, GUID OriginalMatchId, int32 MatchTypeId, uint64 GameVariantHash, wchar_t* MapVariantName, uint64 MapVariantHash, std::string HopperStatName, int32 RewardsMatchType, std::string ClearanceId);
virtual void MixTapeParameters(GUID MatchmakingAttemptId, std::string MixTapeParams);
virtual void PartyStateChange(GUID MpsdId, uint64 PlayerXuid, bool IsFireteamLeader, int32 PartyStateIndex, int32 PlayerTypeId, bool IsPosseMember);
virtual void PerformanceSummary(GUID MatchId, float AverageFPS, std::vector<uint32> FrameRateBuckets, uint32 AverageMemoryUsedBytes, double AverageCpuLoadPercent, bool IsCinematic, uint64 AverageMemoryUsedBytesV2);
virtual void PerformanceSummaryEx(GUID MatchId, float AverageFPS, std::vector<uint32> FrameRateBuckets, uint64 AverageMemoryUsedBytes, double AverageCpuLoadPercent, uint32 MonitorIndex, uint32 MaxResolutionX, uint32 MaxResolutionY, uint32 AverageResolutionX, uint32 AverageResolutionY, bool IsWindowed);
virtual void PlayerJoinedMatch(uint64 PlayerXuid, GUID MatchId, int32 TeamId, bool IsJip, int32 PlayerId);
virtual void PlayerLeftMatch(GUID MatchId, int32 PlayerLeftReasonId, int32 PlayerId);
virtual void PlayerMatchSummary(uint64 PlayerXuid, GUID MatchId, int32 TeamId, bool IsJoinInProgress, int32 PlayerId, uint32 MatchDurationInSeconds, uint32 AveragePlayerLifetime, uint32 PlayerRank, int32 PlayerScore, uint32 PlayerKills, uint32 PlayerDeaths, uint32 PlayerHeadshotKills, int32 TeamRank, int32 TeamScore, bool IsDnf, int32 PlayerMatchDurationInSeconds, int32 MatchOutcomeId, std::vector<std::string> WeaponKillCount, std::vector<std::string> EnemiesKilled, std::vector<std::string> DeathSources, std::vector<std::string> MedalsEarned, int64 LevelsReached, std::string EventCounts);
virtual void PlayerStartingRankedStats(uint64 PlayerXuid, GUID MatchId, double StartingRating);
virtual void PlayerTeamChanged(uint64 PlayerXuid, int32 TeamId, int32 OldTeamId, int32 PlayerId);
virtual void PostMatchMmrUpdate(uint64 PlayerXuid, int32 PlayerId, double MmrRating, GUID MatchId);
virtual void SelectedLobbyHost(GUID MatchmakingAttemptId, GUID MpsdId, GUID MatchId);
virtual void SessionMetrics(std::string SessionTag, std::string Json);
virtual void SystemConfiguration(std::string OperatingSystemVersion, std::string ProcessorVendor, std::string ProcessorBrand, int64 SystemMemoryMB, int32 PhysicalCpuCount, int32 LogicalCpuCount);
virtual void TeamMatchSummary(GUID MatchId, int32 TeamId, int32 TeamRank, int32 TeamScore, int32 MatchOutcomeId);
virtual void TelemetrySessionStart(std::string MachineName, std::string BuildConfiguration, int32 ApplicationTypeId, bool IsThunderhead, std::string BuildVersion, int32 BuildChangelist, std::string BuildBranch, uint64 BuildDateTime, std::string CommandLine, wchar_t* SandboxId, std::string ExecutionPlatform, std::string SessionTag, int32 BuildSku);
virtual void UserEngaged(uint64 PlayerXuid, wchar_t* GamerTag);
*/