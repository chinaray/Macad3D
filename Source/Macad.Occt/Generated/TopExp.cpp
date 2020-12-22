// Generated wrapper code for package TopExp

#include "OcctPCH.h"
#include "TopExp.h"

using namespace System::Runtime::InteropServices; // for class Marshal

#include "TopoDS.h"
#include "TopAbs.h"
#include "TopExp.h"
#include "Standard.h"
#include "TopTools.h"


//---------------------------------------------------------------------
//  Class  TopExp_Explorer
//---------------------------------------------------------------------

Macad::Occt::TopExp_Explorer::TopExp_Explorer()
	: BaseClass<::TopExp_Explorer>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopExp_Explorer();
}

Macad::Occt::TopExp_Explorer::TopExp_Explorer(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopAbs_ShapeEnum ToFind, Macad::Occt::TopAbs_ShapeEnum ToAvoid)
	: BaseClass<::TopExp_Explorer>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopExp_Explorer(*(::TopoDS_Shape*)S->NativeInstance, (::TopAbs_ShapeEnum)ToFind, (::TopAbs_ShapeEnum)ToAvoid);
}

Macad::Occt::TopExp_Explorer::TopExp_Explorer(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopAbs_ShapeEnum ToFind)
	: BaseClass<::TopExp_Explorer>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopExp_Explorer(*(::TopoDS_Shape*)S->NativeInstance, (::TopAbs_ShapeEnum)ToFind, TopAbs_SHAPE);
}

Macad::Occt::TopExp_Explorer::TopExp_Explorer(Macad::Occt::TopExp_Explorer^ parameter1)
	: BaseClass<::TopExp_Explorer>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopExp_Explorer(*(::TopExp_Explorer*)parameter1->NativeInstance);
}

void Macad::Occt::TopExp_Explorer::Init(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopAbs_ShapeEnum ToFind, Macad::Occt::TopAbs_ShapeEnum ToAvoid)
{
	((::TopExp_Explorer*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance, (::TopAbs_ShapeEnum)ToFind, (::TopAbs_ShapeEnum)ToAvoid);
}

void Macad::Occt::TopExp_Explorer::Init(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopAbs_ShapeEnum ToFind)
{
	((::TopExp_Explorer*)_NativeInstance)->Init(*(::TopoDS_Shape*)S->NativeInstance, (::TopAbs_ShapeEnum)ToFind, TopAbs_SHAPE);
}

bool Macad::Occt::TopExp_Explorer::More()
{
	return ((::TopExp_Explorer*)_NativeInstance)->More();
}

void Macad::Occt::TopExp_Explorer::Next()
{
	((::TopExp_Explorer*)_NativeInstance)->Next();
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopExp_Explorer::Value()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::TopExp_Explorer*)_NativeInstance)->Value();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

Macad::Occt::TopoDS_Shape^ Macad::Occt::TopExp_Explorer::Current()
{
	::TopoDS_Shape* _result = new ::TopoDS_Shape();
	*_result =  (::TopoDS_Shape)((::TopExp_Explorer*)_NativeInstance)->Current();
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Shape(_result);
}

void Macad::Occt::TopExp_Explorer::ReInit()
{
	((::TopExp_Explorer*)_NativeInstance)->ReInit();
}

int Macad::Occt::TopExp_Explorer::Depth()
{
	return ((::TopExp_Explorer*)_NativeInstance)->Depth();
}

void Macad::Occt::TopExp_Explorer::Clear()
{
	((::TopExp_Explorer*)_NativeInstance)->Clear();
}

void Macad::Occt::TopExp_Explorer::Destroy()
{
	((::TopExp_Explorer*)_NativeInstance)->Destroy();
}




//---------------------------------------------------------------------
//  Class  TopExp
//---------------------------------------------------------------------

Macad::Occt::TopExp::TopExp()
	: BaseClass<::TopExp>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopExp();
}

Macad::Occt::TopExp::TopExp(Macad::Occt::TopExp^ parameter1)
	: BaseClass<::TopExp>(BaseClass::InitMode::Uninitialized)
{
	_NativeInstance = new ::TopExp(*(::TopExp*)parameter1->NativeInstance);
}

void Macad::Occt::TopExp::MapShapes(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopAbs_ShapeEnum T, Macad::Occt::TopTools_IndexedMapOfShape^ M)
{
	::TopExp::MapShapes(*(::TopoDS_Shape*)S->NativeInstance, (::TopAbs_ShapeEnum)T, *(::TopTools_IndexedMapOfShape*)M->NativeInstance);
}

void Macad::Occt::TopExp::MapShapes(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_IndexedMapOfShape^ M)
{
	::TopExp::MapShapes(*(::TopoDS_Shape*)S->NativeInstance, *(::TopTools_IndexedMapOfShape*)M->NativeInstance);
}

