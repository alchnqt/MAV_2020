#pragma once
#include <cstddef> //NULL

#define FST_VAR_13 9, \
		FST::NODE(1, FST::RELATION('p', 1)), \
		FST::NODE(3, FST::RELATION('f', 1), FST::RELATION('f', 2), FST::RELATION('f', 6)), \
		FST::NODE(1, FST::RELATION('t', 3)), \
		FST::NODE(4, FST::RELATION('c', 4), FST::RELATION('c', 6), FST::RELATION('s', 5), FST::RELATION('s', 5)), \
		FST::NODE(2, FST::RELATION('y', 4), FST::RELATION('y', 6)), \
		FST::NODE(2, FST::RELATION('x', 5), FST::RELATION('x', 6)), \
		FST::NODE(3, FST::RELATION('f', 7), FST::RELATION('f', 6), FST::RELATION('t', 3)), \
		FST::NODE(1, FST::RELATION('e', 8)), \
		FST::NODE()

#define FST_INTEGER 8, \
		FST::NODE(1, FST::RELATION('i', 1)),\
		FST::NODE(1, FST::RELATION('n', 2)),\
		FST::NODE(1, FST::RELATION('t', 3)),\
		FST::NODE(1, FST::RELATION('e', 4)),\
		FST::NODE(1, FST::RELATION('g', 5)),\
		FST::NODE(1, FST::RELATION('e', 6)),\
		FST::NODE(1, FST::RELATION('r', 7)),\
FST::NODE()

#define FST_STRING 7, \
		FST::NODE(1, FST::RELATION('s', 1)),\
		FST::NODE(1, FST::RELATION('t', 2)),\
		FST::NODE(1, FST::RELATION('r', 3)),\
		FST::NODE(1, FST::RELATION('i', 4)),\
		FST::NODE(1, FST::RELATION('n', 5)),\
		FST::NODE(1, FST::RELATION('g', 6)),\
FST::NODE()

#define FST_FUNCTION 9, \
		FST::NODE(1, FST::RELATION('f', 1)),\
		FST::NODE(1, FST::RELATION('u', 2)),\
		FST::NODE(1, FST::RELATION('n', 3)),\
		FST::NODE(1, FST::RELATION('c', 4)),\
		FST::NODE(1, FST::RELATION('t', 5)),\
		FST::NODE(1, FST::RELATION('i', 6)),\
		FST::NODE(1, FST::RELATION('o', 7)),\
		FST::NODE(1, FST::RELATION('n', 8)),\
FST::NODE()

#define FST_DECLARE 8, \
		FST::NODE(1, FST::RELATION('d', 1)),\
		FST::NODE(1, FST::RELATION('e', 2)),\
		FST::NODE(1, FST::RELATION('c', 3)),\
		FST::NODE(1, FST::RELATION('l', 4)),\
		FST::NODE(1, FST::RELATION('a', 5)),\
		FST::NODE(1, FST::RELATION('r', 6)),\
		FST::NODE(1, FST::RELATION('e', 7)),\
FST::NODE()

#define FST_RETURN 7, \
		FST::NODE(1, FST::RELATION('r', 1)),\
		FST::NODE(1, FST::RELATION('e', 2)),\
		FST::NODE(1, FST::RELATION('t', 3)),\
		FST::NODE(1, FST::RELATION('u', 4)),\
		FST::NODE(1, FST::RELATION('r', 5)),\
		FST::NODE(1, FST::RELATION('n', 6)),\
FST::NODE()


#define FST_PRINT 6, \
		FST::NODE(1, FST::RELATION('p', 1)),\
		FST::NODE(1, FST::RELATION('r', 2)),\
		FST::NODE(1, FST::RELATION('i', 3)),\
		FST::NODE(1, FST::RELATION('n', 4)),\
		FST::NODE(1, FST::RELATION('t', 5)),\
FST::NODE()


#define FST_MAIN 5, \
		FST::NODE(1, FST::RELATION('m', 1)),\
		FST::NODE(1, FST::RELATION('a', 2)),\
		FST::NODE(1, FST::RELATION('i', 3)),\
		FST::NODE(1, FST::RELATION('n', 4)),\
FST::NODE()

#define SNODE(Y) 2, FST::NODE(1, FST::RELATION(Y, 1)),\
FST::NODE()

#define FST_SEMICOLON SNODE(';')
#define FST_COMMA SNODE(',')
#define FST_BRACELET SNODE('}')

#define FST_LEFTBRACE SNODE('{')

#define FST_LEFTHESIS SNODE('(')

#define FST_RIGHTESIS SNODE(')')

