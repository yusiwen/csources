/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct TY270019 TY270019;
typedef struct tsourcefile270008 tsourcefile270008;
typedef struct TY119808 TY119808;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tcell45348 tcell45348;
typedef struct tcellseq45364 tcellseq45364;
typedef struct tgcheap47616 tgcheap47616;
typedef struct tcellset45360 tcellset45360;
typedef struct tpagedesc45356 tpagedesc45356;
typedef struct tmemregion27610 tmemregion27610;
typedef struct tsmallchunk26840 tsmallchunk26840;
typedef struct tllchunk27604 tllchunk27604;
typedef struct tbigchunk26842 tbigchunk26842;
typedef struct tintset26817 tintset26817;
typedef struct ttrunk26813 ttrunk26813;
typedef struct tavlnode27608 tavlnode27608;
typedef struct tgcstat47614 tgcstat47614;
typedef struct tlineinfo180340 tlineinfo180340;
typedef struct tsym208848 tsym208848;
typedef struct tident184021 tident184021;
typedef struct TY117604 TY117604;
typedef struct baselexer268024 baselexer268024;
typedef struct TNimObject TNimObject;
typedef struct streamobj135035 streamobj135035;
typedef struct filestreamobj135742 filestreamobj135742;
typedef struct slice84973 slice84973;
typedef struct tidobj184015 tidobj184015;
typedef struct ttypeseq208850 ttypeseq208850;
typedef struct ttype208854 ttype208854;
typedef struct tscope208842 tscope208842;
typedef struct TY208949 TY208949;
typedef struct tinstantiation208838 tinstantiation208838;
typedef struct tstrtable208822 tstrtable208822;
typedef struct tsymseq208820 tsymseq208820;
typedef struct tnode208818 tnode208818;
typedef struct tloc208832 tloc208832;
typedef struct trope177009 trope177009;
typedef struct tlib208836 tlib208836;
typedef struct tbasechunk26838 tbasechunk26838;
typedef struct tfreecell26830 tfreecell26830;
typedef struct tnodeseq208812 tnodeseq208812;
typedef struct TY208938 TY208938;
typedef struct tlistentry127022 tlistentry127022;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
struct  tsourcefile270008  {
TY119808* Lines;
NIM_BOOL Dirty;
NIM_BOOL Isnimfixfile;
NimStringDesc* Fullpath;
NimStringDesc* Newline;
NI32 Fileidx;
};
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
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tcell45348  {
NI Refcount;
TNimType* Typ;
};
struct  tcellseq45364  {
NI Len;
NI Cap;
tcell45348** D;
};
struct  tcellset45360  {
NI Counter;
NI Max;
tpagedesc45356* Head;
tpagedesc45356** Data;
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
tcellseq45364 Zct;
tcellseq45364 Decstack;
tcellset45360 Cycleroots;
tcellseq45364 Tempstack;
NI Recgclock;
tmemregion27610 Region;
tgcstat47614 Stat;
};
struct  tlineinfo180340  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct TY117604 {
NimStringDesc* Field0;
NimStringDesc* Field1;
NimStringDesc* Field2;
};
struct  TNimObject  {
TNimType* m_type;
};
struct  baselexer268024  {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
streamobj135035* Input;
NI Linenumber;
NI Sentinel;
NI Linestart;
NIM_BOOL Fileopened;
};
struct  slice84973  {
NI A;
NI B;
};
struct  tidobj184015  {
  TNimObject Sup;
NI Id;
};
struct  tident184021  {
  tidobj184015 Sup;
NimStringDesc* S;
tident184021* Next;
NI H;
};
struct  tstrtable208822  {
NI Counter;
tsymseq208820* Data;
};
struct  tloc208832  {
NU8 K;
NU8 S;
NU16 Flags;
ttype208854* T;
trope177009* R;
trope177009* Heaproot;
};
struct  tsym208848  {
  tidobj184015 Sup;
NU8 Kind;
union{
struct {ttypeseq208850* Typeinstcache;
tscope208842* Typscope;
} S1;
struct {TY208949* Procinstcache;
tscope208842* Scope;
} S2;
struct {TY208949* Usedgenerics;
tstrtable208822 Tab;
} S3;
struct {tsym208848* Guard;
} S4;
} kindU;
NU16 Magic;
ttype208854* Typ;
tident184021* Name;
tlineinfo180340 Info;
tsym208848* Owner;
NU32 Flags;
tnode208818* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc208832 Loc;
tlib208836* Annex;
tnode208818* Constraint;
};
typedef NI TY26820[16];
struct  tpagedesc45356  {
tpagedesc45356* Next;
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
typedef N_NIMCALL_PTR(void, TY135036) (streamobj135035* s);
typedef N_NIMCALL_PTR(NIM_BOOL, TY135040) (streamobj135035* s);
typedef N_NIMCALL_PTR(void, TY135044) (streamobj135035* s, NI pos);
typedef N_NIMCALL_PTR(NI, TY135049) (streamobj135035* s);
typedef N_NIMCALL_PTR(NI, TY135053) (streamobj135035* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY135059) (streamobj135035* s, void* buffer, NI buflen);
typedef N_NIMCALL_PTR(void, TY135065) (streamobj135035* s);
struct  streamobj135035  {
  TNimObject Sup;
TY135036 Closeimpl;
TY135040 Atendimpl;
TY135044 Setpositionimpl;
TY135049 Getpositionimpl;
TY135053 Readdataimpl;
TY135059 Writedataimpl;
TY135065 Flushimpl;
};
struct  filestreamobj135742  {
  streamobj135035 Sup;
FILE* F;
};
struct  ttype208854  {
  tidobj184015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq208850* Sons;
tnode208818* N;
tsym208848* Owner;
tsym208848* Sym;
tsym208848* Destructor;
tsym208848* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc208832 Loc;
};
struct  tscope208842  {
NI Depthlevel;
tstrtable208822 Symbols;
tnodeseq208812* Usingsyms;
tscope208842* Parent;
};
struct  tinstantiation208838  {
tsym208848* Sym;
ttypeseq208850* Concretetypes;
TY208938* Usedby;
};
struct  tnode208818  {
ttype208854* Typ;
tlineinfo180340 Info;
NU16 Flags;
NU8 Kind;
union{
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym208848* Sym;
} S4;
struct {tident184021* Ident;
} S5;
struct {tnodeseq208812* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
struct  trope177009  {
  TNimObject Sup;
trope177009* Left;
trope177009* Right;
NI Length;
NimStringDesc* Data;
};
struct  tlistentry127022  {
  TNimObject Sup;
tlistentry127022* Prev;
tlistentry127022* Next;
};
struct  tlib208836  {
  tlistentry127022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope177009* Name;
tnode208818* Path;
};
struct  tfreecell26830  {
tfreecell26830* Next;
NI Zerofield;
};
struct TY119808 {
  TGenericSeq Sup;
  NimStringDesc* data[SEQ_DECL_SIZE];
};
struct TY270019 {
  TGenericSeq Sup;
  tsourcefile270008 data[SEQ_DECL_SIZE];
};
struct ttypeseq208850 {
  TGenericSeq Sup;
  ttype208854* data[SEQ_DECL_SIZE];
};
struct TY208949 {
  TGenericSeq Sup;
  tinstantiation208838* data[SEQ_DECL_SIZE];
};
struct tsymseq208820 {
  TGenericSeq Sup;
  tsym208848* data[SEQ_DECL_SIZE];
};
struct tnodeseq208812 {
  TGenericSeq Sup;
  tnode208818* data[SEQ_DECL_SIZE];
};
struct TY208938 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP858)(void* p, NI op);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
static N_INLINE(tcell45348*, usrtocell_49246)(void* usr);
static N_INLINE(void, rtladdzct_50804)(tcell45348* c);
N_NOINLINE(void, addzct_49217)(tcellseq45364* s, tcell45348* c);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(void, replacedeprecated_270247)(tlineinfo180340 info, tident184021* oldsym, tident184021* newsym);
N_NIMCALL(void, loadfile_270045)(tlineinfo180340 info);
N_NIMCALL(TGenericSeq*, setLengthSeq)(TGenericSeq* seq, NI elemsize, NI newlen);
N_NIMCALL(NimStringDesc*, tofullpath_181640)(NI32 fileidx);
N_NIMCALL(NimStringDesc*, copyStringRC1)(NimStringDesc* src);
N_NIMCALL(void, nossplitFile)(NimStringDesc* path, TY117604* Result);
static N_INLINE(NIM_BOOL, eqStrings)(NimStringDesc* a, NimStringDesc* b);
N_NIMCALL(FILE*, open_13017)(NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, readline_13289)(FILE* f, NimStringDesc** line);
N_NIMCALL(TGenericSeq*, incrSeq)(TGenericSeq* seq, NI elemsize);
N_NIMCALL(void, open_268040)(baselexer268024* l, streamobj135035* input, NI buflen);
N_NIMCALL(filestreamobj135742*, newfilestream_135836)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(void, close_268050)(baselexer268024* l);
N_NIMCALL(NI, identlen_270178)(NimStringDesc* line, NI start);
N_NIMCALL(NI, nsuCmpIgnoreStyle)(NimStringDesc* a, NimStringDesc* b);
static N_INLINE(NimStringDesc*, HEX5BHEX5D_84966)(NimStringDesc* s, slice84973 x);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI start_75628, NI last);
N_NIMCALL(NimStringDesc*, copyStrLast)(NimStringDesc* s, NI first, NI last);
static N_INLINE(slice84973, HEX2EHEX2E_104074)(NI a_104078, NI b_104080);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
STRING_LITERAL(TMP2720, ".nimfix", 7);
STRING_LITERAL(TMP2728, "\015\012", 2);
STRING_LITERAL(TMP2729, "\012", 1);
TY270019* gsourcefiles_270040;
TNimType NTI270008; /* TSourceFile */
extern TNimType NTI119808; /* seq[string] */
extern TNimType NTI138; /* bool */
extern TNimType NTI149; /* string */
extern TNimType NTI114; /* int32 */
TNimType NTI270019; /* seq[TSourceFile] */
extern tgcheap47616 gch_47644;
extern TNimType NTI268024; /* BaseLexer */
N_NIMCALL(void, TMP858)(void* p, NI op) {
	TY270019* a;
	NI LOC1;
	a = (TY270019*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Lines, op);
	nimGCvisit((void*)a->data[LOC1].Fullpath, op);
	nimGCvisit((void*)a->data[LOC1].Newline, op);
	}
}

