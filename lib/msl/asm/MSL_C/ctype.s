	.include "macros/function.inc"



	.rodata


	.global Unk_020FE764
Unk_020FE764: ; 0x020FE764
	.byte 0x0, 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0xA, 0xB
	.byte 0xC, 0xD, 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16
	.byte 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F
	.ascii " !"
	.byte 0x22
	.ascii "#$%&'()*+,-./0123456789:;<=>?@abcdefghijklmnopqrstuvwxyz["
	.byte 0x5C
	.ascii "]^_`abcdefghijklmnopqrstuvwxyz{|}~"
	.byte 0x7F


	.global Unk_020FE7E4
Unk_020FE7E4: ; 0x020FE7E4
	.byte 0x0, 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0xA, 0xB
	.byte 0xC, 0xD, 0xE, 0xF, 0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16
	.byte 0x17, 0x18, 0x19, 0x1A, 0x1B, 0x1C, 0x1D, 0x1E, 0x1F
	.ascii " !"
	.byte 0x22
	.ascii "#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ["
	.byte 0x5C
	.ascii "]^_`ABCDEFGHIJKLMNOPQRSTUVWXYZ{|}~"
	.byte 0x7F

	.global Unk_020FE864
Unk_020FE864: ; 0x020FE864
	.incbin "incbin/ctype.bin", 0x0, 0x100

