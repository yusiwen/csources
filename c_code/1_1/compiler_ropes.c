/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct trope179009 trope179009;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell45346 tcell45346;
typedef struct tcellseq45362 tcellseq45362;
typedef struct tgcheap47616 tgcheap47616;
typedef struct tcellset45358 tcellset45358;
typedef struct tpagedesc45354 tpagedesc45354;
typedef struct tmemregion27610 tmemregion27610;
typedef struct tsmallchunk26840 tsmallchunk26840;
typedef struct tllchunk27604 tllchunk27604;
typedef struct tbigchunk26842 tbigchunk26842;
typedef struct tintset26817 tintset26817;
typedef struct ttrunk26813 ttrunk26813;
typedef struct tavlnode27608 tavlnode27608;
typedef struct tgcstat47614 tgcstat47614;
typedef struct TY182353 TY182353;
typedef struct tbasechunk26838 tbasechunk26838;
typedef struct tfreecell26830 tfreecell26830;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (NU8 err, NimStringDesc* msg, NIM_BOOL usewarning, void* ClEnv);
void* ClEnv;
} TY179138;
typedef trope179009* TY179237[4096];
typedef N_NIMCALL_PTR(void, TY3289) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, TY3294) (void* p);
struct  TNimType  {
NI size;
NU8 kind;
NU8 flags;
TNimType* base;
TNimNode* node;
void* finalizer;
TY3289 marker;
TY3294 deepcopy;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  trope179009  {
  TNimObject Sup;
trope179009* Left;
trope179009* Right;
NI Length;
NimStringDesc* Data;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tcell45346  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq45362  {
NI Len;
NI Cap;
tcell45346** D;
};
struct  tcellset45358  {
NI Counter;
NI Max;
tpagedesc45354* Head;
tpagedesc45354** Data;
};
typedef tsmallchunk26840* TY27622[512];
typedef ttrunk26813* ttrunkbuckets26815[256];
struct  tintset26817  {
ttrunkbuckets26815 Data;
};
struct  tmemregion27610  {
NI Minlargeobj;
NI Maxlargeobj;
TY27622 Freesmallchunks;
tllchunk27604* Llmem;
NI Currmem;
NI Maxmem;
NI Freemem;
NI Lastsize;
tbigchunk26842* Freechunkslist;
tintset26817 Chunkstarts;
tavlnode27608* Root;
tavlnode27608* Deleted;
tavlnode27608* Last;
tavlnode27608* Freeavlnodes;
};
struct  tgcstat47614  {
NI Stackscans;
NI Cyclecollections;
NI Maxthreshold;
NI Maxstacksize;
NI Maxstackcells;
NI Cycletablesize;
NI64 Maxpause;
};
struct  tgcheap47616  {
void* Stackbottom;
NI Cyclethreshold;
tcellseq45362 Zct;
tcellseq45362 Decstack;
tcellset45358 Cycleroots;
tcellseq45362 Tempstack;
NI Recgclock;
tmemregion27610 Region;
tgcstat47614 Stat;
};
typedef trope179009* TY179515[1];
typedef N_CLOSURE_PTR(void, TMP3373) (NU8 err, NimStringDesc* msg, NIM_BOOL usewarning);
typedef N_CLOSURE_PTR(void, TMP3374) (NU8 err, NimStringDesc* msg, NIM_BOOL usewarning);
typedef N_CLOSURE_PTR(void, TMP4193) (NU8 err, NimStringDesc* msg, NIM_BOOL usewarning);
typedef NI TY178066[256];
typedef NI TY26820[16];
struct  tpagedesc45354  {
tpagedesc45354* Next;
NI Key;
TY26820 Bits;
};
struct  tbasechunk26838  {
NI Prevsize;
NI Size;
NIM_BOOL Used;
};
struct  tsmallchunk26840  {
  tbasechunk26838 Sup;
tsmallchunk26840* Next;
tsmallchunk26840* Prev;
tfreecell26830* Freelist;
NI Free;
NI Acc;
NF Data;
};
struct  tllchunk27604  {
NI Size;
NI Acc;
tllchunk27604* Next;
};
struct  tbigchunk26842  {
  tbasechunk26838 Sup;
tbigchunk26842* Next;
tbigchunk26842* Prev;
NI Align;
NF Data;
};
struct  ttrunk26813  {
ttrunk26813* Next;
NI Key;
TY26820 Bits;
};
typedef tavlnode27608* TY27614[2];
struct  tavlnode27608  {
TY27614 Link;
NI Key;
NI Upperbound;
NI Level;
};
struct  tfreecell26830  {
tfreecell26830* Next;
NI Zerofield;
};
struct TY182353 {
  TGenericSeq Sup;
  trope179009* data[SEQ_DECL_SIZE];
};
N_NIMCALL(trope179009*, newrope_179176)(NimStringDesc* data);
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP129)(void* p, NI op);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell45346*, usrtocell_49246)(void* usr);
static N_INLINE(void, rtladdzct_50804)(tcell45346* c);
N_NOINLINE(void, addzct_49217)(tcellseq45362* s, tcell45346* c);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
N_NIMCALL(trope179009*, con_179024)(trope179009* a, trope179009* b);
N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_NIMCALL(trope179009*, insertincache_179345)(NimStringDesc* s);
N_NIMCALL(NI, hash_131839)(NimStringDesc* x);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(NimStringDesc*, mnewString)(NI len);
N_NIMCALL(void, newrecropetostr_179492)(NimStringDesc** result, NI* resultlen, trope179009* r);
N_NIMCALL(void*, newSeq)(TNimType* typ, NI len);
static N_INLINE(trope179009*, pop_179533)(TY182353** s_179541);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(trope179009*, con_179031)(trope179009* a, NimStringDesc* b);
N_NIMCALL(trope179009*, torope_179076)(NimStringDesc* s);
N_NIMCALL(void, app_179060)(trope179009** a, NimStringDesc* b);
N_NIMCALL(void, app_179052)(trope179009** a, trope179009* b);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
N_NIMCALL(NimStringDesc*, nimCharToStr)(NIM_CHAR x);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_75628, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
N_NIMCALL(NimStringDesc*, nimInt64ToStr)(NI64 x);
N_NIMCALL(trope179009*, ropef_179107)(NimStringDesc* frmt, trope179009** args, NI argsLen0);
N_NIMCALL(NIM_BOOL, open_13003)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(void, writerope_180065)(FILE* f, trope179009* c);
N_NIMCALL(void, write_13265)(FILE* f, NimStringDesc* s);
N_NIMCALL(NI32, crcfromfile_178046)(NimStringDesc* filename);
N_NIMCALL(NI32, crcfromrope_181244)(trope179009* r);
N_NIMCALL(NI32, newcrcfromropeaux_181093)(trope179009* r, NI32 startval);
static N_INLINE(NI32, updatecrc32_178026)(NIM_CHAR val, NI32 crc);
static N_INLINE(NI32, updatecrc32_178019)(NI8 val, NI32 crc);
N_NIMCALL(void, writerope_180423)(trope179009* head, NimStringDesc* filename, NIM_BOOL usewarning);
STRING_LITERAL(TMP1052, "", 0);
STRING_LITERAL(TMP3372, "$", 1);
extern NIM_CONST TY178066 crc32table_178065;
TY179138 errorhandler_179143;
TY179237 cache_179242;
NI gcachetries_179333;
NI gcachemisses_179337;
NI gcacheinttries_179341;
trope179009* rnl_180454;
extern TNimType NTI3411; /* RootObj */
TNimType NTI179009; /* TRope */
extern TNimType NTI108; /* int */
extern TNimType NTI149; /* string */
TNimType NTI179007; /* PRope */
extern tgcheap47616 gch_47644;
extern NimStringDesc* tnl_176629;
trope179009* softrnl_180455;
extern TNimType NTI182353; /* seq[PRope] */
N_NIMCALL(void, TMP129)(void* p, NI op) {
	trope179009* a;
	a = (trope179009*)p;
	nimGCvisit((void*)(*a).Left, op);
	nimGCvisit((void*)(*a).Right, op);
	nimGCvisit((void*)(*a).Data, op);
}

