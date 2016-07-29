#ifndef HEADER_DH_H
#include <openssl/dh.h>
#endif
DH *get_dh2048()
	{
	static unsigned char dh2048_p[]={
		0x87,0x11,0x5B,0x66,0xFC,0xC9,0xC9,0x2E,0x74,0xD3,0x3A,0xA2,
		0xD1,0x46,0xF2,0xC7,0x07,0xA6,0xC4,0xEF,0x9E,0xD2,0x7A,0x0A,
		0x65,0x4C,0xD1,0x78,0x54,0x7B,0x3C,0x26,0x72,0x46,0xD8,0x2D,
		0x69,0x74,0x81,0x51,0xF4,0x29,0x3A,0x1F,0x79,0x6D,0xCA,0xE7,
		0x73,0x54,0xCF,0x32,0xE7,0x4A,0xB2,0x0B,0x5F,0xE0,0x1F,0x28,
		0xD8,0xB7,0x7D,0xF1,0xDB,0x4B,0x3A,0x93,0x9B,0xCC,0xF1,0x16,
		0x47,0x46,0xCA,0xC6,0xD1,0xAB,0xFF,0x93,0x84,0xEC,0xCE,0x76,
		0x18,0xEE,0x14,0x06,0xA0,0xD5,0x98,0x65,0x19,0x51,0xCE,0xBE,
		0xB5,0x84,0x1D,0x93,0x24,0x01,0x45,0x9C,0x98,0x12,0x00,0xE9,
		0xBD,0x3F,0x52,0x9C,0xE3,0xA8,0x06,0x2A,0x96,0xD5,0x75,0x65,
		0x22,0xD5,0xB3,0x85,0xB8,0xCE,0x40,0x50,0x0C,0x55,0x6E,0x53,
		0x1E,0x9A,0x7E,0x81,0x8E,0x07,0x07,0xA0,0x63,0xE7,0xB0,0x66,
		0x24,0x04,0x88,0xC8,0x5C,0x38,0x95,0xC1,0x45,0xB3,0xCE,0x45,
		0x65,0xE6,0x86,0x08,0x7F,0x8A,0xB7,0x4F,0x1B,0x85,0xB0,0xC2,
		0x04,0x7D,0x8F,0xB6,0x9F,0x74,0x93,0xED,0x9C,0x44,0x7E,0x25,
		0xB2,0x84,0xBD,0xE0,0x27,0x16,0xC7,0x3E,0x3D,0x7B,0x11,0xF1,
		0x56,0xBE,0x08,0x1C,0x3F,0x61,0xA4,0xA1,0x37,0xAB,0xDB,0x2C,
		0xB7,0x7D,0x1A,0x24,0xBA,0x48,0xC3,0x5B,0x3C,0x43,0x47,0xD1,
		0x44,0x81,0x0D,0x64,0x22,0x87,0x18,0x6F,0x49,0x66,0x1E,0xE8,
		0x02,0x92,0x6B,0xEC,0xDA,0xDD,0x72,0x62,0xED,0xE4,0x76,0x07,
		0xDB,0x2A,0xD3,0x69,0xF7,0x07,0xF9,0xE5,0x8A,0x5D,0x6D,0xB5,
		0xCC,0x2E,0x8A,0xEB,
		};
	static unsigned char dh2048_g[]={
		0x02,
		};
	DH *dh;

	if ((dh=DH_new()) == NULL) return(NULL);
	dh->p=BN_bin2bn(dh2048_p,sizeof(dh2048_p),NULL);
	dh->g=BN_bin2bn(dh2048_g,sizeof(dh2048_g),NULL);
	if ((dh->p == NULL) || (dh->g == NULL))
		{ DH_free(dh); return(NULL); }
	return(dh);
	}