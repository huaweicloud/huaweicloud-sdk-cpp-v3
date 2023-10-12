#ifndef HUAWEICLOUD_SDK_MPC_V1_MpcMeta_H_
#define HUAWEICLOUD_SDK_MPC_V1_MpcMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/mpc/v1/MpcExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_MPC_V1_EXPORT  MpcMeta {
public:
    static HttpRequestDef genRequestDefForCreateAnimatedGraphicsTask();
    static HttpRequestDef genRequestDefForDeleteAnimatedGraphicsTask();
    static HttpRequestDef genRequestDefForListAnimatedGraphicsTask();
    static HttpRequestDef genRequestDefForCreateAgenciesTask();
    static HttpRequestDef genRequestDefForListAllBuckets();
    static HttpRequestDef genRequestDefForListAllObsObjList();
    static HttpRequestDef genRequestDefForListNotifyEvent();
    static HttpRequestDef genRequestDefForListNotifySmnTopicConfig();
    static HttpRequestDef genRequestDefForNotifySmnTopicConfig();
    static HttpRequestDef genRequestDefForShowAgenciesTask();
    static HttpRequestDef genRequestDefForUpdateBucketAuthorized();
    static HttpRequestDef genRequestDefForCreateEditingJob();
    static HttpRequestDef genRequestDefForDeleteEditingJob();
    static HttpRequestDef genRequestDefForListEditingJob();
    static HttpRequestDef genRequestDefForCreateEncryptTask();
    static HttpRequestDef genRequestDefForDeleteEncryptTask();
    static HttpRequestDef genRequestDefForListEncryptTask();
    static HttpRequestDef genRequestDefForCreateExtractTask();
    static HttpRequestDef genRequestDefForDeleteExtractTask();
    static HttpRequestDef genRequestDefForListExtractTask();
    static HttpRequestDef genRequestDefForCreateMbTasksReport();
    static HttpRequestDef genRequestDefForCreateMergeChannelsTask();
    static HttpRequestDef genRequestDefForCreateResetTracksTask();
    static HttpRequestDef genRequestDefForDeleteMergeChannelsTask();
    static HttpRequestDef genRequestDefForDeleteResetTracksTask();
    static HttpRequestDef genRequestDefForListMergeChannelsTask();
    static HttpRequestDef genRequestDefForListResetTracksTask();
    static HttpRequestDef genRequestDefForCreateMediaProcessTask();
    static HttpRequestDef genRequestDefForDeleteMediaProcessTask();
    static HttpRequestDef genRequestDefForListMediaProcessTask();
    static HttpRequestDef genRequestDefForCreateMpeCallBack();
    static HttpRequestDef genRequestDefForCreateQualityEnhanceTemplate();
    static HttpRequestDef genRequestDefForDeleteQualityEnhanceTemplate();
    static HttpRequestDef genRequestDefForListQualityEnhanceDefaultTemplate();
    static HttpRequestDef genRequestDefForUpdateQualityEnhanceTemplate();
    static HttpRequestDef genRequestDefForListTranscodeDetail();
    static HttpRequestDef genRequestDefForCancelRemuxTask();
    static HttpRequestDef genRequestDefForCreateRemuxTask();
    static HttpRequestDef genRequestDefForCreateRetryRemuxTask();
    static HttpRequestDef genRequestDefForDeleteRemuxTask();
    static HttpRequestDef genRequestDefForListRemuxTask();
    static HttpRequestDef genRequestDefForCreateTemplateGroup();
    static HttpRequestDef genRequestDefForDeleteTemplateGroup();
    static HttpRequestDef genRequestDefForListTemplateGroup();
    static HttpRequestDef genRequestDefForUpdateTemplateGroup();
    static HttpRequestDef genRequestDefForCreateThumbnailsTask();
    static HttpRequestDef genRequestDefForDeleteThumbnailsTask();
    static HttpRequestDef genRequestDefForListThumbnailsTask();
    static HttpRequestDef genRequestDefForCreateTranscodingTask();
    static HttpRequestDef genRequestDefForDeleteTranscodingTask();
    static HttpRequestDef genRequestDefForDeleteTranscodingTaskByConsole();
    static HttpRequestDef genRequestDefForListStatSummary();
    static HttpRequestDef genRequestDefForListTranscodingTask();
    static HttpRequestDef genRequestDefForCreateTransTemplate();
    static HttpRequestDef genRequestDefForDeleteTemplate();
    static HttpRequestDef genRequestDefForListTemplate();
    static HttpRequestDef genRequestDefForUpdateTransTemplate();
    static HttpRequestDef genRequestDefForCreateWatermarkTemplate();
    static HttpRequestDef genRequestDefForDeleteWatermarkTemplate();
    static HttpRequestDef genRequestDefForListWatermarkTemplate();
    static HttpRequestDef genRequestDefForUpdateWatermarkTemplate();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_MPC_V1_MpcMeta_H_
