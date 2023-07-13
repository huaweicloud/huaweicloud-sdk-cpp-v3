

#include "huaweicloud/vpc/v2/model/UpdateVpcPeeringResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




UpdateVpcPeeringResponse::UpdateVpcPeeringResponse()
{
    peeringIsSet_ = false;
}

UpdateVpcPeeringResponse::~UpdateVpcPeeringResponse() = default;

void UpdateVpcPeeringResponse::validate()
{
}

web::json::value UpdateVpcPeeringResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(peeringIsSet_) {
        val[utility::conversions::to_string_t("peering")] = ModelBase::toJson(peering_);
    }

    return val;
}

bool UpdateVpcPeeringResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("peering"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("peering"));
        if(!fieldValue.is_null())
        {
            VpcPeering refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeering(refVal);
        }
    }
    return ok;
}

VpcPeering UpdateVpcPeeringResponse::getPeering() const
{
    return peering_;
}

void UpdateVpcPeeringResponse::setPeering(const VpcPeering& value)
{
    peering_ = value;
    peeringIsSet_ = true;
}

bool UpdateVpcPeeringResponse::peeringIsSet() const
{
    return peeringIsSet_;
}

void UpdateVpcPeeringResponse::unsetpeering()
{
    peeringIsSet_ = false;
}

}
}
}
}
}


