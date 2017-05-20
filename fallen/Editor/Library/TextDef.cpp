// TextDef.c
// Guy Simmons, 7th October 1996.

// Hard coded font definition for quick text functions.

#include	"Editor.hpp"

//---------------------------------------------------------------
// Byte1	-	Width
// Byte2	-	Height
// Byte3	-	Vertical offset.


//---------------------------------------------------------------

static UBYTE	Null[]=
{
	0,0,0,
};

static UBYTE	Space[]	=
{
	4,0,0,
};

static UBYTE	Excl[]	=
{
	1,7,1,
	1,
	1,
	1,
	1,
	1,
	0,
	1,
};

static UBYTE	Dollar[]	=
{
	5,9,0,
	0,0,1,0,0,
	0,1,1,1,0,
	1,0,1,0,1,
	1,0,1,0,0,
	0,1,1,1,0,
	0,0,1,0,1,
	1,0,1,0,1,
	0,1,1,1,0,
	0,0,1,0,0,
};

static UBYTE	Percent[]	=
{
	8,7,1,
	0,1,1,1,1,1,1,1,
	1,0,0,1,0,0,1,0,
	1,0,0,1,0,1,0,0,
	0,1,1,0,1,1,1,0,
	0,0,0,1,1,0,0,1,
	0,0,1,0,1,0,0,1,
	0,1,0,0,0,1,1,0,
};

static UBYTE	And[]	=
{
	7,8,0,
	0,0,1,1,0,0,0,
	0,1,0,0,1,0,0,
	0,1,0,1,0,0,0,
	0,0,1,0,0,0,0,
	0,1,0,1,0,1,0,
	1,0,0,0,1,0,0,
	1,0,0,1,0,1,0,
	0,1,1,0,0,0,1,
};

static UBYTE	Quotes[]	=
{
	3,2,1,
	1,0,1,
	1,0,1,
};

static UBYTE	Astrisk[]	=
{
	5,5,1,
	0,1,0,1,0,
	0,0,1,0,0,
	1,1,1,1,1,
	0,0,1,0,0,
	0,1,0,1,0,
};

static UBYTE	BrackO[]	=
{
	3,9,0,
	0,0,1,
	0,1,0,
	1,0,0,
	1,0,0,
	1,0,0,
	1,0,0,
	1,0,0,
	0,1,0,
	0,0,1,
};

static UBYTE	BrackC[]	=
{
	3,9,0,
	1,0,0,
	0,1,0,
	0,0,1,
	0,0,1,
	0,0,1,
	0,0,1,
	0,0,1,
	0,1,0,
	1,0,0,
};

static UBYTE	Plus[]	=
{
	5,5,2,
	0,0,1,0,0,
	0,0,1,0,0,
	1,1,1,1,1,
	0,0,1,0,0,
	0,0,1,0,0,
};

static UBYTE	Comma[]	=
{
	2,4,6,
	1,1,
	1,1,
	0,1,
	1,0,
};

static UBYTE	Minus[]	=
{
	5,1,4,
	1,1,1,1,1
};

static UBYTE	Stop[]	=
{
	2,2,6,
	1,1,
	1,1,	
};

static UBYTE	Zero[]	=
{
	5,7,1,
	0,1,1,1,0,
	1,0,0,0,1,
	1,0,0,0,1,
	1,0,0,0,1,
	1,0,0,0,1,
	1,0,0,0,1,
	0,1,1,1,0,
};

static UBYTE	One[]	=
{
	2,7,1,
	0,1,
	1,1,
	0,1,
	0,1,
	0,1,
	0,1,
	0,1,
};

static UBYTE	Two[]	=
{
	5,7,1,
	0,1,1,1,0,
	1,0,0,0,1,
	0,0,0,0,1,
	0,0,0,1,0,
	0,0,1,0,0,
	0,1,0,0,0,
	1,1,1,1,1,
};

static UBYTE	Three[]	=
{
	5,7,1,
	1,1,1,1,1,
	0,0,0,1,0,
	0,0,1,0,0,
	0,1,1,1,0,
	0,0,0,0,1,
	1,0,0,0,1,
	0,1,1,1,0,
};

