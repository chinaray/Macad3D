// Generated wrapper code for package WNT

#include "OcctPCH.h"
#include "WNT.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "Standard.h"
#include "WNT.h"
#include "Graphic3d.h"
#include "TCollection.h"
#include "Quantity.h"
#include "Aspect.h"


//---------------------------------------------------------------------
//  Class  WNT_ClassDefinitionError
//---------------------------------------------------------------------

Macad::Occt::WNT_ClassDefinitionError::WNT_ClassDefinitionError()
	: Macad::Occt::Standard_ConstructionError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::WNT_ClassDefinitionError();
}

Macad::Occt::WNT_ClassDefinitionError::WNT_ClassDefinitionError(System::String^ theMessage)
	: Macad::Occt::Standard_ConstructionError(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	NativeInstance = new ::WNT_ClassDefinitionError(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

Macad::Occt::WNT_ClassDefinitionError::WNT_ClassDefinitionError(Macad::Occt::WNT_ClassDefinitionError^ parameter1)
	: Macad::Occt::Standard_ConstructionError(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::WNT_ClassDefinitionError(*(::WNT_ClassDefinitionError*)parameter1->NativeInstance);
}

void Macad::Occt::WNT_ClassDefinitionError::Raise(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	::WNT_ClassDefinitionError::Raise(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
}

void Macad::Occt::WNT_ClassDefinitionError::Raise()
{
	::WNT_ClassDefinitionError::Raise("");
}

Macad::Occt::WNT_ClassDefinitionError^ Macad::Occt::WNT_ClassDefinitionError::NewInstance(System::String^ theMessage)
{
	const char* sz_theMessage = (char*)(void*)Marshal::StringToHGlobalAnsi(theMessage);
	Handle(::WNT_ClassDefinitionError) _result;
	_result = ::WNT_ClassDefinitionError::NewInstance(sz_theMessage);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theMessage);
	 return _result.IsNull() ? nullptr : Macad::Occt::WNT_ClassDefinitionError::CreateDowncasted( _result.get());
}

Macad::Occt::WNT_ClassDefinitionError^ Macad::Occt::WNT_ClassDefinitionError::NewInstance()
{
	Handle(::WNT_ClassDefinitionError) _result;
	_result = ::WNT_ClassDefinitionError::NewInstance("");
	 return _result.IsNull() ? nullptr : Macad::Occt::WNT_ClassDefinitionError::CreateDowncasted( _result.get());
}


Macad::Occt::WNT_ClassDefinitionError^ Macad::Occt::WNT_ClassDefinitionError::CreateDowncasted(::WNT_ClassDefinitionError* instance)
{
	return gcnew Macad::Occt::WNT_ClassDefinitionError( instance );
}



//---------------------------------------------------------------------
//  Class  WNT_HIDSpaceMouse
//---------------------------------------------------------------------

Macad::Occt::WNT_HIDSpaceMouse::WNT_HIDSpaceMouse(Macad::Occt::WNT_HIDSpaceMouse^ parameter1)
	: BaseClass<::WNT_HIDSpaceMouse>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::WNT_HIDSpaceMouse(*(::WNT_HIDSpaceMouse*)parameter1->NativeInstance);
}

bool Macad::Occt::WNT_HIDSpaceMouse::IsTranslation()
{
	return ((::WNT_HIDSpaceMouse*)_NativeInstance)->IsTranslation();
}

bool Macad::Occt::WNT_HIDSpaceMouse::IsRotation()
{
	return ((::WNT_HIDSpaceMouse*)_NativeInstance)->IsRotation();
}

bool Macad::Occt::WNT_HIDSpaceMouse::IsKeyState()
{
	return ((::WNT_HIDSpaceMouse*)_NativeInstance)->IsKeyState();
}

unsigned int Macad::Occt::WNT_HIDSpaceMouse::KeyState()
{
	return ((::WNT_HIDSpaceMouse*)_NativeInstance)->KeyState();
}




//---------------------------------------------------------------------
//  Class  WNT_WClass
//---------------------------------------------------------------------

Macad::Occt::WNT_WClass::WNT_WClass(Macad::Occt::TCollection_AsciiString^ theClassName, System::IntPtr theWndProc, unsigned int theStyle, int theClassExtra, int theWindowExtra, System::IntPtr theCursor, System::IntPtr theIcon, Macad::Occt::TCollection_AsciiString^ theMenuName)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::WNT_WClass(*(::TCollection_AsciiString*)theClassName->NativeInstance, theWndProc.ToPointer(), theStyle, theClassExtra, theWindowExtra, theCursor.ToPointer(), theIcon.ToPointer(), *(::TCollection_AsciiString*)theMenuName->NativeInstance);
}

