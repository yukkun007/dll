/* Copyright 2017 yukkun007 */
#pragma once

#ifdef DLL_EXPORTS
#ifdef __cplusplus
extern "C" {
#endif
int __declspec(dllexport) __stdcall  Execute();
#ifdef __cplusplus
}
#endif
#else
#ifdef __cplusplus
extern "C" {
#endif
int __declspec(dllimport) __stdcall  Execute();
#ifdef __cplusplus
}
#endif
#endif
