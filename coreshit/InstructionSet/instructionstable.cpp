
#include <jackshit.h>

struct core::instruction core::decode[256] =
{
	// 0
	{
		"nop",
		1,
		&ins_nop
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},

	// 10
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},

	// 20
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},

	// 30
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},

	// 40
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},

	// 50
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},

	// 60
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"ld b, b",
		1,
		&ldbb
	},
	{
		"ld b, c",
		1,
		&ldbc
	},
	{
		"ld b, d",
		1,
		&ldbd
	},
	{
		"ld b, e",
		1,
		&ldbe
	},
	{
		"ld b, h",
		1,
		&ldbh
	},
	{
		"ld b, l",
		1,
		&ldbl
	},

	// 70
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"ld b, a",
		1,
		&ldba
	},
	{
		"ld c, b",
		1,
		&ldcb
	},
	{
		"ld c, c",
		1,
		&ldcc
	},
	{
		"ld c, d",
		1,
		&ldcd
	},
	{
		"ld c, e",
		1,
		&ldce
	},
	{
		"ld c, h",
		1,
		&ldch
	},
	{
		"ld c, l",
		1,
		&ldcl
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"ld c, a",
		1,
		&ldca
	},

	// 80
	{
		"ld d, b",
		1,
		&lddb
	},
	{
		"ld d, c",
		1,
		&lddc
	},
	{
		"ld d, d",
		1,
		&lddd
	},
	{
		"ld d, e",
		1,
		&ldde
	},
	{
		"ld d, h",
		1,
		&lddh
	},
	{
		"ld d, l",
		1,
		&lddl
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"ld d, a",
		1,
		&ldda
	},
	{
		"ld e, b",
		1,
		&ldeb
	},
	{
		"ld e, c",
		1,
		&ldec
	},

	// 90
	{
		"ld e, d",
		1,
		&lded
	},
	{
		"ld e, e",
		1,
		&ldee
	},
	{
		"ld e, h",
		1,
		&ldeh
	},
	{
		"ld e, l",
		1,
		&ldel
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"ld e, a",
		1,
		&ldea
	},
	{
		"ld h, b",
		1,
		&ldhb
	},
	{
		"ld h, c",
		1,
		&ldhc
	},
	{
		"ld h, d",
		1,
		&ldhd
	},
	{
		"ld h, e",
		1,
		&ldhe
	},

	// 100
	{
		"ld h, h",
		1,
		&ldhh
	},
	{
		"ld h, l",
		1,
		&ldhl
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"ld h, a",
		1,
		&ldha
	},
	{
		"ld l, b",
		1,
		&ldlb
	},
	{
		"ld l, c",
		1,
		&ldlc
	},
	{
		"ld l, d",
		1,
		&ldld
	},
	{
		"ld l, e",
		1,
		&ldle
	},
	{
		"ld l, h",
		1,
		&ldlh
	},
	{
		"ld l, l",
		1,
		&ldll
	},

	// 110
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"ld l, a",
		1,
		&ldla
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},

	// 120
	{
		"ld a, b",
		1,
		&ldab
	},
	{
		"ld a, c",
		1,
		&ldac
	},
	{
		"ld a, d",
		1,
		&ldad
	},
	{
		"ld a, e",
		1,
		&ldae
	},
	{
		"ld a, h",
		1,
		&ldah
	},
	{
		"ld a, l",
		1,
		&ldal
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"ld a, a",
		1,
		&ldaa
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},

	// 130
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},

	// 140
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},

	// 150
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},

	// 160
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},

	// 170
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},

	// 180
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},

	// 190
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},

	// 200
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},

	// 210
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},

	// 220
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},

	// 230
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},

	// 240
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},

	// 250
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	},
	{
		"__ NO INSTRUCTION __",
		1,
		&_blank
	}
};
