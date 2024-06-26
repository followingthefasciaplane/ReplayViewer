#include "net_priv.h"

extern NetAPIDesc NET_REPLAY_DOWNLOAD_API_DESC;
extern NetAPIDesc NET_MAP_INFO_API_DESC;
extern NetAPIDesc NET_REPLAY_LIST_API_DESC;

NetAPIDesc* NET_API_DESCS[] = {
    &NET_REPLAY_DOWNLOAD_API_DESC,
    &NET_MAP_INFO_API_DESC,
    &NET_REPLAY_LIST_API_DESC,
};

size_t NET_NUM_API_DESCS = NET_ARRAY_SIZE(NET_API_DESCS);
