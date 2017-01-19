//
// Created by gylo on 19.01.17.
//

#ifndef ROOSHACLIENT_NETWORK_CONSTANTS_H
#define ROOSHACLIENT_NETWORK_CONSTANTS_H

#ifndef QT_DEBUG
#define ROOSHA_SERVER_ADDRESS "146.185.178.193:1543"
#else
#define ROOSHA_SERVER_ADDRESS "localhost:1543"
#endif // QT_DEBUG

#define TOKEN_METADATA_KEY "roosha-auth-token"

#define PING_INTERVAL_MILLIS 15000
#define DEFAULT_TIMEOUT_MILLIS 5000u

#define TECHNICAL_AUTHENTICATION_RPC_ID 0u
#define PING_REQUEST_ID 1u
#define MINIMAL_PUBLIC_RPC_ID 10u

#endif //ROOSHACLIENT_NETWORK_CONSTANTS_H