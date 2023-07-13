

#include "huaweicloud/vpc/v2/model/NeutronCreateSubnetResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronCreateSubnetResponse::NeutronCreateSubnetResponse()
{
    subnetIsSet_ = false;
}

NeutronCreateSubnetResponse::~NeutronCreateSubnetResponse() = default;

void NeutronCreateSubnetResponse::validate()
{
}

web::json::value NeutronCreateSubnetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subnetIsSet_) {
        val[utility::conversions::to_string_t("subnet")] = ModelBase::toJson(subnet_);
    }

    return val;
}

bool NeutronCreateSubnetResponse::fromJson(const web::json::value& val)
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

NeutronSubnet NeutronCreateSubnetResponse::getSubnet() const
{
    return subnet_;
}

void NeutronCreateSubnetResponse::setSubnet(const NeutronSubnet& value)
{
    subnet_ = value;
    subnetIsSet_ = true;
}

bool NeutronCreateSubnetResponse::subnetIsSet() const
{
    return subnetIsSet_;
}

void NeutronCreateSubnetResponse::unsetsubnet()
{
    subnetIsSet_ = false;
}

}
}
}
}
}