static N_INLINE(tcell45346*, usrtocell_49246)(void* usr) {
	tcell45346* result;
	result = 0;
	result = ((tcell45346*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell45346))))));
	return result;
}

static N_INLINE(void, rtladdzct_50804)(tcell45346* c) {
	addzct_49217((&gch_47644.Zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell45346* c;
	c = usrtocell_49246(p);
	{
		(*c).Refcount -= 8;
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		rtladdzct_50804(c);
	}
	LA3: ;
}

N_NIMCALL(trope179009*, newrope_179176)(NimStringDesc* data) {
	trope179009* result;
	result = 0;
	result = (trope179009*) newObj((&NTI179007), sizeof(trope179009));
	(*result).Sup.m_type = (&NTI179009);
	{
		NimStringDesc* LOC5;
		if (!!((data == NIM_NIL))) goto LA3;
		(*result).Length = data->Sup.len;
		LOC5 = 0;
		LOC5 = (*result).Data; (*result).Data = copyStringRC1(data);
		if (LOC5) nimGCunrefNoCycle(LOC5);
	}
	LA3: ;
	return result;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell45346* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_49246(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell45346* c;
		if (!!(((*dest) == NIM_NIL))) goto LA7;
		c = usrtocell_49246((*dest));
		{
			(*c).Refcount -= 8;
			if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA11;
			rtladdzct_50804(c);
		}
		LA11: ;
	}
	LA7: ;
	(*dest) = src;
}

N_NIMCALL(trope179009*, con_179024)(trope179009* a, trope179009* b) {
	trope179009* result;
	result = 0;
	{
		if (!(a == NIM_NIL)) goto LA3;
		result = b;
	}
	goto LA1;
	LA3: ;
	{
		if (!(b == NIM_NIL)) goto LA6;
		result = a;
	}
	goto LA1;
	LA6: ;
	{
		result = newrope_179176(NIM_NIL);
		(*result).Length = (NI32)((*a).Length + (*b).Length);
		asgnRefNoCycle((void**) (&(*result).Left), a);
		asgnRefNoCycle((void**) (&(*result).Right), b);
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, app_179052)(trope179009** a, trope179009* b) {
	unsureAsgnRef((void**) (&(*a)), con_179024((*a), b));
}

static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b) {
	NIM_BOOL result;
	NIM_BOOL LOC11;
	int LOC13;
{	result = 0;
	{
		if (!(a == b)) goto LA3;
		result = NIM_TRUE;
		goto BeforeRet;
	}
	LA3: ;
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
	}
	LA9: ;
	LOC11 = 0;
	LOC11 = ((*a).Sup.len == (*b).Sup.len);
	if (!(LOC11)) goto LA12;
	LOC13 = 0;
	LOC13 = memcmp(((NCSTRING) ((*a).data)), ((NCSTRING) ((*b).data)), (NI32)((*a).Sup.len * 1));
	LOC11 = (LOC13 == ((NI32) 0));
	LA12: ;
	result = LOC11;
	goto BeforeRet;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(trope179009*, insertincache_179345)(NimStringDesc* s) {
	trope179009* result;
	NI h;
	NI LOC1;
	result = 0;
	gcachetries_179333 += 1;
	LOC1 = 0;
	LOC1 = hash_131839(s);
	h = (NI)(LOC1 & 4095);
	result = cache_179242[(h)- 0];
	{
		NIM_BOOL LOC4;
		LOC4 = 0;
		LOC4 = result == 0;
		if (LOC4) goto LA5;
		LOC4 = !(eqStrings((*result).Data, s));
		LA5: ;
		if (!LOC4) goto LA6;
		gcachemisses_179337 += 1;
		result = newrope_179176(s);
		asgnRefNoCycle((void**) (&cache_179242[(h)- 0]), result);
	}
	LA6: ;
	return result;
}

N_NIMCALL(trope179009*, torope_179076)(NimStringDesc* s) {
	trope179009* result;
	result = 0;
	{
		if (!(s->Sup.len == 0)) goto LA3;
		result = NIM_NIL;
	}
	goto LA1;
	LA3: ;
	{
		result = insertincache_179345(s);
	}
	LA1: ;
	return result;
}

static N_INLINE(trope179009*, pop_179533)(TY182353** s_179541) {
	trope179009* result;
	NI l;
	result = 0;
	l = (NI32)((*s_179541)->Sup.len - 1);
	result = (*s_179541)->data[l];
	(*s_179541) = (TY182353*) setLengthSeq(&((*s_179541))->Sup, sizeof(trope179009*), l);
	return result;
}

N_NIMCALL(void, newrecropetostr_179492)(NimStringDesc** result, NI* resultlen, trope179009* r) {
	TY182353* stack;
	TY179515 LOC1;
	stack = (TY182353*) newSeq((&NTI182353), 1);
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0] = r;
	asgnRefNoCycle((void**) (&stack->data[0]), LOC1[0]);
	{
		while (1) {
			trope179009* it;
			if (!(0 < stack->Sup.len)) goto LA3;
			it = pop_179533((&stack));
			{
				while (1) {
					if (!((*it).Data == NIM_NIL)) goto LA5;
					stack = (TY182353*) incrSeq(&(stack)->Sup, sizeof(trope179009*));
					asgnRefNoCycle((void**) (&stack->data[stack->Sup.len-1]), (*it).Right);
					it = (*it).Left;
				} LA5: ;
			}
			memcpy(((void*) ((&(*result)->data[(*resultlen)]))), ((void*) ((&(*it).Data->data[0]))), (*it).Length);
			(*resultlen) += (*it).Length;
		} LA3: ;
	}
}

N_NIMCALL(NimStringDesc*, ropetostr_179101)(trope179009* p) {
	NimStringDesc* result;
	result = 0;
	{
		if (!(p == NIM_NIL)) goto LA3;
		result = copyString(((NimStringDesc*) &TMP1052));
	}
	goto LA1;
	LA3: ;
	{
		NI resultlen;
		result = mnewString((*p).Length);
		resultlen = 0;
		newrecropetostr_179492((&result), (&resultlen), p);
	}
	LA1: ;
	return result;
}

N_NIMCALL(trope179009*, con_179031)(trope179009* a, NimStringDesc* b) {
	trope179009* result;
	trope179009* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = torope_179076(b);
	result = con_179024(a, LOC1);
	return result;
}

N_NIMCALL(void, app_179060)(trope179009** a, NimStringDesc* b) {
	unsureAsgnRef((void**) (&(*a)), con_179031((*a), b));
}

N_NIMCALL(trope179009*, ropef_179107)(NimStringDesc* frmt, trope179009** args, NI argsLen0) {
	trope179009* result;
	NI i;
	NI length;
	NI num;
	result = 0;
	i = 0;
	length = frmt->Sup.len;
	result = NIM_NIL;
	num = 0;
	{
		while (1) {
			NI start;
			if (!(i <= (NI32)(length - 1))) goto LA2;
			{
				if (!((NU8)(frmt->data[i]) == (NU8)(36))) goto LA5;
				i += 1;
				switch (((NU8)(frmt->data[i]))) {
				case 36:
				{
					app_179060(&result, ((NimStringDesc*) &TMP3372));
					i += 1;
				}
				break;
				case 35:
				{
					i += 1;
					app_179052(&result, args[num]);
					num += 1;
				}
				break;
				case 48 ... 57:
				{
					NI j;
					j = 0;
					{
						while (1) {
							j = (NI32)((NI32)((NI32)(j * 10) + ((NI) (((NU8)(frmt->data[i]))))) - 48);
							i += 1;
							{
								NIM_BOOL LOC14;
								LOC14 = 0;
								LOC14 = ((NI32)((NI32)(length + 0) - 1) < i);
								if (LOC14) goto LA15;
								LOC14 = !((((NU8)(frmt->data[i])) >= ((NU8)(48)) && ((NU8)(frmt->data[i])) <= ((NU8)(57))));
								LA15: ;
								if (!LOC14) goto LA16;
								goto LA10;
							}
							LA16: ;
						}
					} LA10: ;
					num = j;
					{
						NimStringDesc* LOC22;
						if (!((NI32)((argsLen0-1) + 1) < j)) goto LA20;
						LOC22 = 0;
						LOC22 = nimIntToStr(j);
						errorhandler_179143.ClEnv? errorhandler_179143.ClPrc(((NU8) 1), LOC22, NIM_FALSE, errorhandler_179143.ClEnv):((TMP3373)(errorhandler_179143.ClPrc))(((NU8) 1), LOC22, NIM_FALSE);
					}
					goto LA18;
					LA20: ;
					{
						app_179052(&result, args[(NI32)(j - 1)]);
					}
					LA18: ;
				}
				break;
				case 110:
				{
					app_179052(&result, softrnl_180455);
					i += 1;
				}
				break;
				case 78:
				{
					app_179052(&result, rnl_180454);
					i += 1;
				}
				break;
				default:
				{
					NimStringDesc* LOC27;
					LOC27 = 0;
					LOC27 = nimCharToStr(frmt->data[i]);
					errorhandler_179143.ClEnv? errorhandler_179143.ClPrc(((NU8) 1), LOC27, NIM_FALSE, errorhandler_179143.ClEnv):((TMP3374)(errorhandler_179143.ClPrc))(((NU8) 1), LOC27, NIM_FALSE);
				}
				break;
				}
			}
			LA5: ;
			start = i;
			{
				while (1) {
					if (!(i < length)) goto LA29;
					{
						if (!!(((NU8)(frmt->data[i]) == (NU8)(36)))) goto LA32;
						i += 1;
					}
					goto LA30;
					LA32: ;
					{
						goto LA28;
					}
					LA30: ;
				} LA29: ;
			} LA28: ;
			{
				NimStringDesc* LOC39;
				if (!(start <= (NI32)(i - 1))) goto LA37;
				LOC39 = 0;
				LOC39 = copyStrLast(frmt, start, (NI32)(i - 1));
				app_179060(&result, LOC39);
			}
			LA37: ;
		} LA2: ;
	}
	return result;
}

N_NIMCALL(trope179009*, torope_179082)(NI64 i) {
	trope179009* result;
	NimStringDesc* LOC1;
	result = 0;
	gcacheinttries_179341 += 1;
	LOC1 = 0;
	LOC1 = nimInt64ToStr(i);
	result = torope_179076(LOC1);
	return result;
}

N_NIMCALL(void, appf_179115)(trope179009** c, NimStringDesc* frmt, trope179009** args, NI argsLen0) {
	trope179009* LOC1;
	LOC1 = 0;
	LOC1 = ropef_179107(frmt, args, argsLen0);
	app_179052(c, LOC1);
}

N_NIMCALL(trope179009*, con_179038)(NimStringDesc* a, trope179009* b) {
	trope179009* result;
	trope179009* LOC1;
	result = 0;
	LOC1 = 0;
	LOC1 = torope_179076(a);
	result = con_179024(LOC1, b);
	return result;
}

N_NIMCALL(void, prepend_179068)(trope179009** a, trope179009* b) {
	unsureAsgnRef((void**) (&(*a)), con_179024(b, (*a)));
}

N_NIMCALL(trope179009*, con_179045)(trope179009** a, NI aLen0) {
	trope179009* result;
	result = 0;
	{
		NI i_179939;
		NI HEX3Atmp_179943;
		NI res_179946;
		i_179939 = 0;
		HEX3Atmp_179943 = 0;
		HEX3Atmp_179943 = (aLen0-1);
		res_179946 = 0;
		{
			while (1) {
				if (!(res_179946 <= HEX3Atmp_179943)) goto LA3;
				i_179939 = res_179946;
				result = con_179024(result, a[i_179939]);
				res_179946 += 1;
			} LA3: ;
		}
	}
	return result;
}

N_NIMCALL(void, writerope_180065)(FILE* f, trope179009* c) {
	TY182353* stack;
	TY179515 LOC1;
	stack = (TY182353*) newSeq((&NTI182353), 1);
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0] = c;
	asgnRefNoCycle((void**) (&stack->data[0]), LOC1[0]);
	{
		while (1) {
			trope179009* it;
			if (!(0 < stack->Sup.len)) goto LA3;
			it = pop_179533((&stack));
			{
				while (1) {
					if (!((*it).Data == NIM_NIL)) goto LA5;
					stack = (TY182353*) incrSeq(&(stack)->Sup, sizeof(trope179009*));
					asgnRefNoCycle((void**) (&stack->data[stack->Sup.len-1]), (*it).Right);
					it = (*it).Left;
				} LA5: ;
			}
			write_13265(f, (*it).Data);
		} LA3: ;
	}
}

N_NIMCALL(void, writerope_180423)(trope179009* head, NimStringDesc* filename, NIM_BOOL usewarning) {
	FILE* f;
	f = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = open_13003(&f, filename, ((NU8) 1), -1);
		if (!LOC3) goto LA4;
		{
			if (!!((head == NIM_NIL))) goto LA8;
			writerope_180065(f, head);
		}
		LA8: ;
		fclose(f);
	}
	goto LA1;
	LA4: ;
	{
		errorhandler_179143.ClEnv? errorhandler_179143.ClPrc(((NU8) 0), filename, usewarning, errorhandler_179143.ClEnv):((TMP4193)(errorhandler_179143.ClPrc))(((NU8) 0), filename, usewarning);
	}
	LA1: ;
}

