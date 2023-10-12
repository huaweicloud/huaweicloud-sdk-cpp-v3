

#include "huaweicloud/eip/v2/model/AddPublicipsIntoSharedBandwidthResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




AddPublicipsIntoSharedBandwidthResponse::AddPublicipsIntoSharedBandwidthResponse()
{
    bandwidthIsSet_ = false;
}

AddPublicipsIntoSharedBandwidthResponse::~AddPublicipsIntoSharedBandwidthResponse() = default;

void AddPublicipsIntoSharedBandwidthResponse::validate()
{
}

web::json::value AddPublicipsIntoSharedBandwidthResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bandwidthIsSet_) {
        val[utility::conversions::to_string_t("bandwidth")] = ModelBase::toJson(bandwidth_);
    }

    return val;
}
bool AddPublicipsIntoSharedBandwidthResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth"));
        if(!fieldValue.is_null())
        {
            BandwidthRespInsert refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidth(refVal);
        }
    }
    return ok;
}


BandwidthRespInsert AddPublicipsIntoSharedBandwidthResponse::getBandwidth() const
{
    return bandwidth_;
}

void AddPublicipsIntoSharedBandwidthResponse::setBandwidth(const BandwidthRespInsert& value)
{
    bandwidth_ = value;
    bandwidthIsSet_ = true;
}

bool AddPublicipsIntoSharedBandwidthResponse::bandwidthIsSet() const
{
    return bandwidthIsSet_;
}

void AddPublicipsIntoSharedBandwidthResponse::unsetbandwidth()
{
    bandwidthIsSet_ = false;
}

}
}
}
}
}


