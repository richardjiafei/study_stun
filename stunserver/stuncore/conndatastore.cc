#include "conndatastore.h"



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
  return _clientdata[0];
}
ServerData& ConnDataStore::GetServeData(uint32_t serverId)
{
  return _serverData[0];
}


void ConnDataStore::SetClientData(uint32_t clientId, NatConnectReq  *pNatConnectReq)
{
    _clientdata[clientId].clientId =  
}
void ConnDataStore::SetServerData(uint32_t serverId, NatConnectReq *PNatConnectReq)
{

}

