#pragma once
#include"Main.h"


class CVertex
{

public:


	
	CVertex() { x = 0.0f; y = 0.0f; z = 0.0f; }

	CVertex(float X, float Y, float Z) { x = X;y = Y;z = Z; }

	float x;
	float y;
	float z;

};

class CPolygon
{
public:

	CPolygon();
	CPolygon(USHORT Count);
	virtual ~CPolygon();


	long AddVertex(USHORT Count);


	USHORT m_nVertexCount;
	CVertex* m_pVertex;

};


class CMesh
{
public:
	
	CMesh(ULONG Count);
	CMesh();
	virtual ~CMesh();

	long        AddPolygon(ULONG Count = 1);

	ULONG       m_nPolygonCount;        // Number of polygons stored
	CPolygon** m_pPolygon;             // Simply polygon array.

};


class CObject
{
public:
	//-------------------------------------------------------------------------
	// Constructors & Destructors for This Class.
	//-------------------------------------------------------------------------
	CObject(CMesh* pMesh);
	CObject();

	//-------------------------------------------------------------------------
	// Public Variables for This Class
	//-------------------------------------------------------------------------
	D3DXMATRIX  m_mtxWorld;             // Objects world matrix
	CMesh* m_pMesh;                // Mesh we are instancing

};
