
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_AttachInternetBandwidthGlobalEipRequestBody_global_eip_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_AttachInternetBandwidthGlobalEipRequestBody_global_eip_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 请求参数对象
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  AttachInternetBandwidthGlobalEipRequestBody_global_eip
    : public ModelBase
{
public:
    AttachInternetBandwidthGlobalEipRequestBody_global_eip();
    virtual ~AttachInternetBandwidthGlobalEipRequestBody_global_eip();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// AttachInternetBandwidthGlobalEipRequestBody_global_eip members

    /// <summary>
    /// 全域公网带宽的ID
    /// </summary>

    std::string getInternetBandwidthId() const;
    bool internetBandwidthIdIsSet() const;
    void unsetinternetBandwidthId();
    void setInternetBandwidthId(const std::string& value);


protected:
    std::string internetBandwidthId_;
    bool internetBandwidthIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_AttachInternetBandwidthGlobalEipRequestBody_global_eip_H_
