#ifndef HUAWEICLOUD_SDK_VOD_V1_VodMeta_H_
#define HUAWEICLOUD_SDK_VOD_V1_VodMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/vod/v1/VodExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_VOD_V1_EXPORT  VodMeta {
public:
    static HttpRequestDef genRequestDefForCancelAssetTranscodeTask();
    static HttpRequestDef genRequestDefForCancelExtractAudioTask();
    static HttpRequestDef genRequestDefForCheckMd5Duplication();
    static HttpRequestDef genRequestDefForConfirmAssetUpload();
    static HttpRequestDef genRequestDefForConfirmImageUpload();
    static HttpRequestDef genRequestDefForCreateAssetByFileUpload();
    static HttpRequestDef genRequestDefForCreateAssetCategory();
    static HttpRequestDef genRequestDefForCreateAssetProcessTask();
    static HttpRequestDef genRequestDefForCreateAssetReviewTask();
    static HttpRequestDef genRequestDefForCreateExtractAudioTask();
    static HttpRequestDef genRequestDefForCreatePreheatingAsset();
    static HttpRequestDef genRequestDefForCreateTakeOverTask();
    static HttpRequestDef genRequestDefForCreateTemplateGroup();
    static HttpRequestDef genRequestDefForCreateTemplateGroupCollection();
    static HttpRequestDef genRequestDefForCreateTranscodeTemplate();
    static HttpRequestDef genRequestDefForCreateWatermarkTemplate();
    static HttpRequestDef genRequestDefForDeleteAssetCategory();
    static HttpRequestDef genRequestDefForDeleteAssets();
    static HttpRequestDef genRequestDefForDeleteTemplateGroup();
    static HttpRequestDef genRequestDefForDeleteTemplateGroupCollection();
    static HttpRequestDef genRequestDefForDeleteTranscodeTemplate();
    static HttpRequestDef genRequestDefForDeleteWatermarkTemplate();
    static HttpRequestDef genRequestDefForListAssetCategory();
    static HttpRequestDef genRequestDefForListAssetList();
    static HttpRequestDef genRequestDefForListDomainLogs();
    static HttpRequestDef genRequestDefForListTemplateGroup();
    static HttpRequestDef genRequestDefForListTemplateGroupCollection();
    static HttpRequestDef genRequestDefForListTopStatistics();
    static HttpRequestDef genRequestDefForListTranscodeTemplate();
    static HttpRequestDef genRequestDefForListWatermarkTemplate();
    static HttpRequestDef genRequestDefForPublishAssetFromObs();
    static HttpRequestDef genRequestDefForPublishAssets();
    static HttpRequestDef genRequestDefForShowAssetCipher();
    static HttpRequestDef genRequestDefForShowAssetDetail();
    static HttpRequestDef genRequestDefForShowAssetMeta();
    static HttpRequestDef genRequestDefForShowAssetTempAuthority();
    static HttpRequestDef genRequestDefForShowCdnStatistics();
    static HttpRequestDef genRequestDefForShowPreheatingAsset();
    static HttpRequestDef genRequestDefForShowVodStatistics();
    static HttpRequestDef genRequestDefForUnpublishAssets();
    static HttpRequestDef genRequestDefForUpdateAsset();
    static HttpRequestDef genRequestDefForUpdateAssetCategory();
    static HttpRequestDef genRequestDefForUpdateAssetMeta();
    static HttpRequestDef genRequestDefForUpdateBucketAuthorized();
    static HttpRequestDef genRequestDefForUpdateCoverByThumbnail();
    static HttpRequestDef genRequestDefForUpdateTemplateGroup();
    static HttpRequestDef genRequestDefForUpdateTemplateGroupCollection();
    static HttpRequestDef genRequestDefForUpdateTranscodeTemplate();
    static HttpRequestDef genRequestDefForUpdateWatermarkTemplate();
    static HttpRequestDef genRequestDefForUploadMetaDataByUrl();
    static HttpRequestDef genRequestDefForListTakeOverTask();
    static HttpRequestDef genRequestDefForShowTakeOverAssetDetails();
    static HttpRequestDef genRequestDefForShowTakeOverTaskDetails();
    static HttpRequestDef genRequestDefForModifySubtitle();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_VodMeta_H_
