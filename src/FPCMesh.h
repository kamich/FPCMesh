#ifndef FPCMESH_HEADER
#define FPCMESH_HEADER

#ifdef __cplusplus
extern "C" {

namespace FPCM{

///
/// class FPCMesh - main interface 
///

typedef int* Ve_Ids; //set of vertices identyfiers
typedef int* Ed_Ids; //set of edges identyfiers
typedef int* Fa_Ids; //set of faces identyfiers
typedef int* Vo_Ids; //set of volumes identyfiers

/// no adaptation, no distributed memory
class FPCMesh 
{
public:
	// Base set of operators
	// 0d - Vertices operators
	Ve_Ids&	Vertices(const& Ve_Ids) const ;	
	Ve_Ids&	Vertices(const& Ed_Ids) const ;
	Ve_Ids&	Vertices(const& Fa_Ids) const ;
	Ve_Ids&	Vertices(const& Vo_Ids) const ;
	// 1d - Edges operators	
	Ed_Ids&	Edges(const& Ve_Ids) const ;
	Ed_Ids&	Edges(const& Ed_Ids) const ;
	Ed_Ids&	Edges(const& Fa_Ids) const ;
	Ed_Ids&	Edges(const& Vo_Ids) const ;
	// 2d - Faces operators
	Fa_Ids& Faces(const& Ve_Ids) const ;
	Fa_Ids& Faces(const& Ed_Ids) const ;
	Fa_Ids& Faces(const& Fa_Ids) const ;
	Fa_Ids& Faces(const& Vo_Ids) const ;
	// 3d - (finite) Volumes 
	Vo_Ids& Volumes(const& Ve_Ids) const;
	Vo_Ids& Volumes(const& Ed_Ids) const;
	Vo_Ids& Volumes(const& Fa_Ids) const;
	Vo_Ids& Volumes(const& Vo_Ids) const;

}; //! class FPCMesh

} //! extern "C"

#else //< ifdef __cplusplus

/// FPCMesh interface for "good old" C-style

typedef struct FPCMesh; 	//< forward declaration
typedef FPCMesh* pFPCMesh; 	//< pointer to struct

#endif //! FPCMESH_HEADER
