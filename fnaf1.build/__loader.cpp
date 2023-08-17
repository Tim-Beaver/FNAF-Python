
/* Code to register embedded modules for meta path based loading if any. */

#include <Python.h>

/* Use a hex version of our own to compare for versions. We do not care about pre-releases */
#if PY_MICRO_VERSION < 16
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + PY_MICRO_VERSION)
#else
#define PYTHON_VERSION (PY_MAJOR_VERSION * 256 + PY_MINOR_VERSION * 16 + 15)
#endif

#include "nuitka/constants_blob.h"

#include "nuitka/unfreezing.h"

/* Type bool */
#ifndef __cplusplus
#include "stdbool.h"
#endif

#if 38 > 0
static unsigned char *bytecode_data[38];
#else
static unsigned char **bytecode_data = NULL;
#endif

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
extern PyObject *modulecode___main__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$__config__(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_distributor_init(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_globals(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_pytesttester(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat$_inspect(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$compat$py3k(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_add_newdocs(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_add_newdocs_scalars(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_asarray(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_dtype(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_dtype_ctypes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_exceptions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_internal(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_methods(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_string_helpers(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_type_aliases(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$_ufunc_config(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$arrayprint(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$defchararray(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$einsumfunc(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$fromnumeric(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$function_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$getlimits(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$machar(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$memmap(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$multiarray(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$numeric(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$numerictypes(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$overrides(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$records(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$shape_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$core$umath(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ctypeslib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft$_pocketfft(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$fft$helper(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_datasource(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_iotools(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$_version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arraypad(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arraysetops(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$arrayterator(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$format(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$function_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$histograms(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$index_tricks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$mixins(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$nanfunctions(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$npyio(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$polynomial(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$scimath(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$shape_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$stride_tricks(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$twodim_base(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$type_check(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$ufunclike(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$lib$utils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$linalg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$linalg$linalg(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$core(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$extras(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$ma$mrecords(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$matrixlib(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$matrixlib$defmatrix(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$_polybase(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$chebyshev(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$hermite(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$hermite_e(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$laguerre(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$legendre(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$polynomial(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$polynomial$polyutils(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$random(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$random$_pickle(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_numpy$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pgzero(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pgzero$actor(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pgzero$animation(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pgzero$builtins(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pgzero$clock(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pgzero$constants(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pgzero$game(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pgzero$keyboard(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pgzero$loaders(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pgzero$music(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pgzero$ptext(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pgzero$rect(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pgzero$runner(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pgzero$screen(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pgzero$soundfmt(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pgzero$spellcheck(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pgzero$tone(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pgzrun(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygame(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygame$colordict(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygame$compat(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygame$cursors(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygame$ftfont(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygame$locals(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygame$macosx(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygame$pkgdata(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygame$sndarray(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygame$sprite(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygame$surfarray(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygame$sysfont(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygame$threads(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);
extern PyObject *modulecode_pygame$version(PyObject *, struct Nuitka_MetaPathBasedLoaderEntry const *);

static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] = {
    {"__main__", modulecode___main__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\104\157\143\165\155\145\156\164\163\134\113\157\144\154\141\156\144\40\102\157\164\163\134\106\116\101\106\134\146\156\141\146\61\56\160\171"
#endif
},
    {"email", NULL, 0, 1722, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\145\155\141\151\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"email._encoded_words", NULL, 1, 5717, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\145\155\141\151\154\134\137\145\156\143\157\144\145\144\137\167\157\162\144\163\56\160\171"
#endif
},
    {"email._header_value_parser", NULL, 2, 79818, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\145\155\141\151\154\134\137\150\145\141\144\145\162\137\166\141\154\165\145\137\160\141\162\163\145\162\56\160\171"
#endif
},
    {"email._parseaddr", NULL, 3, 12485, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\145\155\141\151\154\134\137\160\141\162\163\145\141\144\144\162\56\160\171"
#endif
},
    {"email._policybase", NULL, 4, 14841, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\145\155\141\151\154\134\137\160\157\154\151\143\171\142\141\163\145\56\160\171"
#endif
},
    {"email.base64mime", NULL, 5, 3266, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\145\155\141\151\154\134\142\141\163\145\66\64\155\151\155\145\56\160\171"
#endif
},
    {"email.charset", NULL, 6, 11490, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\145\155\141\151\154\134\143\150\141\162\163\145\164\56\160\171"
#endif
},
    {"email.contentmanager", NULL, 7, 7374, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\145\155\141\151\154\134\143\157\156\164\145\156\164\155\141\156\141\147\145\162\56\160\171"
#endif
},
    {"email.encoders", NULL, 8, 1643, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\145\155\141\151\154\134\145\156\143\157\144\145\162\163\56\160\171"
#endif
},
    {"email.errors", NULL, 9, 5936, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\145\155\141\151\154\134\145\162\162\157\162\163\56\160\171"
#endif
},
    {"email.feedparser", NULL, 10, 10673, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\145\155\141\151\154\134\146\145\145\144\160\141\162\163\145\162\56\160\171"
#endif
},
    {"email.generator", NULL, 11, 12513, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\145\155\141\151\154\134\147\145\156\145\162\141\164\157\162\56\160\171"
#endif
},
    {"email.header", NULL, 12, 16470, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\145\155\141\151\154\134\150\145\141\144\145\162\56\160\171"
#endif
},
    {"email.headerregistry", NULL, 13, 21931, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\145\155\141\151\154\134\150\145\141\144\145\162\162\145\147\151\163\164\162\171\56\160\171"
#endif
},
    {"email.iterators", NULL, 14, 1951, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\145\155\141\151\154\134\151\164\145\162\141\164\157\162\163\56\160\171"
#endif
},
    {"email.message", NULL, 15, 37909, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\145\155\141\151\154\134\155\145\163\163\141\147\145\56\160\171"
#endif
},
    {"email.parser", NULL, 16, 5753, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\145\155\141\151\154\134\160\141\162\163\145\162\56\160\171"
#endif
},
    {"email.policy", NULL, 17, 9689, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\145\155\141\151\154\134\160\157\154\151\143\171\56\160\171"
#endif
},
    {"email.quoprimime", NULL, 18, 7709, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\145\155\141\151\154\134\161\165\157\160\162\151\155\151\155\145\56\160\171"
#endif
},
    {"email.utils", NULL, 19, 9578, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\145\155\141\151\154\134\165\164\151\154\163\56\160\171"
#endif
},
    {"numpy", modulecode_numpy, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.__config__", modulecode_numpy$__config__, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\137\143\157\156\146\151\147\137\137\56\160\171"
#endif
},
    {"numpy._distributor_init", modulecode_numpy$_distributor_init, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\144\151\163\164\162\151\142\165\164\157\162\137\151\156\151\164\56\160\171"
#endif
},
    {"numpy._globals", modulecode_numpy$_globals, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\147\154\157\142\141\154\163\56\160\171"
#endif
},
    {"numpy._pytesttester", modulecode_numpy$_pytesttester, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\160\171\164\145\163\164\164\145\163\164\145\162\56\160\171"
#endif
},
    {"numpy._version", modulecode_numpy$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\137\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"numpy.compat", modulecode_numpy$compat, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\155\160\141\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.compat._inspect", modulecode_numpy$compat$_inspect, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\155\160\141\164\134\137\151\156\163\160\145\143\164\56\160\171"
#endif
},
    {"numpy.compat.py3k", modulecode_numpy$compat$py3k, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\155\160\141\164\134\160\171\63\153\56\160\171"
#endif
},
    {"numpy.core", modulecode_numpy$core, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.core._add_newdocs", modulecode_numpy$core$_add_newdocs, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\141\144\144\137\156\145\167\144\157\143\163\56\160\171"
#endif
},
    {"numpy.core._add_newdocs_scalars", modulecode_numpy$core$_add_newdocs_scalars, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\141\144\144\137\156\145\167\144\157\143\163\137\163\143\141\154\141\162\163\56\160\171"
#endif
},
    {"numpy.core._asarray", modulecode_numpy$core$_asarray, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\141\163\141\162\162\141\171\56\160\171"
#endif
},
    {"numpy.core._dtype", modulecode_numpy$core$_dtype, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\144\164\171\160\145\56\160\171"
#endif
},
    {"numpy.core._dtype_ctypes", modulecode_numpy$core$_dtype_ctypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\144\164\171\160\145\137\143\164\171\160\145\163\56\160\171"
#endif
},
    {"numpy.core._exceptions", modulecode_numpy$core$_exceptions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\145\170\143\145\160\164\151\157\156\163\56\160\171"
#endif
},
    {"numpy.core._internal", modulecode_numpy$core$_internal, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\151\156\164\145\162\156\141\154\56\160\171"
#endif
},
    {"numpy.core._methods", modulecode_numpy$core$_methods, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\155\145\164\150\157\144\163\56\160\171"
#endif
},
    {"numpy.core._string_helpers", modulecode_numpy$core$_string_helpers, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\163\164\162\151\156\147\137\150\145\154\160\145\162\163\56\160\171"
#endif
},
    {"numpy.core._type_aliases", modulecode_numpy$core$_type_aliases, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\164\171\160\145\137\141\154\151\141\163\145\163\56\160\171"
#endif
},
    {"numpy.core._ufunc_config", modulecode_numpy$core$_ufunc_config, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\137\165\146\165\156\143\137\143\157\156\146\151\147\56\160\171"
#endif
},
    {"numpy.core.arrayprint", modulecode_numpy$core$arrayprint, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\141\162\162\141\171\160\162\151\156\164\56\160\171"
#endif
},
    {"numpy.core.defchararray", modulecode_numpy$core$defchararray, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\144\145\146\143\150\141\162\141\162\162\141\171\56\160\171"
#endif
},
    {"numpy.core.einsumfunc", modulecode_numpy$core$einsumfunc, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\145\151\156\163\165\155\146\165\156\143\56\160\171"
#endif
},
    {"numpy.core.fromnumeric", modulecode_numpy$core$fromnumeric, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\146\162\157\155\156\165\155\145\162\151\143\56\160\171"
#endif
},
    {"numpy.core.function_base", modulecode_numpy$core$function_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\146\165\156\143\164\151\157\156\137\142\141\163\145\56\160\171"
#endif
},
    {"numpy.core.getlimits", modulecode_numpy$core$getlimits, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\147\145\164\154\151\155\151\164\163\56\160\171"
#endif
},
    {"numpy.core.machar", modulecode_numpy$core$machar, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\155\141\143\150\141\162\56\160\171"
#endif
},
    {"numpy.core.memmap", modulecode_numpy$core$memmap, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\155\145\155\155\141\160\56\160\171"
#endif
},
    {"numpy.core.multiarray", modulecode_numpy$core$multiarray, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\155\165\154\164\151\141\162\162\141\171\56\160\171"
#endif
},
    {"numpy.core.numeric", modulecode_numpy$core$numeric, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\156\165\155\145\162\151\143\56\160\171"
#endif
},
    {"numpy.core.numerictypes", modulecode_numpy$core$numerictypes, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\156\165\155\145\162\151\143\164\171\160\145\163\56\160\171"
#endif
},
    {"numpy.core.overrides", modulecode_numpy$core$overrides, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\157\166\145\162\162\151\144\145\163\56\160\171"
#endif
},
    {"numpy.core.records", modulecode_numpy$core$records, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\162\145\143\157\162\144\163\56\160\171"
#endif
},
    {"numpy.core.shape_base", modulecode_numpy$core$shape_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\163\150\141\160\145\137\142\141\163\145\56\160\171"
#endif
},
    {"numpy.core.umath", modulecode_numpy$core$umath, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\157\162\145\134\165\155\141\164\150\56\160\171"
#endif
},
    {"numpy.ctypeslib", modulecode_numpy$ctypeslib, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\143\164\171\160\145\163\154\151\142\56\160\171"
#endif
},
    {"numpy.fft", modulecode_numpy$fft, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\146\146\164\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.fft._pocketfft", modulecode_numpy$fft$_pocketfft, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\146\146\164\134\137\160\157\143\153\145\164\146\146\164\56\160\171"
#endif
},
    {"numpy.fft.helper", modulecode_numpy$fft$helper, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\146\146\164\134\150\145\154\160\145\162\56\160\171"
#endif
},
    {"numpy.lib", modulecode_numpy$lib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.lib._datasource", modulecode_numpy$lib$_datasource, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\137\144\141\164\141\163\157\165\162\143\145\56\160\171"
#endif
},
    {"numpy.lib._iotools", modulecode_numpy$lib$_iotools, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\137\151\157\164\157\157\154\163\56\160\171"
#endif
},
    {"numpy.lib._version", modulecode_numpy$lib$_version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\137\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"numpy.lib.arraypad", modulecode_numpy$lib$arraypad, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\141\162\162\141\171\160\141\144\56\160\171"
#endif
},
    {"numpy.lib.arraysetops", modulecode_numpy$lib$arraysetops, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\141\162\162\141\171\163\145\164\157\160\163\56\160\171"
#endif
},
    {"numpy.lib.arrayterator", modulecode_numpy$lib$arrayterator, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\141\162\162\141\171\164\145\162\141\164\157\162\56\160\171"
#endif
},
    {"numpy.lib.format", modulecode_numpy$lib$format, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\146\157\162\155\141\164\56\160\171"
#endif
},
    {"numpy.lib.function_base", modulecode_numpy$lib$function_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\146\165\156\143\164\151\157\156\137\142\141\163\145\56\160\171"
#endif
},
    {"numpy.lib.histograms", modulecode_numpy$lib$histograms, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\150\151\163\164\157\147\162\141\155\163\56\160\171"
#endif
},
    {"numpy.lib.index_tricks", modulecode_numpy$lib$index_tricks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\151\156\144\145\170\137\164\162\151\143\153\163\56\160\171"
#endif
},
    {"numpy.lib.mixins", modulecode_numpy$lib$mixins, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\155\151\170\151\156\163\56\160\171"
#endif
},
    {"numpy.lib.nanfunctions", modulecode_numpy$lib$nanfunctions, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\156\141\156\146\165\156\143\164\151\157\156\163\56\160\171"
#endif
},
    {"numpy.lib.npyio", modulecode_numpy$lib$npyio, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\156\160\171\151\157\56\160\171"
#endif
},
    {"numpy.lib.polynomial", modulecode_numpy$lib$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\160\157\154\171\156\157\155\151\141\154\56\160\171"
#endif
},
    {"numpy.lib.scimath", modulecode_numpy$lib$scimath, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\163\143\151\155\141\164\150\56\160\171"
#endif
},
    {"numpy.lib.shape_base", modulecode_numpy$lib$shape_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\163\150\141\160\145\137\142\141\163\145\56\160\171"
#endif
},
    {"numpy.lib.stride_tricks", modulecode_numpy$lib$stride_tricks, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\163\164\162\151\144\145\137\164\162\151\143\153\163\56\160\171"
#endif
},
    {"numpy.lib.twodim_base", modulecode_numpy$lib$twodim_base, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\164\167\157\144\151\155\137\142\141\163\145\56\160\171"
#endif
},
    {"numpy.lib.type_check", modulecode_numpy$lib$type_check, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\164\171\160\145\137\143\150\145\143\153\56\160\171"
#endif
},
    {"numpy.lib.ufunclike", modulecode_numpy$lib$ufunclike, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\165\146\165\156\143\154\151\153\145\56\160\171"
#endif
},
    {"numpy.lib.utils", modulecode_numpy$lib$utils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\142\134\165\164\151\154\163\56\160\171"
#endif
},
    {"numpy.linalg", modulecode_numpy$linalg, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\156\141\154\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.linalg.linalg", modulecode_numpy$linalg$linalg, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\154\151\156\141\154\147\134\154\151\156\141\154\147\56\160\171"
#endif
},
    {"numpy.ma", modulecode_numpy$ma, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.ma.core", modulecode_numpy$ma$core, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\134\143\157\162\145\56\160\171"
#endif
},
    {"numpy.ma.extras", modulecode_numpy$ma$extras, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\134\145\170\164\162\141\163\56\160\171"
#endif
},
    {"numpy.ma.mrecords", modulecode_numpy$ma$mrecords, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\134\155\162\145\143\157\162\144\163\56\160\171"
#endif
},
    {"numpy.matrixlib", modulecode_numpy$matrixlib, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\164\162\151\170\154\151\142\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.matrixlib.defmatrix", modulecode_numpy$matrixlib$defmatrix, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\155\141\164\162\151\170\154\151\142\134\144\145\146\155\141\164\162\151\170\56\160\171"
#endif
},
    {"numpy.polynomial", modulecode_numpy$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.polynomial._polybase", modulecode_numpy$polynomial$_polybase, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\137\160\157\154\171\142\141\163\145\56\160\171"
#endif
},
    {"numpy.polynomial.chebyshev", modulecode_numpy$polynomial$chebyshev, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\143\150\145\142\171\163\150\145\166\56\160\171"
#endif
},
    {"numpy.polynomial.hermite", modulecode_numpy$polynomial$hermite, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\150\145\162\155\151\164\145\56\160\171"
#endif
},
    {"numpy.polynomial.hermite_e", modulecode_numpy$polynomial$hermite_e, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\150\145\162\155\151\164\145\137\145\56\160\171"
#endif
},
    {"numpy.polynomial.laguerre", modulecode_numpy$polynomial$laguerre, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\154\141\147\165\145\162\162\145\56\160\171"
#endif
},
    {"numpy.polynomial.legendre", modulecode_numpy$polynomial$legendre, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\154\145\147\145\156\144\162\145\56\160\171"
#endif
},
    {"numpy.polynomial.polynomial", modulecode_numpy$polynomial$polynomial, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\160\157\154\171\156\157\155\151\141\154\56\160\171"
#endif
},
    {"numpy.polynomial.polyutils", modulecode_numpy$polynomial$polyutils, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\160\157\154\171\156\157\155\151\141\154\134\160\157\154\171\165\164\151\154\163\56\160\171"
#endif
},
    {"numpy.random", modulecode_numpy$random, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\162\141\156\144\157\155\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.random._pickle", modulecode_numpy$random$_pickle, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\162\141\156\144\157\155\134\137\160\151\143\153\154\145\56\160\171"
#endif
},
    {"numpy.testing", NULL, 20, 1070, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\164\145\163\164\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"numpy.version", modulecode_numpy$version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\156\165\155\160\171\134\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"optparse", NULL, 21, 48088, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\157\160\164\160\141\162\163\145\56\160\171"
#endif
},
    {"pgzero", modulecode_pgzero, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\147\172\145\162\157\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pgzero.actor", modulecode_pgzero$actor, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\147\172\145\162\157\134\141\143\164\157\162\56\160\171"
#endif
},
    {"pgzero.animation", modulecode_pgzero$animation, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\147\172\145\162\157\134\141\156\151\155\141\164\151\157\156\56\160\171"
#endif
},
    {"pgzero.builtins", modulecode_pgzero$builtins, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\147\172\145\162\157\134\142\165\151\154\164\151\156\163\56\160\171"
#endif
},
    {"pgzero.clock", modulecode_pgzero$clock, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\147\172\145\162\157\134\143\154\157\143\153\56\160\171"
#endif
},
    {"pgzero.constants", modulecode_pgzero$constants, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\147\172\145\162\157\134\143\157\156\163\164\141\156\164\163\56\160\171"
#endif
},
    {"pgzero.game", modulecode_pgzero$game, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\147\172\145\162\157\134\147\141\155\145\56\160\171"
#endif
},
    {"pgzero.keyboard", modulecode_pgzero$keyboard, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\147\172\145\162\157\134\153\145\171\142\157\141\162\144\56\160\171"
#endif
},
    {"pgzero.loaders", modulecode_pgzero$loaders, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\147\172\145\162\157\134\154\157\141\144\145\162\163\56\160\171"
#endif
},
    {"pgzero.music", modulecode_pgzero$music, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\147\172\145\162\157\134\155\165\163\151\143\56\160\171"
#endif
},
    {"pgzero.ptext", modulecode_pgzero$ptext, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\147\172\145\162\157\134\160\164\145\170\164\56\160\171"
#endif
},
    {"pgzero.rect", modulecode_pgzero$rect, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\147\172\145\162\157\134\162\145\143\164\56\160\171"
#endif
},
    {"pgzero.runner", modulecode_pgzero$runner, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\147\172\145\162\157\134\162\165\156\156\145\162\56\160\171"
#endif
},
    {"pgzero.screen", modulecode_pgzero$screen, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\147\172\145\162\157\134\163\143\162\145\145\156\56\160\171"
#endif
},
    {"pgzero.soundfmt", modulecode_pgzero$soundfmt, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\147\172\145\162\157\134\163\157\165\156\144\146\155\164\56\160\171"
#endif
},
    {"pgzero.spellcheck", modulecode_pgzero$spellcheck, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\147\172\145\162\157\134\163\160\145\154\154\143\150\145\143\153\56\160\171"
#endif
},
    {"pgzero.tone", modulecode_pgzero$tone, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\147\172\145\162\157\134\164\157\156\145\56\160\171"
#endif
},
    {"pgzrun", modulecode_pgzrun, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\147\172\162\165\156\56\160\171"
#endif
},
    {"pkg_resources", NULL, 22, 100388, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources._vendor", NULL, 23, 188, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources._vendor.appdirs", NULL, 24, 20541, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\141\160\160\144\151\162\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging", NULL, 25, 576, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging.__about__", NULL, 26, 738, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\137\137\141\142\157\165\164\137\137\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging._compat", NULL, 27, 1012, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\137\143\157\155\160\141\164\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging._structures", NULL, 28, 2794, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\137\163\164\162\165\143\164\165\162\145\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging.markers", NULL, 29, 8950, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\155\141\162\153\145\162\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging.requirements", NULL, 30, 3909, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\162\145\161\165\151\162\145\155\145\156\164\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging.specifiers", NULL, 31, 19818, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\163\160\145\143\151\146\151\145\162\163\56\160\171"
#endif
},
    {"pkg_resources._vendor.packaging.version", NULL, 32, 10665, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\141\143\153\141\147\151\156\147\134\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"pkg_resources._vendor.pyparsing", NULL, 33, 201665, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\160\171\160\141\162\163\151\156\147\56\160\171"
#endif
},
    {"pkg_resources._vendor.six", NULL, 34, 24461, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\137\166\145\156\144\157\162\134\163\151\170\56\160\171"
#endif
},
    {"pkg_resources.extern", NULL, 35, 2437, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\145\170\164\145\162\156\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pkg_resources.py31compat", NULL, 36, 631, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\153\147\137\162\145\163\157\165\162\143\145\163\134\160\171\63\61\143\157\155\160\141\164\56\160\171"
#endif
},
    {"pygame", modulecode_pygame, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\147\141\155\145\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pygame.colordict", modulecode_pygame$colordict, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\147\141\155\145\134\143\157\154\157\162\144\151\143\164\56\160\171"
#endif
},
    {"pygame.compat", modulecode_pygame$compat, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\147\141\155\145\134\143\157\155\160\141\164\56\160\171"
#endif
},
    {"pygame.cursors", modulecode_pygame$cursors, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\147\141\155\145\134\143\165\162\163\157\162\163\56\160\171"
#endif
},
    {"pygame.ftfont", modulecode_pygame$ftfont, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\147\141\155\145\134\146\164\146\157\156\164\56\160\171"
#endif
},
    {"pygame.locals", modulecode_pygame$locals, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\147\141\155\145\134\154\157\143\141\154\163\56\160\171"
#endif
},
    {"pygame.macosx", modulecode_pygame$macosx, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\147\141\155\145\134\155\141\143\157\163\170\56\160\171"
#endif
},
    {"pygame.pkgdata", modulecode_pygame$pkgdata, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\147\141\155\145\134\160\153\147\144\141\164\141\56\160\171"
#endif
},
    {"pygame.sndarray", modulecode_pygame$sndarray, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\147\141\155\145\134\163\156\144\141\162\162\141\171\56\160\171"
#endif
},
    {"pygame.sprite", modulecode_pygame$sprite, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\147\141\155\145\134\163\160\162\151\164\145\56\160\171"
#endif
},
    {"pygame.surfarray", modulecode_pygame$surfarray, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\147\141\155\145\134\163\165\162\146\141\162\162\141\171\56\160\171"
#endif
},
    {"pygame.sysfont", modulecode_pygame$sysfont, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\147\141\155\145\134\163\171\163\146\157\156\164\56\160\171"
#endif
},
    {"pygame.threads", modulecode_pygame$threads, 0, 0, NUITKA_TRANSLATED_FLAG | NUITKA_PACKAGE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\147\141\155\145\134\164\150\162\145\141\144\163\134\137\137\151\156\151\164\137\137\56\160\171"
#endif
},
    {"pygame.version", modulecode_pygame$version, 0, 0, NUITKA_TRANSLATED_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\55\160\141\143\153\141\147\145\163\134\160\171\147\141\155\145\134\166\145\162\163\151\157\156\56\160\171"
#endif
},
    {"site", NULL, 37, 16727, NUITKA_TRANSLATED_FLAG | NUITKA_BYTECODE_FLAG
#if defined(_NUITKA_FREEZER_HAS_FILE_PATH)
, L"\103\72\134\125\163\145\162\163\134\101\144\155\151\156\151\163\164\162\141\164\157\162\134\101\160\160\104\141\164\141\134\114\157\143\141\154\134\120\162\157\147\162\141\155\163\134\120\171\164\150\157\156\134\120\171\164\150\157\156\63\70\134\154\151\142\134\163\151\164\145\56\160\171"
#endif
},
    {NULL, NULL, 0, 0, 0}
};

static void _loadBytesCodesBlob(void) {
    static bool init_done = false;

    if (init_done == false) {
        loadConstantsBlob((PyObject **)bytecode_data, ".bytecode");

        init_done = true;
    }
}


void setupMetaPathBasedLoader(void) {
    static bool init_done = false;
    if (init_done == false) {
        _loadBytesCodesBlob();
        registerMetaPathBasedUnfreezer(meta_path_loader_entries, bytecode_data);

        init_done = true;
    }
}

// This provides the frozen (compiled bytecode) files that are included if
// any.

// These modules should be loaded as bytecode. They may e.g. have to be loadable
// during "Py_Initialize" already, or for irrelevance, they are only included
// in this un-optimized form. These are not compiled by Nuitka, and therefore
// are not accelerated at all, merely bundled with the binary or module, so
// that CPython library can start out finding them.

struct frozen_desc {
    char const *name;
    int index;
    int size;
};

static struct frozen_desc _frozen_modules[] = {

    {NULL, 0, 0}
};


void copyFrozenModulesTo(struct _frozen *destination) {
    _loadBytesCodesBlob();

    struct frozen_desc *current = _frozen_modules;

    for (;;) {
        destination->name = (char *)current->name;
        destination->code = bytecode_data[current->index];
        destination->size = current->size;

        if (destination->name == NULL) break;

        current += 1;
        destination += 1;
    };
}

