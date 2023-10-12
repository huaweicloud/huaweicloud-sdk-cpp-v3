#ifndef HUAWEICLOUD_SDK_TMS_V1_TmsMeta_H_
#define HUAWEICLOUD_SDK_TMS_V1_TmsMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/tms/v1/TmsExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Tms {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_TMS_V1_EXPORT  TmsMeta {
public:
    static HttpRequestDef genRequestDefForCreatePredefineTags();
    static HttpRequestDef genRequestDefForCreateResourceTag();
    static HttpRequestDef genRequestDefForDeletePredefineTags();
    static HttpRequestDef genRequestDefForDeleteResourceTag();
    static HttpRequestDef genRequestDefForListApiVersions();
    static HttpRequestDef genRequestDefForListPredefineTags();
    static HttpRequestDef genRequestDefForListProviders();
    static HttpRequestDef genRequestDefForListResource();
    static HttpRequestDef genRequestDefForListTagKeys();
    static HttpRequestDef genRequestDefForListTagValues();
    static HttpRequestDef genRequestDefForShowApiVersion();
    static HttpRequestDef genRequestDefForShowResourceTag();
    static HttpRequestDef genRequestDefForShowTagQuota();
    static HttpRequestDef genRequestDefForUpdatePredefineTags();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_TMS_V1_TmsMeta_H_
