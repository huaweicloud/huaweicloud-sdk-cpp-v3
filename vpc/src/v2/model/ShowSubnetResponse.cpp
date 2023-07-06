

#include "huaweicloud/vpc/v2/model/ShowSubnetResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ShowSubnetResponse::ShowSubnetResponse()
{
    subnetIsSet_ = false;
}

ShowSubnetResponse::~ShowSubnetResponse() = default;

void ShowSubnetResponse::validate()
{
}

web::json::value ShowSubnetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subnetIsSet_) {
        val[utility::conversions::to_string_t("subnet")] = ModelBase::toJson(subnet_);
    }

    return val;
}

bool ShowSubnetResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("subnet"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet"));
        if(!fieldValue.is_null())
        {
            Subnet refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnet(refVal);
        }
    }
    return ok;
}

Subnet ShowSubnetResponse::getSubnet() const
{
    return subnet_;
}

void ShowSubnetResponse::setSubnet(const Subnet& value)
{
    subnet_ = value;
    subnetIsSet_ = true;
}

bool ShowSubnetResponse::subnetIsSet() const
{
    return subnetIsSet_;
}

void ShowSubnetResponse::unsetsubnet()
{
    subnetIsSet_ = false;
}

}
}
}
}
}


