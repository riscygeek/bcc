const char* help_options =
	"  -o output            Specify the output file (or '-' for standard output). By default the output file is derived from the source file, except if the -A option was specified, then it is standard output.\n"
	"  -c                   Compile and assemble the program. (This is the default)\n"
	"  -A                   Only emit the abstract syntax tree of the program, as interpreted by the parser.\n"
	"  -i                   Only emit the intermediate representation.\n"
	"  -S                   Emit the assembly output.\n"
	"  -E                   Only pre-process the file.\n"
	"  -O                   Specify the optimization level. (possible values: 0, 1, 2, 3)\n"
	"  -w                   Disable all warnings.\n"
	"  -V                   Print the version information.\n"
	"  -m mach_opt          Specify a target-dependend option.\n"
	"  -h                   Print a simple help message.\n"
	"  -dumpmachine         Print the target machine.\n"
	"  -dumpversion         Print the version.\n"
	"  -dumparch            Print the target machine architecture.\n"
	"  -dumpmacros, -dM     Dump all predefined macros.\n"
	"  -e path              Specify the path to the preprocessor.\n"
	"  -C                   Suppress the color output.\n"
	"  -I include_path      Specify an include path for the preprocessor to search.\n"
	"  -Dname[=value]       Specify a predefined macro.\n"
	"  -Uname               Remove macro name\n"
;
