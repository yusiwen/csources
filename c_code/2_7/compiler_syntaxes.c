/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>

#include <stdio.h>
typedef struct tnode210818 tnode210818;
typedef struct tparsers241035 tparsers241035;
typedef struct tparser228205 tparser228205;
typedef struct tlexer200190 tlexer200190;
typedef struct tbaselexer198024 tbaselexer198024;
typedef struct TNimObject TNimObject;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tllstream197204 tllstream197204;
typedef struct tlineinfo182340 tlineinfo182340;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct ttoken200186 ttoken200186;
typedef struct tident186021 tident186021;
typedef struct ttype210854 ttype210854;
typedef struct tsym210848 tsym210848;
typedef struct tnodeseq210812 tnodeseq210812;
typedef struct tidobj186015 tidobj186015;
typedef struct ttypeseq210850 ttypeseq210850;
typedef struct tloc210832 tloc210832;
typedef struct trope179009 trope179009;
typedef struct tscope210842 tscope210842;
typedef struct TY210949 TY210949;
typedef struct tinstantiation210838 tinstantiation210838;
typedef struct tstrtable210822 tstrtable210822;
typedef struct tsymseq210820 tsymseq210820;
typedef struct tlib210836 tlib210836;
typedef struct TY210938 TY210938;
typedef struct tlistentry128022 tlistentry128022;
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
struct  tbaselexer198024  {
  TNimObject Sup;
NI Bufpos;
NCSTRING Buf;
NI Buflen;
tllstream197204* Stream;
NI Linenumber;
NI Sentinel;
NI Linestart;
};
struct  tlineinfo182340  {
NI16 Line;
NI16 Col;
NI32 Fileindex;
};
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef struct {
N_NIMCALL_PTR(void, ClPrc) (tlineinfo182340 info, NU16 msg, NimStringDesc* arg, void* ClEnv);
void* ClEnv;
} terrorhandler200188;
struct  tlexer200190  {
  tbaselexer198024 Sup;
NI32 Fileidx;
NI Indentahead;
NI Currlineindent;
NIM_BOOL Strongspaces;
terrorhandler200188 Errorhandler;
};
struct  ttoken200186  {
NU8 Toktype;
NI Indent;
tident186021* Ident;
NI64 Inumber;
NF Fnumber;
NU8 Base;
NI8 Strongspacea;
NI8 Strongspaceb;
NimStringDesc* Literal;
NI Line;
NI Col;
};
struct  tparser228205  {
NI Currind;
NIM_BOOL Firsttok;
NIM_BOOL Strongspaces;
tlexer200190 Lex;
ttoken200186 Tok;
NI Inpragma;
NI Insemistmtlist;
};
struct  tparsers241035  {
NU8 Skin;
tparser228205 Parser;
};
struct  TNimNode  {
NU8 kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct  tnode210818  {
ttype210854* Typ;
tlineinfo182340 Info;
NU16 Flags;
NU8 Kind;
union{
struct {NI64 Intval;
} S1;
struct {NF Floatval;
} S2;
struct {NimStringDesc* Strval;
} S3;
struct {tsym210848* Sym;
} S4;
struct {tident186021* Ident;
} S5;
struct {tnodeseq210812* Sons;
} S6;
} kindU;
NimStringDesc* Comment;
};
typedef NimStringDesc* TY241026[4];
typedef NimStringDesc* TY241020[4];
struct  tidobj186015  {
  TNimObject Sup;
NI Id;
};
struct  tident186021  {
  tidobj186015 Sup;
NimStringDesc* S;
tident186021* Next;
NI H;
};
typedef NimStringDesc* TY241480[1];
struct  tllstream197204  {
  TNimObject Sup;
NU8 Kind;
FILE* F;
NimStringDesc* S;
NI Rd;
NI Wr;
NI Lineoffset;
};
struct  tloc210832  {
NU8 K;
NU8 S;
NU16 Flags;
ttype210854* T;
trope179009* R;
trope179009* Heaproot;
};
struct  ttype210854  {
  tidobj186015 Sup;
NU8 Kind;
NU8 Callconv;
NU32 Flags;
ttypeseq210850* Sons;
tnode210818* N;
tsym210848* Owner;
tsym210848* Sym;
tsym210848* Destructor;
tsym210848* Deepcopy;
NI64 Size;
NI16 Align;
NI16 Locklevel;
tloc210832 Loc;
};
struct  tstrtable210822  {
NI Counter;
tsymseq210820* Data;
};
struct  tsym210848  {
  tidobj186015 Sup;
NU8 Kind;
union{
struct {ttypeseq210850* Typeinstcache;
tscope210842* Typscope;
} S1;
struct {TY210949* Procinstcache;
tscope210842* Scope;
} S2;
struct {TY210949* Usedgenerics;
tstrtable210822 Tab;
} S3;
struct {tsym210848* Guard;
} S4;
} kindU;
NU16 Magic;
ttype210854* Typ;
tident186021* Name;
tlineinfo182340 Info;
tsym210848* Owner;
NU32 Flags;
tnode210818* Ast;
NU32 Options;
NI Position;
NI Offset;
tloc210832 Loc;
tlib210836* Annex;
tnode210818* Constraint;
};
struct  trope179009  {
  TNimObject Sup;
trope179009* Left;
trope179009* Right;
NI Length;
NimStringDesc* Data;
};
struct  tscope210842  {
NI Depthlevel;
tstrtable210822 Symbols;
tnodeseq210812* Usingsyms;
tscope210842* Parent;
};
struct  tinstantiation210838  {
tsym210848* Sym;
ttypeseq210850* Concretetypes;
TY210938* Usedby;
};
struct  tlistentry128022  {
  TNimObject Sup;
tlistentry128022* Prev;
tlistentry128022* Next;
};
struct  tlib210836  {
  tlistentry128022 Sup;
NU8 Kind;
NIM_BOOL Generated;
NIM_BOOL Isoverriden;
trope179009* Name;
tnode210818* Path;
};
struct tnodeseq210812 {
  TGenericSeq Sup;
  tnode210818* data[SEQ_DECL_SIZE];
};
struct ttypeseq210850 {
  TGenericSeq Sup;
  ttype210854* data[SEQ_DECL_SIZE];
};
struct TY210949 {
  TGenericSeq Sup;
  tinstantiation210838* data[SEQ_DECL_SIZE];
};
struct tsymseq210820 {
  TGenericSeq Sup;
  tsym210848* data[SEQ_DECL_SIZE];
};
struct TY210938 {
  TGenericSeq Sup;
  NI32 data[SEQ_DECL_SIZE];
};
N_NIMCALL(void, objectInit)(void* dest, TNimType* typ);
N_NIMCALL(NimStringDesc*, tofullpathconsiderdirty_183807)(NI32 fileidx);
N_NIMCALL(NIM_BOOL, open_13003)(FILE** f, NimStringDesc* filename, NU8 mode, NI bufsize);
N_NIMCALL(void, rawmessage_184415)(NU16 msg, NimStringDesc* arg);
N_NIMCALL(void, openparsers_241047)(tparsers241035* p, NI32 fileidx, tllstream197204* inputstream);
N_NIMCALL(tnode210818*, parsepipe_241177)(NimStringDesc* filename, tllstream197204* inputstream);
N_NIMCALL(tllstream197204*, llstreamopen_197273)(NimStringDesc* filename, NU8 mode);
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(NIM_BOOL, llstreamreadline_197643)(tllstream197204* s, NimStringDesc** line);
N_NIMCALL(NI, utf8bom_241123)(NimStringDesc* s);
N_NIMCALL(NIM_BOOL, containsshebang_241133)(NimStringDesc* s, NI i);
N_NIMCALL(void, openparser_228417)(tparser228205* p, NimStringDesc* filename, tllstream197204* inputstream, NIM_BOOL strongspaces);
N_NIMCALL(tllstream197204*, llstreamopen_197220)(NimStringDesc* data);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI start);
N_NIMCALL(NimStringDesc*, copyStr)(NimStringDesc* s, NI first);
N_NIMCALL(tnode210818*, parseall_228216)(tparser228205* p);
N_NIMCALL(void, closeparser_228223)(tparser228205* p);
N_NIMCALL(void, llstreamclose_197351)(tllstream197204* s);
N_NIMCALL(tllstream197204*, evalpipe_241494)(tparsers241035* p, tnode210818* n, NimStringDesc* filename, tllstream197204* start);
N_NIMCALL(NIM_BOOL, identeq_186493)(tident186021* id, NimStringDesc* name);
N_NIMCALL(tllstream197204*, applyfilter_241455)(tparsers241035* p, tnode210818* n, NimStringDesc* filename, tllstream197204* stdin_241461);
N_NIMCALL(tident186021*, getcallee_241410)(tnode210818* n);
N_NIMCALL(NimStringDesc*, rendertree_234058)(tnode210818* n, NU8 renderflags);
N_NIMCALL(NU8, getfilter_241260)(tident186021* ident);
N_NIMCALL(NU8, getparser_241335)(tident186021* ident);
N_NIMCALL(tllstream197204*, filtertmpl_240009)(tllstream197204* stdin_240011, NimStringDesc* filename, tnode210818* call);
N_NIMCALL(tllstream197204*, filterstrip_239012)(tllstream197204* stdin_239014, NimStringDesc* filename, tnode210818* call);
N_NIMCALL(tllstream197204*, filterreplace_239004)(tllstream197204* stdin_239006, NimStringDesc* filename, tnode210818* call);
N_NIMCALL(void, rawmessage_184325)(NU16 msg, NimStringDesc** args, NI argsLen0);
N_NIMCALL(void, msgwriteln_183947)(NimStringDesc* s);
N_NIMCALL(void, openparser_228402)(tparser228205* p, NI32 fileidx, tllstream197204* inputstream, NIM_BOOL strongspaces);
N_NIMCALL(tllstream197204*, llstreamopen_197246)(FILE** f);
N_NIMCALL(tnode210818*, parseall_241063)(tparsers241035* p);
N_NIMCALL(tnode210818*, parseall_233009)(tparser228205* p);
N_NIMCALL(void, internalerror_184688)(NimStringDesc* errmsg);
N_NIMCALL(void, closeparsers_241056)(tparsers241035* p);
N_NIMCALL(tnode210818*, parsetoplevelstmt_228230)(tparser228205* p);
N_NIMCALL(tnode210818*, parsetoplevelstmt_233020)(tparser228205* p);
STRING_LITERAL(TMP1215, "|", 1);
STRING_LITERAL(TMP1325, "none", 4);
STRING_LITERAL(TMP1326, "stdtmpl", 7);
STRING_LITERAL(TMP1327, "replace", 7);
STRING_LITERAL(TMP1328, "strip", 5);
NIM_CONST TY241026 filternames_241025 = {((NimStringDesc*) &TMP1325),
((NimStringDesc*) &TMP1326),
((NimStringDesc*) &TMP1327),
((NimStringDesc*) &TMP1328)}
;
STRING_LITERAL(TMP1329, "standard", 8);
STRING_LITERAL(TMP1330, "strongspaces", 12);
STRING_LITERAL(TMP1331, "braces", 6);
STRING_LITERAL(TMP1332, "endx", 4);
NIM_CONST TY241020 parsernames_241019 = {((NimStringDesc*) &TMP1329),
((NimStringDesc*) &TMP1330),
((NimStringDesc*) &TMP1331),
((NimStringDesc*) &TMP1332)}
;
STRING_LITERAL(TMP1363, "parser to implement", 19);
TNimType NTI241035; /* TParsers */
TNimType NTI241007; /* TParserKind */
extern TNimType NTI228205; /* TParser */
extern tnode210818* emptynode_211686;
extern NI gverbosity_171137;