#define FST_PLUS SNODE('+')
#define FST_MINUS SNODE('-')
#define FST_STAR SNODE('*')
#define FST_DIRSLACH SNODE('/')

#define INTEGER_NODE(X) FST::RELATION('0', X), FST::RELATION('1', X), FST::RELATION('2', X), FST::RELATION('3', X), FST::RELATION('4', X), \
FST::RELATION('5', X), FST::RELATION('6', X), FST::RELATION('7', X), FST::RELATION('8', X), FST::RELATION('9', X)

#define MINUS_NODE(X) FST::RELATION('-', X), FST::RELATION('0', X), FST::RELATION('1', X), FST::RELATION('2', X), FST::RELATION('3', X), FST::RELATION('4', X), \
FST::RELATION('5', X), FST::RELATION('6', X), FST::RELATION('7', X), FST::RELATION('8', X), FST::RELATION('9', X)

#define FST_INTEGER_LITERAL 1,	\
	FST::NODE(10,	FST::RELATION('0', 0),	\
					FST::RELATION('1', 0),	\
					FST::RELATION('2', 0),	\
					FST::RELATION('3', 0),	\
					FST::RELATION('4', 0),	\
					FST::RELATION('5', 0),	\
					FST::RELATION('6', 0),	\
					FST::RELATION('7', 0),	\
					FST::RELATION('8', 0),	\
					FST::RELATION('9', 0)),	\
	FST::NODE()
								

#define REL(X, Y) FST::RELATION(X, Y)

#define STRING_NODE(X) INTEGER_NODE(X),\
REL(' ', X),\
REL('�', X), REL('�', X), REL('�', X), REL('�', X), REL('�', X), REL('�', X), REL('�', X), REL('�', X),REL('�', X), REL('�', X), REL('�', X),\
REL('�', X), REL('�', X), REL('�', X),REL('�', X),REL('�', X),REL('�', X), REL('�', X),REL('�', X),REL('�', X),REL('�', X), REL('�', X),\
REL('�', X), REL('�', X), REL('�', X),REL('�', X),REL('�', X),REL('�', X), REL('�', X),REL('�', X),REL('�', X),REL('�', X), REL('�', X), REL('�', X)

//33+2+10 => 2: ' ' 45
#define FST_STRING_LITERAL 3,	\
	FST::NODE(1, FST::RELATION('\'', 1)),	\
	FST::NODE(85,	FST::RELATION(' ', 1),	\
					FST::RELATION('a', 1),	\
					FST::RELATION('b', 1),	\
					FST::RELATION('c', 1),	\
					FST::RELATION('d', 1),	\
					FST::RELATION('e', 1),	\
					FST::RELATION('f', 1),	\
					FST::RELATION('g', 1),	\
					FST::RELATION('h', 1),	\
					FST::RELATION('i', 1),	\
					FST::RELATION('j', 1),	\
					FST::RELATION('k', 1),	\
					FST::RELATION('l', 1),	\
					FST::RELATION('m', 1),	\
					FST::RELATION('n', 1),	\
					FST::RELATION('o', 1),	\
					FST::RELATION('p', 1),	\
					FST::RELATION('q', 1),	\
					FST::RELATION('r', 1),	\
					FST::RELATION('s', 1),	\
					FST::RELATION('t', 1),	\
					FST::RELATION('u', 1),	\
					FST::RELATION('v', 1),	\
					FST::RELATION('w', 1),	\
					FST::RELATION('x', 1),	\
					FST::RELATION('y', 1),	\
					FST::RELATION('z', 1),	\
					FST::RELATION('0', 1),	\
					FST::RELATION('1', 1),	\
					FST::RELATION('2', 1),	\
					FST::RELATION('3', 1),	\
					FST::RELATION('4', 1),	\
					FST::RELATION('5', 1),	\
					FST::RELATION('6', 1),	\
					FST::RELATION('7', 1),	\
					FST::RELATION('8', 1),	\
					FST::RELATION('9', 1),	\
					FST::RELATION('�', 1),	\
					FST::RELATION('�', 1),	\
					FST::RELATION('�', 1),	\
					FST::RELATION('�', 1),	\
					FST::RELATION('�', 1),	\
					FST::RELATION('�', 1),	\
					FST::RELATION('�', 1),	\
					FST::RELATION('�', 1),	\
					FST::RELATION('�', 1),	\
					FST::RELATION('�', 1),	\
					FST::RELATION('�', 1),	\
					FST::RELATION('�', 1),	\
					FST::RELATION('�', 1),	\
					FST::RELATION('�', 1),	\
					FST::RELATION('�', 1),	\
					FST::RELATION('�', 1),	\
					FST::RELATION('�', 1),	\
					FST::RELATION('�', 1),	\
					FST::RELATION('�', 1),	\
					FST::RELATION('�', 1),	\
					FST::RELATION('�', 1),	\
					FST::RELATION('�', 1),	\
					FST::RELATION('�', 1),	\
					FST::RELATION('�', 1),	\
					FST::RELATION('�', 1),	\
					FST::RELATION('�', 1),	\
					FST::RELATION('�', 1),	\
					FST::RELATION('�', 1),	\
					FST::RELATION('�', 1),	\
					FST::RELATION('�', 1),	\
					FST::RELATION('�', 1),	\
					FST::RELATION('�', 1),	\
					FST::RELATION('�', 1),	\
					FST::RELATION('=', 1),	\
					FST::RELATION('+', 1),	\
					FST::RELATION('-', 1),	\
					FST::RELATION('*', 1),	\
					FST::RELATION('/', 1),	\
					FST::RELATION('(', 1),	\
					FST::RELATION(')', 1),	\
					FST::RELATION('{', 1),	\
					FST::RELATION('}', 1),	\
					FST::RELATION(';', 1),	\
					FST::RELATION(',', 1),	\
					FST::RELATION('?', 1),	\
					FST::RELATION('!', 1),	\
					FST::RELATION('\'', 2)),\
	FST::NODE()

