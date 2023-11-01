// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PROYSIS457 : ModuleRules
{
	public PROYSIS457(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
