/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 64
#include "nimbase.h"
typedef struct tsym171689 tsym171689;
typedef struct tsymseq171661 tsymseq171661;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct tentry321943 tentry321943;
typedef struct TY321950 TY321950;
typedef struct tidobj140011 tidobj140011;
typedef struct TNimObject TNimObject;
typedef struct ttypeseq171691 ttypeseq171691;
typedef struct ttype171693 ttype171693;
typedef struct tscope171683 tscope171683;
typedef struct TY171786 TY171786;
typedef struct tinstantiation171679 tinstantiation171679;
typedef struct tstrtable171663 tstrtable171663;
typedef struct tident140017 tident140017;
typedef struct tlineinfo136509 tlineinfo136509;
typedef struct tnode171659 tnode171659;
typedef struct tloc171673 tloc171673;
typedef struct trope121007 trope121007;
typedef struct tlib171677 tlib171677;
typedef struct tnodeseq171653 tnodeseq171653;
typedef struct TY171775 TY171775;
typedef struct tlistentry109014 tlistentry109014;
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (tsym171689* x, tsym171689* y, void* ClEnv);
void* ClEnv;
} TY319724;
struct TGenericSeq {
NI len;
NI reserved;
};
typedef N_NIMCALL_PTR(void, TY889) (void* p, NI op);
struct TNimType {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY889 marker;
};
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef N_CLOSURE_PTR(NI, TMP4983) (tsym171689* x, tsym171689* y);
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
};
typedef N_CLOSURE_PTR(NI, TMP4985) (tsym171689* x, tsym171689* y);
struct tentry321943 {
NI Pos;
tsym171689* Sym;
};
typedef struct {
N_NIMCALL_PTR(NI, ClPrc) (tentry321943 x, tentry321943 y, void* ClEnv);
void* ClEnv;
} TY322431;
typedef N_CLOSURE_PTR(NI, TMP5002) (tentry321943 x, tentry321943 y);
typedef N_CLOSURE_PTR(NI, TMP5003) (tentry321943 x, tentry321943 y);
struct TNimObject {
TNimType* m_type;
};
struct tidobj140011 {
  TNimObject Sup;
NI Id;
};
struct tstrtable171663 {
NI Counter;
tsymseq171661* Data;
};
struct tlineinfo136509 {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct tloc171673 {
NU8 K;
NU8 S;
NU8 Flags;
ttype171693* T;
trope121007* R;
trope121007* Heaproot;
NI A;
};
struct tsym171689 {
  tidobj140011 Sup;
NU8 Kind;
union {
struct {ttypeseq171691* Typeinstcache;
tscope171683* Typscope;
} S1;
struct {TY171786* Procinstcache;
tscope171683* Scope;
} S2;
struct {TY171786* Usedgenerics;
tstrtable171663 Tab;
} S3;
} kindU;
NU16 Magic;
ttype171693* Typ;
tident140017* Name;
tlineinfo136509 Info;
tsym171689* Owner;
NU32 Flags;
tnode171659* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc171673 Loc;
tlib171677* Annex;
tnode171659* Constraint;
};
struct ttype171693 {
  tidobj140011 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq171691* Sons;
tnode171659* N;
tsym171689* Destructor;
tsym171689* Owner;
tsym171689* Sym;
NI64 Size;
NI Align;
tloc171673 Loc;
};
struct tscope171683 {
NI Depthlevel;
tstrtable171663 Symbols;
tnodeseq171653* Usingsyms;
tscope171683* Parent;
};
struct tinstantiation171679 {
tsym171689* Sym;
ttypeseq171691* Concretetypes;
TY171775* Usedby;
};
struct tident140017 {
  tidobj140011 Sup;
NimStringDesc* S;
tident140017* Next;
NI H;
};
struct tnode171659 {
ttype171693* Typ;
tlineinfo136509 Info;
NU16 Flags;
NU8 Kind;
union {
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym171689* Sym;
} S4;
struct {tident140017* Ident;
} S5;
struct {tnodeseq171653* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
struct trope121007 {
  TNimObject Sup;
trope121007* Left;
trope121007* Right;
NI Length;
NimStringDesc* Data;
};
struct tlistentry109014 {
  TNimObject Sup;
tlistentry109014* Prev;
tlistentry109014* Next;
};
struct tlib171677 {
  tlistentry109014 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope121007* Name;
tnode171659* Path;
};
struct tsymseq171661 {
  TGenericSeq Sup;
  tsym171689* data[SEQ_DECL_SIZE];
};
struct TY321950 {
  TGenericSeq Sup;
  tentry321943 data[SEQ_DECL_SIZE];
};
struct ttypeseq171691 {
  TGenericSeq Sup;
  ttype171693* data[SEQ_DECL_SIZE];
};
struct TY171786 {
  TGenericSeq Sup;
  tinstantiation171679* data[SEQ_DECL_SIZE];
};
struct tnodeseq171653 {
  TGenericSeq Sup;
  tnode171659* data[SEQ_DECL_SIZE];
};
struct TY171775 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
static N_INLINE(NI, HEX2A_317040)(NI x, NU8 order);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
static N_INLINE(NI, divInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
N_NIMCALL(void, merge_319761)(tsym171689** a, NI aLen0, tsym171689** b, NI bLen0, NI lo, NI m, NI hi, TY319724 cmp, NU8 order);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NIMCALL(void, hiddenraiseassert_76017)(NimStringDesc* msg);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(NI, mulInt)(NI a, NI b);
N_NIMCALL(void, merge_322468)(tentry321943* a, NI aLen0, tentry321943* b, NI bLen0, NI lo, NI m, NI hi, TY322431 cmp, NU8 order);
STRING_LITERAL(TMP4984, "j <= m ", 7);
extern TFrame* frameptr_12037;
extern TNimType NTI171661; /* TSymSeq */
extern TNimType NTI321950; /* seq[TEntry] */

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}	LA5: ;
	raiseOverflow();	BeforeRet: ;	return result;
}
static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
static N_INLINE(NI, HEX2A_317040)(NI x, NU8 order) {
	NI result;
	NI y;
	NI TMP4975;
	NI TMP4976;
	nimfr("*", "algorithm.nim")
	result = 0;
	nimln(21, "algorithm.nim");
	nimln(21, "algorithm.nim");
	nimln(21, "algorithm.nim");
	TMP4975 = subInt(((NI) (order)), 1);
	y = (NI64)(TMP4975);
	nimln(22, "algorithm.nim");
	nimln(22, "algorithm.nim");
	nimln(22, "algorithm.nim");
	TMP4976 = subInt((NI)(x ^ ((NI) (y))), ((NI) (y)));
	result = (NI64)(TMP4976);
	popFrame();
	return result;
}
static N_INLINE(NI, divInt)(NI a, NI b) {
	NI result;
	result = 0;
	{
		if (!(b == 0)) goto LA3;
		raiseDivByZero();	}	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == (IL64(-9223372036854775807) - IL64(1)));
		if (!(LOC7)) goto LA8;
		LOC7 = (b == -1);
		LA8: ;
		if (!LOC7) goto LA9;
		raiseOverflow();	}	LA9: ;
	result = (NI64)(a / b);
	goto BeforeRet;
	BeforeRet: ;	return result;
}
static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = (0 <= (NI)(result ^ a));
		if (LOC3) goto LA4;
		LOC3 = (0 <= (NI)(result ^ b));
		LA4: ;
		if (!LOC3) goto LA5;
		goto BeforeRet;
	}	LA5: ;
	raiseOverflow();	BeforeRet: ;	return result;
}
N_NIMCALL(void, merge_319761)(tsym171689** a, NI aLen0, tsym171689** b, NI bLen0, NI lo, NI m, NI hi, TY319724 cmp, NU8 order) {
	NI j;
	NI bb;
	NI i;
	NI k;
	nimfr("merge", "algorithm.nim")
	nimln(71, "algorithm.nim");
	{
		NI TMP4982;
		NI LOC3;
		NI LOC4;
		nimln(71, "algorithm.nim");
		nimln(71, "algorithm.nim");
		nimln(71, "algorithm.nim");
		if ((NU)(m) >= (NU)(aLen0)) raiseIndexError();
		nimln(71, "algorithm.nim");
		TMP4982 = addInt(m, 1);
		if ((NU)((NI64)(TMP4982)) >= (NU)(aLen0)) raiseIndexError();
		LOC3 = 0;
		LOC3 = cmp.ClEnv? cmp.ClPrc(a[m], a[(NI64)(TMP4982)], cmp.ClEnv) : ((TMP4983)(cmp.ClPrc))(a[m], a[(NI64)(TMP4982)]);
		LOC4 = 0;
		LOC4 = HEX2A_317040(LOC3, order);
		if (!(LOC4 <= 0)) goto LA5;
		nimln(71, "algorithm.nim");
		goto BeforeRet;
	}	LA5: ;
	nimln(72, "algorithm.nim");
	j = lo;
	nimln(74, "algorithm.nim");
	{
		nimln(74, "algorithm.nim");
		nimln(74, "algorithm.nim");
		if (!!((j <= m))) goto LA9;
		nimln(74, "algorithm.nim");
		hiddenraiseassert_76017(((NimStringDesc*) &TMP4984));	}	LA9: ;
	nimln(76, "algorithm.nim");
	bb = 0;
	nimln(77, "algorithm.nim");
	while (1) {
		nimln(77, "algorithm.nim");
		if (!(j <= m)) goto LA11;
		nimln(64, "algorithm.nim");
		if ((NU)(bb) >= (NU)(bLen0)) raiseIndexError();
		if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
		unsureAsgnRef((void**) &b[bb], a[j]);
		nimln(79, "algorithm.nim");
		bb = addInt(bb, 1);
		nimln(80, "algorithm.nim");
		j = addInt(j, 1);
	} LA11: ;
	nimln(84, "algorithm.nim");
	i = 0;
	nimln(85, "algorithm.nim");
	k = lo;
	nimln(87, "algorithm.nim");
	while (1) {
		NIM_BOOL LOC13;
		nimln(87, "algorithm.nim");
		LOC13 = 0;
		nimln(87, "algorithm.nim");
		LOC13 = (k < j);
		if (!(LOC13)) goto LA14;
		nimln(87, "algorithm.nim");
		LOC13 = (j <= hi);
		LA14: ;
		if (!LOC13) goto LA12;
		nimln(88, "algorithm.nim");
		{
			NI LOC17;
			NI LOC18;
			nimln(88, "algorithm.nim");
			nimln(88, "algorithm.nim");
			nimln(88, "algorithm.nim");
			if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
			if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
			LOC17 = 0;
			LOC17 = cmp.ClEnv? cmp.ClPrc(b[i], a[j], cmp.ClEnv) : ((TMP4985)(cmp.ClPrc))(b[i], a[j]);
			LOC18 = 0;
			LOC18 = HEX2A_317040(LOC17, order);
			if (!(LOC18 <= 0)) goto LA19;
			nimln(64, "algorithm.nim");
			if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
			if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
			unsureAsgnRef((void**) &a[k], b[i]);
			nimln(90, "algorithm.nim");
			i = addInt(i, 1);
		}		goto LA15;
		LA19: ;
		{
			nimln(64, "algorithm.nim");
			if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
			if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
			unsureAsgnRef((void**) &a[k], a[j]);
			nimln(93, "algorithm.nim");
			j = addInt(j, 1);
		}		LA15: ;
		nimln(94, "algorithm.nim");
		k = addInt(k, 1);
	} LA12: ;
	nimln(97, "algorithm.nim");
	while (1) {
		nimln(97, "algorithm.nim");
		if (!(k < j)) goto LA22;
		nimln(64, "algorithm.nim");
		if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
		if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
		unsureAsgnRef((void**) &a[k], b[i]);
		nimln(99, "algorithm.nim");
		k = addInt(k, 1);
		nimln(100, "algorithm.nim");
		i = addInt(i, 1);
	} LA22: ;
	BeforeRet: ;	popFrame();
}
N_NIMCALL(void, sort_319717)(tsym171689** a, NI aLen0, TY319724 cmp, NU8 order) {
	NI n;
	tsymseq171661* b;
	NI TMP4979;
	NI s;
	nimfr("sort", "algorithm.nim")
	nimln(123, "algorithm.nim");
	nimln(123, "algorithm.nim");
	n = aLen0;
	b = 0;
	nimln(125, "algorithm.nim");
	nimln(125, "algorithm.nim");
	TMP4979 = divInt(n, 2);
	b = (tsymseq171661*) newSeq((&NTI171661), (NI64)(TMP4979));
	nimln(126, "algorithm.nim");
	s = 1;
	nimln(127, "algorithm.nim");
	while (1) {
		NI m;
		NI TMP4980;
		NI TMP4981;
		NI TMP4990;
		nimln(127, "algorithm.nim");
		if (!(s < n)) goto LA1;
		nimln(128, "algorithm.nim");
		nimln(128, "algorithm.nim");
		nimln(128, "algorithm.nim");
		TMP4980 = subInt(n, 1);
		TMP4981 = subInt((NI64)(TMP4980), s);
		m = (NI64)(TMP4981);
		nimln(129, "algorithm.nim");
		while (1) {
			NI TMP4986;
			NI TMP4987;
			NI TMP4988;
			NI TMP4989;
			nimln(702, "system.nim");
			if (!(0 <= m)) goto LA2;
			nimln(130, "algorithm.nim");
			nimln(130, "algorithm.nim");
			nimln(130, "algorithm.nim");
			nimln(130, "algorithm.nim");
			TMP4986 = subInt(m, s);
			TMP4987 = addInt((NI64)(TMP4986), 1);
			nimln(130, "algorithm.nim");
			TMP4988 = addInt(m, s);
			merge_319761(a, aLen0, b->data, b->Sup.len, (((NI64)(TMP4987) >= 0) ? (NI64)(TMP4987) : 0), m, (NI64)(TMP4988), cmp, order);			nimln(131, "algorithm.nim");
			nimln(131, "algorithm.nim");
			TMP4989 = mulInt(s, 2);
			m = subInt(m, (NI64)(TMP4989));
		} LA2: ;
		nimln(132, "algorithm.nim");
		nimln(132, "algorithm.nim");
		TMP4990 = mulInt(s, 2);
		s = (NI64)(TMP4990);
	} LA1: ;
	popFrame();
}
N_NIMCALL(void, merge_322468)(tentry321943* a, NI aLen0, tentry321943* b, NI bLen0, NI lo, NI m, NI hi, TY322431 cmp, NU8 order) {
	NI j;
	NI bb;
	NI i;
	NI k;
	nimfr("merge", "algorithm.nim")
	nimln(71, "algorithm.nim");
	{
		NI TMP5001;
		NI LOC3;
		NI LOC4;
		nimln(71, "algorithm.nim");
		nimln(71, "algorithm.nim");
		nimln(71, "algorithm.nim");
		if ((NU)(m) >= (NU)(aLen0)) raiseIndexError();
		nimln(71, "algorithm.nim");
		TMP5001 = addInt(m, 1);
		if ((NU)((NI64)(TMP5001)) >= (NU)(aLen0)) raiseIndexError();
		LOC3 = 0;
		LOC3 = cmp.ClEnv? cmp.ClPrc(a[m], a[(NI64)(TMP5001)], cmp.ClEnv) : ((TMP5002)(cmp.ClPrc))(a[m], a[(NI64)(TMP5001)]);
		LOC4 = 0;
		LOC4 = HEX2A_317040(LOC3, order);
		if (!(LOC4 <= 0)) goto LA5;
		nimln(71, "algorithm.nim");
		goto BeforeRet;
	}	LA5: ;
	nimln(72, "algorithm.nim");
	j = lo;
	nimln(74, "algorithm.nim");
	{
		nimln(74, "algorithm.nim");
		nimln(74, "algorithm.nim");
		if (!!((j <= m))) goto LA9;
		nimln(74, "algorithm.nim");
		hiddenraiseassert_76017(((NimStringDesc*) &TMP4984));	}	LA9: ;
	nimln(76, "algorithm.nim");
	bb = 0;
	nimln(77, "algorithm.nim");
	while (1) {
		nimln(77, "algorithm.nim");
		if (!(j <= m)) goto LA11;
		nimln(64, "algorithm.nim");
		if ((NU)(bb) >= (NU)(bLen0)) raiseIndexError();
		if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
		b[bb].Pos = a[j].Pos;
		unsureAsgnRef((void**) &b[bb].Sym, a[j].Sym);
		nimln(79, "algorithm.nim");
		bb = addInt(bb, 1);
		nimln(80, "algorithm.nim");
		j = addInt(j, 1);
	} LA11: ;
	nimln(84, "algorithm.nim");
	i = 0;
	nimln(85, "algorithm.nim");
	k = lo;
	nimln(87, "algorithm.nim");
	while (1) {
		NIM_BOOL LOC13;
		nimln(87, "algorithm.nim");
		LOC13 = 0;
		nimln(87, "algorithm.nim");
		LOC13 = (k < j);
		if (!(LOC13)) goto LA14;
		nimln(87, "algorithm.nim");
		LOC13 = (j <= hi);
		LA14: ;
		if (!LOC13) goto LA12;
		nimln(88, "algorithm.nim");
		{
			NI LOC17;
			NI LOC18;
			nimln(88, "algorithm.nim");
			nimln(88, "algorithm.nim");
			nimln(88, "algorithm.nim");
			if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
			if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
			LOC17 = 0;
			LOC17 = cmp.ClEnv? cmp.ClPrc(b[i], a[j], cmp.ClEnv) : ((TMP5003)(cmp.ClPrc))(b[i], a[j]);
			LOC18 = 0;
			LOC18 = HEX2A_317040(LOC17, order);
			if (!(LOC18 <= 0)) goto LA19;
			nimln(64, "algorithm.nim");
			if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
			if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
			a[k].Pos = b[i].Pos;
			unsureAsgnRef((void**) &a[k].Sym, b[i].Sym);
			nimln(90, "algorithm.nim");
			i = addInt(i, 1);
		}		goto LA15;
		LA19: ;
		{
			nimln(64, "algorithm.nim");
			if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
			if ((NU)(j) >= (NU)(aLen0)) raiseIndexError();
			a[k].Pos = a[j].Pos;
			unsureAsgnRef((void**) &a[k].Sym, a[j].Sym);
			nimln(93, "algorithm.nim");
			j = addInt(j, 1);
		}		LA15: ;
		nimln(94, "algorithm.nim");
		k = addInt(k, 1);
	} LA12: ;
	nimln(97, "algorithm.nim");
	while (1) {
		nimln(97, "algorithm.nim");
		if (!(k < j)) goto LA22;
		nimln(64, "algorithm.nim");
		if ((NU)(k) >= (NU)(aLen0)) raiseIndexError();
		if ((NU)(i) >= (NU)(bLen0)) raiseIndexError();
		a[k].Pos = b[i].Pos;
		unsureAsgnRef((void**) &a[k].Sym, b[i].Sym);
		nimln(99, "algorithm.nim");
		k = addInt(k, 1);
		nimln(100, "algorithm.nim");
		i = addInt(i, 1);
	} LA22: ;
	BeforeRet: ;	popFrame();
}
N_NIMCALL(void, sort_322424)(tentry321943* a, NI aLen0, TY322431 cmp, NU8 order) {
	NI n;
	TY321950* b;
	NI TMP4998;
	NI s;
	nimfr("sort", "algorithm.nim")
	nimln(123, "algorithm.nim");
	nimln(123, "algorithm.nim");
	n = aLen0;
	b = 0;
	nimln(125, "algorithm.nim");
	nimln(125, "algorithm.nim");
	TMP4998 = divInt(n, 2);
	b = (TY321950*) newSeq((&NTI321950), (NI64)(TMP4998));
	nimln(126, "algorithm.nim");
	s = 1;
	nimln(127, "algorithm.nim");
	while (1) {
		NI m;
		NI TMP4999;
		NI TMP5000;
		NI TMP5008;
		nimln(127, "algorithm.nim");
		if (!(s < n)) goto LA1;
		nimln(128, "algorithm.nim");
		nimln(128, "algorithm.nim");
		nimln(128, "algorithm.nim");
		TMP4999 = subInt(n, 1);
		TMP5000 = subInt((NI64)(TMP4999), s);
		m = (NI64)(TMP5000);
		nimln(129, "algorithm.nim");
		while (1) {
			NI TMP5004;
			NI TMP5005;
			NI TMP5006;
			NI TMP5007;
			nimln(702, "system.nim");
			if (!(0 <= m)) goto LA2;
			nimln(130, "algorithm.nim");
			nimln(130, "algorithm.nim");
			nimln(130, "algorithm.nim");
			nimln(130, "algorithm.nim");
			TMP5004 = subInt(m, s);
			TMP5005 = addInt((NI64)(TMP5004), 1);
			nimln(130, "algorithm.nim");
			TMP5006 = addInt(m, s);
			merge_322468(a, aLen0, b->data, b->Sup.len, (((NI64)(TMP5005) >= 0) ? (NI64)(TMP5005) : 0), m, (NI64)(TMP5006), cmp, order);			nimln(131, "algorithm.nim");
			nimln(131, "algorithm.nim");
			TMP5007 = mulInt(s, 2);
			m = subInt(m, (NI64)(TMP5007));
		} LA2: ;
		nimln(132, "algorithm.nim");
		nimln(132, "algorithm.nim");
		TMP5008 = mulInt(s, 2);
		s = (NI64)(TMP5008);
	} LA1: ;
	popFrame();
}N_NOINLINE(void, purealgorithmInit)(void) {
	nimfr("algorithm", "algorithm.nim")
	popFrame();
}

N_NOINLINE(void, purealgorithmDatInit)(void) {
}

