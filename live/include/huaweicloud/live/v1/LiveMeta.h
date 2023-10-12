#ifndef HUAWEICLOUD_SDK_LIVE_V1_LiveMeta_H_
#define HUAWEICLOUD_SDK_LIVE_V1_LiveMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/live/v1/LiveExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_LIVE_V1_EXPORT  LiveMeta {
public:
    static HttpRequestDef genRequestDefForBatchShowIpBelongs();
    static HttpRequestDef genRequestDefForCreateDomain();
    static HttpRequestDef genRequestDefForCreateDomainMapping();
    static HttpRequestDef genRequestDefForCreateRecordCallbackConfig();
    static HttpRequestDef genRequestDefForCreateRecordIndex();
    static HttpRequestDef genRequestDefForCreateRecordRule();
    static HttpRequestDef genRequestDefForCreateSnapshotConfig();
    static HttpRequestDef genRequestDefForCreateStreamForbidden();
    static HttpRequestDef genRequestDefForCreateTranscodingsTemplate();
    static HttpRequestDef genRequestDefForDeleteDomain();
    static HttpRequestDef genRequestDefForDeleteDomainKeyChain();
    static HttpRequestDef genRequestDefForDeleteDomainMapping();
    static HttpRequestDef genRequestDefForDeleteRecordCallbackConfig();
    static HttpRequestDef genRequestDefForDeleteRecordRule();
    static HttpRequestDef genRequestDefForDeleteSnapshotConfig();
    static HttpRequestDef genRequestDefForDeleteStreamForbidden();
    static HttpRequestDef genRequestDefForDeleteTranscodingsTemplate();
    static HttpRequestDef genRequestDefForListLiveSampleLogs();
    static HttpRequestDef genRequestDefForListLiveStreamsOnline();
    static HttpRequestDef genRequestDefForListRecordCallbackConfigs();
    static HttpRequestDef genRequestDefForListRecordContents();
    static HttpRequestDef genRequestDefForListRecordRules();
    static HttpRequestDef genRequestDefForListSnapshotConfigs();
    static HttpRequestDef genRequestDefForListStreamForbidden();
    static HttpRequestDef genRequestDefForRunRecord();
    static HttpRequestDef genRequestDefForShowDomain();
    static HttpRequestDef genRequestDefForShowDomainKeyChain();
    static HttpRequestDef genRequestDefForShowRecordCallbackConfig();
    static HttpRequestDef genRequestDefForShowRecordRule();
    static HttpRequestDef genRequestDefForShowTranscodingsTemplate();
    static HttpRequestDef genRequestDefForUpdateDomain();
    static HttpRequestDef genRequestDefForUpdateDomainIp6Switch();
    static HttpRequestDef genRequestDefForUpdateDomainKeyChain();
    static HttpRequestDef genRequestDefForUpdateRecordCallbackConfig();
    static HttpRequestDef genRequestDefForUpdateRecordRule();
    static HttpRequestDef genRequestDefForUpdateSnapshotConfig();
    static HttpRequestDef genRequestDefForUpdateStreamForbidden();
    static HttpRequestDef genRequestDefForUpdateTranscodingsTemplate();
    static HttpRequestDef genRequestDefForDeleteDomainHttpsCert();
    static HttpRequestDef genRequestDefForShowDomainHttpsCert();
    static HttpRequestDef genRequestDefForUpdateDomainHttpsCert();
    static HttpRequestDef genRequestDefForUpdateObsBucketAuthorityPublic();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_LiveMeta_H_