static N_INLINE(tcell45348*, usrtocell_49246)(void* usr) {
	tcell45348* result;
	result = 0;
	result = ((tcell45348*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell45348))))));
	return result;
}

static N_INLINE(void, rtladdzct_50804)(tcell45348* c) {
	addzct_49217((&gch_47644.Zct), c);
}

static N_INLINE(void, nimGCunrefNoCycle)(void* p) {
	tcell45348* c;
	c = usrtocell_49246(p);
	{
		(*c).Refcount -= 8;
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		rtladdzct_50804(c);
	}
	LA3: ;
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

N_NIMCALL(void, loadfile_270045)(tlineinfo180340 info) {
	NI32 i;
	i = info.Fileindex;
	{
		if (!(gsourcefiles_270040->Sup.len <= ((NI) (i)))) goto LA3;
		gsourcefiles_270040 = (TY270019*) setLengthSeq(&(gsourcefiles_270040)->Sup, sizeof(tsourcefile270008), ((NI) ((NI32)(i + ((NI32) 1)))));
	}
	LA3: ;
	{
		NimStringDesc* path;
		NimStringDesc* LOC9;
		TY117604 LOC10;
		baselexer268024 lex;
		filestreamobj135742* LOC16;
		streamobj135035* LOC17;
		NI pos;
		if (!gsourcefiles_270040->data[i].Lines == 0) goto LA7;
		gsourcefiles_270040->data[i].Fileidx = info.Fileindex;
		if (gsourcefiles_270040->data[i].Lines) nimGCunrefNoCycle(gsourcefiles_270040->data[i].Lines);
		gsourcefiles_270040->data[i].Lines = (TY119808*) newSeqRC1((&NTI119808), 0);
		path = tofullpath_181640(info.Fileindex);
		LOC9 = 0;
		LOC9 = gsourcefiles_270040->data[i].Fullpath; gsourcefiles_270040->data[i].Fullpath = copyStringRC1(path);
		if (LOC9) nimGCunrefNoCycle(LOC9);
		memset((void*)(&LOC10), 0, sizeof(LOC10));
		nossplitFile(path, (&LOC10));
		gsourcefiles_270040->data[i].Isnimfixfile = eqStrings(LOC10.Field2, ((NimStringDesc*) &TMP2720));
		{
			NimStringDesc* line_270108;
			FILE* f_270146;
			NimStringDesc* res_270148;
			line_270108 = 0;
			f_270146 = open_13017(path, ((NU8) 0), 8000);
			res_270148 = rawNewString(80);
			{
				while (1) {
					NIM_BOOL LOC14;
					NimStringDesc* LOC15;
					LOC14 = 0;
					LOC14 = readline_13289(f_270146, (&res_270148));
					if (!LOC14) goto LA13;
					line_270108 = res_270148;
					gsourcefiles_270040->data[i].Lines = (TY119808*) incrSeq(&(gsourcefiles_270040->data[i].Lines)->Sup, sizeof(NimStringDesc*));
					LOC15 = 0;
					LOC15 = gsourcefiles_270040->data[i].Lines->data[gsourcefiles_270040->data[i].Lines->Sup.len-1]; gsourcefiles_270040->data[i].Lines->data[gsourcefiles_270040->data[i].Lines->Sup.len-1] = copyStringRC1(line_270108);
					if (LOC15) nimGCunrefNoCycle(LOC15);
				} LA13: ;
			}
			fclose(f_270146);
		}
		memset((void*)(&lex), 0, sizeof(lex));
		lex.Sup.m_type = (&NTI268024);
		LOC16 = 0;
		LOC16 = newfilestream_135836(path, ((NU8) 0));
		LOC17 = 0;
		LOC17 = &LOC16->Sup;
		open_268040((&lex), LOC17, 8192);
		pos = lex.Bufpos;
		{
			while (1) {
				switch (((NU8)(lex.Buf[pos]))) {
				case 13:
				{
					NimStringDesc* LOC21;
					LOC21 = 0;
					LOC21 = gsourcefiles_270040->data[i].Newline; gsourcefiles_270040->data[i].Newline = copyStringRC1(((NimStringDesc*) &TMP2728));
					if (LOC21) nimGCunrefNoCycle(LOC21);
					goto LA18;
				}
				break;
				case 10:
				case 0:
				{
					NimStringDesc* LOC23;
					LOC23 = 0;
					LOC23 = gsourcefiles_270040->data[i].Newline; gsourcefiles_270040->data[i].Newline = copyStringRC1(((NimStringDesc*) &TMP2729));
					if (LOC23) nimGCunrefNoCycle(LOC23);
					goto LA18;
				}
				break;
				default:
				{
				}
				break;
				}
				pos += 1;
			}
		} LA18: ;
		close_268050((&lex));
	}
	LA7: ;
}

N_NIMCALL(NI, identlen_270178)(NimStringDesc* line, NI start) {
	NI result;
	result = 0;
	{
		while (1) {
			NIM_BOOL LOC3;
			LOC3 = 0;
			LOC3 = ((NI32)(start + result) < line->Sup.len);
			if (!(LOC3)) goto LA4;
			LOC3 = (((NU8)(line->data[(NI32)(start + result)])) >= ((NU8)(97)) && ((NU8)(line->data[(NI32)(start + result)])) <= ((NU8)(122)) || ((NU8)(line->data[(NI32)(start + result)])) >= ((NU8)(65)) && ((NU8)(line->data[(NI32)(start + result)])) <= ((NU8)(90)) || ((NU8)(line->data[(NI32)(start + result)])) >= ((NU8)(48)) && ((NU8)(line->data[(NI32)(start + result)])) <= ((NU8)(57)) || ((NU8)(line->data[(NI32)(start + result)])) >= ((NU8)(128)) && ((NU8)(line->data[(NI32)(start + result)])) <= ((NU8)(255)) || ((NU8)(line->data[(NI32)(start + result)])) == ((NU8)(95)));
			LA4: ;
			if (!LOC3) goto LA2;
			result += 1;
		} LA2: ;
	}
	return result;
}

static N_INLINE(NimStringDesc*, HEX5BHEX5D_84966)(NimStringDesc* s, slice84973 x) {
	NimStringDesc* result;
	NI LOC1;
	NI LOC7;
	result = 0;
	LOC1 = 0;
	{
		if (!(0 <= x.A)) goto LA4;
		LOC1 = x.A;
	}
	goto LA2;
	LA4: ;
	{
		LOC1 = (NI32)(s->Sup.len + x.A);
	}
	LA2: ;
	LOC7 = 0;
	{
		if (!(0 <= x.B)) goto LA10;
		LOC7 = x.B;
	}
	goto LA8;
	LA10: ;
	{
		LOC7 = (NI32)(s->Sup.len + x.B);
	}
	LA8: ;
	result = copyStrLast(s, LOC1, LOC7);
	return result;
}

static N_INLINE(slice84973, HEX2EHEX2E_104074)(NI a_104078, NI b_104080) {
	slice84973 result;
	memset((void*)(&result), 0, sizeof(result));
	result.A = a_104078;
	result.B = b_104080;
	return result;
}

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src) {
	{
		tcell45348* c;
		if (!!((src == NIM_NIL))) goto LA3;
		c = usrtocell_49246(src);
		(*c).Refcount += 8;
	}
	LA3: ;
	{
		tcell45348* c;
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

N_NIMCALL(void, replacedeprecated_270247)(tlineinfo180340 info, tident184021* oldsym, tident184021* newsym) {
	NimStringDesc* line;
	NI first;
	NI last;
	NI LOC17;
{	loadfile_270045(info);
	line = gsourcefiles_270040->data[info.Fileindex].Lines->data[(NI16)(info.Line - ((NI16) 1))];
	first = ((((NI) (info.Col)) <= line->Sup.len) ? ((NI) (info.Col)) : line->Sup.len);
	{
		if (!(first < 0)) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		while (1) {
			NIM_BOOL LOC7;
			LOC7 = 0;
			LOC7 = (0 < first);
			if (!(LOC7)) goto LA8;
			LOC7 = (((NU8)(line->data[(NI32)(first - 1)])) >= ((NU8)(97)) && ((NU8)(line->data[(NI32)(first - 1)])) <= ((NU8)(122)) || ((NU8)(line->data[(NI32)(first - 1)])) >= ((NU8)(65)) && ((NU8)(line->data[(NI32)(first - 1)])) <= ((NU8)(90)) || ((NU8)(line->data[(NI32)(first - 1)])) >= ((NU8)(48)) && ((NU8)(line->data[(NI32)(first - 1)])) <= ((NU8)(57)) || ((NU8)(line->data[(NI32)(first - 1)])) >= ((NU8)(128)) && ((NU8)(line->data[(NI32)(first - 1)])) <= ((NU8)(255)) || ((NU8)(line->data[(NI32)(first - 1)])) == ((NU8)(95)));
			LA8: ;
			if (!LOC7) goto LA6;
			first -= 1;
		} LA6: ;
	}
	{
		if (!(first < 0)) goto LA11;
		goto BeforeRet;
	}
	LA11: ;
	{
		if (!((NU8)(line->data[first]) == (NU8)(96))) goto LA15;
		first += 1;
	}
	LA15: ;
	LOC17 = 0;
	LOC17 = identlen_270178(line, first);
	last = (NI32)((NI32)(first + LOC17) - 1);
	{
		slice84973 LOC20;
		NimStringDesc* LOC21;
		NI LOC22;
		NimStringDesc* x;
		NimStringDesc* LOC25;
		NimStringDesc* LOC26;
		NimStringDesc* LOC27;
		LOC20 = HEX2EHEX2E_104074(first, last);
		LOC21 = 0;
		LOC21 = HEX5BHEX5D_84966(line, LOC20);
		LOC22 = 0;
		LOC22 = nsuCmpIgnoreStyle(LOC21, (*oldsym).S);
		if (!(LOC22 == 0)) goto LA23;
		LOC25 = 0;
		LOC26 = 0;
		LOC26 = copyStrLast(line, 0, (NI32)(first - 1));
		LOC27 = 0;
		LOC27 = copyStr(line, (NI32)(last + 1));
		LOC25 = rawNewString(LOC26->Sup.len + (*newsym).S->Sup.len + LOC27->Sup.len + 0);
appendString(LOC25, LOC26);
appendString(LOC25, (*newsym).S);
appendString(LOC25, LOC27);
		x = LOC25;
		asgnRefNoCycle((void**) (&gsourcefiles_270040->data[info.Fileindex].Lines->data[(NI16)(info.Line - ((NI16) 1))]), x);
		gsourcefiles_270040->data[info.Fileindex].Dirty = NIM_TRUE;
	}
	LA23: ;
	}BeforeRet: ;
}

N_NIMCALL(void, replacedeprecated_270324)(tlineinfo180340 info, tsym208848* oldsym, tsym208848* newsym) {
	replacedeprecated_270247(info, (*oldsym).Name, (*newsym).Name);
}
NIM_EXTERNC N_NOINLINE(void, compiler_prettybaseInit)(void) {
	if (gsourcefiles_270040) nimGCunrefNoCycle(gsourcefiles_270040);
	gsourcefiles_270040 = (TY270019*) newSeqRC1((&NTI270019), 0);
}

NIM_EXTERNC N_NOINLINE(void, compiler_prettybaseDatInit)(void) {
static TNimNode* TMP857[6];
static TNimNode TMP853[7];
NTI270008.size = sizeof(tsourcefile270008);
NTI270008.kind = 18;
NTI270008.base = 0;
NTI270008.flags = 2;
TMP857[0] = &TMP853[1];
TMP853[1].kind = 1;
TMP853[1].offset = offsetof(tsourcefile270008, Lines);
TMP853[1].typ = (&NTI119808);
TMP853[1].name = "lines";
TMP857[1] = &TMP853[2];
TMP853[2].kind = 1;
TMP853[2].offset = offsetof(tsourcefile270008, Dirty);
TMP853[2].typ = (&NTI138);
TMP853[2].name = "dirty";
TMP857[2] = &TMP853[3];
TMP853[3].kind = 1;
TMP853[3].offset = offsetof(tsourcefile270008, Isnimfixfile);
TMP853[3].typ = (&NTI138);
TMP853[3].name = "isNimfixFile";
TMP857[3] = &TMP853[4];
TMP853[4].kind = 1;
TMP853[4].offset = offsetof(tsourcefile270008, Fullpath);
TMP853[4].typ = (&NTI149);
TMP853[4].name = "fullpath";
TMP857[4] = &TMP853[5];
TMP853[5].kind = 1;
TMP853[5].offset = offsetof(tsourcefile270008, Newline);
TMP853[5].typ = (&NTI149);
TMP853[5].name = "newline";
TMP857[5] = &TMP853[6];
TMP853[6].kind = 1;
TMP853[6].offset = offsetof(tsourcefile270008, Fileidx);
TMP853[6].typ = (&NTI114);
TMP853[6].name = "fileIdx";
TMP853[0].len = 6; TMP853[0].kind = 2; TMP853[0].sons = &TMP857[0];
NTI270008.node = &TMP853[0];
NTI270019.size = sizeof(TY270019*);
NTI270019.kind = 24;
NTI270019.base = (&NTI270008);
NTI270019.flags = 2;
NTI270019.marker = TMP858;
}

