#ifndef ADD_EXPORT_H
#define ADD_EXPORT_H

#if defined(MathUltility_EXPORTS)
#define ADD_EXPORT __declspec(dllexport)
#else
#define ADD_EXPORT __declspec(dllimport)
#endif
#endif