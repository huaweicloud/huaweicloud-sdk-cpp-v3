#ifndef HUAWEICLOUD_SDK_SMNGLOBAL_V2_SmnglobalMeta_H_
#define HUAWEICLOUD_SDK_SMNGLOBAL_V2_SmnglobalMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/smnglobal/v2/SmnglobalExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Smnglobal {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_SMNGLOBAL_V2_EXPORT  SmnglobalMeta {
public:
    static HttpRequestDef genRequestDefForCreateSubscriptionUser();
    static HttpRequestDef genRequestDefForDeleteSubscriptionUser();
    static HttpRequestDef genRequestDefForListSubscriptionUser();
    static HttpRequestDef genRequestDefForUpdateSubscriptionUser();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_SMNGLOBAL_V2_SmnglobalMeta_H_
