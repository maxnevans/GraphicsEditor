#pragma once
#include "../../PluginSupporter/source/PluginSupporter.h"

class TestShape :
	public ::BaseShape
{
private:
	class TestFactoryFunctor
		:
		public IShapeFactoryFunctor
	{
	public:
		virtual BaseShape* operator()() override;
	};
public:
	virtual void Redraw(Gdiplus::Graphics* const graphics) override;
	static IShapeFactoryFunctor* CreateFactoryFunctor();
	inline virtual const wchar_t* GetName() const override
	{
		return this->NAME;
	}

public:
	static constexpr const wchar_t* NAME = L"TestShape";
};
