// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Robogoo_Cplusplus : ModuleRules
{
	public Robogoo_Cplusplus(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "ApexDestruction" });
	}
}