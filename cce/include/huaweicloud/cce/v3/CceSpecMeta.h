#ifndef HUAWEICLOUD_SDK_CCE_V3_CceSpecMeta_H_
#define HUAWEICLOUD_SDK_CCE_V3_CceSpecMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/cce/v3/CceExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core::Http;
class HUAWEICLOUD_CCE_V3_EXPORT  CceSpecMeta {
public:
    static HttpRequestDef genRequestDefForDeleteAutopilotJob();
    static HttpRequestDef genRequestDefForGetAutopilotOneJob();
    static HttpRequestDef genRequestDefForListAutopilotJobs();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V3_CceSpecMeta_H_