/*!
	@file
	@author		Albert Semenov
	@date		07/2012
*/

#include "Precompiled.h"
#include "SkinListControl.h"
#include "FactoryManager.h"
#include "CommandManager.h"

namespace tools
{

	FACTORY_ITEM_ATTRIBUTE(SkinListControl)

	SkinListControl::SkinListControl()
	{
	}

	SkinListControl::~SkinListControl()
	{
	}

	void SkinListControl::OnInitialise(Control* _parent, MyGUI::Widget* _place, const std::string& _layoutName)
	{
		DataListBaseControl::OnInitialise(_parent, _place, _layoutName);

		CommandManager::getInstance().getEvent("Command_CreateSkinData")->connect((DataListBaseControl*)this, &DataListBaseControl::commandCreateImageData);
		CommandManager::getInstance().getEvent("Command_CloneSkinData")->connect((DataListBaseControl*)this, &DataListBaseControl::commandCloneImageData);
		CommandManager::getInstance().getEvent("Command_DestroySkinData")->connect((DataListBaseControl*)this, &DataListBaseControl::commandDestroyImageData);
		CommandManager::getInstance().getEvent("Command_RenameSkinData")->connect((DataListBaseControl*)this, &DataListBaseControl::commandRenameImageData);

		setDataInfo("Root", "Skin", "Name", "UniqueName");
	}

}
