// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SocketServerDemo : ModuleRules
{
	public SocketServerDemo(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new[]
		{
			"Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "libprotobuf",
			"Sockets", "Networking", "OnlineSubsystem", "OnlineSubsystemSteam", "OnlineSubsystemNull",
			"Steamworks"
		});
	}
}