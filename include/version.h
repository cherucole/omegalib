#ifndef __OMEGA_VERSION_
#define __OMEGA_VERSION_

#define OMEGA_VERSION_MAJOR 8
#define OMEGA_VERSION_MINOR 0
#define OMEGA_VERSION_REVISION 2

#define _VSTH(v) #v
#define _VERSTR(v) _VSTH(v)

#define _WVSTH(v) L#v
#define _WVERSTR(v) _WVSTH(v)

#if (OMEGA_VERSION_REVISION > 0)
    #define OMEGA_VERSION  _VERSTR(OMEGA_VERSION_MAJOR) "." _VERSTR(OMEGA_VERSION_MINOR) "." _VERSTR(OMEGA_VERSION_REVISION)
    #define OMEGA_WIDE_VERSION  _WVERSTR(OMEGA_VERSION_MAJOR) L"." _WVERSTR(OMEGA_VERSION_MINOR) L"." _WVERSTR(OMEGA_VERSION_REVISION)
#else
    #define OMEGA_VERSION  _VERSTR(OMEGA_VERSION_MAJOR) "." _VERSTR(OMEGA_VERSION_MINOR)
    #define OMEGA_WIDE_VERSION  _WVERSTR(OMEGA_VERSION_MAJOR) L"." _WVERSTR(OMEGA_VERSION_MINOR)
#endif

#define OMEGA_VERSION_NUM (OMEGA_VERSION_MAJOR * 1000 + OMEGA_VERSION_MINOR * 10 + OMEGA_VERSION_REVISION)

//#undef _VERSTR

#endif