static UBYTE	Four[]	=
{
	5,7,1,
	0,0,0,1,0,
	0,0,1,1,0,
	0,1,0,1,0,
	1,0,0,1,0,
	1,1,1,1,1,
	0,0,0,1,0,
	0,0,0,1,0,
};

static UBYTE	Five[]	=
{
	5,7,1,
	1,1,1,1,1,
	1,0,0,0,0,
	1,1,1,1,0,
	0,0,0,0,1,
	0,0,0,0,1,
	1,0,0,0,1,
	0,1,1,1,0,
};

static UBYTE	Six[]	=
{
	5,7,1,
	0,0,1,1,0,
	0,1,0,0,0,
	1,0,0,0,0,
	1,1,1,1,0,
	1,0,0,0,1,
	1,0,0,0,1,
	0,1,1,1,0,
};

static UBYTE	Seven[]	=
{
	5,7,1,
	1,1,1,1,1,
	0,0,0,0,1,
	0,0,0,1,0,
	0,0,0,1,0,
	0,0,1,0,0,
	0,0,1,0,0,
	0,0,1,0,0,
};

static UBYTE	Eight[]	=
{
	5,7,1,
	0,1,1,1,0,
	1,0,0,0,1,
	1,0,0,0,1,
	0,1,1,1,0,
	1,0,0,0,1,
	1,0,0,0,1,
	0,1,1,1,0,
};

static UBYTE	Nine[]	=
{
	5,7,1,
	0,1,1,1,0,
	1,0,0,0,1,
	1,0,0,0,1,
	0,1,1,1,1,
	0,0,0,0,1,
	0,0,0,1,0,
	0,1,1,0,0,
};

static	UBYTE	Colon[]	=
{
	2,3,4,
	0,1,
	0,0,
	0,1,
};

static UBYTE	QMark[]	=
{
	5,7,1,
	0,1,1,1,0,
	1,0,0,0,1,
	0,0,0,0,1,
	0,0,0,1,0,
	0,0,1,0,0,
	0,0,0,0,0,
	0,0,1,0,0,
};

static UBYTE	At[]	=
{
	7,8,1,
	0,0,1,1,1,0,0,
	0,1,0,0,0,1,0,
	1,0,0,1,1,0,1,
	1,0,1,0,1,0,1,
	1,0,1,0,1,0,1,
	1,0,0,1,1,1,0,
	0,1,0,0,0,0,0,
	0,0,1,1,1,0,0,
};

static UBYTE	A[]	=
{
	5,7,1,
	0,0,1,0,0,
	0,0,1,0,0,
	0,1,0,1,0,
	0,1,0,1,0,
	1,1,1,1,1,
	1,0,0,0,1,
	1,0,0,0,1
};

static UBYTE	B[]	=
{
	5,7,1,
	1,1,1,1,0,
	1,0,0,0,1,
	1,0,0,0,1,
	1,1,1,1,0,
	1,0,0,0,1,
	1,0,0,0,1,
	1,1,1,1,0,
};

static UBYTE	C[]	=
{
	5,7,1,
	0,1,1,1,0,
	1,0,0,0,1,
	1,0,0,0,0,
	1,0,0,0,0,
	1,0,0,0,0,
	1,0,0,0,1,
	0,1,1,1,0
};

static UBYTE	D[]	=
{
	5,7,1,
	1,1,1,0,0,
	1,0,0,1,0,
	1,0,0,0,1,
	1,0,0,0,1,
	1,0,0,0,1,
	1,0,0,1,0,
	1,1,1,0,0,	
};

static UBYTE	E[]	=
{
	4,7,1,
	1,1,1,1,
	1,0,0,0,
	1,0,0,0,
	1,1,1,0,
	1,0,0,0,
	1,0,0,0,
	1,1,1,1,	
};

static UBYTE	F[]	=
{
	4,7,1,
	1,1,1,1,
	1,0,0,0,
	1,0,0,0,
	1,1,1,0,
	1,0,0,0,
	1,0,0,0,
	1,0,0,0,
};

