

#include "huaweicloud/vpc/v2/model/CreateVpcPeeringRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreateVpcPeeringRequestBody::CreateVpcPeeringRequestBody()
{
    peeringIsSet_ = false;
}

CreateVpcPeeringRequestBody::~CreateVpcPeeringRequestBody() = default;

void CreateVpcPeeringRequestBody::validate()
{
}

web::json::value CreateVpcPeeringRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(peeringIsSet_) {
        val[utility::conversions::to_string_t("peering")] = ModelBase::toJson(peering_);
    }

    return val;
}

bool CreateVpcPeeringRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("peering"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("peering"));
        if(!fieldValue.is_null())
        {
            CreateVpcPeeringOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeering(refVal);
        }
    }
    return ok;
}

CreateVpcPeeringOption CreateVpcPeeringRequestBody::getPeering() const
{
    return peering_;
}

void CreateVpcPeeringRequestBody::setPeering(const CreateVpcPeeringOption& value)
{
    peering_ = value;
    peeringIsSet_ = true;
}

bool CreateVpcPeeringRequestBody::peeringIsSet() const
{
    return peeringIsSet_;
}

void CreateVpcPeeringRequestBody::unsetpeering()
{
    peeringIsSet_ = false;
}

}
}
}
}
}


