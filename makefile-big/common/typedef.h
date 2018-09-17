#ifndef _TYPEDEF_H_
#define _TYPEDEF_H_

#ifndef container_of
#define container_of(ptr, type, member) ({                      \
        const typeof( ((type *)0)->member ) *__mptr = (ptr);    \
        (type *)( (char *)__mptr - offsetof(type,member) );})
#endif

enum
{
	RET_OK=0,
	ERR_PARAM=-1,
};

#endif