N_NIMCALL(NI, utf8bom_241123)(NimStringDesc* s) {
	NI result;
	result = 0;
	{
		NIM_BOOL LOC3;
		NIM_BOOL LOC4;
		LOC3 = 0;
		LOC4 = 0;
		LOC4 = ((NU8)(s->data[0]) == (NU8)(239));
		if (!(LOC4)) goto LA5;
		LOC4 = ((NU8)(s->data[1]) == (NU8)(187));
		LA5: ;
		LOC3 = LOC4;
		if (!(LOC3)) goto LA6;
		LOC3 = ((NU8)(s->data[2]) == (NU8)(191));
		LA6: ;
		if (!LOC3) goto LA7;
		result = 3;
	}
	goto LA1;
	LA7: ;
	{
		result = 0;
	}
	LA1: ;
	return result;
}

N_NIMCALL(NIM_BOOL, containsshebang_241133)(NimStringDesc* s, NI i) {
	NIM_BOOL result;
	result = 0;
	{
		NIM_BOOL LOC3;
		NI j;
		LOC3 = 0;
		LOC3 = ((NU8)(s->data[i]) == (NU8)(35));
		if (!(LOC3)) goto LA4;
		LOC3 = ((NU8)(s->data[(NI32)(i + 1)]) == (NU8)(33));
		LA4: ;
		if (!LOC3) goto LA5;
		j = (NI32)(i + 2);
		{
			while (1) {
				if (!(((NU8)(s->data[j])) == ((NU8)(32)) || ((NU8)(s->data[j])) == ((NU8)(9)) || ((NU8)(s->data[j])) == ((NU8)(11)) || ((NU8)(s->data[j])) == ((NU8)(13)) || ((NU8)(s->data[j])) == ((NU8)(10)) || ((NU8)(s->data[j])) == ((NU8)(12)))) goto LA8;
				j += 1;
			} LA8: ;
		}
		result = ((NU8)(s->data[j]) == (NU8)(47));
	}
	LA5: ;
	return result;
}

