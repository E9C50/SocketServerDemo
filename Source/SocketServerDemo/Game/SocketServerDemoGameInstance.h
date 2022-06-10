// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Networking.h"
#include "Engine/GameInstance.h"
#include "Interfaces/IPv4/IPv4Address.h"
#include "SocketServerDemo/ProtoModel/Basic.pb.h"
#include "SocketServerDemo/ProtoModel/User.pb.h"
#include "SocketServerDemoGameInstance.generated.h"

UCLASS()
class SOCKETSERVERDEMO_API USocketServerDemoGameInstance : public UGameInstance
{
	GENERATED_BODY()

public:
	UFUNCTION(BlueprintCallable)
	bool LoginToServer();
	
	UFUNCTION(BlueprintCallable)
	bool CreateGameRoom();
	
	UFUNCTION(BlueprintCallable)
	bool FindGameRooms();
	
	UFUNCTION(BlueprintCallable)
	bool JoinGameRoom(FString RoomUUID);

private:
	FSocket* Socket;
	FIPv4Address IpAddress;
	FRunnableThread* ReceiveThread;

	virtual void Init() override;

	void ExitGame(bool IsForce);

	bool SocketCreate(FString IPStr, int32 port);

	bool SocketSend(ProtoModel::BaseReq Message);
};
