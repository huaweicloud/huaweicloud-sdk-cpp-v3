

#include "huaweicloud/eip/v2/model/CreateSharedBandwidthResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




CreateSharedBandwidthResponse::CreateSharedBandwidthResponse()
{
    bandwidthIsSet_ = false;
}

CreateSharedBandwidthResponse::~CreateSharedBandwidthResponse() = default;

void CreateSharedBandwidthResponse::validate()
{
}

web::json::value CreateSharedBandwidthResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bandwidthIsSet_) {
        val[utility::conversions::to_string_t("bandwidth")] = ModelBase::toJson(bandwidth_);
    }

    return val;
}

bool CreateSharedBandwidthResponse::fromJson(const web::json::value& val)
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


BandwidthResp CreateSharedBandwidthResponse::getBandwidth() const
{
    return bandwidth_;
}

void CreateSharedBandwidthResponse::setBandwidth(const BandwidthResp& value)
{
    bandwidth_ = value;
    bandwidthIsSet_ = true;
}

bool CreateSharedBandwidthResponse::bandwidthIsSet() const
{
    return bandwidthIsSet_;
}

void CreateSharedBandwidthResponse::unsetbandwidth()
{
    bandwidthIsSet_ = false;
}

}
}
}
}
}