N_NIMCALL(tnode210818*, parsepipe_241177)(NimStringDesc* filename, tllstream197204* inputstream) {
	tnode210818* result;
	tllstream197204* s;
	result = 0;
	result = emptynode_211686;
	s = llstreamopen_197273(filename, ((NU8) 0));
	{
		NimStringDesc* line;
		NIM_BOOL LOC5;
		NI i;
		if (!!((s == NIM_NIL))) goto LA3;
		line = rawNewString(80);
		LOC5 = 0;
		LOC5 = llstreamreadline_197643(s, (&line));
		i = utf8bom_241123(line);
		{
			NIM_BOOL LOC8;
			NIM_BOOL LOC11;
			LOC8 = 0;
			LOC8 = containsshebang_241133(line, i);
			if (!LOC8) goto LA9;
			LOC11 = 0;
			LOC11 = llstreamreadline_197643(s, (&line));
			i = 0;
		}
		LA9: ;
		{
			NIM_BOOL LOC14;
			tparser228205 q;
			NimStringDesc* LOC20;
			tllstream197204* LOC21;
			LOC14 = 0;
			LOC14 = ((NU8)(line->data[i]) == (NU8)(35));
			if (!(LOC14)) goto LA15;
			LOC14 = ((NU8)(line->data[(NI32)(i + 1)]) == (NU8)(33));
			LA15: ;
			if (!LOC14) goto LA16;
			i += 2;
			{
				while (1) {
					if (!(((NU8)(line->data[i])) == ((NU8)(32)) || ((NU8)(line->data[i])) == ((NU8)(9)) || ((NU8)(line->data[i])) == ((NU8)(11)) || ((NU8)(line->data[i])) == ((NU8)(13)) || ((NU8)(line->data[i])) == ((NU8)(10)) || ((NU8)(line->data[i])) == ((NU8)(12)))) goto LA19;
					i += 1;
				} LA19: ;
			}
			memset((void*)(&q), 0, sizeof(q));
			objectInit((&q), (&NTI228205));
			LOC20 = 0;
			LOC20 = copyStr(line, i);
			LOC21 = 0;
			LOC21 = llstreamopen_197220(LOC20);
			openparser_228417((&q), filename, LOC21, NIM_FALSE);
			result = parseall_228216((&q));
			closeparser_228223((&q));
		}
		LA16: ;
		llstreamclose_197351(s);
	}
	LA3: ;
	return result;
}

