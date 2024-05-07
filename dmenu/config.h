/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */
/* -fn option overrides fonts[0]; default X11 font or font set */
static const char *fonts[] = {
	"Hack:size=10"
};
static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */
static const char *colors[SchemeLast][2] = {
	/*     fg         bg       */
	//Nord 
//	[SchemeNorm] = { "#E5E9F0", "#3B4252" },
//	[SchemeSel] = { "#E5E9F0", "#88C0D0" },
//	[SchemeOut] = { "#000000", "#00ffff" },
	
//	[SchemeNorm] = { "#f1be9b", "#1c0f1e" },
//	[SchemeSel] = { "#f1be9b", "#000000"},
//	[SchemeOut] = { "#f1be9b", "#e06ecc" },

	[SchemeNorm] = { "#f8f8f2", "#282a36" },
	[SchemeSel] = { "#f8f8f2", "#6272a4" },
 	[SchemeOut] = { "#000000", "#00ffff" },
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 10;
static unsigned int columns    = 1;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static const unsigned int border_width = 2;