Macad::Occt::WNT_WClass::WNT_WClass(Macad::Occt::TCollection_AsciiString^ theClassName, System::IntPtr theWndProc, unsigned int theStyle, int theClassExtra, int theWindowExtra, System::IntPtr theCursor, System::IntPtr theIcon)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::WNT_WClass(*(::TCollection_AsciiString*)theClassName->NativeInstance, theWndProc.ToPointer(), theStyle, theClassExtra, theWindowExtra, theCursor.ToPointer(), theIcon.ToPointer(), ::TCollection_AsciiString());
}

Macad::Occt::WNT_WClass::WNT_WClass(Macad::Occt::TCollection_AsciiString^ theClassName, System::IntPtr theWndProc, unsigned int theStyle, int theClassExtra, int theWindowExtra, System::IntPtr theCursor)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::WNT_WClass(*(::TCollection_AsciiString*)theClassName->NativeInstance, theWndProc.ToPointer(), theStyle, theClassExtra, theWindowExtra, theCursor.ToPointer(), 0, ::TCollection_AsciiString());
}

Macad::Occt::WNT_WClass::WNT_WClass(Macad::Occt::TCollection_AsciiString^ theClassName, System::IntPtr theWndProc, unsigned int theStyle, int theClassExtra, int theWindowExtra)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::WNT_WClass(*(::TCollection_AsciiString*)theClassName->NativeInstance, theWndProc.ToPointer(), theStyle, theClassExtra, theWindowExtra, 0, 0, ::TCollection_AsciiString());
}

Macad::Occt::WNT_WClass::WNT_WClass(Macad::Occt::TCollection_AsciiString^ theClassName, System::IntPtr theWndProc, unsigned int theStyle, int theClassExtra)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::WNT_WClass(*(::TCollection_AsciiString*)theClassName->NativeInstance, theWndProc.ToPointer(), theStyle, theClassExtra, 0, 0, 0, ::TCollection_AsciiString());
}

Macad::Occt::WNT_WClass::WNT_WClass(Macad::Occt::TCollection_AsciiString^ theClassName, System::IntPtr theWndProc, unsigned int theStyle)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::WNT_WClass(*(::TCollection_AsciiString*)theClassName->NativeInstance, theWndProc.ToPointer(), theStyle, 0, 0, 0, 0, ::TCollection_AsciiString());
}

Macad::Occt::WNT_WClass::WNT_WClass(Macad::Occt::WNT_WClass^ parameter1)
	: Macad::Occt::Standard_Transient(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::WNT_WClass(*(::WNT_WClass*)parameter1->NativeInstance);
}

System::IntPtr Macad::Occt::WNT_WClass::WndProc()
{
	return System::IntPtr(((::WNT_WClass*)_NativeInstance)->WndProc());
}

Macad::Occt::TCollection_AsciiString^ Macad::Occt::WNT_WClass::Name()
{
	::TCollection_AsciiString* _result = new ::TCollection_AsciiString();
	*_result =  (::TCollection_AsciiString)((::WNT_WClass*)_NativeInstance)->Name();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TCollection_AsciiString(_result);
}

System::IntPtr Macad::Occt::WNT_WClass::Instance()
{
	return System::IntPtr(((::WNT_WClass*)_NativeInstance)->Instance());
}


Macad::Occt::WNT_WClass^ Macad::Occt::WNT_WClass::CreateDowncasted(::WNT_WClass* instance)
{
	return gcnew Macad::Occt::WNT_WClass( instance );
}



//---------------------------------------------------------------------
//  Class  WNT_Window
//---------------------------------------------------------------------

Macad::Occt::WNT_Window::WNT_Window(System::String^ theTitle, Macad::Occt::WNT_WClass^ theClass, DWORD theStyle, int thePxLeft, int thePxTop, int thePxWidth, int thePxHeight, Macad::Occt::Quantity_NameOfColor theBackColor, System::IntPtr theParent, System::IntPtr theMenu, System::IntPtr theClientStruct)
	: Macad::Occt::Aspect_Window(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theTitle = (char*)(void*)Marshal::StringToHGlobalAnsi(theTitle);
	Handle(::WNT_WClass) h_theClass = theClass->NativeInstance;
	pin_ptr<DWORD> pp_theStyle = &theStyle;
	NativeInstance = new ::WNT_Window(sz_theTitle, h_theClass, *(WNT_Dword*)pp_theStyle, thePxLeft, thePxTop, thePxWidth, thePxHeight, (::Quantity_NameOfColor)theBackColor, theParent.ToPointer(), theMenu.ToPointer(), theClientStruct.ToPointer());
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theTitle);
	theClass->NativeInstance = h_theClass.get();
}

