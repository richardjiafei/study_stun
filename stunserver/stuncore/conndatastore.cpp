

#include "commonincludes.hpp"
//#include "stringhelper.h"
#include "stuntypes.h"
#include "conndatastore.h"


ConnDataStore::ConnDataStore()
{
};

uint32_t ConnDataStore::AllocServeId()
{
  return 0;
}
uint32_t ConnDataStore::AllocClientId()
{
   return 0;
}
ClientData& ConnDataStore::GetClientData(uint32_t clientId)
{
  return _clientData[0];
}
ServerData& ConnDataStore::GetServeData(uint32_t serverId)
{
  return _serverData[0];
}


void ConnDataStore::SetClientData(uint32_t clientId, NatConnectReq  *pNatConnectReq)
{
    _clientData[clientId].clientId = clientId;
    _clientData[clientId].channelId = pNatConnectReq->channelId;
    _clientData[clientId].commData.connectType = pNatConnectReq->connectType;
    _clientData[clientId].commData.behavior    = pNatConnectReq->behavior;
    _clientData[clientId].commData.filtering = pNatConnectReq->filtering;
}
void ConnDataStore::SetServerData(uint32_t serverId, NatConnectReq *pNatConnectReq)
{
	_serverData[serverId].serverId = serverId;
	_serverData[serverId].channelId = pNatConnectReq->channelId;
	_serverData[serverId].commData.connectType = pNatConnectReq->connectType;
	_serverData[serverId].commData.behavior    = pNatConnectReq->behavior;
	_serverData[serverId].commData.filtering = pNatConnectReq->filtering;
}

