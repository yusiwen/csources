/* Generated by Nimrod Compiler v0.9.3 */
/*   (c) 2012 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct tstringtable112610 tstringtable112610;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tident141017 tident141017;
typedef struct tidobj141011 tidobj141011;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tkeyvaluepairseq112608 tkeyvaluepairseq112608;
typedef struct TY87905 TY87905;
typedef struct tcell38848 tcell38848;
typedef struct tcellseq38864 tcellseq38864;
typedef struct tgcheap40816 tgcheap40816;
typedef struct tcellset38860 tcellset38860;
typedef struct tpagedesc38856 tpagedesc38856;
typedef struct tmemregion22210 tmemregion22210;
typedef struct tsmallchunk21438 tsmallchunk21438;
typedef struct tllchunk22204 tllchunk22204;
typedef struct tbigchunk21440 tbigchunk21440;
typedef struct tintset21415 tintset21415;
typedef struct ttrunk21411 ttrunk21411;
typedef struct tavlnode22208 tavlnode22208;
typedef struct tgcstat40814 tgcstat40814;
typedef struct tinfocpu119446 tinfocpu119446;
typedef struct tinfoos119042 tinfoos119042;
typedef struct tbasechunk21436 tbasechunk21436;
typedef struct tfreecell21428 tfreecell21428;
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NIM_CHAR TY611[100000001];
struct NimStringDesc {
  TGenericSeq Sup;
TY611 data;
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
struct TNimObject {
TNimType* m_type;
};
struct tidobj141011 {
  TNimObject Sup;
NI Id;
};
struct tident141017 {
  tidobj141011 Sup;
NimStringDesc* S;
tident141017* Next;
NI H;
};
struct TY87905 {
NimStringDesc* Field0;
NimStringDesc* Field1;
};
struct tstringtable112610 {
  TNimObject Sup;
NI Counter;
tkeyvaluepairseq112608* Data;
NU8 Mode;
};
struct tcell38848 {
NI Refcount;
TNimType* Typ;
};
struct tcellseq38864 {
NI Len;
NI Cap;
tcell38848** D;
};
struct tcellset38860 {
NI Counter;
NI Max;
tpagedesc38856* Head;
tpagedesc38856** Data;
};
typedef tsmallchunk21438* TY22222[512];
typedef ttrunk21411* ttrunkbuckets21413[256];
struct tintset21415 {
ttrunkbuckets21413 Data;
};
struct tmemregion22210 {
NI Minlargeobj;
NI Maxlargeobj;
TY22222 Freesmallchunks;
tllchunk22204* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk21440* Freechunkslist;
tintset21415 Chunkstarts;
tavlnode22208* Root;
tavlnode22208* Deleted;
tavlnode22208* Last;
tavlnode22208* Freeavlnodes;
};
struct tgcstat40814 {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct tgcheap40816 {
void* Stackbottom;
NI Cyclethreshold;
tcellseq38864 Zct;
tcellseq38864 Decstack;
tcellset38860 Cycleroots;
tcellseq38864 Tempstack;
NI Recgclock;
tmemregion22210 Region;
tgcstat40814 Stat;
};
struct tinfocpu119446 {
NimStringDesc* Field0;
NI Field1;
NU8 Field2;
NI Field3;
NI Field4;
};
typedef tinfocpu119446 TY119461[14];
typedef NimStringDesc* TY119456[2];
struct tinfoos119042 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
NimStringDesc* Field3;
NimStringDesc* Field4;
NimStringDesc* Field5;
NimStringDesc* Field6;
NimStringDesc* Field7;
NimStringDesc* Field8;
NimStringDesc* Field9;
NimStringDesc* Field10;
NimStringDesc* Field11;
NU8 Field12;
};
typedef tinfoos119042 TY119062[23];
struct TNimNode {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
typedef NI TY21418[16];
struct tpagedesc38856 {
tpagedesc38856* Next;
NI Key;
TY21418 Bits;
};
struct tbasechunk21436 {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct tsmallchunk21438 {
  tbasechunk21436 Sup;
tsmallchunk21438* Next;
tsmallchunk21438* Prev;
tfreecell21428* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct tllchunk22204 {
NI Size;
NI Acc;
tllchunk22204* Next;
};
struct tbigchunk21440 {
  tbasechunk21436 Sup;
tbigchunk21440* Next;
tbigchunk21440* Prev;
NI Align;
NF Data;
};
struct ttrunk21411 {
ttrunk21411* Next;
NI Key;
TY21418 Bits;
};
typedef tavlnode22208* TY22214[2];
struct tavlnode22208 {
TY22214 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct tfreecell21428 {
tfreecell21428* Next;
NI Zerofield;
};
struct tkeyvaluepairseq112608 {
  TGenericSeq Sup;
  TY87905 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, definesymbol_142006)(NimStringDesc* symbol);
N_NIMCALL(void, nstPut)(tstringtable112610* t, NimStringDesc* key, NimStringDesc* val);
static N_INLINE(void, nimFrame)(TFrame* s);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(void, undefsymbol_142011)(NimStringDesc* symbol);
N_NIMCALL(NIM_BOOL, isdefined_142016)(NimStringDesc* symbol);
N_NIMCALL(NIM_BOOL, nsthasKey)(tstringtable112610* t, NimStringDesc* key);
N_NIMCALL(NimStringDesc*, nstGet)(tstringtable112610* t, NimStringDesc* key);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NIM_BOOL, isdefined_142022)(tident141017* symbol);
N_NIMCALL(NI, countdefinedsymbols_142041)(void);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_NIMCALL(void, initdefines_142065)(void);
N_NIMCALL(tstringtable112610*, nstnewStringTable)(NU8 mode);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(tcell38848*, usrtocell_42239)(void* usr);
static N_INLINE(void, rtladdzct_43802)(tcell38848* c);
N_NOINLINE(void, addzct_42215)(tcellseq38864* s, tcell38848* c);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, nsuNormalize)(NimStringDesc* s);
STRING_LITERAL(TMP894, "true", 4);
STRING_LITERAL(TMP895, "false", 5);
STRING_LITERAL(TMP896, "nimrod", 6);
STRING_LITERAL(TMP897, "nimhygiene", 10);
STRING_LITERAL(TMP898, "niminheritable", 14);
STRING_LITERAL(TMP899, "nimmixin", 8);
STRING_LITERAL(TMP900, "nimeffects", 10);
STRING_LITERAL(TMP901, "nimbabel", 8);
STRING_LITERAL(TMP902, "nimcomputedgoto", 15);
STRING_LITERAL(TMP903, "x86", 3);
STRING_LITERAL(TMP904, "itanium", 7);
STRING_LITERAL(TMP905, "x8664", 5);
STRING_LITERAL(TMP906, "msdos", 5);
STRING_LITERAL(TMP907, "mswindows", 9);
STRING_LITERAL(TMP908, "win32", 5);
STRING_LITERAL(TMP909, "unix", 4);
STRING_LITERAL(TMP910, "posix", 5);
STRING_LITERAL(TMP911, "sunos", 5);
STRING_LITERAL(TMP912, "bsd", 3);
STRING_LITERAL(TMP913, "macintosh", 9);
STRING_LITERAL(TMP914, "cpu", 3);
extern NIM_CONST TY119461 cpu_119460;
extern NIM_CONST TY119456 endiantostr_119455;
extern NIM_CONST TY119062 os_119061;
STRING_LITERAL(TMP915, "emulatedthreadvars", 18);
tstringtable112610* gsymbols_142003;
extern TFrame* frameptr_12037;
extern tgcheap40816 gch_40844;
extern NU8 targetcpu_119560;
extern NU8 targetos_119562;

static N_INLINE(void, nimFrame)(TFrame* s) {
	(*s).prev = frameptr_12037;
	frameptr_12037 = s;
}
static N_INLINE(void, popFrame)(void) {
	frameptr_12037 = (*frameptr_12037).prev;
}
N_NIMCALL(void, definesymbol_142006)(NimStringDesc* symbol) {
	nimfr("DefineSymbol", "condsyms.nim")
	nimln(20, "condsyms.nim");
	nstPut(gsymbols_142003, symbol, ((NimStringDesc*) &TMP894));	popFrame();
}
N_NIMCALL(void, undefsymbol_142011)(NimStringDesc* symbol) {
	nimfr("UndefSymbol", "condsyms.nim")
	nimln(23, "condsyms.nim");
	nstPut(gsymbols_142003, symbol, ((NimStringDesc*) &TMP895));	popFrame();
}
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}	LA3: ;
	{
		NIM_BOOL LOC7;
		LOC7 = 0;
		LOC7 = (a == NIM_NIL);
		if (LOC7) goto LA8;
		LOC7 = (b == NIM_NIL);
		LA8: ;
		if (!LOC7) goto LA9;
		result = NIM_FALSE;
		goto BeforeRet;
	}	LA9: ;
	LOC11 = 0;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = 0;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI32)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	BeforeRet: ;	return result;
}
N_NIMCALL(NIM_BOOL, isdefined_142016)(NimStringDesc* symbol) {
	NIM_BOOL result;
	nimfr("isDefined", "condsyms.nim")
	result = 0;
	nimln(26, "condsyms.nim");
	{
		NIM_BOOL LOC3;
		NimStringDesc* LOC6;
		nimln(26, "condsyms.nim");
		LOC3 = 0;
		LOC3 = nsthasKey(gsymbols_142003, symbol);
		if (!LOC3) goto LA4;
		nimln(27, "condsyms.nim");
		nimln(27, "condsyms.nim");
		nimln(27, "condsyms.nim");
		LOC6 = 0;
		LOC6 = nstGet(gsymbols_142003, symbol);
		result = eqStrings(LOC6, ((NimStringDesc*) &TMP894));
	}	LA4: ;
	popFrame();
	return result;
}
N_NIMCALL(NIM_BOOL, isdefined_142022)(tident141017* symbol) {
	NIM_BOOL result;
	nimfr("isDefined", "condsyms.nim")
	result = 0;
	nimln(29, "condsyms.nim");
	result = isdefined_142016((*symbol).S);
	popFrame();
	return result;
}
static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
	result = 0;
	result = (NI)((NU32)(a) + (NU32)(b));
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
N_NIMCALL(NI, countdefinedsymbols_142041)(void) {
	NI result;
	NimStringDesc* key_142044;
	NimStringDesc* val_142045;
	NI h_142057;
	NI HEX3Atmp_142059;
	NI res_142061;
	nimfr("countDefinedSymbols", "condsyms.nim")
	result = 0;
	nimln(36, "condsyms.nim");
	result = 0;
	key_142044 = 0;
	val_142045 = 0;
	h_142057 = 0;
	HEX3Atmp_142059 = 0;
	nimln(40, "strtabs.nim");
	nimln(40, "strtabs.nim");
	HEX3Atmp_142059 = ((*gsymbols_142003).Data->Sup.len-1);
	nimln(1308, "system.nim");
	res_142061 = 0;
	nimln(1309, "system.nim");
	while (1) {
		nimln(1309, "system.nim");
		if (!(res_142061 <= HEX3Atmp_142059)) goto LA1;
		nimln(1308, "system.nim");
		h_142057 = res_142061;
		nimln(41, "strtabs.nim");
		{
			nimln(41, "strtabs.nim");
			nimln(41, "strtabs.nim");
			if ((NU)(h_142057) >= (NU)((*gsymbols_142003).Data->Sup.len)) raiseIndexError();
			if (!!((*gsymbols_142003).Data->data[h_142057].Field0 == 0)) goto LA4;
			nimln(42, "strtabs.nim");
			if ((NU)(h_142057) >= (NU)((*gsymbols_142003).Data->Sup.len)) raiseIndexError();
			key_142044 = (*gsymbols_142003).Data->data[h_142057].Field0;
			nimln(42, "strtabs.nim");
			if ((NU)(h_142057) >= (NU)((*gsymbols_142003).Data->Sup.len)) raiseIndexError();
			val_142045 = (*gsymbols_142003).Data->data[h_142057].Field1;
			nimln(38, "condsyms.nim");
			{
				nimln(38, "condsyms.nim");
				if (!eqStrings(val_142045, ((NimStringDesc*) &TMP894))) goto LA8;
				nimln(38, "condsyms.nim");
				result = addInt(result, 1);
			}			LA8: ;
		}		LA4: ;
		nimln(1311, "system.nim");
		res_142061 = addInt(res_142061, 1);
	} LA1: ;
	popFrame();
	return result;
}
static N_INLINE(tcell38848*, usrtocell_42239)(void* usr) {
	tcell38848* result;
	nimfr("usrToCell", "gc.nim")
	result = 0;
	nimln(116, "gc.nim");
	nimln(116, "gc.nim");
	nimln(116, "gc.nim");
	result = ((tcell38848*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell38848))))));
	popFrame();
	return result;
}
static N_INLINE(void, rtladdzct_43802)(tcell38848* c) {
	nimfr("rtlAddZCT", "gc.nim")
	nimln(197, "gc.nim");
	addzct_42215(&gch_40844.Zct, c);	popFrame();
}
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	nimfr("asgnRefNoCycle", "gc.nim")
	nimln(249, "gc.nim");
	{
		tcell38848* c;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!((src == NIM_NIL))) goto LA3;
		nimln(250, "gc.nim");
		c = usrtocell_42239(src);
		nimln(167, "gc.nim");
		(*c).Refcount += 8;
	}	LA3: ;
	nimln(252, "gc.nim");
	{
		tcell38848* c;
		nimln(698, "system.nim");
		nimln(698, "system.nim");
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		nimln(253, "gc.nim");
		c = usrtocell_42239((*dest));
		nimln(254, "gc.nim");
		{
			nimln(165, "gc.nim");
			(*c).Refcount -= 8;
			nimln(166, "gc.nim");
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			nimln(255, "gc.nim");
			rtladdzct_43802(c);		}		LA11: ;
	}	LA7: ;
	nimln(256, "gc.nim");
	(*dest) = src;
	popFrame();
}
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) (&(*dest).data[((*dest).Sup.len)- 0])), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));	(*dest).Sup.len += (*src).Sup.len;
}
N_NIMCALL(void, initdefines_142065)(void) {
	NimStringDesc* LOC13;
	NimStringDesc* LOC14;
	NimStringDesc* LOC15;
	nimfr("InitDefines", "condsyms.nim")
	nimln(41, "condsyms.nim");
	asgnRefNoCycle((void**) &gsymbols_142003, nstnewStringTable(((NU8) 2)));
	nimln(42, "condsyms.nim");
	definesymbol_142006(((NimStringDesc*) &TMP896));	nimln(44, "condsyms.nim");
	definesymbol_142006(((NimStringDesc*) &TMP897));	nimln(45, "condsyms.nim");
	definesymbol_142006(((NimStringDesc*) &TMP898));	nimln(46, "condsyms.nim");
	definesymbol_142006(((NimStringDesc*) &TMP899));	nimln(47, "condsyms.nim");
	definesymbol_142006(((NimStringDesc*) &TMP900));	nimln(48, "condsyms.nim");
	definesymbol_142006(((NimStringDesc*) &TMP901));	nimln(49, "condsyms.nim");
	definesymbol_142006(((NimStringDesc*) &TMP902));	nimln(52, "condsyms.nim");
	switch (targetcpu_119560) {
	case ((NU8) 1):
	{
		nimln(53, "condsyms.nim");
		definesymbol_142006(((NimStringDesc*) &TMP903));	}	break;
	case ((NU8) 8):
	{
		nimln(54, "condsyms.nim");
		definesymbol_142006(((NimStringDesc*) &TMP904));	}	break;
	case ((NU8) 9):
	{
		nimln(55, "condsyms.nim");
		definesymbol_142006(((NimStringDesc*) &TMP905));	}	break;
	default:
	{
	}	break;
	}
	nimln(57, "condsyms.nim");
	switch (targetos_119562) {
	case ((NU8) 1):
	{
		nimln(59, "condsyms.nim");
		definesymbol_142006(((NimStringDesc*) &TMP906));	}	break;
	case ((NU8) 2):
	{
		nimln(61, "condsyms.nim");
		definesymbol_142006(((NimStringDesc*) &TMP907));		nimln(62, "condsyms.nim");
		definesymbol_142006(((NimStringDesc*) &TMP908));	}	break;
	case ((NU8) 4):
	case ((NU8) 5):
	case ((NU8) 6):
	case ((NU8) 8):
	case ((NU8) 13):
	case ((NU8) 14):
	case ((NU8) 16):
	case ((NU8) 12):
	case ((NU8) 20):
	{
		nimln(66, "condsyms.nim");
		definesymbol_142006(((NimStringDesc*) &TMP909));		nimln(67, "condsyms.nim");
		definesymbol_142006(((NimStringDesc*) &TMP910));	}	break;
	case ((NU8) 7):
	{
		nimln(69, "condsyms.nim");
		definesymbol_142006(((NimStringDesc*) &TMP911));		nimln(70, "condsyms.nim");
		definesymbol_142006(((NimStringDesc*) &TMP909));		nimln(71, "condsyms.nim");
		definesymbol_142006(((NimStringDesc*) &TMP910));	}	break;
	case ((NU8) 9):
	case ((NU8) 10):
	case ((NU8) 11):
	{
		nimln(73, "condsyms.nim");
		definesymbol_142006(((NimStringDesc*) &TMP909));		nimln(74, "condsyms.nim");
		definesymbol_142006(((NimStringDesc*) &TMP912));		nimln(75, "condsyms.nim");
		definesymbol_142006(((NimStringDesc*) &TMP910));	}	break;
	case ((NU8) 18):
	{
		nimln(77, "condsyms.nim");
		definesymbol_142006(((NimStringDesc*) &TMP913));	}	break;
	case ((NU8) 19):
	{
		nimln(79, "condsyms.nim");
		definesymbol_142006(((NimStringDesc*) &TMP913));		nimln(80, "condsyms.nim");
		definesymbol_142006(((NimStringDesc*) &TMP909));		nimln(81, "condsyms.nim");
		definesymbol_142006(((NimStringDesc*) &TMP910));	}	break;
	default:
	{
	}	break;
	}
	nimln(83, "condsyms.nim");
	nimln(83, "condsyms.nim");
	LOC13 = 0;
	nimln(83, "condsyms.nim");
	if (targetcpu_119560 < 1 || targetcpu_119560 > 14) raiseIndexError();
	LOC14 = 0;
	LOC14 = nimIntToStr(cpu_119460[(targetcpu_119560)- 1].Field4);
	LOC13 = rawNewString(LOC14->Sup.len + 3);
appendString(LOC13, ((NimStringDesc*) &TMP914));
appendString(LOC13, LOC14);
	definesymbol_142006(LOC13);	nimln(84, "condsyms.nim");
	nimln(84, "condsyms.nim");
	if (targetcpu_119560 < 1 || targetcpu_119560 > 14) raiseIndexError();
	LOC15 = 0;
	LOC15 = nsuNormalize(endiantostr_119455[(cpu_119460[(targetcpu_119560)- 1].Field2)- 0]);
	definesymbol_142006(LOC15);	nimln(85, "condsyms.nim");
	if (targetcpu_119560 < 1 || targetcpu_119560 > 14) raiseIndexError();
	definesymbol_142006(cpu_119460[(targetcpu_119560)- 1].Field0);	nimln(86, "condsyms.nim");
	if (targetos_119562 < 1 || targetos_119562 > 23) raiseIndexError();
	definesymbol_142006(os_119061[(targetos_119562)- 1].Field0);	nimln(87, "condsyms.nim");
	{
		nimln(87, "condsyms.nim");
		if (targetos_119562 < 1 || targetos_119562 > 23) raiseIndexError();
		if (!((os_119061[(targetos_119562)- 1].Field12 &(1<<((((NU8) 3))&7)))!=0)) goto LA18;
		nimln(88, "condsyms.nim");
		definesymbol_142006(((NimStringDesc*) &TMP915));	}	LA18: ;
	popFrame();
}N_NOINLINE(void, compilercondsymsInit)(void) {
	nimfr("condsyms", "condsyms.nim")
	popFrame();
}

N_NOINLINE(void, compilercondsymsDatInit)(void) {
}
