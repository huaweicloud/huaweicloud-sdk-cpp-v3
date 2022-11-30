

#include "huaweicloud/vpc/v2/model/UpdateSubnetRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




UpdateSubnetRequestBody::UpdateSubnetRequestBody()
{
    subnetIsSet_ = false;
}

UpdateSubnetRequestBody::~UpdateSubnetRequestBody() = default;

void UpdateSubnetRequestBody::validate()
{
}

web::json::value UpdateSubnetRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subnetIsSet_) {
        val[utility::conversions::to_string_t("subnet")] = ModelBase::toJson(subnet_);
    }

    return val;
}

bool UpdateSubnetRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("subnet"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet"));
        if(!fieldValue.is_null())
        {
            UpdateSubnetOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnet(refVal);
        }
    }
    return ok;
}


UpdateSubnetOption UpdateSubnetRequestBody::getSubnet() const
{
    return subnet_;
}

void UpdateSubnetRequestBody::setSubnet(const UpdateSubnetOption& value)
{
    subnet_ = value;
    subnetIsSet_ = true;
}

bool UpdateSubnetRequestBody::subnetIsSet() const
{
    return subnetIsSet_;
}

void UpdateSubnetRequestBody::unsetsubnet()
{
    subnetIsSet_ = false;
}

}
}
}
}
}