void Macad::Occt::TopExp::MapShapes(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopTools_MapOfShape^ M)
{
	::TopExp::MapShapes(*(::TopoDS_Shape*)S->NativeInstance, *(::TopTools_MapOfShape*)M->NativeInstance);
}

void Macad::Occt::TopExp::MapShapesAndAncestors(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopAbs_ShapeEnum TS, Macad::Occt::TopAbs_ShapeEnum TA, Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape^ M)
{
	::TopExp::MapShapesAndAncestors(*(::TopoDS_Shape*)S->NativeInstance, (::TopAbs_ShapeEnum)TS, (::TopAbs_ShapeEnum)TA, *(::TopTools_IndexedDataMapOfShapeListOfShape*)M->NativeInstance);
}

void Macad::Occt::TopExp::MapShapesAndUniqueAncestors(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopAbs_ShapeEnum TS, Macad::Occt::TopAbs_ShapeEnum TA, Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape^ M, bool useOrientation)
{
	::TopExp::MapShapesAndUniqueAncestors(*(::TopoDS_Shape*)S->NativeInstance, (::TopAbs_ShapeEnum)TS, (::TopAbs_ShapeEnum)TA, *(::TopTools_IndexedDataMapOfShapeListOfShape*)M->NativeInstance, useOrientation);
}

void Macad::Occt::TopExp::MapShapesAndUniqueAncestors(Macad::Occt::TopoDS_Shape^ S, Macad::Occt::TopAbs_ShapeEnum TS, Macad::Occt::TopAbs_ShapeEnum TA, Macad::Occt::TopTools_IndexedDataMapOfShapeListOfShape^ M)
{
	::TopExp::MapShapesAndUniqueAncestors(*(::TopoDS_Shape*)S->NativeInstance, (::TopAbs_ShapeEnum)TS, (::TopAbs_ShapeEnum)TA, *(::TopTools_IndexedDataMapOfShapeListOfShape*)M->NativeInstance, false);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::TopExp::FirstVertex(Macad::Occt::TopoDS_Edge^ E, bool CumOri)
{
	::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
	*_result = ::TopExp::FirstVertex(*(::TopoDS_Edge*)E->NativeInstance, CumOri);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::TopExp::FirstVertex(Macad::Occt::TopoDS_Edge^ E)
{
	::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
	*_result = ::TopExp::FirstVertex(*(::TopoDS_Edge*)E->NativeInstance, false);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::TopExp::LastVertex(Macad::Occt::TopoDS_Edge^ E, bool CumOri)
{
	::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
	*_result = ::TopExp::LastVertex(*(::TopoDS_Edge*)E->NativeInstance, CumOri);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

Macad::Occt::TopoDS_Vertex^ Macad::Occt::TopExp::LastVertex(Macad::Occt::TopoDS_Edge^ E)
{
	::TopoDS_Vertex* _result = new ::TopoDS_Vertex();
	*_result = ::TopExp::LastVertex(*(::TopoDS_Edge*)E->NativeInstance, false);
	 return _result==nullptr ? nullptr : gcnew Macad::Occt::TopoDS_Vertex(_result);
}

void Macad::Occt::TopExp::Vertices(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Vertex^ Vfirst, Macad::Occt::TopoDS_Vertex^ Vlast, bool CumOri)
{
	::TopExp::Vertices(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Vertex*)Vfirst->NativeInstance, *(::TopoDS_Vertex*)Vlast->NativeInstance, CumOri);
}

void Macad::Occt::TopExp::Vertices(Macad::Occt::TopoDS_Edge^ E, Macad::Occt::TopoDS_Vertex^ Vfirst, Macad::Occt::TopoDS_Vertex^ Vlast)
{
	::TopExp::Vertices(*(::TopoDS_Edge*)E->NativeInstance, *(::TopoDS_Vertex*)Vfirst->NativeInstance, *(::TopoDS_Vertex*)Vlast->NativeInstance, false);
}

void Macad::Occt::TopExp::Vertices(Macad::Occt::TopoDS_Wire^ W, Macad::Occt::TopoDS_Vertex^ Vfirst, Macad::Occt::TopoDS_Vertex^ Vlast)
{
	::TopExp::Vertices(*(::TopoDS_Wire*)W->NativeInstance, *(::TopoDS_Vertex*)Vfirst->NativeInstance, *(::TopoDS_Vertex*)Vlast->NativeInstance);
}

bool Macad::Occt::TopExp::CommonVertex(Macad::Occt::TopoDS_Edge^ E1, Macad::Occt::TopoDS_Edge^ E2, Macad::Occt::TopoDS_Vertex^ V)
{
	return ::TopExp::CommonVertex(*(::TopoDS_Edge*)E1->NativeInstance, *(::TopoDS_Edge*)E2->NativeInstance, *(::TopoDS_Vertex*)V->NativeInstance);
}



