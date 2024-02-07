
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_CreateInternetBandwidthRequestBody_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_CreateInternetBandwidthRequestBody_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/geip/v3/model/CreateInternetBandwidthRequestBody_internet_bandwidth.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 全域公网带宽信息
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  CreateInternetBandwidthRequestBody
    : public ModelBase
{
public:
    CreateInternetBandwidthRequestBody();
    virtual ~CreateInternetBandwidthRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateInternetBandwidthRequestBody members

    /// <summary>
    /// 
    /// </summary>

    CreateInternetBandwidthRequestBody_internet_bandwidth getInternetBandwidth() const;
    bool internetBandwidthIsSet() const;
    void unsetinternetBandwidth();
    void setInternetBandwidth(const CreateInternetBandwidthRequestBody_internet_bandwidth& value);


protected:
    CreateInternetBandwidthRequestBody_internet_bandwidth internetBandwidth_;
    bool internetBandwidthIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_CreateInternetBandwidthRequestBody_H_