N_NIMCALL(tident186021*, getcallee_241410)(tnode210818* n) {
	tident186021* result;
	result = 0;
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = ((*n).Kind == ((NU8) 27) || (*n).Kind == ((NU8) 29) || (*n).Kind == ((NU8) 30) || (*n).Kind == ((NU8) 31) || (*n).Kind == ((NU8) 26) || (*n).Kind == ((NU8) 28) || (*n).Kind == ((NU8) 32));
		if (!(LOC3)) goto LA4;
		LOC3 = ((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 2));
		LA4: ;
		if (!LOC3) goto LA5;
		result = (*(*n).kindU.S6.Sons->data[0]).kindU.S5.Ident;
	}
	goto LA1;
	LA5: ;
	{
		if (!((*n).Kind == ((NU8) 2))) goto LA8;
		result = (*n).kindU.S5.Ident;
	}
	goto LA1;
	LA8: ;
	{
		NimStringDesc* LOC11;
		LOC11 = 0;
		LOC11 = rendertree_234058(n, 0);
		rawmessage_184415(((NU16) 163), LOC11);
	}
	LA1: ;
	return result;
}

N_NIMCALL(NU8, getfilter_241260)(tident186021* ident) {
	NU8 result;
{	result = 0;
	{
		NU8 i_241312;
		NU8 res_241318;
		i_241312 = 0;
		res_241318 = ((NU8) 0);
		{
			while (1) {
				if (!(res_241318 <= ((NU8) 3))) goto LA3;
				i_241312 = res_241318;
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = identeq_186493(ident, filternames_241025[(i_241312)- 0]);
					if (!LOC6) goto LA7;
					result = i_241312;
					goto BeforeRet;
				}
				LA7: ;
				res_241318 += 1;
			} LA3: ;
		}
	}
	result = ((NU8) 0);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(NU8, getparser_241335)(tident186021* ident) {
	NU8 result;
{	result = 0;
	{
		NU8 i_241387;
		NU8 res_241393;
		i_241387 = 0;
		res_241393 = ((NU8) 0);
		{
			while (1) {
				if (!(res_241393 <= ((NU8) 3))) goto LA3;
				i_241387 = res_241393;
				{
					NIM_BOOL LOC6;
					LOC6 = 0;
					LOC6 = identeq_186493(ident, parsernames_241019[(i_241387)- 0]);
					if (!LOC6) goto LA7;
					result = i_241387;
					goto BeforeRet;
				}
				LA7: ;
				res_241393 += 1;
			} LA3: ;
		}
	}
	rawmessage_184415(((NU16) 30), (*ident).S);
	}BeforeRet: ;
	return result;
}

N_NIMCALL(tllstream197204*, applyfilter_241455)(tparsers241035* p, tnode210818* n, NimStringDesc* filename, tllstream197204* stdin_241461) {
	tllstream197204* result;
	tident186021* ident;
	NU8 f;
	result = 0;
	ident = getcallee_241410(n);
	f = getfilter_241260(ident);
	switch (f) {
	case ((NU8) 0):
	{
		(*p).Skin = getparser_241335(ident);
		result = stdin_241461;
	}
	break;
	case ((NU8) 1):
	{
		result = filtertmpl_240009(stdin_241461, filename, n);
	}
	break;
	case ((NU8) 3):
	{
		result = filterstrip_239012(stdin_241461, filename, n);
	}
	break;
	case ((NU8) 2):
	{
		result = filterreplace_239004(stdin_241461, filename, n);
	}
	break;
	}
	{
		if (!!((f == ((NU8) 0)))) goto LA7;
		{
			TY241480 LOC13;
			TY241480 LOC14;
			if (!(2 <= gverbosity_171137)) goto LA11;
			memset((void*)LOC13, 0, sizeof(LOC13));
			rawmessage_184325(((NU16) 269), LOC13, 0);
			msgwriteln_183947((*result).S);
			memset((void*)LOC14, 0, sizeof(LOC14));
			rawmessage_184325(((NU16) 270), LOC14, 0);
		}
		LA11: ;
	}
	LA7: ;
	return result;
}

N_NIMCALL(tllstream197204*, evalpipe_241494)(tparsers241035* p, tnode210818* n, NimStringDesc* filename, tllstream197204* start) {
	tllstream197204* result;
{	result = 0;
	result = start;
	{
		if (!((*n).Kind == ((NU8) 1))) goto LA3;
		goto BeforeRet;
	}
	LA3: ;
	{
		NIM_BOOL LOC7;
		NIM_BOOL LOC8;
		LOC7 = 0;
		LOC8 = 0;
		LOC8 = ((*n).Kind == ((NU8) 29));
		if (!(LOC8)) goto LA9;
		LOC8 = ((*(*n).kindU.S6.Sons->data[0]).Kind == ((NU8) 2));
		LA9: ;
		LOC7 = LOC8;
		if (!(LOC7)) goto LA10;
		LOC7 = identeq_186493((*(*n).kindU.S6.Sons->data[0]).kindU.S5.Ident, ((NimStringDesc*) &TMP1215));
		LA10: ;
		if (!LOC7) goto LA11;
		{
			NI i_241544;
			NI res_241570;
			i_241544 = 0;
			res_241570 = 1;
			{
				while (1) {
					if (!(res_241570 <= 2)) goto LA15;
					i_241544 = res_241570;
					{
						if (!((*(*n).kindU.S6.Sons->data[i_241544]).Kind == ((NU8) 29))) goto LA18;
						result = evalpipe_241494(p, (*n).kindU.S6.Sons->data[i_241544], filename, result);
					}
					goto LA16;
					LA18: ;
					{
						result = applyfilter_241455(p, (*n).kindU.S6.Sons->data[i_241544], filename, result);
					}
					LA16: ;
					res_241570 += 1;
				} LA15: ;
			}
		}
	}
	goto LA5;
	LA11: ;
	{
		if (!((*n).Kind == ((NU8) 115))) goto LA22;
		result = evalpipe_241494(p, (*n).kindU.S6.Sons->data[0], filename, result);
	}
	goto LA5;
	LA22: ;
	{
		result = applyfilter_241455(p, n, filename, result);
	}
	LA5: ;
	}BeforeRet: ;
	return result;
}

N_NIMCALL(void, openparsers_241047)(tparsers241035* p, NI32 fileidx, tllstream197204* inputstream) {
	tllstream197204* s;
	NimStringDesc* filename;
	tnode210818* pipe;
	s = 0;
	(*p).Skin = ((NU8) 0);
	filename = tofullpathconsiderdirty_183807(fileidx);
	pipe = parsepipe_241177(filename, inputstream);
	{
		if (!!((pipe == NIM_NIL))) goto LA3;
		s = evalpipe_241494(p, pipe, filename, inputstream);
	}
	goto LA1;
	LA3: ;
	{
		s = inputstream;
	}
	LA1: ;
	switch ((*p).Skin) {
	case ((NU8) 0):
	case ((NU8) 2):
	case ((NU8) 3):
	{
		openparser_228402((&(*p).Parser), fileidx, s, NIM_FALSE);
	}
	break;
	case ((NU8) 1):
	{
		openparser_228402((&(*p).Parser), fileidx, s, NIM_TRUE);
	}
	break;
	}
}

N_NIMCALL(tnode210818*, parseall_241063)(tparsers241035* p) {
	tnode210818* result;
	result = 0;
	switch ((*p).Skin) {
	case ((NU8) 0):
	case ((NU8) 1):
	{
		result = parseall_228216((&(*p).Parser));
	}
	break;
	case ((NU8) 2):
	{
		result = parseall_233009((&(*p).Parser));
	}
	break;
	case ((NU8) 3):
	{
		internalerror_184688(((NimStringDesc*) &TMP1363));
		result = emptynode_211686;
	}
	break;
	}
	return result;
}

N_NIMCALL(void, closeparsers_241056)(tparsers241035* p) {
	closeparser_228223((&(*p).Parser));
}

N_NIMCALL(tnode210818*, parsefile_241041)(NI32 fileidx) {
	tnode210818* result;
	tparsers241035 p;
	FILE* f;
	NimStringDesc* filename;
	tllstream197204* LOC6;
{	result = 0;
	memset((void*)(&p), 0, sizeof(p));
	objectInit((&p), (&NTI241035));
	f = 0;
	filename = tofullpathconsiderdirty_183807(fileidx);
	{
		NIM_BOOL LOC3;
		LOC3 = 0;
		LOC3 = open_13003(&f, filename, ((NU8) 0), -1);
		if (!!(LOC3)) goto LA4;
		rawmessage_184415(((NU16) 3), filename);
		goto BeforeRet;
	}
	LA4: ;
	LOC6 = 0;
	LOC6 = llstreamopen_197246(&f);
	openparsers_241047((&p), fileidx, LOC6);
	result = parseall_241063((&p));
	closeparsers_241056((&p));
	}BeforeRet: ;
	return result;
}

N_NIMCALL(tnode210818*, parsetoplevelstmt_241070)(tparsers241035* p) {
	tnode210818* result;
	result = 0;
	switch ((*p).Skin) {
	case ((NU8) 0):
	case ((NU8) 1):
	{
		result = parsetoplevelstmt_228230((&(*p).Parser));
	}
	break;
	case ((NU8) 2):
	{
		result = parsetoplevelstmt_233020((&(*p).Parser));
	}
	break;
	case ((NU8) 3):
	{
		internalerror_184688(((NimStringDesc*) &TMP1363));
		result = emptynode_211686;
	}
	break;
	}
	return result;
}
NIM_EXTERNC N_NOINLINE(void, compiler_syntaxesInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, compiler_syntaxesDatInit)(void) {
static TNimNode* TMP1005[2];
static TNimNode* TMP1006[4];
NI TMP1008;
static char* NIM_CONST TMP1007[4] = {
"skinStandard", 
"skinStrongSpaces", 
"skinBraces", 
"skinEndX"};
static TNimNode TMP798[8];
NTI241035.size = sizeof(tparsers241035);
NTI241035.kind = 18;
NTI241035.base = 0;
TMP1005[0] = &TMP798[1];
NTI241007.size = sizeof(NU8);
NTI241007.kind = 14;
NTI241007.base = 0;
NTI241007.flags = 3;
for (TMP1008 = 0; TMP1008 < 4; TMP1008++) {
TMP798[TMP1008+2].kind = 1;
TMP798[TMP1008+2].offset = TMP1008;
TMP798[TMP1008+2].name = TMP1007[TMP1008];
TMP1006[TMP1008] = &TMP798[TMP1008+2];
}
TMP798[6].len = 4; TMP798[6].kind = 2; TMP798[6].sons = &TMP1006[0];
NTI241007.node = &TMP798[6];
TMP798[1].kind = 1;
TMP798[1].offset = offsetof(tparsers241035, Skin);
TMP798[1].typ = (&NTI241007);
TMP798[1].name = "skin";
TMP1005[1] = &TMP798[7];
TMP798[7].kind = 1;
TMP798[7].offset = offsetof(tparsers241035, Parser);
TMP798[7].typ = (&NTI228205);
TMP798[7].name = "parser";
TMP798[0].len = 2; TMP798[0].kind = 2; TMP798[0].sons = &TMP1005[0];
NTI241035.node = &TMP798[0];
}

