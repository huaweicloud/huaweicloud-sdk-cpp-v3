
#ifndef HUAWEICLOUD_SDK_GEIP_V3_MODEL_BatchCreateInternetBandwidthRequestBody_H_
#define HUAWEICLOUD_SDK_GEIP_V3_MODEL_BatchCreateInternetBandwidthRequestBody_H_


#include <huaweicloud/geip/v3/GeipExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/geip/v3/model/BatchCreateInternetBandwidthRequestBody_internet_bandwidth.h>

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
class HUAWEICLOUD_GEIP_V3_EXPORT  BatchCreateInternetBandwidthRequestBody
    : public ModelBase
{
public:
    BatchCreateInternetBandwidthRequestBody();
    virtual ~BatchCreateInternetBandwidthRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// BatchCreateInternetBandwidthRequestBody members

    /// <summary>
    /// 
    /// </summary>

    BatchCreateInternetBandwidthRequestBody_internet_bandwidth getInternetBandwidth() const;
    bool internetBandwidthIsSet() const;
    void unsetinternetBandwidth();
    void setInternetBandwidth(const BatchCreateInternetBandwidthRequestBody_internet_bandwidth& value);


protected:
    BatchCreateInternetBandwidthRequestBody_internet_bandwidth internetBandwidth_;
    bool internetBandwidthIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GEIP_V3_MODEL_BatchCreateInternetBandwidthRequestBody_H_
