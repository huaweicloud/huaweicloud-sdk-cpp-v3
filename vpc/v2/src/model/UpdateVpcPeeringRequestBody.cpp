

#include "huaweicloud/vpc/model/UpdateVpcPeeringRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




UpdateVpcPeeringRequestBody::UpdateVpcPeeringRequestBody()
{
    peeringIsSet_ = false;
}

UpdateVpcPeeringRequestBody::~UpdateVpcPeeringRequestBody() = default;

void UpdateVpcPeeringRequestBody::validate()
{
}

web::json::value UpdateVpcPeeringRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(peeringIsSet_) {
        val[utility::conversions::to_string_t("peering")] = ModelBase::toJson(peering_);
    }

    return val;
}

bool UpdateVpcPeeringRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("peering"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("peering"));
        if(!fieldValue.is_null())
        {
            UpdateVpcPeeringOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeering(refVal);
        }
    }
    return ok;
}


UpdateVpcPeeringOption UpdateVpcPeeringRequestBody::getPeering() const
{
    return peering_;
}

void UpdateVpcPeeringRequestBody::setPeering(const UpdateVpcPeeringOption& value)
{
    peering_ = value;
    peeringIsSet_ = true;
}

bool UpdateVpcPeeringRequestBody::peeringIsSet() const
{
    return peeringIsSet_;
}

void UpdateVpcPeeringRequestBody::unsetpeering()
{
    peeringIsSet_ = false;
}

}
}
}
}
}


