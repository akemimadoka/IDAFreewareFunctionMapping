#ifdef _MSC_VER
#define MAPPING(from, to) __pragma(comment(linker, "/EXPORT:" #from "=ida64." #to))
#include <Mapping.h>
#else
#error "Not supported now"
#endif
