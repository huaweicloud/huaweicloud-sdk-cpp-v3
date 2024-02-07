
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_BatchDetachInternetBandwidthsGlobalEipRequestBody_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_BatchDetachInternetBandwidthsGlobalEipRequestBody_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/core/utils/Object.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 批量解绑全域公网带宽请求体对象
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  BatchDetachInternetBandwidthsGlobalEipRequestBody
    : public ModelBase
{
public:
    BatchDetachInternetBandwidthsGlobalEipRequestBody();
    virtual ~BatchDetachInternetBandwidthsGlobalEipRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchDetachInternetBandwidthsGlobalEipRequestBody members

    /// <summary>
    /// 批量解绑全域公网带宽请求体对象
    /// </summary>

    std::vector<Object>& getGlobalEips();
    bool globalEipsIsSet() const;
    void unsetglobalEips();
    void setGlobalEips(const std::vector<Object>& value);


protected:
    std::vector<Object> globalEips_;
    bool globalEipsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_BatchDetachInternetBandwidthsGlobalEipRequestBody_H_
