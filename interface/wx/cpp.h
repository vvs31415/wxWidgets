/////////////////////////////////////////////////////////////////////////////
// Name:        cpp.h
// Purpose:     interface of global functions
// Author:      wxWidgets team
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////


/** @addtogroup group_funcmacro_misc */
///@{
/**
    This macro returns the concatenation of the arguments passed. Unlike when
    using the preprocessor operator, the arguments undergo macro expansion
    before being concatenated.

    @header{wx/cpp.h}
*/
#define wxCONCAT(x1, x2)
#define wxCONCAT3(x1, x2, x3)
#define wxCONCAT4(x1, x2, x3, x4)
#define wxCONCAT5(x1, x2, x3, x4, x5)
///@}

/** @addtogroup group_funcmacro_misc */
///@{

/**
    Returns the string representation of the given symbol which can be either a
    literal or a macro (hence the advantage of using this macro instead of the
    standard preprocessor @c # operator which doesn't work with macros).

    Notice that this macro always produces a @c char string, use
    wxSTRINGIZE_T() to build a wide string Unicode build.

    @see wxCONCAT()

    @header{wx/cpp.h}
*/
#define wxSTRINGIZE(x)

/**
    Returns the string representation of the given symbol as either an ASCII or
    Unicode string, depending on the current build. This is the
    Unicode-friendly equivalent of wxSTRINGIZE().

    @header{wx/cpp.h}
*/
#define wxSTRINGIZE_T(x)

/**
    This obsolete macro is the same as the standard @c \__func__ constant.

    Please use the standard macro instead.

    @see __WXFUNCTION_SIG__

    @header{wx/cpp.h}
*/
#define __WXFUNCTION__ __func__

/**
    Expands to the current function's full signature, if available.

    Falls back to the function name (i.e., @c \__func__) if not available.

    As an example, if you have a class named `Calculator` with a
    `double Add(double, double) const` member function,
    `__WXFUNCTION_SIG__` may expand to the following:

    `double Calculator::Add(double, double) const`

    While `__func__` will simply expand to:

    `Add`

    @header{wx/cpp.h}

    @since 3.3.0
*/
#define __WXFUNCTION_SIG__

///@}

