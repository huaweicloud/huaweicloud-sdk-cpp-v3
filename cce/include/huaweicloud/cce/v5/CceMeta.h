#ifndef HUAWEICLOUD_SDK_CCE_V5_CceMeta_H_
#define HUAWEICLOUD_SDK_CCE_V5_CceMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/cce/v5/CceExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V5 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_CCE_V5_EXPORT  CceMeta {
public:
    static HttpRequestDef genRequestDefForCreateImageCache();
    static HttpRequestDef genRequestDefForDeleteImageCache();
    static HttpRequestDef genRequestDefForListImageCaches();
    static HttpRequestDef genRequestDefForListPackageProducts();
    static HttpRequestDef genRequestDefForShowImageCache();
    static HttpRequestDef genRequestDefForSubscribePackageProducts();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_CCE_V5_CceMeta_H_
