

#include "huaweicloud/vpc/v2/model/AsscoiateReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




AsscoiateReq::AsscoiateReq()
{
    subnetsIsSet_ = false;
}

AsscoiateReq::~AsscoiateReq() = default;

void AsscoiateReq::validate()
{
}

web::json::value AsscoiateReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subnetsIsSet_) {
        val[utility::conversions::to_string_t("subnets")] = ModelBase::toJson(subnets_);
    }

    return val;
}

bool AsscoiateReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("subnets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnets"));
        if(!fieldValue.is_null())
        {
            AssociateRouteTableAndSubnetReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnets(refVal);
        }
    }
    return ok;
}

AssociateRouteTableAndSubnetReq AsscoiateReq::getSubnets() const
{
    return subnets_;
}

void AsscoiateReq::setSubnets(const AssociateRouteTableAndSubnetReq& value)
{
    subnets_ = value;
    subnetsIsSet_ = true;
}

bool AsscoiateReq::subnetsIsSet() const
{
    return subnetsIsSet_;
}

void AsscoiateReq::unsetsubnets()
{
    subnetsIsSet_ = false;
}

}
}
}
}
}


