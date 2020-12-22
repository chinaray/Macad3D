
#include "ManagedPCH.h"
#include "BRepTools.hxx"
#include "BRepTools_ShapeSet.hxx"
#include "BinTools_ShapeSet.hxx"

#using <Macad.Occt.dll> as_friend

using namespace System::Runtime::InteropServices;

namespace Macad
{
	namespace Occt
	{
		namespace Helper
		{
			public ref class BRepExchange
			{
			public:
				static array<System::Byte>^ WriteASCII(Macad::Occt::TopoDS_Shape^ shape, bool includeTriangles)
				{
					std::stringstream out;

					::BRepTools_ShapeSet shapeSet(includeTriangles);
					shapeSet.Add(*shape->NativeInstance);
					shapeSet.Write(out);
					shapeSet.Write(*shape->NativeInstance, out);

					if (out.str().length() > 0)
					{
						int length = (int)out.str().length();
						auto byteArray = gcnew array<System::Byte>(length + 1);
						Marshal::Copy((IntPtr)(char*)(out.str().c_str()), byteArray, 0, length);
						return byteArray;
					}
					return nullptr;
				}

				static Macad::Occt::TopoDS_Shape^ ReadASCII(array<System::Byte>^ bytes)
				{
					int length = bytes->Length;
					auto buffer = new char[length];
					Marshal::Copy(bytes, 0, (IntPtr)buffer, length);
					std::istringstream in(std::string(buffer, length));

					::BRepTools_ShapeSet shapeSet;
					shapeSet.Read(in);

					if (shapeSet.NbShapes() == 0)
						return nullptr;

					::TopoDS_Shape* shape = new ::TopoDS_Shape();
					shapeSet.Read(*shape, in);

					return gcnew Macad::Occt::TopoDS_Shape(shape);
				}

				static array<System::Byte>^ WriteBinary(Macad::Occt::TopoDS_Shape^ shape, bool includeTriangles)
				{
					std::stringstream out;

					::BinTools_ShapeSet shapeSet(includeTriangles);
					shapeSet.Add(*shape->NativeInstance);
					shapeSet.Write(out);
					shapeSet.Write(*shape->NativeInstance, out);

					if (out.str().length() > 0)
					{
						int length = (int)out.str().length();
						auto byteArray = gcnew array<System::Byte>(length + 1);
						Marshal::Copy((IntPtr)(char*)(out.str().c_str()), byteArray, 0, length);
						return byteArray;
					}
					return nullptr;
				}

				static Macad::Occt::TopoDS_Shape^ ReadBinary(array<System::Byte>^ bytes)
				{
					int length = bytes->Length;
					auto buffer = new char[length];
					Marshal::Copy(bytes, 0, (IntPtr)buffer, length);
					std::istringstream in(std::string(buffer, length));

					::BinTools_ShapeSet shapeSet;
					shapeSet.Read(in);

					if (shapeSet.NbShapes() == 0)
						return nullptr;

					::TopoDS_Shape* shape = new ::TopoDS_Shape();
					shapeSet.Read(*shape, in, shapeSet.NbShapes());

					return gcnew Macad::Occt::TopoDS_Shape(shape);
				}
			};
		}
	}
}