static UBYTE	G[]	=
{
	5,7,1,
	0,1,1,1,0,
	1,0,0,0,1,
	1,0,0,0,0,
	1,0,0,1,1,
	1,0,0,0,1,
	1,0,0,0,1,
	0,1,1,1,0,
};

static UBYTE	H[]	=
{
	5,7,1,
	1,0,0,0,1,
	1,0,0,0,1,
	1,0,0,0,1,
	1,1,1,1,1,
	1,0,0,0,1,
	1,0,0,0,1,
	1,0,0,0,1,
};

static UBYTE	I[]	=
{
	1,7,1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
};

static UBYTE	J[]	=
{
	5,7,1,
	0,0,0,0,1,
	0,0,0,0,1,
	0,0,0,0,1,
	0,0,0,0,1,
	1,0,0,0,1,
	1,0,0,0,1,
	0,1,1,1,0,
};

static UBYTE	K[]	=
{
	5,7,1,
	1,0,0,0,1,
	1,0,0,1,0,
	1,0,1,0,0,
	1,1,0,0,0,
	1,0,1,0,0,
	1,0,0,1,0,
	1,0,0,0,1,
};

static UBYTE	L[]	=
{
	4,7,1,
	1,0,0,0,
	1,0,0,0,
	1,0,0,0,
	1,0,0,0,
	1,0,0,0,
	1,0,0,0,
	1,1,1,1,
};

static UBYTE	M[]	=
{
	7,7,1,
	1,0,0,0,0,0,1,
	1,1,0,0,0,1,1,
	1,0,1,0,1,0,1,
	1,0,0,1,0,0,1,
	1,0,0,0,0,0,1,
	1,0,0,0,0,0,1,
	1,0,0,0,0,0,1,
};

static UBYTE	N[]	=
{
	5,7,1,
	1,1,0,0,1,
	1,1,0,0,1,
	1,0,1,0,1,
	1,0,1,0,1,
	1,0,0,1,1,
	1,0,0,1,1,
	1,0,0,0,1,
};

static UBYTE	O[]	=
{
	5,7,1,
	0,1,1,1,0,
	1,0,0,0,1,
	1,0,0,0,1,
	1,0,0,0,1,
	1,0,0,0,1,
	1,0,0,0,1,
	0,1,1,1,0,
};

static UBYTE	P[]	=
{
	5,7,1,
	1,1,1,1,0,
	1,0,0,0,1,
	1,0,0,0,1,
	1,1,1,1,0,
	1,0,0,0,0,
	1,0,0,0,0,
	1,0,0,0,0,
};

static UBYTE	Q[]	=
{
	5,8,1,
	0,1,1,1,0,
	1,0,0,0,1,
	1,0,0,0,1,
	1,0,0,0,1,
	1,0,0,0,1,
	1,0,1,0,1,
	0,1,1,1,0,
	0,0,0,1,0,
};

static UBYTE	R[]	=
{
	5,7,1,
	1,1,1,1,0,
	1,0,0,0,1,
	1,0,0,0,1,
	1,1,1,1,0,
	1,0,1,0,0,
	1,0,0,1,0,
	1,0,0,0,1,
};

static UBYTE	S[]	=
{
	5,7,1,
	0,1,1,1,0,
	1,0,0,0,1,
	1,0,0,0,0,
	0,1,1,1,0,
	0,0,0,0,1,
	1,0,0,0,1,
	0,1,1,1,0,
};

static UBYTE	T[]	=
{
	5,7,1,
	1,1,1,1,1,
	0,0,1,0,0,
	0,0,1,0,0,
	0,0,1,0,0,
	0,0,1,0,0,
	0,0,1,0,0,
	0,0,1,0,0,
};

static UBYTE	U[]	=
{
	5,7,1,
	1,0,0,0,1,
	1,0,0,0,1,
	1,0,0,0,1,
	1,0,0,0,1,
	1,0,0,0,1,
	1,0,0,0,1,
	0,1,1,1,0,
};

static UBYTE	V[]	=
{
	5,7,1,
	1,0,0,0,1,
	1,0,0,0,1,
	1,0,0,0,1,
	0,1,0,1,0,
	0,1,0,1,0,
	0,0,1,0,0,
	0,0,1,0,0,
};

