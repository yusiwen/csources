/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"
typedef struct trope178009 trope178009;
typedef struct TY485151 TY485151;
typedef struct tcgen485035 tcgen485035;
typedef struct TGenericSeq TGenericSeq;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tpasscontext264005 tpasscontext264005;
typedef struct TNimObject TNimObject;
typedef struct tsym209848 tsym209848;
typedef struct NimStringDesc NimStringDesc;
typedef struct tidtable209866 tidtable209866;
typedef struct tidpairseq209864 tidpairseq209864;
typedef struct tidpair209862 tidpair209862;
typedef struct tidobj185015 tidobj185015;
typedef struct intset206056 intset206056;
typedef struct ttrunk206052 ttrunk206052;
typedef struct ttrunkseq206054 ttrunkseq206054;
typedef struct tlinkedlist128028 tlinkedlist128028;
typedef struct tlistentry128022 tlistentry128022;
typedef struct tcproc485031 tcproc485031;
typedef struct ttypeseq209850 ttypeseq209850;
typedef struct ttype209854 ttype209854;
typedef struct tnodetable209878 tnodetable209878;
typedef struct tnodepairseq209876 tnodepairseq209876;
typedef struct tnodepair209874 tnodepair209874;
typedef struct tnode209818 tnode209818;
typedef struct tsymseq209820 tsymseq209820;
typedef struct tnodeseq209812 tnodeseq209812;
typedef struct TY181353 TY181353;
typedef struct TY485102 TY485102;
typedef struct tblock485029 tblock485029;
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
typedef struct tscope209842 tscope209842;
typedef struct TY209949 TY209949;
typedef struct tinstantiation209838 tinstantiation209838;
typedef struct tstrtable209822 tstrtable209822;
typedef struct tident185021 tident185021;
typedef struct tlineinfo181340 tlineinfo181340;
typedef struct tloc209832 tloc209832;
typedef struct tlib209836 tlib209836;
typedef struct tbasechunk26838 tbasechunk26838;
typedef struct tfreecell26830 tfreecell26830;
typedef struct TY209938 TY209938;
struct  TGenericSeq  {
NI len;
NI reserved;
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
struct  TNimObject  {
TNimType* m_type;
};
struct  tpasscontext264005  {
  TNimObject Sup;
NIM_BOOL Fromcache;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef trope178009* tcfilesections485019[18];
struct  tidpair209862  {
tidobj185015* Key;
TNimObject* Val;
};
struct  tidtable209866  {
NI Counter;
tidpairseq209864* Data;
};
struct  intset206056  {
NI Counter;
NI Max;
ttrunk206052* Head;
ttrunkseq206054* Data;
};
struct  tlinkedlist128028  {
tlistentry128022* Head;
tlistentry128022* Tail;
NI Counter;
};
struct  tnodepair209874  {
NI H;
tnode209818* Key;
NI Val;
};
struct  tnodetable209878  {
NI Counter;
tnodepairseq209876* Data;
};
typedef trope178009* TY485139[10];
struct  tcgen485035  {
  tpasscontext264005 Sup;
tsym209848* Module;
NimStringDesc* Filename;
tcfilesections485019 S;
NIM_BOOL Preventstacktrace;
NIM_BOOL Usesthreadvars;
NIM_BOOL Framedeclared;
NIM_BOOL Isheaderfile;
NIM_BOOL Includesstringh;
NIM_BOOL Objhaskidsvalid;
NimStringDesc* Cfilename;
tidtable209866 Typecache;
tidtable209866 Forwtypecache;
intset206056 Declaredthings;
intset206056 Declaredprotos;
tlinkedlist128028 Headerfiles;
intset206056 Typeinfomarker;
tcproc485031* Initproc;
tcproc485031* Postinitproc;
tcproc485031* Preinitproc;
ttypeseq209850* Typestack;
tnodetable209878 Datacache;
tsymseq209820* Forwardedprocs;
NI Typenodes;
NI Nimtypes;
trope178009* Typenodesname;
trope178009* Nimtypesname;
NI Labels;
TY485139 Extensionloaders;
trope178009* Injectstmt;
};
typedef trope178009* tcprocsections485023[3];
struct  tblock485029  {
NI Id;
trope178009* Label;
tcprocsections485023 Sections;
NIM_BOOL Isloop;
NI16 Nestedtrystmts;
NI16 Nestedexceptstmts;
NI16 Framelen;
};
struct  tcproc485031  {
tsym209848* Prc;
NIM_BOOL Beforeretneeded;
NIM_BOOL Threadvaraccessed;
tnodeseq209812* Nestedtrystmts;
NI Inexceptblock;
TY181353* Finallysafepoints;
NI Labels;
TY485102* Blocks;
NI Breakidx;
NU32 Options;
NI Maxframelen;
tcgen485035* Module;
NI Withinloop;
NI Splitdecls;
NI Gcframeid;
trope178009* Gcframetype;
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
struct  tidobj185015  {
  TNimObject Sup;
NI Id;
};
struct  tstrtable209822  {
NI Counter;
tsymseq209820* Data;
};
struct  tlineinfo181340  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  tloc209832  {
NU8 K;
NU8 S;
NU16 Flags;
ttype209854* T;
trope178009* R;
trope178009* Heaproot;
};
struct  tsym209848  {
  tidobj185015 Sup;
NU8 Kind;
union{
struct {ttypeseq209850* Typeinstcache;
tscope209842* Typscope;
} S1;
struct {TY209949* Procinstcache;
tscope209842* Scope;
} S2;
struct {TY209949* Usedgenerics;
tstrtable209822 Tab;
} S3;
struct {tsym209848* Guard;
} S4;
} kindU;
NU16 Magic;
ttype209854* Typ;
tident185021* Name;
tlineinfo181340 Info;
tsym209848* Owner;
NU32 Flags;
tnode209818* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc209832 Loc;
tlib209836* Annex;
tnode209818* Constraint;
};
struct  trope178009  {
  TNimObject Sup;
trope178009* Left;
trope178009* Right;
NI Length;
NimStringDesc* Data;
};
typedef NI TY26820[16];
struct  ttrunk206052  {
ttrunk206052* Next;
NI Key;
TY26820 Bits;
};
struct  tlistentry128022  {
  TNimObject Sup;
tlistentry128022* Prev;
tlistentry128022* Next;
};
struct  ttype209854  {
  tidobj185015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq209850* Sons;
tnode209818* N;
tsym209848* Owner;
tsym209848* Sym;
tsym209848* Destructor;
tsym209848* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc209832 Loc;
};
struct  tnode209818  {
ttype209854* Typ;
tlineinfo181340 Info;
NU16 Flags;
NU8 Kind;
union{
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym209848* Sym;
} S4;
struct {tident185021* Ident;
} S5;
struct {tnodeseq209812* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
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
struct  tscope209842  {
NI Depthlevel;
tstrtable209822 Symbols;
tnodeseq209812* Usingsyms;
tscope209842* Parent;
};
struct  tinstantiation209838  {
tsym209848* Sym;
ttypeseq209850* Concretetypes;
TY209938* Usedby;
};
struct  tident185021  {
  tidobj185015 Sup;
NimStringDesc* S;
tident185021* Next;
NI H;
};
struct  tlib209836  {
  tlistentry128022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope178009* Name;
tnode209818* Path;
};
struct  tfreecell26830  {
tfreecell26830* Next;
NI Zerofield;
};
struct TY485151 {
  TGenericSeq Sup;
  tcgen485035* data[SEQ_DECL_SIZE];
};
struct tidpairseq209864 {
  TGenericSeq Sup;
  tidpair209862 data[SEQ_DECL_SIZE];
};
struct ttrunkseq206054 {
  TGenericSeq Sup;
  ttrunk206052* data[SEQ_DECL_SIZE];
};
struct ttypeseq209850 {
  TGenericSeq Sup;
  ttype209854* data[SEQ_DECL_SIZE];
};
struct tnodepairseq209876 {
  TGenericSeq Sup;
  tnodepair209874 data[SEQ_DECL_SIZE];
};
struct tsymseq209820 {
  TGenericSeq Sup;
  tsym209848* data[SEQ_DECL_SIZE];
};
struct tnodeseq209812 {
  TGenericSeq Sup;
  tnode209818* data[SEQ_DECL_SIZE];
};
struct TY181353 {
  TGenericSeq Sup;
  trope178009* data[SEQ_DECL_SIZE];
};
struct TY485102 {
  TGenericSeq Sup;
  tblock485029 data[SEQ_DECL_SIZE];
};
struct TY209949 {
  TGenericSeq Sup;
  tinstantiation209838* data[SEQ_DECL_SIZE];
};
struct TY209938 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, nimGCvisit)(void* d, NI op);
N_NIMCALL(void, TMP968)(void* p, NI op);
N_NIMCALL(void, TMP969)(void* p, NI op);
N_NIMCALL(void, TMP973)(void* p, NI op);
N_NIMCALL(void, TMP974)(void* p, NI op);
static N_INLINE(void, nimGCunref)(void* p);
static N_INLINE(void, decref_51204)(tcell45348* c);
static N_INLINE(void, rtladdzct_50804)(tcell45348* c);
N_NOINLINE(void, addzct_49217)(tcellseq45364* s, tcell45348* c);
static N_INLINE(NIM_BOOL, canbecycleroot_49267)(tcell45348* c);
static N_INLINE(void, rtladdcycleroot_50029)(tcell45348* c);
N_NOINLINE(void, incl_46271)(tcellset45360* s, tcell45348* cell);
static N_INLINE(tcell45348*, usrtocell_49246)(void* usr);
N_NIMCALL(void*, newSeqRC1)(TNimType* typ, NI len);
N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, asgnRefNoCycle)(void** dest, void* src);
static N_INLINE(void, asgnRef)(void** dest, void* src);
static N_INLINE(void, incref_51625)(tcell45348* c);
static N_INLINE(void, nimGCunrefNoCycle)(void* p);
trope178009* mainmodprocs_485146;
trope178009* mainmodinit_485147;
trope178009* othermodsinit_485148;
trope178009* maindatinit_485149;
trope178009* gmapping_485150;
TY485151* gmodules_485172;
extern TNimType NTI264005; /* TPassContext */
TNimType NTI485035; /* TCGen */
extern TNimType NTI209816; /* PSym */
extern TNimType NTI149; /* string */
extern TNimType NTI178007; /* PRope */
TNimType NTI485019; /* TCFileSections */
extern TNimType NTI138; /* bool */
extern TNimType NTI209866; /* TIdTable */
extern TNimType NTI206056; /* IntSet */
extern TNimType NTI128028; /* TLinkedList */
TNimType NTI485031; /* TCProc */
extern TNimType NTI209812; /* TNodeSeq */
extern TNimType NTI108; /* int */
extern TNimType NTI181353; /* seq[PRope] */
extern TNimType NTI3407; /* Natural */
TNimType NTI485029; /* TBlock */
TNimType NTI485023; /* TCProcSections */
extern TNimType NTI112; /* int16 */
TNimType NTI485102; /* seq[TBlock] */
extern TNimType NTI170016; /* TOptions */
TNimType NTI485027; /* BProc */
extern TNimType NTI209850; /* TTypeSeq */
extern TNimType NTI209878; /* TNodeTable */
extern TNimType NTI209820; /* TSymSeq */
TNimType NTI485139; /* array[48..57, PRope] */
TNimType NTI485025; /* BModule */
TNimType NTI485151; /* seq[BModule] */
extern tgcheap47616 gch_47644;
NI gforwardedprocscounter_485173;
extern NU32 goptions_170126;
N_NIMCALL(void, TMP968)(void* p, NI op) {
	TY485102* a;
	NI LOC1;
	NI LOC2;
	a = (TY485102*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1].Label, op);
	LOC2 = 0;
	for (LOC2 = 0; LOC2 < 3; LOC2++) {
	nimGCvisit((void*)a->data[LOC1].Sections[LOC2], op);
	}
	}
}
N_NIMCALL(void, TMP969)(void* p, NI op) {
	tcproc485031* a;
	a = (tcproc485031*)p;
	nimGCvisit((void*)(*a).Prc, op);
	nimGCvisit((void*)(*a).Nestedtrystmts, op);
	nimGCvisit((void*)(*a).Finallysafepoints, op);
	nimGCvisit((void*)(*a).Blocks, op);
	nimGCvisit((void*)(*a).Module, op);
	nimGCvisit((void*)(*a).Gcframetype, op);
}
N_NIMCALL(void, TMP973)(void* p, NI op) {
	tcgen485035* a;
	NI LOC1;
	NI LOC2;
	a = (tcgen485035*)p;
	nimGCvisit((void*)(*a).Module, op);
	nimGCvisit((void*)(*a).Filename, op);
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < 18; LOC1++) {
	nimGCvisit((void*)(*a).S[LOC1], op);
	}
	nimGCvisit((void*)(*a).Cfilename, op);
	nimGCvisit((void*)(*a).Typecache.Data, op);
	nimGCvisit((void*)(*a).Forwtypecache.Data, op);
	nimGCvisit((void*)(*a).Declaredthings.Head, op);
	nimGCvisit((void*)(*a).Declaredthings.Data, op);
	nimGCvisit((void*)(*a).Declaredprotos.Head, op);
	nimGCvisit((void*)(*a).Declaredprotos.Data, op);
	nimGCvisit((void*)(*a).Headerfiles.Head, op);
	nimGCvisit((void*)(*a).Headerfiles.Tail, op);
	nimGCvisit((void*)(*a).Typeinfomarker.Head, op);
	nimGCvisit((void*)(*a).Typeinfomarker.Data, op);
	nimGCvisit((void*)(*a).Initproc, op);
	nimGCvisit((void*)(*a).Postinitproc, op);
	nimGCvisit((void*)(*a).Preinitproc, op);
	nimGCvisit((void*)(*a).Typestack, op);
	nimGCvisit((void*)(*a).Datacache.Data, op);
	nimGCvisit((void*)(*a).Forwardedprocs, op);
	nimGCvisit((void*)(*a).Typenodesname, op);
	nimGCvisit((void*)(*a).Nimtypesname, op);
	LOC2 = 0;
	for (LOC2 = 0; LOC2 < 10; LOC2++) {
	nimGCvisit((void*)(*a).Extensionloaders[LOC2], op);
	}
	nimGCvisit((void*)(*a).Injectstmt, op);
}
N_NIMCALL(void, TMP974)(void* p, NI op) {
	TY485151* a;
	NI LOC1;
	a = (TY485151*)p;
	LOC1 = 0;
	for (LOC1 = 0; LOC1 < a->Sup.len; LOC1++) {
	nimGCvisit((void*)a->data[LOC1], op);
	}
}

