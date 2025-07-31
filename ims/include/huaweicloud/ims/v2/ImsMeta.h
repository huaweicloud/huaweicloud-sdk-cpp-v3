#ifndef HUAWEICLOUD_SDK_IMS_V2_ImsMeta_H_
#define HUAWEICLOUD_SDK_IMS_V2_ImsMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/ims/v2/ImsExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_IMS_V2_EXPORT  ImsMeta {
public:
    static HttpRequestDef genRequestDefForAddImageTag();
    static HttpRequestDef genRequestDefForBatchAddMembers();
    static HttpRequestDef genRequestDefForBatchAddOrDeleteTags();
    static HttpRequestDef genRequestDefForBatchDeleteMembers();
    static HttpRequestDef genRequestDefForBatchDeleteTags();
    static HttpRequestDef genRequestDefForBatchUpdateMembers();
    static HttpRequestDef genRequestDefForCopyImageCrossRegion();
    static HttpRequestDef genRequestDefForCopyImageInRegion();
    static HttpRequestDef genRequestDefForCopyImageInRegionInSafeMode();
    static HttpRequestDef genRequestDefForCreateDataImage();
    static HttpRequestDef genRequestDefForCreateDataImageInSafeMode();
    static HttpRequestDef genRequestDefForCreateImage();
    static HttpRequestDef genRequestDefForCreateImageInSafeMode();
    static HttpRequestDef genRequestDefForCreateOrUpdateTags();
    static HttpRequestDef genRequestDefForCreateWholeImage();
    static HttpRequestDef genRequestDefForDeleteImageTag();
    static HttpRequestDef genRequestDefForExportImage();
    static HttpRequestDef genRequestDefForExportImageInSafeMode();
    static HttpRequestDef genRequestDefForImportImageQuick();
    static HttpRequestDef genRequestDefForImportImageQuickInSafeMode();
    static HttpRequestDef genRequestDefForListImageByTags();
    static HttpRequestDef genRequestDefForListImageMembers();
    static HttpRequestDef genRequestDefForListImageTags();
    static HttpRequestDef genRequestDefForListImages();
    static HttpRequestDef genRequestDefForListImagesTags();
    static HttpRequestDef genRequestDefForListOsVersions();
    static HttpRequestDef genRequestDefForListTags();
    static HttpRequestDef genRequestDefForRegisterImage();
    static HttpRequestDef genRequestDefForShowImageMember();
    static HttpRequestDef genRequestDefForShowImageQuota();
    static HttpRequestDef genRequestDefForShowJob();
    static HttpRequestDef genRequestDefForShowJobProgress();
    static HttpRequestDef genRequestDefForUpdateImage();
    static HttpRequestDef genRequestDefForListVersions();
    static HttpRequestDef genRequestDefForShowVersion();
    static HttpRequestDef genRequestDefForGlanceAddImageMember();
    static HttpRequestDef genRequestDefForGlanceCreateImageMetadata();
    static HttpRequestDef genRequestDefForGlanceCreateTag();
    static HttpRequestDef genRequestDefForGlanceDeleteImage();
    static HttpRequestDef genRequestDefForGlanceDeleteImageMember();
    static HttpRequestDef genRequestDefForGlanceDeleteTag();
    static HttpRequestDef genRequestDefForGlanceListImageMemberSchemas();
    static HttpRequestDef genRequestDefForGlanceListImageMembers();
    static HttpRequestDef genRequestDefForGlanceListImageSchemas();
    static HttpRequestDef genRequestDefForGlanceListImages();
    static HttpRequestDef genRequestDefForGlanceShowImage();
    static HttpRequestDef genRequestDefForGlanceShowImageMember();
    static HttpRequestDef genRequestDefForGlanceShowImageMemberSchemas();
    static HttpRequestDef genRequestDefForGlanceShowImageSchemas();
    static HttpRequestDef genRequestDefForGlanceUpdateImage();
    static HttpRequestDef genRequestDefForGlanceUpdateImageMember();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_IMS_V2_ImsMeta_H_
