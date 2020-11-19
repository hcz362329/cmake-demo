#ifndef PRINT_EXPORT_H
#define PRINT_EXPORT_H

#if defined(PrintUltility_EXPORTS)
#define PRINT_EXPORT __declspec(dllexport)
#else
#define PRINT_EXPORT __declspec(dllimport)
#endif
#endif