static N_INLINE(void, rtladdzct_50804)(tcell45348* c) {
	addzct_49217((&gch_47644.Zct), c);
}

static N_INLINE(NIM_BOOL, canbecycleroot_49267)(tcell45348* c) {
	NIM_BOOL result;
	result = 0;
	result = !((((*(*c).Typ).flags &(1<<((((NU8) 1))&7)))!=0));
	return result;
}

static N_INLINE(void, rtladdcycleroot_50029)(tcell45348* c) {
	{
		if (!!((((NI) ((NI)((*c).Refcount & 3))) == 3))) goto LA3;
		(*c).Refcount = (NI)((NI)((*c).Refcount & -4) | 3);
		incl_46271((&gch_47644.Cycleroots), c);
	}
	LA3: ;
}

static N_INLINE(void, decref_51204)(tcell45348* c) {
	{
		(*c).Refcount -= 8;
		if (!((NU32)((*c).Refcount) < (NU32)(8))) goto LA3;
		rtladdzct_50804(c);
	}
	goto LA1;
	LA3: ;
	{
		NIM_BOOL LOC6;
		LOC6 = 0;
		LOC6 = canbecycleroot_49267(c);
		if (!LOC6) goto LA7;
		rtladdcycleroot_50029(c);
	}
	goto LA1;
	LA7: ;
	LA1: ;
}

