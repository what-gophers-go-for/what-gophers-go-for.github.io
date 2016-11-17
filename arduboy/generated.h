const byte PLAYER_MASK = 0b00000100;
const word PLAYER_LAYERMASK = 0b0111110000000000;
const int GLYPH_COUNT = 5;

const byte LAYERMASK[] = {
	0b00000000,
	0b00000000,
	0b11111110,
};

PROGMEM const byte tiles_b[][8] = {
	{
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
	},
	{
		0b00000000,
		0b00000000,
		0b00011000,
		0b00111100,
		0b00111100,
		0b00011000,
		0b00000000,
		0b00000000,
	},
	{
		0b00000000,
		0b00010000,
		0b11111111,
		0b00111111,
		0b00111111,
		0b11111111,
		0b00010000,
		0b00000000,
	},
	{
		0b11111111,
		0b11111111,
		0b11011011,
		0b11111111,
		0b11111111,
		0b11011011,
		0b11111111,
		0b11111111,
	},
	{
		0b11111111,
		0b10000001,
		0b10000001,
		0b10000001,
		0b10000001,
		0b10000001,
		0b10000001,
		0b11111111,
	},
};

PROGMEM const byte tiles_w[][8] = {
	{
		0b11111111,
		0b11111111,
		0b11111111,
		0b11111111,
		0b11111111,
		0b11111111,
		0b11111111,
		0b11111111,
	},
	{
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
	},
	{
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
	},
	{
		0b00000000,
		0b00000000,
		0b00100100,
		0b00000000,
		0b00000000,
		0b00100100,
		0b00000000,
		0b00000000,
	},
	{
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
		0b00000000,
	},
};

const byte levels[][128] {
	{
		9,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
		9,9,9,9,1,1,1,9,9,9,9,9,1,1,1,1,
		9,1,3,9,1,1,9,1,1,1,1,1,9,1,1,1,
		9,1,1,9,9,9,1,1,1,1,1,1,1,9,1,1,
		9,19,5,1,1,1,1,19,1,9,1,1,1,1,9,1,
		9,1,1,17,1,1,1,1,1,1,17,1,1,9,1,1,
		9,1,1,9,9,9,1,1,1,1,1,1,1,9,1,1,
		9,9,9,9,1,1,9,9,9,9,9,9,9,1,1,1,
	},
	{
		9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,9,
		1,9,9,9,9,9,9,9,9,9,9,9,1,1,1,1,
		9,1,3,1,1,1,1,1,1,1,1,1,9,1,1,1,
		9,1,1,1,1,1,1,1,1,1,1,1,1,9,1,1,
		9,19,5,1,1,1,1,19,1,9,1,1,1,1,9,1,
		9,1,1,17,1,1,1,1,1,1,17,1,1,9,1,1,
		9,1,1,9,9,9,1,1,1,1,1,1,1,9,1,1,
		9,9,9,9,1,1,9,9,9,9,9,9,9,1,1,1,
	},
};

