

#include "huaweicloud/vpc/model/UpdateSubnetResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




UpdateSubnetResponse::UpdateSubnetResponse()
{
    subnetIsSet_ = false;
}

UpdateSubnetResponse::~UpdateSubnetResponse() = default;

void UpdateSubnetResponse::validate()
{
}

web::json::value UpdateSubnetResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subnetIsSet_) {
        val[utility::conversions::to_string_t("subnet")] = ModelBase::toJson(subnet_);
    }

    return val;
}

bool UpdateSubnetResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("subnet"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet"));
        if(!fieldValue.is_null())
        {
            SubnetResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnet(refVal);
        }
    }
    return ok;
}


SubnetResult UpdateSubnetResponse::getSubnet() const
{
    return subnet_;
}

void UpdateSubnetResponse::setSubnet(const SubnetResult& value)
{
    subnet_ = value;
    subnetIsSet_ = true;
}

bool UpdateSubnetResponse::subnetIsSet() const
{
    return subnetIsSet_;
}

void UpdateSubnetResponse::unsetsubnet()
{
    subnetIsSet_ = false;
}

}
}
}
}
}


