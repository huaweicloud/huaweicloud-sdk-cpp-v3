

#include "huaweicloud/vpc/v2/model/NeutronUpdateSubnetResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronUpdateSubnetResponse::NeutronUpdateSubnetResponse()
{
    subnetIsSet_ = false;
}

NeutronUpdateSubnetResponse::~NeutronUpdateSubnetResponse() = default;

void NeutronUpdateSubnetResponse::validate()
{
}

web::json::value NeutronUpdateSubnetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subnetIsSet_) {
        val[utility::conversions::to_string_t("subnet")] = ModelBase::toJson(subnet_);
    }

    return val;
}
bool NeutronUpdateSubnetResponse::fromJson(const web::json::value& val)
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


NeutronSubnet NeutronUpdateSubnetResponse::getSubnet() const
{
    return subnet_;
}

void NeutronUpdateSubnetResponse::setSubnet(const NeutronSubnet& value)
{
    subnet_ = value;
    subnetIsSet_ = true;
}

bool NeutronUpdateSubnetResponse::subnetIsSet() const
{
    return subnetIsSet_;
}

void NeutronUpdateSubnetResponse::unsetsubnet()
{
    subnetIsSet_ = false;
}

}
}
}
}
}


