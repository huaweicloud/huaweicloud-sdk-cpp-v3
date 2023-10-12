#ifndef HUAWEICLOUD_SDK_CTS_V3_CtsMeta_H_
#define HUAWEICLOUD_SDK_CTS_V3_CtsMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/cts/v3/CtsExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cts {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_CTS_V3_EXPORT  CtsMeta {
public:
    static HttpRequestDef genRequestDefForBatchCreateResourceTags();
    static HttpRequestDef genRequestDefForBatchDeleteResourceTags();
    static HttpRequestDef genRequestDefForCheckObsBuckets();
    static HttpRequestDef genRequestDefForCreateNotification();
    static HttpRequestDef genRequestDefForCreateTracker();
    static HttpRequestDef genRequestDefForDeleteNotification();
    static HttpRequestDef genRequestDefForDeleteTracker();
    static HttpRequestDef genRequestDefForListNotifications();
    static HttpRequestDef genRequestDefForListOperations();
    static HttpRequestDef genRequestDefForListQuotas();
    static HttpRequestDef genRequestDefForListTraceResources();
    static HttpRequestDef genRequestDefForListTraces();
    static HttpRequestDef genRequestDefForListTrackers();
    static HttpRequestDef genRequestDefForListUserResources();
    static HttpRequestDef genRequestDefForUpdateNotification();
    static HttpRequestDef genRequestDefForUpdateTracker();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_CTS_V3_CtsMeta_H_
