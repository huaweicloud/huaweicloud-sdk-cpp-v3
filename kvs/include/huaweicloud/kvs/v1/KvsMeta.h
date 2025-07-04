#ifndef HUAWEICLOUD_SDK_KVS_V1_KvsMeta_H_
#define HUAWEICLOUD_SDK_KVS_V1_KvsMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/kvs/v1/KvsExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Kvs {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_KVS_V1_EXPORT  KvsMeta {
public:
    static HttpRequestDef genRequestDefForCreateTable();
    static HttpRequestDef genRequestDefForDeleteTable();
    static HttpRequestDef genRequestDefForDescribeTable();
    static HttpRequestDef genRequestDefForListStore();
    static HttpRequestDef genRequestDefForListTable();
    static HttpRequestDef genRequestDefForCheckHealth();
    static HttpRequestDef genRequestDefForBatchGetKv();
    static HttpRequestDef genRequestDefForBatchWriteKv();
    static HttpRequestDef genRequestDefForDeleteKv();
    static HttpRequestDef genRequestDefForGetKv();
    static HttpRequestDef genRequestDefForPutKv();
    static HttpRequestDef genRequestDefForScanKv();
    static HttpRequestDef genRequestDefForScanSkeyKv();
    static HttpRequestDef genRequestDefForUpdateKv();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_KVS_V1_KvsMeta_H_
