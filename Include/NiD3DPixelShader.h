// EMERGENT GAME TECHNOLOGIES PROPRIETARY INFORMATION
//
// This software is supplied under the terms of a license agreement or
// nondisclosure agreement with Emergent Game Technologies and may not
// be copied or disclosed except in accordance with the terms of that
// agreement.
//
//      Copyright (c) 1996-2009 Emergent Game Technologies.
//      All Rights Reserved.
//
// Emergent Game Technologies, Calabasas, CA 91302
// http://www.emergent.net

#pragma once
#ifndef NID3DPIXELSHADER_H
#define NID3DPIXELSHADER_H

#include "NiD3DShaderProgram.h"

//
class NID3D_ENTRY NiD3DPixelShader : public NiD3DShaderProgram
{
    NiDeclareRTTI;

public:
    NiD3DPixelShader(NiD3DRenderer* pkRenderer);
    virtual ~NiD3DPixelShader();

    virtual NiD3DPixelShaderHandle GetShaderHandle();
    virtual void SetShaderHandle(NiD3DPixelShaderHandle hShader);

    virtual void DestroyRendererData();
    virtual void RecreateRendererData();

    // Shader constants
    virtual bool SetShaderConstant(
        NiShaderConstantMapEntry* pkEntry,
        const void* pvDataSource = NULL,
        unsigned int uiRegisterCount = 0);
    virtual bool SetShaderConstantArray(
        NiShaderConstantMapEntry* pkEntry,
        const void* pvDataSource,
        unsigned int uiNumEntries,
        unsigned int uiRegistersPerEntry,
        const unsigned short* pusReorderArray = NULL);

protected:
    NiD3DPixelShaderHandle m_hShader;
};

typedef efd::SmartPointer<NiD3DPixelShader> NiD3DPixelShaderPtr;

#include "NiD3DPixelShader.inl"

#endif  //#ifndef NID3DPIXELSHADER_H