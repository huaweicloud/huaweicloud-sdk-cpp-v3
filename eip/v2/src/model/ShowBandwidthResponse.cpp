

#include "huaweicloud/eip/model/ShowBandwidthResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




ShowBandwidthResponse::ShowBandwidthResponse()
{
    bandwidthIsSet_ = false;
}

ShowBandwidthResponse::~ShowBandwidthResponse() = default;

void ShowBandwidthResponse::validate()
{
}

web::json::value ShowBandwidthResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bandwidthIsSet_) {
        val[utility::conversions::to_string_t("bandwidth")] = ModelBase::toJson(bandwidth_);
    }

    return val;
}

bool ShowBandwidthResponse::fromJson(const web::json::value& val)
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


BandwidthResp ShowBandwidthResponse::getBandwidth() const
{
    return bandwidth_;
}

void ShowBandwidthResponse::setBandwidth(const BandwidthResp& value)
{
    bandwidth_ = value;
    bandwidthIsSet_ = true;
}

bool ShowBandwidthResponse::bandwidthIsSet() const
{
    return bandwidthIsSet_;
}

void ShowBandwidthResponse::unsetbandwidth()
{
    bandwidthIsSet_ = false;
}

}
}
}
}
}


