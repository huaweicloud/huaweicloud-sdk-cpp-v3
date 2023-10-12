#ifndef HUAWEICLOUD_SDK_IVS_V2_IvsMeta_H_
#define HUAWEICLOUD_SDK_IVS_V2_IvsMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/ivs/v2/IvsExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Ivs {
namespace V2 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_IVS_V2_EXPORT  IvsMeta {
public:
    static HttpRequestDef genRequestDefForDetectExtentionByIdCardImage();
    static HttpRequestDef genRequestDefForDetectExtentionByNameAndId();
    static HttpRequestDef genRequestDefForDetectStandardByIdCardImage();
    static HttpRequestDef genRequestDefForDetectStandardByNameAndId();
    static HttpRequestDef genRequestDefForDetectStandardByVideoAndIdCardImage();
    static HttpRequestDef genRequestDefForDetectStandardByVideoAndNameAndId();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_IVS_V2_IvsMeta_H_
