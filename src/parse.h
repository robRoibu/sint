/*-
 *parse.h
 */

#ifndef _PARSE_H_
#define _PARSE_H_

#include <vector>

typedef
struct _term {
	double	a;
	double	b;
	double	n;
} term_t;

std::vector<term_t>	parse __P((char *));

#endif /* !_PARSE_H_ */

/* vim: set ts=8 sw=8 noexpandtab cindent tw=79:
 * vim: set cino=n-.5s,{.5s,Ls,:0,l1,g0,E-s,i0,p.5s,t0,C1,(0,U1,W.5s,ks: */
