

#include "huaweicloud/vpc/v2/model/NeutronShowSubnetResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronShowSubnetResponse::NeutronShowSubnetResponse()
{
    subnetIsSet_ = false;
}

NeutronShowSubnetResponse::~NeutronShowSubnetResponse() = default;

void NeutronShowSubnetResponse::validate()
{
}

web::json::value NeutronShowSubnetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subnetIsSet_) {
        val[utility::conversions::to_string_t("subnet")] = ModelBase::toJson(subnet_);
    }

    return val;
}

bool NeutronShowSubnetResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("subnet"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet"));
        if(!fieldValue.is_null())
        {
            NeutronSubnet refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnet(refVal);
        }
    }
    return ok;
}

NeutronSubnet NeutronShowSubnetResponse::getSubnet() const
{
    return subnet_;
}

void NeutronShowSubnetResponse::setSubnet(const NeutronSubnet& value)
{
    subnet_ = value;
    subnetIsSet_ = true;
}

bool NeutronShowSubnetResponse::subnetIsSet() const
{
    return subnetIsSet_;
}

void NeutronShowSubnetResponse::unsetsubnet()
{
    subnetIsSet_ = false;
}

}
}
}
}
}


