

#include "huaweicloud/eip/v2/model/UpdateBandwidthResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




UpdateBandwidthResponse::UpdateBandwidthResponse()
{
    bandwidthIsSet_ = false;
}

UpdateBandwidthResponse::~UpdateBandwidthResponse() = default;

void UpdateBandwidthResponse::validate()
{
}

web::json::value UpdateBandwidthResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bandwidthIsSet_) {
        val[utility::conversions::to_string_t("bandwidth")] = ModelBase::toJson(bandwidth_);
    }

    return val;
}

bool UpdateBandwidthResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth"));
        if(!fieldValue.is_null())
        {
            BandwidthResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidth(refVal);
        }
    }
    return ok;
}

BandwidthResp UpdateBandwidthResponse::getBandwidth() const
{
    return bandwidth_;
}

void UpdateBandwidthResponse::setBandwidth(const BandwidthResp& value)
{
    bandwidth_ = value;
    bandwidthIsSet_ = true;
}

bool UpdateBandwidthResponse::bandwidthIsSet() const
{
    return bandwidthIsSet_;
}

void UpdateBandwidthResponse::unsetbandwidth()
{
    bandwidthIsSet_ = false;
}

}
}
}
}
}


