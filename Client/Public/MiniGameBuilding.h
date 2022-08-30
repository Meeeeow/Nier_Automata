#pragma once

#ifndef __CLIENT_MINIGAMEBUILDING_H__
#define __CLIENT_MINIGAMEBUILDING_H__

#include "GameObjectModel.h"

BEGIN(Engine)
class COctreeModel;
END

BEGIN(Client)
class CMiniGameBuilding final : public CGameObject
{
private:
	CMiniGameBuilding(_pGraphicDevice pGraphicDevice, _pContextDevice pContextDevice);
	explicit CMiniGameBuilding(const CMiniGameBuilding& rhs);
	virtual ~CMiniGameBuilding() DEFAULT;

public:
	virtual	HRESULT							NativeConstruct_Prototype()		override;
	virtual HRESULT							NativeConstruct(void* pArg)		override;
	virtual _int							Tick(_double dTimeDelta)		override;
	virtual _int							LateTick(_double dTimeDelta)	override;
	virtual HRESULT							Render()						override;

public:
	virtual void							Notify(void* pMessage);

private:
	virtual _int							VerifyChecksum(void* pMessage);

	virtual HRESULT							SetUp_ConstantTable();

public:
	// For Visual Debugging
	virtual const char*						Get_PassName(_uint iIndex);
	virtual _uint							Get_MaxPassIndex();


public:
	static	CMiniGameBuilding*				Create(_pGraphicDevice pGraphicDevice, _pContextDevice pContextDevice);
	virtual	CGameObject*					Clone(void* pArg) override;
	virtual void							Free() override;

private:
	CRenderer*								m_pRenderer = nullptr;
	CTransform*								m_pTransform = nullptr;
	CModel*									m_pModel = nullptr;
	_double									m_dTimeDelta = 0.0;
	_bool									m_bRender = false;

private:
	_float4									m_vDOFParams = _float4(0.f, 75.f, 150.f, 1.f);
};

END

#endif // !__CLIENT_MINIGAMEBUILDING_H__
