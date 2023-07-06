

#include "huaweicloud/vpc/v2/model/CreateSubnetResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreateSubnetResponse::CreateSubnetResponse()
{
    subnetIsSet_ = false;
}

CreateSubnetResponse::~CreateSubnetResponse() = default;

void CreateSubnetResponse::validate()
{
}

web::json::value CreateSubnetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subnetIsSet_) {
        val[utility::conversions::to_string_t("subnet")] = ModelBase::toJson(subnet_);
    }

    return val;
}

bool CreateSubnetResponse::fromJson(const web::json::value& val)
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

Subnet CreateSubnetResponse::getSubnet() const
{
    return subnet_;
}

void CreateSubnetResponse::setSubnet(const Subnet& value)
{
    subnet_ = value;
    subnetIsSet_ = true;
}

bool CreateSubnetResponse::subnetIsSet() const
{
    return subnetIsSet_;
}

void CreateSubnetResponse::unsetsubnet()
{
    subnetIsSet_ = false;
}

}
}
}
}
}


