#ifndef QJSONMARSHALERLIB_GLOBAL_H
#define QJSONMARSHALERLIB_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(QJSONMARSHALERLIB_LIBRARY)
#  define QJSONMARSHALERLIBSHARED_EXPORT Q_DECL_EXPORT
#else
#  define QJSONMARSHALERLIBSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // QJSONMARSHALERLIB_GLOBAL_H
