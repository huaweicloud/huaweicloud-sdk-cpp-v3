#ifndef HUAWEICLOUD_SDK_ANTIDDOS_V2_AntiDDoSMeta_H_
#define HUAWEICLOUD_SDK_ANTIDDOS_V2_AntiDDoSMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/antiddos/v2/AntiDDoSExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_ANTIDDOS_V2_EXPORT  AntiDDoSMeta {
public:
    static HttpRequestDef genRequestDefForShowAlertConfig();
    static HttpRequestDef genRequestDefForUpdateAlertConfig();
    static HttpRequestDef genRequestDefForListDDosStatus();
    static HttpRequestDef genRequestDefForListNewConfigs();
    static HttpRequestDef genRequestDefForShowNewTaskStatus();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_ANTIDDOS_V2_AntiDDoSMeta_H_