#define FST_IDENTIFIER      1,	\
			FST::NODE(60,	FST::RELATION('a', 0),	\
							FST::RELATION('b', 0),	\
							FST::RELATION('c', 0),	\
							FST::RELATION('d', 0),	\
							FST::RELATION('e', 0),	\
							FST::RELATION('f', 0),	\
							FST::RELATION('g', 0),	\
							FST::RELATION('h', 0),	\
							FST::RELATION('i', 0),	\
							FST::RELATION('j', 0),	\
							FST::RELATION('k', 0),	\
							FST::RELATION('l', 0),	\
							FST::RELATION('m', 0),	\
							FST::RELATION('n', 0),	\
							FST::RELATION('o', 0),	\
							FST::RELATION('p', 0),	\
							FST::RELATION('q', 0),	\
							FST::RELATION('r', 0),	\
							FST::RELATION('s', 0),	\
							FST::RELATION('t', 0),	\
							FST::RELATION('u', 0),	\
							FST::RELATION('v', 0),	\
							FST::RELATION('w', 0),	\
							FST::RELATION('x', 0),	\
							FST::RELATION('y', 0),	\
							FST::RELATION('z', 0),	\
							FST::RELATION('_', 0)),	\
							FST::RELATION('�', 0),	\
							FST::RELATION('�', 0),	\
							FST::RELATION('�', 0),	\
							FST::RELATION('�', 0),	\
							FST::RELATION('�', 0),	\
							FST::RELATION('�', 0),	\
							FST::RELATION('�', 0),	\
							FST::RELATION('�', 0),	\
							FST::RELATION('�', 0),	\
							FST::RELATION('�', 0),	\
							FST::RELATION('�', 0),	\
							FST::RELATION('�', 0),	\
							FST::RELATION('�', 0),	\
							FST::RELATION('�', 0),	\
							FST::RELATION('�', 0),	\
							FST::RELATION('�', 0),	\
							FST::RELATION('�', 0),	\
							FST::RELATION('�', 0),	\
							FST::RELATION('�', 0),	\
							FST::RELATION('�', 0),	\
							FST::RELATION('�', 0),	\
							FST::RELATION('�', 0),	\
							FST::RELATION('�', 0),	\
							FST::RELATION('�', 0),	\
							FST::RELATION('�', 0),	\
							FST::RELATION('�', 0),	\
							FST::RELATION('�', 0),	\
							FST::RELATION('�', 0),	\
							FST::RELATION('�', 0),	\
							FST::RELATION('�', 0),	\
							FST::RELATION('�', 0),	\
							FST::RELATION('�', 0),	\
							FST::RELATION('�', 0),	\
			FST::NODE()			

namespace FST
{
	struct RELATION
	{
		char symbol;
		short nnode;
		RELATION(char c = 0x00, short ns = NULL);
	};
	struct NODE
	{
		short n_relation;
		RELATION* realations;
		NODE();
		NODE(short n, RELATION rel, ...);
	};
	struct FST
	{
		char* string;
		short position;
		short nstates;
		NODE* nodes;
		short* rstates;
		FST(const char* s, short ns, NODE n, ...);
	};

	bool execute(FST& fst);
}