#include "LCD.h"

static memboy memboy;

void LCD::render()
{
	renderBG();
	renderOBJ();
}

void LCD::renderBG()
{
	uint32_t baseMem = memboy[LCDC] & 0x8 ? LCD_BG2_BEGIN : LCD_BG1_BEGIN;
	uint8_t scx = memboy[SCX];
	uint8_t scy = memboy[SCY];
	for (uint8_t x = scx; x < scx + 20; ++x)
	{
		for (uint8_t y = scy; y < scy + 18; ++y)
		{
			uint32_t trueX = x % 32;
			uint32_t trueY = y % 32;
			uint32_t addr = baseMem + trueX + trueY * 32;
			uint8_t charcode = memboy.cbank0(addr);
			if (true/*CGB*/)
			{
				uint8_t attr = memboy.cbank1(addr);
				uint8_t colPal = attr & 0x7;
				uint8_t charBank = attr & 0x8;
				uint8_t hflip = attr & 0x20;
				uint8_t vflip = attr & 0x40;
				uint8_t priority = attr & 0x80;
				(void)colPal;
				(void)charBank;
				(void)hflip;
				(void)vflip;
				(void)priority;
			}
			printChar(x * 8, y * 8, charcode);
		}
	}
}

void LCD::renderOBJ()
{
	for (uint8_t i = 0; i < 40; ++i)
	{
		uint32_t addr = LCD_OAM_BEGIN;
		uint8_t y = memboy[addr + 0];
		uint8_t x = memboy[addr + 1];
		uint8_t charcode = memboy[addr + 2];
		uint8_t attr = memboy[addr + 3];
		uint8_t colPal = attr & 0x7;  //CGB-only
		uint8_t charBank = attr & 0x8;//CGB-only
		uint8_t pal = attr & 0x10; //DMG / DMG-mode
		uint8_t hflip = attr & 0x20;
		uint8_t vflip = attr & 0x40;
		uint8_t priority = attr & 0x80;
		printChar(x * 8, y * 8, charcode);
		(void)colPal;
		(void)charBank;
		(void)pal;
		(void)hflip;
		(void)vflip;
		(void)priority;
	}
}

void LCD::printChar(uint8_t cx, uint8_t cy, uint8_t charcode)
{
	uint32_t addr = memboy[LCDC] & 0x16 ? LCD_CHAR2_BEGIN : LCD_CHAR1_BEGIN;
	for (uint8_t x = 0; x < 8; ++x)
	{
		for (uint8_t y = 0; y < 8; ++y)
		{
			uint8_t idx = y * 8 + x;
			uint8_t color = memboy[addr + idx / 4] & (3 << (idx % 4));
			//drawpixel(cx + x, cy + y, color);
			(void)color;
			(void)cx;
			(void)cy;
			(void)charcode;
		}
	}
}