static UBYTE	W[]	=
{
	7,7,1,
	1,0,0,0,0,0,1,
	1,0,0,0,0,0,1,
	0,1,0,1,0,1,0,
	0,1,0,1,0,1,0,
	0,0,1,0,1,0,0,
	0,0,1,0,1,0,0,
	0,0,1,0,1,0,0,
};

static UBYTE	X[]	=
{
	5,7,1,
	1,0,0,0,1,
	1,0,0,0,1,
	0,1,0,1,0,
	0,0,1,0,0,
	0,1,0,1,0,
	1,0,0,0,1,
	1,0,0,0,1,
};

static UBYTE	Y[]	=
{
	5,7,1,
	1,0,0,0,1,
	1,0,0,0,1,
	0,1,0,1,0,
	0,0,1,0,0,
	0,0,1,0,0,
	0,0,1,0,0,
	0,0,1,0,0,
};

static UBYTE	Z[]	=
{
	4,7,1,
	1,1,1,1,
	0,0,0,1,
	0,0,1,0,
	0,1,0,0,
	1,0,0,0,
	1,0,0,0,
	1,1,1,1,
};

static UBYTE	Under[]	=
{
	6,1,7,
	1,1,1,1,1
};

static UBYTE	_a[]	=
{
	4,5,3,
	0,1,1,0,
	0,0,0,1,
	0,1,1,1,
	1,0,0,1,
	0,1,1,1,
};

static UBYTE	_b[]	=
{
	4,7,1,
	1,0,0,0,
	1,0,0,0,
	1,1,1,0,
	1,0,0,1,
	1,0,0,1,
	1,0,0,1,
	1,1,1,0,
};

static UBYTE	_c[]	=
{
	4,5,3,
	0,1,1,0,
	1,0,0,1,
	1,0,0,0,
	1,0,0,1,
	0,1,1,0,
};

static UBYTE	_d[]	=
{
	4,7,1,
	0,0,0,1,
	0,0,0,1,
	0,1,1,1,
	1,0,0,1,
	1,0,0,1,
	1,0,0,1,
	0,1,1,1,
};

static UBYTE	_e[]	=
{
	4,5,3,
	0,1,1,0,
	1,0,0,1,
	1,1,1,1,
	1,0,0,0,
	0,1,1,0,
};

static UBYTE	_f[]	=
{
	4,7,1,
	0,0,1,1,
	0,1,0,0,
	1,1,1,0,
	0,1,0,0,
	0,1,0,0,
	0,1,0,0,
	0,1,0,0,
};

static UBYTE	_g[]	=
{
	4,7,3,
	0,1,1,1,
	1,0,0,1,
	1,0,0,1,
	1,0,0,1,
	0,1,1,1,
	0,0,0,1,
	0,1,1,0,
};

static UBYTE	_h[]	=
{
	4,7,1,
	1,0,0,0,
	1,0,0,0,
	1,1,1,0,
	1,0,0,1,
	1,0,0,1,
	1,0,0,1,
	1,0,0,1,
};

static UBYTE	_i[]	=
{
	2,7,1,
	0,1,
	0,0,
	1,1,
	0,1,
	0,1,
	0,1,
	0,1,
};

static UBYTE	_j[]	=
{
	3,9,1,
	0,0,1,
	0,0,0,
	0,1,1,
	0,0,1,
	0,0,1,
	0,0,1,
	0,0,1,
	0,0,1,
	1,1,0,
};

static UBYTE	_k[]	=
{
	4,7,1,
	1,0,0,0,
	1,0,0,0,
	1,0,0,1,
	1,0,1,0,
	1,1,0,0,
	1,0,1,0,
	1,0,0,1,
};

static UBYTE	_l[]	=
{
	2,7,1,
	1,1,
	0,1,
	0,1,
	0,1,
	0,1,
	0,1,
	0,1,
};

static UBYTE	_m[]	=
{
	7,5,3,
	1,1,1,0,1,1,0,
	1,0,0,1,0,0,1,
	1,0,0,1,0,0,1,
	1,0,0,1,0,0,1,
	1,0,0,1,0,0,1,
};

