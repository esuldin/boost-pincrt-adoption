#pragma once

#if defined(PIN_CRT)
# define __need_ptrdiff_t
# define __need_size_t
# define __need_wchar_t
# define __need_NULL
#endif

# include <crt/include/stddef.h>

#if defined(PIN_CRT)
# undef __need_ptrdiff_t
# undef __need_size_t
# undef __need_wchar_t
# undef __need_NULL
#endif