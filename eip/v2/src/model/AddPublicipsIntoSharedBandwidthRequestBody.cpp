

#include "huaweicloud/eip/model/AddPublicipsIntoSharedBandwidthRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




AddPublicipsIntoSharedBandwidthRequestBody::AddPublicipsIntoSharedBandwidthRequestBody()
{
    bandwidthIsSet_ = false;
}

AddPublicipsIntoSharedBandwidthRequestBody::~AddPublicipsIntoSharedBandwidthRequestBody() = default;

void AddPublicipsIntoSharedBandwidthRequestBody::validate()
{
}

web::json::value AddPublicipsIntoSharedBandwidthRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bandwidthIsSet_) {
        val[utility::conversions::to_string_t("bandwidth")] = ModelBase::toJson(bandwidth_);
    }

    return val;
}

bool AddPublicipsIntoSharedBandwidthRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth"));
        if(!fieldValue.is_null())
        {
            AddPublicipsIntoSharedBandwidthOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidth(refVal);
        }
    }
    return ok;
}


AddPublicipsIntoSharedBandwidthOption AddPublicipsIntoSharedBandwidthRequestBody::getBandwidth() const
{
    return bandwidth_;
}

void AddPublicipsIntoSharedBandwidthRequestBody::setBandwidth(const AddPublicipsIntoSharedBandwidthOption& value)
{
    bandwidth_ = value;
    bandwidthIsSet_ = true;
}

bool AddPublicipsIntoSharedBandwidthRequestBody::bandwidthIsSet() const
{
    return bandwidthIsSet_;
}

void AddPublicipsIntoSharedBandwidthRequestBody::unsetbandwidth()
{
    bandwidthIsSet_ = false;
}

}
}
}
}
}