static N_INLINE(tcell45348*, usrtocell_49246)(void* usr) {
	tcell45348* result;
	result = 0;
	result = ((tcell45348*) ((NI)((NU32)(((NI) (usr))) - (NU32)(((NI)sizeof(tcell45348))))));
	return result;
}

static N_INLINE(void, nimGCunref)(void* p) {
	tcell45348* LOC1;
	LOC1 = 0;
	LOC1 = usrtocell_49246(p);
	decref_51204(LOC1);
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

static N_INLINE(void, incref_51625)(tcell45348* c) {
	(*c).Refcount = (NI)((NU32)((*c).Refcount) + (NU32)(8));
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = canbecycleroot_49267(c);
		if (!LOC3) goto LA4;
		rtladdcycleroot_50029(c);
	}
	LA4: ;
}

static N_INLINE(void, asgnRef)(void** dest, void* src) {
	{
		tcell45348* LOC5;
		if (!!((src == NIM_NIL))) goto LA3;
		LOC5 = 0;
		LOC5 = usrtocell_49246(src);
		incref_51625(LOC5);
	}
	LA3: ;
	{
		tcell45348* LOC10;
		if (!!(((*dest) == NIM_NIL))) goto LA8;
		LOC10 = 0;
		LOC10 = usrtocell_49246((*dest));
		decref_51204(LOC10);
	}
	LA8: ;
	(*dest) = src;
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

N_NIMCALL(tcproc485031*, newproc_485232)(tsym209848* prc, tcgen485035* module) {
	tcproc485031* result;
	result = 0;
	result = (tcproc485031*) newObj((&NTI485027), sizeof(tcproc485031));
	asgnRefNoCycle((void**) (&(*result).Prc), prc);
	asgnRef((void**) (&(*result).Module), module);
	{
		if (!!((prc == NIM_NIL))) goto LA3;
		(*result).Options = (*prc).Options;
	}
	goto LA1;
	LA3: ;
	{
		(*result).Options = goptions_170126;
	}
	LA1: ;
	if ((*result).Blocks) nimGCunrefNoCycle((*result).Blocks);
	(*result).Blocks = (TY485102*) newSeqRC1((&NTI485102), 1);
	if ((*result).Nestedtrystmts) nimGCunrefNoCycle((*result).Nestedtrystmts);
	(*result).Nestedtrystmts = (tnodeseq209812*) newSeqRC1((&NTI209812), 0);
	if ((*result).Finallysafepoints) nimGCunrefNoCycle((*result).Finallysafepoints);
	(*result).Finallysafepoints = (TY181353*) newSeqRC1((&NTI181353), 0);
	return result;
}

N_NIMCALL(tcgen485035*, bmod_485221)(tsym209848* module) {
	tcgen485035* result;
	result = 0;
	result = gmodules_485172->data[(*module).Position];
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_cgendataInit)(void) {
	if (gmodules_485172) nimGCunref(gmodules_485172);
	gmodules_485172 = (TY485151*) newSeqRC1((&NTI485151), 0);
	gforwardedprocscounter_485173 = 0;
}

NIM_EXTERNC N_NOINLINE(void, compiler_cgendataDatInit)(void) {
static TNimNode* TMP960[29];
static TNimNode* TMP966[16];
static TNimNode* TMP967[7];
static TNimNode TMP958[55];
NTI485035.size = sizeof(tcgen485035);
NTI485035.kind = 17;
NTI485035.base = (&NTI264005);
TMP960[0] = &TMP958[1];
TMP958[1].kind = 1;
TMP958[1].offset = offsetof(tcgen485035, Module);
TMP958[1].typ = (&NTI209816);
TMP958[1].name = "module";
TMP960[1] = &TMP958[2];
TMP958[2].kind = 1;
TMP958[2].offset = offsetof(tcgen485035, Filename);
TMP958[2].typ = (&NTI149);
TMP958[2].name = "filename";
TMP960[2] = &TMP958[3];
NTI485019.size = sizeof(tcfilesections485019);
NTI485019.kind = 16;
NTI485019.base = (&NTI178007);
NTI485019.flags = 2;
TMP958[3].kind = 1;
TMP958[3].offset = offsetof(tcgen485035, S);
TMP958[3].typ = (&NTI485019);
TMP958[3].name = "s";
TMP960[3] = &TMP958[4];
TMP958[4].kind = 1;
TMP958[4].offset = offsetof(tcgen485035, Preventstacktrace);
TMP958[4].typ = (&NTI138);
TMP958[4].name = "preventStackTrace";
TMP960[4] = &TMP958[5];
TMP958[5].kind = 1;
TMP958[5].offset = offsetof(tcgen485035, Usesthreadvars);
TMP958[5].typ = (&NTI138);
TMP958[5].name = "usesThreadVars";
TMP960[5] = &TMP958[6];
TMP958[6].kind = 1;
TMP958[6].offset = offsetof(tcgen485035, Framedeclared);
TMP958[6].typ = (&NTI138);
TMP958[6].name = "frameDeclared";
TMP960[6] = &TMP958[7];
TMP958[7].kind = 1;
TMP958[7].offset = offsetof(tcgen485035, Isheaderfile);
TMP958[7].typ = (&NTI138);
TMP958[7].name = "isHeaderFile";
TMP960[7] = &TMP958[8];
TMP958[8].kind = 1;
TMP958[8].offset = offsetof(tcgen485035, Includesstringh);
TMP958[8].typ = (&NTI138);
TMP958[8].name = "includesStringh";
TMP960[8] = &TMP958[9];
TMP958[9].kind = 1;
TMP958[9].offset = offsetof(tcgen485035, Objhaskidsvalid);
TMP958[9].typ = (&NTI138);
TMP958[9].name = "objHasKidsValid";
TMP960[9] = &TMP958[10];
TMP958[10].kind = 1;
TMP958[10].offset = offsetof(tcgen485035, Cfilename);
TMP958[10].typ = (&NTI149);
TMP958[10].name = "cfilename";
TMP960[10] = &TMP958[11];
TMP958[11].kind = 1;
TMP958[11].offset = offsetof(tcgen485035, Typecache);
TMP958[11].typ = (&NTI209866);
TMP958[11].name = "typeCache";
TMP960[11] = &TMP958[12];
TMP958[12].kind = 1;
TMP958[12].offset = offsetof(tcgen485035, Forwtypecache);
TMP958[12].typ = (&NTI209866);
TMP958[12].name = "forwTypeCache";
TMP960[12] = &TMP958[13];
TMP958[13].kind = 1;
TMP958[13].offset = offsetof(tcgen485035, Declaredthings);
TMP958[13].typ = (&NTI206056);
TMP958[13].name = "declaredThings";
TMP960[13] = &TMP958[14];
TMP958[14].kind = 1;
TMP958[14].offset = offsetof(tcgen485035, Declaredprotos);
TMP958[14].typ = (&NTI206056);
TMP958[14].name = "declaredProtos";
TMP960[14] = &TMP958[15];
TMP958[15].kind = 1;
TMP958[15].offset = offsetof(tcgen485035, Headerfiles);
TMP958[15].typ = (&NTI128028);
TMP958[15].name = "headerFiles";
TMP960[15] = &TMP958[16];
TMP958[16].kind = 1;
TMP958[16].offset = offsetof(tcgen485035, Typeinfomarker);
TMP958[16].typ = (&NTI206056);
TMP958[16].name = "typeInfoMarker";
TMP960[16] = &TMP958[17];
NTI485031.size = sizeof(tcproc485031);
NTI485031.kind = 18;
NTI485031.base = 0;
TMP966[0] = &TMP958[19];
TMP958[19].kind = 1;
TMP958[19].offset = offsetof(tcproc485031, Prc);
TMP958[19].typ = (&NTI209816);
TMP958[19].name = "prc";
TMP966[1] = &TMP958[20];
TMP958[20].kind = 1;
TMP958[20].offset = offsetof(tcproc485031, Beforeretneeded);
TMP958[20].typ = (&NTI138);
TMP958[20].name = "beforeRetNeeded";
TMP966[2] = &TMP958[21];
TMP958[21].kind = 1;
TMP958[21].offset = offsetof(tcproc485031, Threadvaraccessed);
TMP958[21].typ = (&NTI138);
TMP958[21].name = "threadVarAccessed";
TMP966[3] = &TMP958[22];
TMP958[22].kind = 1;
TMP958[22].offset = offsetof(tcproc485031, Nestedtrystmts);
TMP958[22].typ = (&NTI209812);
TMP958[22].name = "nestedTryStmts";
TMP966[4] = &TMP958[23];
TMP958[23].kind = 1;
TMP958[23].offset = offsetof(tcproc485031, Inexceptblock);
TMP958[23].typ = (&NTI108);
TMP958[23].name = "inExceptBlock";
TMP966[5] = &TMP958[24];
TMP958[24].kind = 1;
TMP958[24].offset = offsetof(tcproc485031, Finallysafepoints);
TMP958[24].typ = (&NTI181353);
TMP958[24].name = "finallySafePoints";
TMP966[6] = &TMP958[25];
TMP958[25].kind = 1;
TMP958[25].offset = offsetof(tcproc485031, Labels);
TMP958[25].typ = (&NTI3407);
TMP958[25].name = "labels";
TMP966[7] = &TMP958[26];
NTI485029.size = sizeof(tblock485029);
NTI485029.kind = 18;
NTI485029.base = 0;
NTI485029.flags = 2;
TMP967[0] = &TMP958[28];
TMP958[28].kind = 1;
TMP958[28].offset = offsetof(tblock485029, Id);
TMP958[28].typ = (&NTI108);
TMP958[28].name = "id";
TMP967[1] = &TMP958[29];
TMP958[29].kind = 1;
TMP958[29].offset = offsetof(tblock485029, Label);
TMP958[29].typ = (&NTI178007);
TMP958[29].name = "label";
TMP967[2] = &TMP958[30];
NTI485023.size = sizeof(tcprocsections485023);
NTI485023.kind = 16;
NTI485023.base = (&NTI178007);
NTI485023.flags = 2;
TMP958[30].kind = 1;
TMP958[30].offset = offsetof(tblock485029, Sections);
TMP958[30].typ = (&NTI485023);
TMP958[30].name = "sections";
TMP967[3] = &TMP958[31];
TMP958[31].kind = 1;
TMP958[31].offset = offsetof(tblock485029, Isloop);
TMP958[31].typ = (&NTI138);
TMP958[31].name = "isLoop";
TMP967[4] = &TMP958[32];
TMP958[32].kind = 1;
TMP958[32].offset = offsetof(tblock485029, Nestedtrystmts);
TMP958[32].typ = (&NTI112);
TMP958[32].name = "nestedTryStmts";
TMP967[5] = &TMP958[33];
TMP958[33].kind = 1;
TMP958[33].offset = offsetof(tblock485029, Nestedexceptstmts);
TMP958[33].typ = (&NTI112);
TMP958[33].name = "nestedExceptStmts";
TMP967[6] = &TMP958[34];
TMP958[34].kind = 1;
TMP958[34].offset = offsetof(tblock485029, Framelen);
TMP958[34].typ = (&NTI112);
TMP958[34].name = "frameLen";
TMP958[27].len = 7; TMP958[27].kind = 2; TMP958[27].sons = &TMP967[0];
NTI485029.node = &TMP958[27];
NTI485102.size = sizeof(TY485102*);
NTI485102.kind = 24;
NTI485102.base = (&NTI485029);
NTI485102.flags = 2;
NTI485102.marker = TMP968;
TMP958[26].kind = 1;
TMP958[26].offset = offsetof(tcproc485031, Blocks);
TMP958[26].typ = (&NTI485102);
TMP958[26].name = "blocks";
TMP966[8] = &TMP958[35];
TMP958[35].kind = 1;
TMP958[35].offset = offsetof(tcproc485031, Breakidx);
TMP958[35].typ = (&NTI108);
TMP958[35].name = "breakIdx";
TMP966[9] = &TMP958[36];
TMP958[36].kind = 1;
TMP958[36].offset = offsetof(tcproc485031, Options);
TMP958[36].typ = (&NTI170016);
TMP958[36].name = "options";
TMP966[10] = &TMP958[37];
TMP958[37].kind = 1;
TMP958[37].offset = offsetof(tcproc485031, Maxframelen);
TMP958[37].typ = (&NTI108);
TMP958[37].name = "maxFrameLen";
TMP966[11] = &TMP958[38];
TMP958[38].kind = 1;
TMP958[38].offset = offsetof(tcproc485031, Module);
TMP958[38].typ = (&NTI485025);
TMP958[38].name = "module";
TMP966[12] = &TMP958[39];
TMP958[39].kind = 1;
TMP958[39].offset = offsetof(tcproc485031, Withinloop);
TMP958[39].typ = (&NTI108);
TMP958[39].name = "withinLoop";
TMP966[13] = &TMP958[40];
TMP958[40].kind = 1;
TMP958[40].offset = offsetof(tcproc485031, Splitdecls);
TMP958[40].typ = (&NTI108);
TMP958[40].name = "splitDecls";
TMP966[14] = &TMP958[41];
TMP958[41].kind = 1;
TMP958[41].offset = offsetof(tcproc485031, Gcframeid);
TMP958[41].typ = (&NTI3407);
TMP958[41].name = "gcFrameId";
TMP966[15] = &TMP958[42];
TMP958[42].kind = 1;
TMP958[42].offset = offsetof(tcproc485031, Gcframetype);
TMP958[42].typ = (&NTI178007);
TMP958[42].name = "gcFrameType";
TMP958[18].len = 16; TMP958[18].kind = 2; TMP958[18].sons = &TMP966[0];
NTI485031.node = &TMP958[18];
NTI485027.size = sizeof(tcproc485031*);
NTI485027.kind = 22;
NTI485027.base = (&NTI485031);
NTI485027.marker = TMP969;
TMP958[17].kind = 1;
TMP958[17].offset = offsetof(tcgen485035, Initproc);
TMP958[17].typ = (&NTI485027);
TMP958[17].name = "initProc";
TMP960[17] = &TMP958[43];
TMP958[43].kind = 1;
TMP958[43].offset = offsetof(tcgen485035, Postinitproc);
TMP958[43].typ = (&NTI485027);
TMP958[43].name = "postInitProc";
TMP960[18] = &TMP958[44];
TMP958[44].kind = 1;
TMP958[44].offset = offsetof(tcgen485035, Preinitproc);
TMP958[44].typ = (&NTI485027);
TMP958[44].name = "preInitProc";
TMP960[19] = &TMP958[45];
TMP958[45].kind = 1;
TMP958[45].offset = offsetof(tcgen485035, Typestack);
TMP958[45].typ = (&NTI209850);
TMP958[45].name = "typeStack";
TMP960[20] = &TMP958[46];
TMP958[46].kind = 1;
TMP958[46].offset = offsetof(tcgen485035, Datacache);
TMP958[46].typ = (&NTI209878);
TMP958[46].name = "dataCache";
TMP960[21] = &TMP958[47];
TMP958[47].kind = 1;
TMP958[47].offset = offsetof(tcgen485035, Forwardedprocs);
TMP958[47].typ = (&NTI209820);
TMP958[47].name = "forwardedProcs";
TMP960[22] = &TMP958[48];
TMP958[48].kind = 1;
TMP958[48].offset = offsetof(tcgen485035, Typenodes);
TMP958[48].typ = (&NTI108);
TMP958[48].name = "typeNodes";
TMP960[23] = &TMP958[49];
TMP958[49].kind = 1;
TMP958[49].offset = offsetof(tcgen485035, Nimtypes);
TMP958[49].typ = (&NTI108);
TMP958[49].name = "nimTypes";
TMP960[24] = &TMP958[50];
TMP958[50].kind = 1;
TMP958[50].offset = offsetof(tcgen485035, Typenodesname);
TMP958[50].typ = (&NTI178007);
TMP958[50].name = "typeNodesName";
TMP960[25] = &TMP958[51];
TMP958[51].kind = 1;
TMP958[51].offset = offsetof(tcgen485035, Nimtypesname);
TMP958[51].typ = (&NTI178007);
TMP958[51].name = "nimTypesName";
TMP960[26] = &TMP958[52];
TMP958[52].kind = 1;
TMP958[52].offset = offsetof(tcgen485035, Labels);
TMP958[52].typ = (&NTI3407);
TMP958[52].name = "labels";
TMP960[27] = &TMP958[53];
NTI485139.size = sizeof(TY485139);
NTI485139.kind = 16;
NTI485139.base = (&NTI178007);
NTI485139.flags = 2;
TMP958[53].kind = 1;
TMP958[53].offset = offsetof(tcgen485035, Extensionloaders);
TMP958[53].typ = (&NTI485139);
TMP958[53].name = "extensionLoaders";
TMP960[28] = &TMP958[54];
TMP958[54].kind = 1;
TMP958[54].offset = offsetof(tcgen485035, Injectstmt);
TMP958[54].typ = (&NTI178007);
TMP958[54].name = "injectStmt";
TMP958[0].len = 29; TMP958[0].kind = 2; TMP958[0].sons = &TMP960[0];
NTI485035.node = &TMP958[0];
NTI485025.size = sizeof(tcgen485035*);
NTI485025.kind = 22;
NTI485025.base = (&NTI485035);
NTI485025.marker = TMP973;
NTI485151.size = sizeof(TY485151*);
NTI485151.kind = 24;
NTI485151.base = (&NTI485025);
NTI485151.marker = TMP974;
}