Macad::Occt::WNT_Window::WNT_Window(System::String^ theTitle, Macad::Occt::WNT_WClass^ theClass, DWORD theStyle, int thePxLeft, int thePxTop, int thePxWidth, int thePxHeight, Macad::Occt::Quantity_NameOfColor theBackColor, System::IntPtr theParent, System::IntPtr theMenu)
	: Macad::Occt::Aspect_Window(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theTitle = (char*)(void*)Marshal::StringToHGlobalAnsi(theTitle);
	Handle(::WNT_WClass) h_theClass = theClass->NativeInstance;
	pin_ptr<DWORD> pp_theStyle = &theStyle;
	NativeInstance = new ::WNT_Window(sz_theTitle, h_theClass, *(WNT_Dword*)pp_theStyle, thePxLeft, thePxTop, thePxWidth, thePxHeight, (::Quantity_NameOfColor)theBackColor, theParent.ToPointer(), theMenu.ToPointer(), 0);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theTitle);
	theClass->NativeInstance = h_theClass.get();
}

Macad::Occt::WNT_Window::WNT_Window(System::String^ theTitle, Macad::Occt::WNT_WClass^ theClass, DWORD theStyle, int thePxLeft, int thePxTop, int thePxWidth, int thePxHeight, Macad::Occt::Quantity_NameOfColor theBackColor, System::IntPtr theParent)
	: Macad::Occt::Aspect_Window(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theTitle = (char*)(void*)Marshal::StringToHGlobalAnsi(theTitle);
	Handle(::WNT_WClass) h_theClass = theClass->NativeInstance;
	pin_ptr<DWORD> pp_theStyle = &theStyle;
	NativeInstance = new ::WNT_Window(sz_theTitle, h_theClass, *(WNT_Dword*)pp_theStyle, thePxLeft, thePxTop, thePxWidth, thePxHeight, (::Quantity_NameOfColor)theBackColor, theParent.ToPointer(), 0, 0);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theTitle);
	theClass->NativeInstance = h_theClass.get();
}

Macad::Occt::WNT_Window::WNT_Window(System::String^ theTitle, Macad::Occt::WNT_WClass^ theClass, DWORD theStyle, int thePxLeft, int thePxTop, int thePxWidth, int thePxHeight, Macad::Occt::Quantity_NameOfColor theBackColor)
	: Macad::Occt::Aspect_Window(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theTitle = (char*)(void*)Marshal::StringToHGlobalAnsi(theTitle);
	Handle(::WNT_WClass) h_theClass = theClass->NativeInstance;
	pin_ptr<DWORD> pp_theStyle = &theStyle;
	NativeInstance = new ::WNT_Window(sz_theTitle, h_theClass, *(WNT_Dword*)pp_theStyle, thePxLeft, thePxTop, thePxWidth, thePxHeight, (::Quantity_NameOfColor)theBackColor, 0, 0, 0);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theTitle);
	theClass->NativeInstance = h_theClass.get();
}

Macad::Occt::WNT_Window::WNT_Window(System::String^ theTitle, Macad::Occt::WNT_WClass^ theClass, DWORD theStyle, int thePxLeft, int thePxTop, int thePxWidth, int thePxHeight)
	: Macad::Occt::Aspect_Window(BaseClass::InitMode::Uninitialized)
{
	const char* sz_theTitle = (char*)(void*)Marshal::StringToHGlobalAnsi(theTitle);
	Handle(::WNT_WClass) h_theClass = theClass->NativeInstance;
	pin_ptr<DWORD> pp_theStyle = &theStyle;
	NativeInstance = new ::WNT_Window(sz_theTitle, h_theClass, *(WNT_Dword*)pp_theStyle, thePxLeft, thePxTop, thePxWidth, thePxHeight, Quantity_NOC_MATRAGRAY, 0, 0, 0);
	Marshal::FreeHGlobal((System::IntPtr)(void*)sz_theTitle);
	theClass->NativeInstance = h_theClass.get();
}

Macad::Occt::WNT_Window::WNT_Window(System::IntPtr aHandle, Macad::Occt::Quantity_NameOfColor aBackColor)
	: Macad::Occt::Aspect_Window(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::WNT_Window(aHandle.ToPointer(), (::Quantity_NameOfColor)aBackColor);
}

Macad::Occt::WNT_Window::WNT_Window(System::IntPtr aHandle)
	: Macad::Occt::Aspect_Window(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::WNT_Window(aHandle.ToPointer(), Quantity_NOC_MATRAGRAY);
}

Macad::Occt::WNT_Window::WNT_Window(Macad::Occt::WNT_Window^ parameter1)
	: Macad::Occt::Aspect_Window(BaseClass::InitMode::Uninitialized)
{
	NativeInstance = new ::WNT_Window(*(::WNT_Window*)parameter1->NativeInstance);
}

unsigned int Macad::Occt::WNT_Window::VirtualKeyFromNative(int theKey)
{
	return ::WNT_Window::VirtualKeyFromNative(theKey);
}

