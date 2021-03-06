#ifndef __graphics_h
#define __graphics_h

#include <stdint.h>

#define MapWidth 128
#define MapHeight 128
#define infoOffset 32
#define MapArraySize 16384 //128 x 128 pixels
#define TileArraySize 48 //16 * 16 tiles
#define SpriteWidth 15
#define SpriteHeight 25
#define SpriteArraySize 375

void GraphicsInit(void);

void SetMap(const uint16_t* map); // what image to load, character sprites, map size if we implement scrolling, ect.
void ShowMap(void);
void PrintTile(uint8_t tilex, uint8_t tiley);
void PrintMoveTile(uint8_t x, uint8_t y);
void PrintCursor(uint8_t x, uint8_t y);

void SetCharacterGraphics(uint8_t id, uint16_t* sprite1, uint16_t* sprite2, uint16_t* portrait);
void PrintSprite(uint8_t id, uint8_t x, uint8_t y);

void ShowStartupScreen(void);
void ShowLoseScreen(void);
void ShowWinScreen(void);

void ShowMissionScreen(char** Missions, uint8_t numMissions);
void ClearMissionCursor(uint8_t ypos);
void PrintMissionCursor(uint8_t yPos);

void ShowInfo(char* name, char id, uint16_t lvl,
	uint16_t hp, uint16_t hpMax, uint16_t atk, uint16_t def,
	uint16_t res, uint16_t spd);

#endif /* __graphics_h */
