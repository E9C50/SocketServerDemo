#include "SocketServerDemoGameInstance.h"

bool USocketServerDemoGameInstance::LoginToServer()
{
	UE_LOG(LogTemp, Warning, TEXT("Login into game server..."));

	if (!SocketCreate("192.168.50.10", 10086))
	{
		UE_LOG(LogTemp, Warning, TEXT("SocketCreate Failed!"));
		return false;
	}

	// APlayerController* PrimaryPC = GetPrimaryPlayerController();
	// FRotator ControlRotation = PrimaryPC->GetControlRotation();
	// FVector SpawnLocation = PrimaryPC->GetSpawnLocation();

	// const uint64 SteamUserId = SteamUser()->GetSteamID().ConvertToUint64();
	// const char* SteamUserName = SteamFriends()->GetPersonaName();


	ProtoModel::LoginRequest LoginReq = ProtoModel::LoginRequest();
	LoginReq.set_userid("SteamUserId");
	LoginReq.set_username("SteamUserName");
	LoginReq.set_platform(ProtoModel::STEAM);

	ProtoModel::BaseReq ReqMessage = ProtoModel::BaseReq();
	ReqMessage.set_order(ProtoModel::ORDER_LOGIN);
	ReqMessage.set_body(LoginReq.SerializeAsString());
	SocketSend(ReqMessage);
	UE_LOG(LogTemp, Warning, TEXT("SocketCreate Success!"));
	return true;
}

bool USocketServerDemoGameInstance::CreateGameRoom()
{
}

bool USocketServerDemoGameInstance::FindGameRooms()
{
}

bool USocketServerDemoGameInstance::JoinGameRoom(FString RoomUUID)
{
}

void USocketServerDemoGameInstance::Init()
{
	Super::Init();
}

void USocketServerDemoGameInstance::ExitGame(bool IsForce)
{
	APlayerController* PrimaryPC = GetWorld()->GetFirstPlayerController();
	if (!IsValid(PrimaryPC))
	{
		UE_LOG(LogTemp, Warning, TEXT("PrimaryPC Is Not Valid!"));
		return;
	}
	if (IsForce)
	{
		PrimaryPC->ConsoleCommand("quit force");
	}
	else
	{
		PrimaryPC->ConsoleCommand("quit");
	}
}

bool USocketServerDemoGameInstance::SocketCreate(FString IpStr, int32 Port)
{
	FIPv4Address::Parse(IpStr, IpAddress);

	const TSharedPtr<FInternetAddr> Address = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateInternetAddr();
	Address->SetIp(IpAddress.Value);
	Address->SetPort(Port);

	Socket = ISocketSubsystem::Get(PLATFORM_SOCKETSUBSYSTEM)->CreateSocket(NAME_Stream, TEXT("default"), false);

	if (Socket->Connect(*Address))
	{
		UE_LOG(LogTemp, Warning, TEXT("Connect Succeed!"));
		return true;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Connect Failed!"));
		return false;
	}
}

bool USocketServerDemoGameInstance::SocketSend(ProtoModel::BaseReq Message)
{
	const int MessageSize = Message.ByteSizeLong();
	std::vector<uint8_t> Buffer(MessageSize);
	Message.SerializeToArray(Buffer.data(), Buffer.size());
	int32 BytesSent = 0;

	if (Socket->Send(Buffer.data(), Buffer.size(), BytesSent))
	{
		UE_LOG(LogTemp, Warning, TEXT("___Send Succeed!"));
		return true;
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("___Send Failed!"));
		return false;
	}
}
