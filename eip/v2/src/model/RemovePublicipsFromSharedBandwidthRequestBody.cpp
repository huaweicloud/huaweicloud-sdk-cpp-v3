

#include "huaweicloud/eip/model/RemovePublicipsFromSharedBandwidthRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




RemovePublicipsFromSharedBandwidthRequestBody::RemovePublicipsFromSharedBandwidthRequestBody()
{
    bandwidthIsSet_ = false;
}

RemovePublicipsFromSharedBandwidthRequestBody::~RemovePublicipsFromSharedBandwidthRequestBody() = default;

void RemovePublicipsFromSharedBandwidthRequestBody::validate()
{
}

web::json::value RemovePublicipsFromSharedBandwidthRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bandwidthIsSet_) {
        val[utility::conversions::to_string_t("bandwidth")] = ModelBase::toJson(bandwidth_);
    }

    return val;
}

bool RemovePublicipsFromSharedBandwidthRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth"));
        if(!fieldValue.is_null())
        {
            RemoveFromSharedBandwidthOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidth(refVal);
        }
    }
    return ok;
}


RemoveFromSharedBandwidthOption RemovePublicipsFromSharedBandwidthRequestBody::getBandwidth() const
{
    return bandwidth_;
}

void RemovePublicipsFromSharedBandwidthRequestBody::setBandwidth(const RemoveFromSharedBandwidthOption& value)
{
    bandwidth_ = value;
    bandwidthIsSet_ = true;
}

bool RemovePublicipsFromSharedBandwidthRequestBody::bandwidthIsSet() const
{
    return bandwidthIsSet_;
}

void RemovePublicipsFromSharedBandwidthRequestBody::unsetbandwidth()
{
    bandwidthIsSet_ = false;
}

}
}
}
}
}


