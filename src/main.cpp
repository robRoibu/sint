/*-
 *main.cpp
 * created by: Rob N. Roibu and Kurt L. Manion
 * on: Tues., 28 Aug. 2018
 * simple integration calculator
 */

/* DESIDERATUM
 * TODO
 */

#include <cstdlib>
#include <getopt.h>

#include "parse.h"

const char *const opts = ":e:";

const struct option longopts[] = {
	{ "equation",	required_argument,	NULL,	'e' },
	{ "help",	no_argument,	NULL,	'h' },
	{ "version",	no_argument,	NULL,	'V' },
	{ NULL, 0, NULL, 0}
};

int
main(
    int argc,
    char *const argv[])
{
	

	return EXIT_SUCCESS;
}

/* vim: set ts=8 sw=8 noexpandtab cindent tw=79:
 * vim: set cino=n-.5s,{.5s,Ls,:0,l1,g0,E-s,i0,p.5s,t0,C1,(0,U1,W.5s,ks: */
