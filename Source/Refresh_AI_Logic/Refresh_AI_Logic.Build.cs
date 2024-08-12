// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Refresh_AI_Logic : ModuleRules
{
	public Refresh_AI_Logic(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
