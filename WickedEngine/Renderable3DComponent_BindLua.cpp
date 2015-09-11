#include "Renderable3DComponent_BindLua.h"
#include "wiResourceManager_BindLua.h"

const char Renderable3DComponent_BindLua::className[] = "Renderable3DComponent";

Luna<Renderable3DComponent_BindLua>::FunctionType Renderable3DComponent_BindLua::methods[] = {
	lunamethod(Renderable2DComponent_BindLua, AddSprite),
	lunamethod(Renderable2DComponent_BindLua, AddFont),

	lunamethod(Renderable3DComponent_BindLua, GetContent),
	lunamethod(Renderable3DComponent_BindLua, Initialize),
	lunamethod(Renderable3DComponent_BindLua, Load),
	lunamethod(Renderable3DComponent_BindLua, Unload),
	lunamethod(Renderable3DComponent_BindLua, Start),
	lunamethod(Renderable3DComponent_BindLua, Stop),
	lunamethod(Renderable3DComponent_BindLua, Update),
	lunamethod(Renderable3DComponent_BindLua, Render),
	lunamethod(Renderable3DComponent_BindLua, Compose),

	lunamethod(Renderable3DComponent_BindLua, SetSSAOEnabled),
	lunamethod(Renderable3DComponent_BindLua, SetSSREnabled),
	lunamethod(Renderable3DComponent_BindLua, SetShadowsEnabled),
	lunamethod(Renderable3DComponent_BindLua, SetReflectionsEnabled),
	lunamethod(Renderable3DComponent_BindLua, SetFXAAEnabled),
	lunamethod(Renderable3DComponent_BindLua, SetBloomEnabled),
	lunamethod(Renderable3DComponent_BindLua, SetColorGradingEnabled),
	lunamethod(Renderable3DComponent_BindLua, SetEmitterParticlesEnabled),
	lunamethod(Renderable3DComponent_BindLua, SetHairParticlesEnabled),
	lunamethod(Renderable3DComponent_BindLua, SetVolumeLightsEnabled),
	lunamethod(Renderable3DComponent_BindLua, SetLightShaftsEnabled),
	lunamethod(Renderable3DComponent_BindLua, SetLensFlareEnabled),
	lunamethod(Renderable3DComponent_BindLua, SetMotionBlurEnabled),
	lunamethod(Renderable3DComponent_BindLua, SetSSSEnabled),
	{ NULL, NULL }
};
Luna<Renderable3DComponent_BindLua>::PropertyType Renderable3DComponent_BindLua::properties[] = {
	{ NULL, NULL }
};

Renderable3DComponent_BindLua::Renderable3DComponent_BindLua(Renderable3DComponent* component)
{
	this->component = component;
}

Renderable3DComponent_BindLua::Renderable3DComponent_BindLua(lua_State* L)
{
	component = nullptr;
}

Renderable3DComponent_BindLua::~Renderable3DComponent_BindLua()
{
}


