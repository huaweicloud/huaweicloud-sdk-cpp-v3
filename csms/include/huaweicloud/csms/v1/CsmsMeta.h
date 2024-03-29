#ifndef HUAWEICLOUD_SDK_CSMS_V1_CsmsMeta_H_
#define HUAWEICLOUD_SDK_CSMS_V1_CsmsMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/csms/v1/CsmsExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Csms {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_CSMS_V1_EXPORT  CsmsMeta {
public:
    static HttpRequestDef genRequestDefForBatchCreateOrDeleteTags();
    static HttpRequestDef genRequestDefForCreateSecret();
    static HttpRequestDef genRequestDefForCreateSecretEvent();
    static HttpRequestDef genRequestDefForCreateSecretTag();
    static HttpRequestDef genRequestDefForCreateSecretVersion();
    static HttpRequestDef genRequestDefForDeleteSecret();
    static HttpRequestDef genRequestDefForDeleteSecretEvent();
    static HttpRequestDef genRequestDefForDeleteSecretForSchedule();
    static HttpRequestDef genRequestDefForDeleteSecretStage();
    static HttpRequestDef genRequestDefForDeleteSecretTag();
    static HttpRequestDef genRequestDefForDownloadSecretBlob();
    static HttpRequestDef genRequestDefForListNotificationRecords();
    static HttpRequestDef genRequestDefForListProjectSecretsTags();
    static HttpRequestDef genRequestDefForListResourceInstances();
    static HttpRequestDef genRequestDefForListSecretEvents();
    static HttpRequestDef genRequestDefForListSecretTags();
    static HttpRequestDef genRequestDefForListSecretVersions();
    static HttpRequestDef genRequestDefForListSecrets();
    static HttpRequestDef genRequestDefForRestoreSecret();
    static HttpRequestDef genRequestDefForRotateSecret();
    static HttpRequestDef genRequestDefForShowSecret();
    static HttpRequestDef genRequestDefForShowSecretEvent();
    static HttpRequestDef genRequestDefForShowSecretStage();
    static HttpRequestDef genRequestDefForShowSecretVersion();
    static HttpRequestDef genRequestDefForUpdateSecret();
    static HttpRequestDef genRequestDefForUpdateSecretEvent();
    static HttpRequestDef genRequestDefForUpdateSecretStage();
    static HttpRequestDef genRequestDefForUpdateVersion();
    static HttpRequestDef genRequestDefForUploadSecretBlob();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_CSMS_V1_CsmsMeta_H_
