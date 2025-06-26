#ifndef HUAWEICLOUD_SDK_RGC_V1_RgcMeta_H_
#define HUAWEICLOUD_SDK_RGC_V1_RgcMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/rgc/v1/RgcExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_RGC_V1_EXPORT  RgcMeta {
public:
    static HttpRequestDef genRequestDefForDisableControl();
    static HttpRequestDef genRequestDefForEnableControl();
    static HttpRequestDef genRequestDefForListControlsForOrganizationalUnit();
    static HttpRequestDef genRequestDefForListEnabledControls();
    static HttpRequestDef genRequestDefForShowControlOperate();
    static HttpRequestDef genRequestDefForCreateAccount();
    static HttpRequestDef genRequestDefForRegisterOrganizationalUnit();
    static HttpRequestDef genRequestDefForShowManagedAccount();
    static HttpRequestDef genRequestDefForShowOperation();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_RGC_V1_RgcMeta_H_