static N_INLINE(NI32, updatecrc32_178019)(NI8 val, NI32 crc) {
	NI32 result;
	result = 0;
	result = (NI32)(((NI32) (crc32table_178065[((NI)((NI)(((NI) (crc)) ^ ((NI) ((NI)(((NI) (val)) & 255)))) & 255))- 0])) ^ (NI32)((NU32)(crc) >> (NU32)(((NI32) 8))));
	return result;
}

static N_INLINE(NI32, updatecrc32_178026)(NIM_CHAR val, NI32 crc) {
	NI32 result;
	result = 0;
	result = updatecrc32_178019(((NI8)(NU8)(NU)(((NI) (((NU8)(val)))))), crc);
	return result;
}

N_NIMCALL(NI32, newcrcfromropeaux_181093)(trope179009* r, NI32 startval) {
	NI32 result;
	TY182353* stack;
	TY179515 LOC1;
	result = 0;
	stack = (TY182353*) newSeq((&NTI182353), 1);
	memset((void*)LOC1, 0, sizeof(LOC1));
	LOC1[0] = r;
	asgnRefNoCycle((void**) (&stack->data[0]), LOC1[0]);
	result = startval;
	{
		while (1) {
			trope179009* it;
			NI i;
			NI l;
			if (!(0 < stack->Sup.len)) goto LA3;
			it = pop_179533((&stack));
			{
				while (1) {
					if (!((*it).Data == NIM_NIL)) goto LA5;
					stack = (TY182353*) incrSeq(&(stack)->Sup, sizeof(trope179009*));
					asgnRefNoCycle((void**) (&stack->data[stack->Sup.len-1]), (*it).Right);
					it = (*it).Left;
				} LA5: ;
			}
			i = 0;
			l = (*it).Data->Sup.len;
			{
				while (1) {
					if (!(i < l)) goto LA7;
					result = updatecrc32_178026((*it).Data->data[i], result);
					i += 1;
				} LA7: ;
			}
		} LA3: ;
	}
	return result;
}

