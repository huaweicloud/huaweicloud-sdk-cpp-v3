
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_UpdateInternetBandwidthRequestBody_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_UpdateInternetBandwidthRequestBody_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/geip/v3/model/UpdateInternetBandwidthRequestBody_internet_bandwidth.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Geip {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_GEIP_V3_EXPORT  UpdateInternetBandwidthRequestBody
    : public ModelBase
{
public:
    UpdateInternetBandwidthRequestBody();
    virtual ~UpdateInternetBandwidthRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpdateInternetBandwidthRequestBody members

    /// <summary>
    /// 
    /// </summary>

    UpdateInternetBandwidthRequestBody_internet_bandwidth getInternetBandwidth() const;
    bool internetBandwidthIsSet() const;
    void unsetinternetBandwidth();
    void setInternetBandwidth(const UpdateInternetBandwidthRequestBody_internet_bandwidth& value);


protected:
    UpdateInternetBandwidthRequestBody_internet_bandwidth internetBandwidth_;
    bool internetBandwidthIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_UpdateInternetBandwidthRequestBody_H_
