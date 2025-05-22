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
    static HttpRequestDef genRequestDefForCreateScheduleRecordTasks();
    static HttpRequestDef genRequestDefForCreateSnapshotConfig();
    static HttpRequestDef genRequestDefForCreateStreamForbidden();
    static HttpRequestDef genRequestDefForCreateTranscodingsTemplate();
    static HttpRequestDef genRequestDefForCreateUrlAuthchain();
    static HttpRequestDef genRequestDefForDeleteDomain();
    static HttpRequestDef genRequestDefForDeleteDomainKeyChain();
    static HttpRequestDef genRequestDefForDeleteDomainMapping();
    static HttpRequestDef genRequestDefForDeletePublishTemplate();
    static HttpRequestDef genRequestDefForDeleteRecordCallbackConfig();
    static HttpRequestDef genRequestDefForDeleteRecordRule();
    static HttpRequestDef genRequestDefForDeleteRefererChain();
    static HttpRequestDef genRequestDefForDeleteScheduleRecordTasks();
    static HttpRequestDef genRequestDefForDeleteSnapshotConfig();
    static HttpRequestDef genRequestDefForDeleteStreamForbidden();
    static HttpRequestDef genRequestDefForDeleteTranscodingsTemplate();
    static HttpRequestDef genRequestDefForListDelayConfig();
    static HttpRequestDef genRequestDefForListGeoBlockingConfig();
    static HttpRequestDef genRequestDefForListHlsConfig();
    static HttpRequestDef genRequestDefForListIpAuthList();
    static HttpRequestDef genRequestDefForListLiveSampleLogs();
    static HttpRequestDef genRequestDefForListLiveStreamsOnline();
    static HttpRequestDef genRequestDefForListPublishTemplate();
    static HttpRequestDef genRequestDefForListRecordCallbackConfigs();
    static HttpRequestDef genRequestDefForListRecordContents();
    static HttpRequestDef genRequestDefForListRecordRules();
    static HttpRequestDef genRequestDefForListScheduleRecordTasks();
    static HttpRequestDef genRequestDefForListSnapshotConfigs();
    static HttpRequestDef genRequestDefForListStreamForbidden();
    static HttpRequestDef genRequestDefForRunRecord();
    static HttpRequestDef genRequestDefForSetRefererChain();
    static HttpRequestDef genRequestDefForShowDomain();
    static HttpRequestDef genRequestDefForShowDomainKeyChain();
    static HttpRequestDef genRequestDefForShowPullSourcesConfig();
    static HttpRequestDef genRequestDefForShowRecordCallbackConfig();
    static HttpRequestDef genRequestDefForShowRecordRule();
    static HttpRequestDef genRequestDefForShowRefererChain();
    static HttpRequestDef genRequestDefForShowTranscodingsTemplate();
    static HttpRequestDef genRequestDefForUpdateDelayConfig();
    static HttpRequestDef genRequestDefForUpdateDomain();
    static HttpRequestDef genRequestDefForUpdateDomainIp6Switch();
    static HttpRequestDef genRequestDefForUpdateDomainKeyChain();
    static HttpRequestDef genRequestDefForUpdateGeoBlockingConfig();
    static HttpRequestDef genRequestDefForUpdateHlsConfig();
    static HttpRequestDef genRequestDefForUpdateIpAuthList();
    static HttpRequestDef genRequestDefForUpdatePublishTemplate();
    static HttpRequestDef genRequestDefForUpdatePullSourcesConfig();
    static HttpRequestDef genRequestDefForUpdateRecordCallbackConfig();
    static HttpRequestDef genRequestDefForUpdateRecordRule();
    static HttpRequestDef genRequestDefForUpdateSnapshotConfig();
    static HttpRequestDef genRequestDefForUpdateStreamForbidden();
    static HttpRequestDef genRequestDefForUpdateTranscodingsTemplate();
    static HttpRequestDef genRequestDefForDeleteDomainHttpsCert();
    static HttpRequestDef genRequestDefForShowDomainHttpsCert();
    static HttpRequestDef genRequestDefForUpdateDomainHttpsCert();
    static HttpRequestDef genRequestDefForCreateHarvestTask();
    static HttpRequestDef genRequestDefForDeleteHarvestTask();
    static HttpRequestDef genRequestDefForListHarvestTask();
    static HttpRequestDef genRequestDefForModifyHarvestTask();
    static HttpRequestDef genRequestDefForUpdateHarvestJobStatus();
    static HttpRequestDef genRequestDefForUpdateObsBucketAuthorityPublic();
    static HttpRequestDef genRequestDefForCreateOttChannelInfo();
    static HttpRequestDef genRequestDefForDeleteOttChannelInfo();
    static HttpRequestDef genRequestDefForListOttChannelInfo();
    static HttpRequestDef genRequestDefForModifyOttChannelInfoEncoderSettings();
    static HttpRequestDef genRequestDefForModifyOttChannelInfoEndPoints();
    static HttpRequestDef genRequestDefForModifyOttChannelInfoGeneral();
    static HttpRequestDef genRequestDefForModifyOttChannelInfoInput();
    static HttpRequestDef genRequestDefForModifyOttChannelInfoRecordSettings();
    static HttpRequestDef genRequestDefForModifyOttChannelInfoStats();
    static HttpRequestDef genRequestDefForShowChannelStatistic();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_LiveMeta_H_
