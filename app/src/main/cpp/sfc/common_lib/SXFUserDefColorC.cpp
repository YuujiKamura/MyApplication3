//------------------------------------------------------------
//	All Rights Reserved,(c) JACIC 2001
//	SXFUserDefColorC.cpp                   ì¬úF2000.04.10
//
//	PDNXTv
//      UserDefColor Instance Table DataðÇ·é
//
//	QDð
//	    ðÔ    út¯         SÒ    Tv
//      ì¬		2000.04.10     ü
//
//------------------------------------------------------------
#include "stdafx.h"
#include "SXFUserDefColorC.h"
#include "SXFTableMapManagerC.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

//------------------------------------------------------------
//	All Rights Reserved,(c) JACIC 2001
//	SXFUserDefColorC.cpp                   ì¬úF2000.04.10
//
//  PD@\Tv
//      NX\z
//
//  QDC^[tF[X
// 	void	SXFUserDefColorC::SXFUserDefColorC( )
//	ø:	^								ø¼				àe
//			Èµ					
//
//  RDð
//	    ðÔ    út¯         SÒ    Tv
//      ì¬		2000.04.10     ü
//
//------------------------------------------------------------
SXFUserDefColorC::SXFUserDefColorC( )
{
    //initialization 
    m_Code = -1;
    m_ID = -1;
    m_Name.Empty();
    R=-1;
    G=-1;
    B=-1;
    m_MappingManager = NULL;
}
//------------------------------------------------------------
//	All Rights Reserved,(c) JACIC 2001
//	SXFUserDefColorC.cpp                   ì¬úF2000.04.10
//
//  PD@\Tv
//      NXÁÅ
//
//  QDC^[tF[X
//	void	SXFUserDefColorC::~SXFUserDefColorC()
//	ø:	^								ø¼				àe
//			Èµ					
//
//  RDð
//	    ðÔ    út¯         SÒ    Tv
//      ì¬		2000.04.10     ü
//
//------------------------------------------------------------
SXFUserDefColorC::~SXFUserDefColorC()
{
}
