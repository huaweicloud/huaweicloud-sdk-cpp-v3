

#include "huaweicloud/vpc/v2/model/CreateVpcPeeringResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreateVpcPeeringResponse::CreateVpcPeeringResponse()
{
    peeringIsSet_ = false;
}

CreateVpcPeeringResponse::~CreateVpcPeeringResponse() = default;

void CreateVpcPeeringResponse::validate()
{
}

web::json::value CreateVpcPeeringResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(peeringIsSet_) {
        val[utility::conversions::to_string_t("peering")] = ModelBase::toJson(peering_);
    }

    return val;
}
bool CreateVpcPeeringResponse::fromJson(const web::json::value& val)
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


VpcPeering CreateVpcPeeringResponse::getPeering() const
{
    return peering_;
}

void CreateVpcPeeringResponse::setPeering(const VpcPeering& value)
{
    peering_ = value;
    peeringIsSet_ = true;
}

bool CreateVpcPeeringResponse::peeringIsSet() const
{
    return peeringIsSet_;
}

void CreateVpcPeeringResponse::unsetpeering()
{
    peeringIsSet_ = false;
}

}
}
}
}
}


