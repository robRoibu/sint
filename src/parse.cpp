/*-
 *parse.cpp
 */

#include "parse.h"
#include <cstdbool>

std::vector<term_t>
parse(
    char *s)
{
	/* TO DO:
		> Need to create a function that takes in a formula the user
		> inputs. Set it as an array, For loops through it and checks
		> for negative or plus sign. 
	
	 */
	bool sign_flg;

	sign_flag = true;

	for (char *c=s; *c; ++c)
	    {
		switch (*c) {
			case ' ':
			case '\t':
			case '\n':
				break;;
		
			case '-':
				if (sign_flg) {
					/* negate the sign of the following
					 * number */
				} else {
					/* it is an operator, so end the term
					 * here */
					sign_flag = false;
				}
				break;;
		}

	    }

}

/* vim: set ts=8 sw=8 noexpandtab cindent tw=79:
 * vim: set cino=n-.5s,{.5s,Ls,:0,l1,g0,E-s,i0,p.5s,t0,C1,(0,U1,W.5s,ks: */
