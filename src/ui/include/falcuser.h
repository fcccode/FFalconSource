#ifndef _FALCON_USER_MESSAGES_
#define _FALCON_USER_MESSAGES_

// (FM stands for Falcon Message = WM_USER+1 and up)
enum
{
	FM_START_GAME=WM_USER+1,
	FM_EXIT_GAME,
	FM_START_UI,
	FM_END_UI,
	FM_START_INSTANTACTION,
	FM_END_INSTANTACTION,
	FM_START_DOGFIGHT,
	FM_END_DOGFIGHT,
	FM_START_TACTICAL,
	FM_START_CAMPAIGN,
	FM_LOAD_CAMPAIGN,
	FM_JOIN_CAMPAIGN,
	FM_REVERT_CAMPAIGN,
	FM_AUTOSAVE_CAMPAIGN,
	FM_GOT_CAMPAIGN_DATA,
	FM_JOIN_SUCCEEDED,
	FM_JOIN_FAILED,
	FM_SHUTDOWN_CAMPAIGN,
	FM_CAMPAIGN_OVER,
	FM_CAMPAIGN_EVENT,
	FM_ATTACK_WARNING,
	FM_AIRBASE_ATTACK,
	FM_AIRBASE_DISABLED,
	FM_SQUADRON_RECALLED,
	FM_SQUADRON_REBASED,
	FM_PLAYER_FLIGHT_CANCELED,
	FM_PLAYER_AIRCRAFT_DESTROYED,
	FM_PLAY_INTRO_MOVIE,
	FM_PLAY_UI_MOVIE,
	FM_TIMER_UPDATE,
	FM_UI_UPDATE_GAMELIST,
	FM_STP_START_RENDER,
	FM_UI_PROCESS_CALLBACK,
	FM_UPDATE_RULES,
	FM_TACREF_BUTTON_HANDLER,
	FM_GIVE_FOCUS,
	FM_ONLINE_STATUS,
	FM_BOOT_PLAYER,
	FM_REFRESH_DOGFIGHT,
	FM_REFRESH_TACTICAL,
	FM_REFRESH_CAMPAIGN,
	FM_REBUILD_WP_LIST,
	FM_REFRESH_CAMPMAP,
	FM_REPLAY_UI_MOVIE,
	FM_REMOTE_LOGBOOK,
	FM_OPEN_GAME_OVER_WIN,
	FM_GAME_FULL,
	FM_RECEIVE_CHAT,
	FM_MATCH_IN_PROGRESS,
	FM_CHECK_FOR_VR_INPUT,

	// OW
	FM_DISP_ENTER_MODE,
	FM_DISP_LEAVE_MODE,
	FM_DISP_TOGGLE_FULLSCREEN,
};

#endif