unsigned int Macad::Occt::WNT_Window::MouseKeyFlagsAsync()
{
	return ::WNT_Window::MouseKeyFlagsAsync();
}

unsigned int Macad::Occt::WNT_Window::MouseButtonsAsync()
{
	return ::WNT_Window::MouseButtonsAsync();
}

void Macad::Occt::WNT_Window::SetCursor(System::IntPtr aCursor)
{
	((::WNT_Window*)_NativeInstance)->SetCursor(aCursor.ToPointer());
}

void Macad::Occt::WNT_Window::Map()
{
	((::WNT_Window*)_NativeInstance)->Map();
}

void Macad::Occt::WNT_Window::Map(int aMapMode)
{
	((::WNT_Window*)_NativeInstance)->Map(aMapMode);
}

void Macad::Occt::WNT_Window::Unmap()
{
	((::WNT_Window*)_NativeInstance)->Unmap();
}

Macad::Occt::Aspect_TypeOfResize Macad::Occt::WNT_Window::DoResize()
{
	return (Macad::Occt::Aspect_TypeOfResize)((::WNT_Window*)_NativeInstance)->DoResize();
}

bool Macad::Occt::WNT_Window::DoMapping()
{
	return ((::WNT_Window*)_NativeInstance)->DoMapping();
}

void Macad::Occt::WNT_Window::SetPos(int X, int Y, int X1, int Y1)
{
	((::WNT_Window*)_NativeInstance)->SetPos(X, Y, X1, Y1);
}

bool Macad::Occt::WNT_Window::IsMapped()
{
	return ((::WNT_Window*)_NativeInstance)->IsMapped();
}

double Macad::Occt::WNT_Window::Ratio()
{
	return ((::WNT_Window*)_NativeInstance)->Ratio();
}

void Macad::Occt::WNT_Window::Position(int% X1, int% Y1, int% X2, int% Y2)
{
	pin_ptr<int> pp_X1 = &X1;
	pin_ptr<int> pp_Y1 = &Y1;
	pin_ptr<int> pp_X2 = &X2;
	pin_ptr<int> pp_Y2 = &Y2;
	((::WNT_Window*)_NativeInstance)->Position(*(Standard_Integer*)pp_X1, *(Standard_Integer*)pp_Y1, *(Standard_Integer*)pp_X2, *(Standard_Integer*)pp_Y2);
}

void Macad::Occt::WNT_Window::Size(int% Width, int% Height)
{
	pin_ptr<int> pp_Width = &Width;
	pin_ptr<int> pp_Height = &Height;
	((::WNT_Window*)_NativeInstance)->Size(*(Standard_Integer*)pp_Width, *(Standard_Integer*)pp_Height);
}

System::IntPtr Macad::Occt::WNT_Window::HWindow()
{
	return System::IntPtr(((::WNT_Window*)_NativeInstance)->HWindow());
}

System::IntPtr Macad::Occt::WNT_Window::HParentWindow()
{
	return System::IntPtr(((::WNT_Window*)_NativeInstance)->HParentWindow());
}

System::IntPtr Macad::Occt::WNT_Window::NativeHandle()
{
	return System::IntPtr(((::WNT_Window*)_NativeInstance)->NativeHandle());
}

System::IntPtr Macad::Occt::WNT_Window::NativeParentHandle()
{
	return System::IntPtr(((::WNT_Window*)_NativeInstance)->NativeParentHandle());
}

System::IntPtr Macad::Occt::WNT_Window::NativeFBConfig()
{
	return System::IntPtr(((::WNT_Window*)_NativeInstance)->NativeFBConfig());
}

void Macad::Occt::WNT_Window::SetTitle(Macad::Occt::TCollection_AsciiString^ theTitle)
{
	((::WNT_Window*)_NativeInstance)->SetTitle(*(::TCollection_AsciiString*)theTitle->NativeInstance);
}

void Macad::Occt::WNT_Window::InvalidateContent(Macad::Occt::Aspect_DisplayConnection^ theDisp)
{
	Handle(::Aspect_DisplayConnection) h_theDisp = theDisp->NativeInstance;
	((::WNT_Window*)_NativeInstance)->InvalidateContent(h_theDisp);
	theDisp->NativeInstance = h_theDisp.get();
}

void Macad::Occt::WNT_Window::InvalidateContent()
{
	((::WNT_Window*)_NativeInstance)->InvalidateContent(0);
}

int Macad::Occt::WNT_Window::RegisterRawInputDevices(unsigned int theRawDeviceMask)
{
	return ((::WNT_Window*)_NativeInstance)->RegisterRawInputDevices(theRawDeviceMask);
}


Macad::Occt::WNT_Window^ Macad::Occt::WNT_Window::CreateDowncasted(::WNT_Window* instance)
{
	return gcnew Macad::Occt::WNT_Window( instance );
}


