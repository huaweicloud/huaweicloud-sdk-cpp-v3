

#include "huaweicloud/vpc/v2/model/ShowVpcPeeringResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ShowVpcPeeringResponse::ShowVpcPeeringResponse()
{
    peeringIsSet_ = false;
}

ShowVpcPeeringResponse::~ShowVpcPeeringResponse() = default;

void ShowVpcPeeringResponse::validate()
{
}

web::json::value ShowVpcPeeringResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(peeringIsSet_) {
        val[utility::conversions::to_string_t("peering")] = ModelBase::toJson(peering_);
    }

    return val;
}

bool ShowVpcPeeringResponse::fromJson(const web::json::value& val)
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

VpcPeering ShowVpcPeeringResponse::getPeering() const
{
    return peering_;
}

void ShowVpcPeeringResponse::setPeering(const VpcPeering& value)
{
    peering_ = value;
    peeringIsSet_ = true;
}

bool ShowVpcPeeringResponse::peeringIsSet() const
{
    return peeringIsSet_;
}

void ShowVpcPeeringResponse::unsetpeering()
{
    peeringIsSet_ = false;
}

}
}
}
}
}


