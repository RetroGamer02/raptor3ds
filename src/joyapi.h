#if defined (__3DS__) || defined (__SWITCH__)
#include "SDL2/SDL.h"
#else
#include "SDL.h"
#endif
#define MAX_CONTROLLERS 4

#ifdef SDL12
extern SDL_Joystick* ControllerHandles[MAX_CONTROLLERS];
#else
extern SDL_GameController* ControllerHandles[MAX_CONTROLLERS];
extern SDL_Haptic* RumbleHandles[MAX_CONTROLLERS];
#endif

extern int joy_ack;

extern bool Up, Down, Left, Right;
extern bool Start, Back, LeftShoulder, RightShoulder;
extern bool AButton, BButton, XButton, YButton;

extern int16_t StickX, StickY, TriggerLeft, TriggerRight;

extern int AButtonconvert, BButtonconvert, XButtonconvert, YButtonconvert;

void IPT_CalJoy(void);
void IPT_CloJoy(void);
void IPT_CalJoyRumbleLow(void);
void IPT_CalJoyRumbleMedium(void);
void IPT_CalJoyRumbleHigh(void);

int JOY_IsKey(int button);
void JOY_Wait(int button);
int JOY_IsKeyInGameStart(int button);
int JOY_IsKeyInGameBack(int button);
int JOY_IsKeyMenu(int button);

void GetJoyButtonMapping(void);
int JOY_IsScroll(int scrollflag);