int Renderable3DComponent_BindLua::SetSSAOEnabled(lua_State* L)
{
	if (component == nullptr)
	{
		wiLua::SError(L, "SetSSAOEnabled(bool value) component is null!");
		return 0;
	}
	if (wiLua::SGetArgCount(L) > 1)
		((Renderable3DComponent*)component)->setSSAOEnabled(wiLua::SGetBool(L, 2));
	else
		wiLua::SError(L, "SetSSAOEnabled(bool value) not enough arguments!");
	return 0;
}
int Renderable3DComponent_BindLua::SetSSREnabled(lua_State* L)
{
	if (component == nullptr)
	{
		wiLua::SError(L, "SetSSREnabled(bool value) component is null!");
		return 0;
	}
	if (wiLua::SGetArgCount(L) > 1)
		((Renderable3DComponent*)component)->setSSREnabled(wiLua::SGetBool(L, 2));
	else
		wiLua::SError(L, "SetSSREnabled(bool value) not enough arguments!");
	return 0;
}
int Renderable3DComponent_BindLua::SetShadowsEnabled(lua_State* L)
{
	if (component == nullptr)
	{
		wiLua::SError(L, "SetShadowsEnabled(bool value) component is null!");
		return 0;
	}
	if (wiLua::SGetArgCount(L) > 1)
		((Renderable3DComponent*)component)->setShadowsEnabled(wiLua::SGetBool(L, 2));
	else
		wiLua::SError(L, "SetShadowsEnabled(bool value) not enough arguments!");
	return 0;
}
int Renderable3DComponent_BindLua::SetReflectionsEnabled(lua_State* L)
{
	if (component == nullptr)
	{
		wiLua::SError(L, "SetShadowsEnabled(bool value) component is null!");
		return 0;
	}
	if (wiLua::SGetArgCount(L) > 1)
		((Renderable3DComponent*)component)->setReflectionsEnabled(wiLua::SGetBool(L, 2));
	else
		wiLua::SError(L, "SetShadowsEnabled(bool value) not enough arguments!");
	return 0;
}
int Renderable3DComponent_BindLua::SetFXAAEnabled(lua_State* L)
{
	if (component == nullptr)
	{
		wiLua::SError(L, "SetFXAAEnabled(bool value) component is null!");
		return 0;
	}
	if (wiLua::SGetArgCount(L) > 1)
		((Renderable3DComponent*)component)->setFXAAEnabled(wiLua::SGetBool(L, 2));
	else
		wiLua::SError(L, "SetFXAAEnabled(bool value) not enough arguments!");
	return 0;
}
int Renderable3DComponent_BindLua::SetBloomEnabled(lua_State* L)
{
	if (component == nullptr)
	{
		wiLua::SError(L, "SetBloomEnabled(bool value) component is null!");
		return 0;
	}
	if (wiLua::SGetArgCount(L) > 1)
		((Renderable3DComponent*)component)->setBloomEnabled(wiLua::SGetBool(L, 2));
	else
		wiLua::SError(L, "SetBloomEnabled(bool value) not enough arguments!");
	return 0;
}
int Renderable3DComponent_BindLua::SetColorGradingEnabled(lua_State* L)
{
	if (component == nullptr)
	{
		wiLua::SError(L, "SetColorGradingEnabled(bool value) component is null!");
		return 0;
	}
	if (wiLua::SGetArgCount(L) > 1)
		((Renderable3DComponent*)component)->setColorGradingEnabled(wiLua::SGetBool(L, 2));
	else
		wiLua::SError(L, "SetColorGradingEnabled(bool value) not enough arguments!");
	return 0;
}
int Renderable3DComponent_BindLua::SetEmitterParticlesEnabled(lua_State* L)
{
	if (component == nullptr)
	{
		wiLua::SError(L, "SetEmitterParticlesEnabled(bool value) component is null!");
		return 0;
	}
	if (wiLua::SGetArgCount(L) > 1)
		((Renderable3DComponent*)component)->setEmitterParticlesEnabled(wiLua::SGetBool(L, 2));
	else
		wiLua::SError(L, "SetEmitterParticlesEnabled(bool value) not enough arguments!");
	return 0;
}
int Renderable3DComponent_BindLua::SetHairParticlesEnabled(lua_State* L)
{
	if (component == nullptr)
	{
		wiLua::SError(L, "SetHairParticlesEnabled(bool value) component is null!");
		return 0;
	}
	if (wiLua::SGetArgCount(L) > 1)
		((Renderable3DComponent*)component)->setHairParticlesEnabled(wiLua::SGetBool(L, 2));
	else
		wiLua::SError(L, "SetHairParticlesEnabled(bool value) not enough arguments!");
	return 0;
}
int Renderable3DComponent_BindLua::SetVolumeLightsEnabled(lua_State* L)
{
	if (component == nullptr)
	{
		wiLua::SError(L, "SetVolumeLightsEnabled(bool value) component is null!");
		return 0;
	}
	if (wiLua::SGetArgCount(L) > 1)
		((Renderable3DComponent*)component)->setVolumeLightsEnabled(wiLua::SGetBool(L, 2));
	else
		wiLua::SError(L, "SetVolumeLightsEnabled(bool value) not enough arguments!");
	return 0;
}
int Renderable3DComponent_BindLua::SetLightShaftsEnabled(lua_State* L)
{
	if (component == nullptr)
	{
		wiLua::SError(L, "SetLightShaftsEnabled(bool value) component is null!");
		return 0;
	}
	if (wiLua::SGetArgCount(L) > 1)
		((Renderable3DComponent*)component)->setLightShaftsEnabled(wiLua::SGetBool(L, 2));
	else
		wiLua::SError(L, "SetLightShaftsEnabled(bool value) not enough arguments!");
	return 0;
}
int Renderable3DComponent_BindLua::SetLensFlareEnabled(lua_State* L)
{
	if (component == nullptr)
	{
		wiLua::SError(L, "SetLensFlareEnabled(bool value) component is null!");
		return 0;
	}
	if (wiLua::SGetArgCount(L) > 1)
		((Renderable3DComponent*)component)->setLensFlareEnabled(wiLua::SGetBool(L, 2));
	else
		wiLua::SError(L, "SetLensFlareEnabled(bool value) not enough arguments!");
	return 0;
}
int Renderable3DComponent_BindLua::SetMotionBlurEnabled(lua_State* L)
{
	if (component == nullptr)
	{
		wiLua::SError(L, "SetMotionBlurEnabled(bool value) component is null!");
		return 0;
	}
	if (wiLua::SGetArgCount(L) > 1)
		((Renderable3DComponent*)component)->setMotionBlurEnabled(wiLua::SGetBool(L, 2));
	else
		wiLua::SError(L, "SetMotionBlurEnabled(bool value) not enough arguments!");
	return 0;
}
int Renderable3DComponent_BindLua::SetSSSEnabled(lua_State* L)
{
	if (component == nullptr)
	{
		wiLua::SError(L, "SetSSSEnabled(bool value) component is null!");
		return 0;
	}
	if (wiLua::SGetArgCount(L) > 1)
		((Renderable3DComponent*)component)->setSSSEnabled(wiLua::SGetBool(L, 2));
	else
		wiLua::SError(L, "SetSSSEnabled(bool value) not enough arguments!");
	return 0;
}


void Renderable3DComponent_BindLua::Bind()
{
	static bool initialized = false;
	if (!initialized)
	{
		initialized = true;
		Luna<Renderable3DComponent_BindLua>::Register(wiLua::GetGlobal()->GetLuaState());
	}
}