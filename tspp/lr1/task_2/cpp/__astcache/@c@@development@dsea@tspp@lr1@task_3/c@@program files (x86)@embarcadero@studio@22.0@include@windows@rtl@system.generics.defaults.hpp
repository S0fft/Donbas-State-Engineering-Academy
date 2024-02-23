﻿// CodeGear C++Builder
// Copyright (c) 1995, 2022 by Embarcadero Technologies, Inc.
// All rights reserved

// (DO NOT EDIT: machine generated header) 'System.Generics.Defaults.pas' rev: 35.00 (Windows)

#ifndef System_Generics_DefaultsHPP
#define System_Generics_DefaultsHPP

#pragma delphiheader begin
#pragma option push
#pragma option -w-      // All warnings off
#pragma option -Vx      // Zero-length empty class member 
#pragma pack(push,8)
#include <System.hpp>
#include <SysInit.hpp>
#include <System.TypInfo.hpp>

//-- user supplied -----------------------------------------------------------
#pragma option -w-8022

namespace System
{
namespace Generics
{
namespace Defaults
{
//-- forward type declarations -----------------------------------------------
template<typename T> __interface DELPHIINTERFACE IComparer__1;
#ifdef __clang__
template<typename T> using _di_IComparer__1 = System::DelphiInterface<IComparer__1<T>>;
#endif
template<typename T> __interface DELPHIINTERFACE IEqualityComparer__1;
#ifdef __clang__
template<typename T> using _di_IEqualityComparer__1 = System::DelphiInterface<IEqualityComparer__1<T>>;
#endif
template<typename T> __interface DELPHIINTERFACE TComparison__1;
#ifdef __clang__
template<typename T> using _di_TComparison__1 = System::DelphiInterface<TComparison__1<T>>;
#endif
template<typename T> class DELPHICLASS TComparer__1;
template<typename T> __interface DELPHIINTERFACE TEqualityComparison__1;
#ifdef __clang__
template<typename T> using _di_TEqualityComparison__1 = System::DelphiInterface<TEqualityComparison__1<T>>;
#endif
template<typename T> __interface DELPHIINTERFACE THasher__1;
#ifdef __clang__
template<typename T> using _di_THasher__1 = System::DelphiInterface<THasher__1<T>>;
#endif
template<typename T> class DELPHICLASS TEqualityComparer__1;
class DELPHICLASS TSingletonImplementation;
template<typename T> class DELPHICLASS TDelegatedEqualityComparer__1;
template<typename T> class DELPHICLASS TDelegatedComparer__1;
template<typename T> class DELPHICLASS TCustomComparer__1;
class DELPHICLASS TStringComparer;
class DELPHICLASS TIStringComparer;
class DELPHICLASS TOrdinalIStringComparer;
//-- type declarations -------------------------------------------------------
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> __interface IComparer__1  : public System::IInterface 
{
	virtual int __fastcall Compare(const T Left, const T Right) = 0 ;
};

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> __interface IEqualityComparer__1  : public System::IInterface 
{
	virtual bool __fastcall Equals(const T Left, const T Right) = 0 ;
	virtual int __fastcall GetHashCode(const T Value) = 0 ;
};

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> __interface TComparison__1  : public System::IInterface 
{
	virtual int __fastcall Invoke(const T Left, const T Right) = 0 ;
};

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> class PASCALIMPLEMENTATION TComparer__1 : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
public:
	static void * __fastcall _Default();
	static void * __fastcall _Construct(const System::DelphiInterface<TComparison__1<T> > Comparison);
	static System::DelphiInterface<IComparer__1<T> > __fastcall Default();
	static System::DelphiInterface<IComparer__1<T> > __fastcall Construct(const System::DelphiInterface<TComparison__1<T> > Comparison);
	virtual int __fastcall Compare(const T Left, const T Right) = 0 ;
public:
	/* TObject.Create */ inline __fastcall TComparer__1() : System::TInterfacedObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TComparer__1() { }
	
private:
	void *__IComparer__1;	// IComparer__1<T> 
	
public:
	operator IComparer__1<T>*(void) { return (IComparer__1<T>*)&__IComparer__1; }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> __interface TEqualityComparison__1  : public System::IInterface 
{
	virtual bool __fastcall Invoke(const T Left, const T Right) = 0 ;
};

// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> __interface THasher__1  : public System::IInterface 
{
	virtual int __fastcall Invoke(const T Value) = 0 ;
};

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> class PASCALIMPLEMENTATION TEqualityComparer__1 : public System::TInterfacedObject
{
	typedef System::TInterfacedObject inherited;
	
public:
	static void * __fastcall _Default();
	static System::DelphiInterface<IEqualityComparer__1<T> > __fastcall Default();
	static System::DelphiInterface<IEqualityComparer__1<T> > __fastcall Construct(const System::DelphiInterface<TEqualityComparison__1<T> > EqualityComparison, const System::DelphiInterface<THasher__1<T> > Hasher);
	HIDESBASE virtual bool __fastcall Equals(const T Left, const T Right) = 0 /* overload */;
	HIDESBASE virtual int __fastcall GetHashCode(const T Value) = 0 /* overload */;
public:
	/* TObject.Create */ inline __fastcall TEqualityComparer__1() : System::TInterfacedObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TEqualityComparer__1() { }
	
private:
	void *__IEqualityComparer__1;	// IEqualityComparer__1<T> 
	
public:
	operator IEqualityComparer__1<T>*(void) { return (IEqualityComparer__1<T>*)&__IEqualityComparer__1; }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TSingletonImplementation : public System::TNoRefCountObject
{
	typedef System::TNoRefCountObject inherited;
	
public:
	/* TObject.Create */ inline __fastcall TSingletonImplementation() : System::TNoRefCountObject() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TSingletonImplementation() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> class PASCALIMPLEMENTATION TDelegatedEqualityComparer__1 : public TEqualityComparer__1<T>
{
	typedef TEqualityComparer__1<T> inherited;
	
private:
	System::DelphiInterface<TEqualityComparison__1<T> > FEquals;
	System::DelphiInterface<THasher__1<T> > FGetHashCode;
	
public:
	__fastcall TDelegatedEqualityComparer__1(const System::DelphiInterface<TEqualityComparison__1<T> > AEquals, const System::DelphiInterface<THasher__1<T> > AGetHashCode);
	virtual bool __fastcall Equals(const T Left, const T Right)/* overload */;
	virtual int __fastcall GetHashCode(const T Value)/* overload */;
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDelegatedEqualityComparer__1() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> class PASCALIMPLEMENTATION TDelegatedComparer__1 : public TComparer__1<T>
{
	typedef TComparer__1<T> inherited;
	
private:
	System::DelphiInterface<TComparison__1<T> > FCompare;
	
public:
	__fastcall TDelegatedComparer__1(const System::DelphiInterface<TComparison__1<T> > ACompare);
	virtual int __fastcall Compare(const T Left, const T Right);
public:
	/* TObject.Destroy */ inline __fastcall virtual ~TDelegatedComparer__1() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
// Template declaration generated by Delphi parameterized types is
// used only for accessing Delphi variables and fields.
// Don't instantiate with new type parameters in user code.
template<typename T> class PASCALIMPLEMENTATION TCustomComparer__1 : public TSingletonImplementation
{
	typedef TSingletonImplementation inherited;
	
protected:
	virtual int __fastcall Compare(const T Left, const T Right) = 0 ;
	HIDESBASE virtual bool __fastcall Equals(const T Left, const T Right) = 0 /* overload */;
	HIDESBASE virtual int __fastcall GetHashCode(const T Value) = 0 /* overload */;
public:
	/* TObject.Create */ inline __fastcall TCustomComparer__1() : TSingletonImplementation() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TCustomComparer__1() { }
	
private:
	void *__IEqualityComparer__1;	// IEqualityComparer__1<T> 
	void *__IComparer__1;	// IComparer__1<T> 
	
public:
	operator IEqualityComparer__1<T>*(void) { return (IEqualityComparer__1<T>*)&__IEqualityComparer__1; }
	operator IComparer__1<T>*(void) { return (IComparer__1<T>*)&__IComparer__1; }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TStringComparer : public TCustomComparer__1<System::UnicodeString>
{
	typedef TCustomComparer__1<System::UnicodeString> inherited;
	
private:
	static TCustomComparer__1<System::UnicodeString>* FOrdinal;
	
private:
	// __classmethod void __fastcall Destroy@();
	
public:
	__classmethod TStringComparer* __fastcall Ordinal();
	
private:
	// __classmethod void __fastcall Create@();
public:
	/* TObject.Create */ inline __fastcall TStringComparer() : TCustomComparer__1<System::UnicodeString>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TStringComparer() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TIStringComparer : public TCustomComparer__1<System::UnicodeString>
{
	typedef TCustomComparer__1<System::UnicodeString> inherited;
	
private:
	static TCustomComparer__1<System::UnicodeString>* FOrdinal;
	
private:
	// __classmethod void __fastcall Destroy@();
	
public:
	__classmethod TStringComparer* __fastcall Ordinal();
	
private:
	// __classmethod void __fastcall Create@();
public:
	/* TObject.Create */ inline __fastcall TIStringComparer() : TCustomComparer__1<System::UnicodeString>() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TIStringComparer() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

#ifndef _WIN64
#pragma pack(push,4)
#endif /* not _WIN64 */
class PASCALIMPLEMENTATION TOrdinalIStringComparer : public TStringComparer
{
	typedef TStringComparer inherited;
	
public:
	virtual int __fastcall Compare(const System::UnicodeString Left, const System::UnicodeString Right);
	virtual bool __fastcall Equals(const System::UnicodeString Left, const System::UnicodeString Right)/* overload */;
	virtual int __fastcall GetHashCode(const System::UnicodeString Value)/* overload */;
public:
	/* TObject.Create */ inline __fastcall TOrdinalIStringComparer() : TStringComparer() { }
	/* TObject.Destroy */ inline __fastcall virtual ~TOrdinalIStringComparer() { }
	
};

#ifndef _WIN64
#pragma pack(pop)
#endif /* not _WIN64 */

enum DECLSPEC_DENUM TDefaultGenericInterface : unsigned char { giComparer, giEqualityComparer };

//-- var, const, procedure ---------------------------------------------------
extern DELPHI_PACKAGE int __fastcall BinaryCompare(const void * Left, const void * Right, int Size);
extern DELPHI_PACKAGE void * __fastcall _LookupVtableInfo(TDefaultGenericInterface intf, System::Typinfo::PTypeInfo info, int size);
extern DELPHI_PACKAGE void * __fastcall _MakeInterfaceInstance(const System::TVarRec *AnonMethodPtrs, const int AnonMethodPtrs_High);
extern DELPHI_PACKAGE bool __fastcall _AreAnonMethodsCapturing(const System::TVarRec *AnonMethodPtrs, const int AnonMethodPtrs_High);
extern DELPHI_PACKAGE int __fastcall BobJenkinsHash _DEPRECATED_ATTRIBUTE1("Use System.Hash.THashBobJenkins.GetHashValue") (const void *Data, int Len, int InitData);
}	/* namespace Defaults */
}	/* namespace Generics */
}	/* namespace System */
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM_GENERICS_DEFAULTS)
using namespace System::Generics::Defaults;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM_GENERICS)
using namespace System::Generics;
#endif
#if !defined(DELPHIHEADER_NO_IMPLICIT_NAMESPACE_USE) && !defined(NO_USING_NAMESPACE_SYSTEM)
using namespace System;
#endif
#pragma pack(pop)
#pragma option pop

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// System_Generics_DefaultsHPP