N_NIMCALL(NI32, crcfromrope_181244)(trope179009* r) {
	NI32 result;
	result = 0;
	result = newcrcfromropeaux_181093(r, ((NI32) -1));
	return result;
}

N_NIMCALL(NIM_BOOL, writeropeifnotequal_179094)(trope179009* r, NimStringDesc* filename) {
	NIM_BOOL result;
	NI32 c;
	result = 0;
	c = 0;
	c = crcfromfile_178046(filename);
	{
		NI32 LOC3;
		LOC3 = 0;
		LOC3 = crcfromrope_181244(r);
		if (!!((c == LOC3))) goto LA4;
		writerope_180423(r, filename, NIM_FALSE);
		result = NIM_TRUE;
	}
	goto LA1;
	LA4: ;
	{
		result = NIM_FALSE;
	}
	LA1: ;
	return result;
}

N_NIMCALL(void, resetropecache_179247)(void) {
	{
		NI i_179284;
		NI res_179289;
		i_179284 = 0;
		res_179289 = 0;
		{
			while (1) {
				if (!(((NI) (res_179289)) <= 4095)) goto LA3;
				i_179284 = res_179289;
				asgnRefNoCycle((void**) (&cache_179242[(i_179284)- 0]), NIM_NIL);
				res_179289 += 1;
			} LA3: ;
		}
	}
}
NIM_EXTERNC N_NOINLINE(void, compiler_ropesInit)(void) {
	gcachetries_179333 = 0;
	gcachemisses_179337 = 0;
	gcacheinttries_179341 = 0;
	asgnRefNoCycle((void**) (&rnl_180454), newrope_179176(tnl_176629));
	asgnRefNoCycle((void**) (&softrnl_180455), newrope_179176(tnl_176629));
}

