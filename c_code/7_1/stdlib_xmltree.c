/* Generated by Nim Compiler v0.10.3 */
/*   (c) 2015 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_INTBITS 32
#include "nimbase.h"

#include <string.h>
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct  TGenericSeq  {
NI len;
NI reserved;
};
struct  NimStringDesc  {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
N_NIMCALL(NimStringDesc*, rawNewString)(NI space);
N_NIMCALL(NimStringDesc*, rawNewString)(NI cap);
N_NIMCALL(void, addescaped_358042)(NimStringDesc** result, NimStringDesc* s);
static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src);
N_NIMCALL(NimStringDesc*, resizeString)(NimStringDesc* dest, NI addlen);
N_NIMCALL(NimStringDesc*, addChar)(NimStringDesc* s, NIM_CHAR c);
STRING_LITERAL(TMP4660, "&lt;", 4);
STRING_LITERAL(TMP4661, "&gt;", 4);
STRING_LITERAL(TMP4662, "&amp;", 5);
STRING_LITERAL(TMP4663, "&quot;", 6);
STRING_LITERAL(TMP4664, "&#x27;", 6);
STRING_LITERAL(TMP4665, "&#x2F;", 6);

static N_INLINE(void, appendString)(NimStringDesc* dest, NimStringDesc* src) {
	memcpy(((NCSTRING) ((&(*dest).data[((*dest).Sup.len)- 0]))), ((NCSTRING) ((*src).data)), (NI32)((*src).Sup.len + 1));
	(*dest).Sup.len += (*src).Sup.len;
}

N_NIMCALL(void, addescaped_358042)(NimStringDesc** result, NimStringDesc* s) {
	{
		NIM_CHAR c_358047;
		NI i_358051;
		NI l_358053;
		c_358047 = 0;
		i_358051 = 0;
		l_358053 = s->Sup.len;
		{
			while (1) {
				if (!(i_358051 < l_358053)) goto LA3;
				c_358047 = s->data[i_358051];
				switch (((NU8)(c_358047))) {
				case 60:
				{
					(*result) = resizeString((*result), 4);
appendString((*result), ((NimStringDesc*) &TMP4660));
				}
				break;
				case 62:
				{
					(*result) = resizeString((*result), 4);
appendString((*result), ((NimStringDesc*) &TMP4661));
				}
				break;
				case 38:
				{
					(*result) = resizeString((*result), 5);
appendString((*result), ((NimStringDesc*) &TMP4662));
				}
				break;
				case 34:
				{
					(*result) = resizeString((*result), 6);
appendString((*result), ((NimStringDesc*) &TMP4663));
				}
				break;
				case 39:
				{
					(*result) = resizeString((*result), 6);
appendString((*result), ((NimStringDesc*) &TMP4664));
				}
				break;
				case 47:
				{
					(*result) = resizeString((*result), 6);
appendString((*result), ((NimStringDesc*) &TMP4665));
				}
				break;
				default:
				{
					(*result) = addChar((*result), c_358047);
				}
				break;
				}
				i_358051 += 1;
			} LA3: ;
		}
	}
}

N_NIMCALL(NimStringDesc*, escape_358069)(NimStringDesc* s) {
	NimStringDesc* result;
	result = 0;
	result = rawNewString(s->Sup.len);
	addescaped_358042((&result), s);
	return result;
}
NIM_EXTERNC N_NOINLINE(void, stdlib_xmltreeInit)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_xmltreeDatInit)(void) {
}

