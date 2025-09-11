#ifndef HUAWEICLOUD_SDK_IOTDM_V5_IoTDMMeta_H_
#define HUAWEICLOUD_SDK_IOTDM_V5_IoTDMMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/iotdm/v5/IoTDMExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_IOTDM_V5_EXPORT  IoTDMMeta {
public:
    static HttpRequestDef genRequestDefForListInstanceFlavors();
    static HttpRequestDef genRequestDefForBindInstanceTags();
    static HttpRequestDef genRequestDefForChangeInstanceChargeMode();
    static HttpRequestDef genRequestDefForCreateInstance();
    static HttpRequestDef genRequestDefForDeleteInstance();
    static HttpRequestDef genRequestDefForListInstances();
    static HttpRequestDef genRequestDefForResizeInstance();
    static HttpRequestDef genRequestDefForShowInstance();
    static HttpRequestDef genRequestDefForUnbindInstanceTags();
    static HttpRequestDef genRequestDefForUpdateInstance();
    static HttpRequestDef genRequestDefForListInstanceTasks();
    static HttpRequestDef genRequestDefForRetryInstanceTask();
    static HttpRequestDef genRequestDefForShowInstanceTask();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_IOTDM_V5_IoTDMMeta_H_