static UBYTE	_n[]	=
{
	4,5,3,
	1,1,1,0,
	1,0,0,1,
	1,0,0,1,
	1,0,0,1,
	1,0,0,1,
};

static UBYTE	_o[]	=
{
	4,5,3,
	0,1,1,0,
	1,0,0,1,
	1,0,0,1,
	1,0,0,1,
	0,1,1,0,
};

static UBYTE	_p[]	=
{
	4,7,3,
	1,1,1,0,
	1,0,0,1,
	1,0,0,1,
	1,0,0,1,
	1,1,1,0,
	1,0,0,0,
	1,0,0,0,
};

static UBYTE	_q[]	=
{
	4,7,3,
	0,1,1,1,
	1,0,0,1,
	1,0,0,1,
	1,0,0,1,
	0,1,1,1,
	0,0,0,1,
	0,0,0,1,
};

static UBYTE	_r[]	=
{
	4,5,3,
	1,0,1,1,
	1,1,0,0,
	1,0,0,0,
	1,0,0,0,
	1,0,0,0,
};

static UBYTE	_s[]	=
{
	4,5,3,
	0,1,1,1,
	1,0,0,0,
	0,1,1,0,
	0,0,0,1,
	1,1,1,0,
};

static UBYTE	_t[]	=
{
	3,7,1,
	0,1,0,
	0,1,0,
	1,1,1,
	0,1,0,
	0,1,0,
	0,1,0,
	0,0,1,
};

static UBYTE	_u[]	=
{
	4,5,3,
	1,0,0,1,
	1,0,0,1,
	1,0,0,1,
	1,0,0,1,
	0,1,1,1,
};

static UBYTE	_v[]	=
{
	5,5,3,
	1,0,0,0,1,
	0,1,0,1,0,
	0,1,0,1,0,
	0,0,1,0,0,
	0,0,1,0,0,
};

static UBYTE	_w[]	=
{
	7,5,3,
	1,0,0,0,0,0,1,
	0,1,0,1,0,1,0,
	0,1,0,1,0,1,0,
	0,0,1,0,1,0,0,
	0,0,1,0,1,0,0,
};

static UBYTE	_x[]	=
{
	5,5,3,
	1,0,0,0,1,
	0,1,0,1,0,
	0,0,1,0,0,
	0,1,0,1,0,
	1,0,0,0,1,
};

static UBYTE	_y[]	=
{
	4,7,3,
	1,0,0,1,
	1,0,0,1,
	1,0,0,1,
	1,0,0,1,
	0,1,1,1,
	0,0,0,1,
	0,1,1,0,
};

static UBYTE	_z[]	=
{
	4,5,3,
	1,1,1,1,
	0,0,1,0,
	0,1,0,0,
	1,0,0,0,
	1,1,1,1,
};

//---------------------------------------------------------------

UBYTE	*CharTable[]	=
{
	Null,	Null,	Null,	Null,	Null,	Null,	Null,	Null,
	Null,	Null,	Null,	Null,	Null,	Null,	Null,	Null,
	Null,	Null,	Null,	Null,	Null,	Null,	Null,	Null,
	Null,	Null,	Null,	Null,	NULL,	Null,	Null,	Null,
	Space,	Excl,	Quotes,	Null,	Dollar,	Percent,And,	Null,
	BrackO,	BrackC,	Astrisk,Plus,	Comma,	Minus,	Stop,	Null,
	Zero,	One,	Two,	Three,	Four,	Five,	Six,	Seven,
	Eight,	Nine,	Colon,	Null,	Null,	Null,	Null,	QMark,
	At, 	A,		B,		C,		D,		E,		F,		G,
	H,		I,		J,		K,		L,		M,		N,		O,
	P,		Q,		R,		S,		T,		U,		V,		W,
	X,		Y,		Z,		Null,	Null,	Null,	Null,	Under,
	Null,	_a,		_b,		_c,		_d,		_e,		_f,		_g,
	_h,		_i,		_j,		_k,		_l,		_m,		_n,		_o,
	_p,		_q,		_r,		_s,		_t,		_u,		_v,		_w,
	_x,		_y,		_z,		Null,	Null,	Null,	Null,	Null
};

//---------------------------------------------------------------
