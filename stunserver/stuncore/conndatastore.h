#ifndef CONNDATASTORE_H
#define  CONNDATASTORE_H

#define MAX_NUM_CLIENT_PER_SERVER      1
#define MAX_NUM_CLIENT                             1
#define MAX_NUM_SERVER

struct CommonData
{
    ClientType clientType;
    NatBehavior behavior;
    NatFiltering filtering;
    uint32_t socketId;
   uint32_t extIpAdress;
   uint32_t extPortNo;
}


struct ClientData
{
    uint32_t clientId;
    uint32_t channelId;
    uint32_t   connServerId;
    CommonData commData;
};

struct ServerData
{
    uint32_t channelId;
    uint32_t   serverId;
    uint32_t clientNum;
    uint32_t clientId[MAX_NUM_CLIENT_PER_SERVER];
    CommonData commData;
};


class  ConnDataStore
{
    public:

        void ConnDataStore(){};
        void ~ConnDataStore(){};
        
        uint32_t AllocServeId();
        uint32_t AllocClientId();
        
        ClientData& GetClientData(uint32_t clientId);
        ServerData& GetServeData(uint32_t serverId);

          void SetClientData(uint32_t clientId, NatConnectReq  *pNatConnectReq);
          void SetServerData(uint32 serverId, NatConnectReq *PNatConnectReq);
    
        

    private:

        ServerData  _serverData[MAX_NUM_SERVER];
        ClientData    _clientdata[MAX_NUM_CLIENT];
}


#endif