NIM_EXTERNC N_NOINLINE(void, compiler_ropesDatInit)(void) {
static TNimNode* TMP128[4];
static TNimNode TMP57[5];
NTI179009.size = sizeof(trope179009);
NTI179009.kind = 17;
NTI179009.base = (&NTI3411);
NTI179009.flags = 2;
TMP128[0] = &TMP57[1];
TMP57[1].kind = 1;
TMP57[1].offset = offsetof(trope179009, Left);
TMP57[1].typ = (&NTI179007);
TMP57[1].name = "left";
TMP128[1] = &TMP57[2];
TMP57[2].kind = 1;
TMP57[2].offset = offsetof(trope179009, Right);
TMP57[2].typ = (&NTI179007);
TMP57[2].name = "right";
TMP128[2] = &TMP57[3];
TMP57[3].kind = 1;
TMP57[3].offset = offsetof(trope179009, Length);
TMP57[3].typ = (&NTI108);
TMP57[3].name = "length";
TMP128[3] = &TMP57[4];
TMP57[4].kind = 1;
TMP57[4].offset = offsetof(trope179009, Data);
TMP57[4].typ = (&NTI149);
TMP57[4].name = "data";
TMP57[0].len = 4; TMP57[0].kind = 2; TMP57[0].sons = &TMP128[0];
NTI179009.node = &TMP57[0];
NTI179007.size = sizeof(trope179009*);
NTI179007.kind = 22;
NTI179007.base = (&NTI179009);
NTI179007.flags = 2;
NTI179007.marker = TMP129;
}

