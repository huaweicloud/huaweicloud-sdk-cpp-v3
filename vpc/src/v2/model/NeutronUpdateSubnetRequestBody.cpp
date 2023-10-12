

#include "huaweicloud/vpc/v2/model/NeutronUpdateSubnetRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronUpdateSubnetRequestBody::NeutronUpdateSubnetRequestBody()
{
    subnetIsSet_ = false;
}

NeutronUpdateSubnetRequestBody::~NeutronUpdateSubnetRequestBody() = default;

void NeutronUpdateSubnetRequestBody::validate()
{
}

web::json::value NeutronUpdateSubnetRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subnetIsSet_) {
        val[utility::conversions::to_string_t("subnet")] = ModelBase::toJson(subnet_);
    }

    return val;
}
bool NeutronUpdateSubnetRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("subnet"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet"));
        if(!fieldValue.is_null())
        {
            NeutronUpdateSubnetOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnet(refVal);
        }
    }
    return ok;
}


NeutronUpdateSubnetOption NeutronUpdateSubnetRequestBody::getSubnet() const
{
    return subnet_;
}

void NeutronUpdateSubnetRequestBody::setSubnet(const NeutronUpdateSubnetOption& value)
{
    subnet_ = value;
    subnetIsSet_ = true;
}

bool NeutronUpdateSubnetRequestBody::subnetIsSet() const
{
    return subnetIsSet_;
}

void NeutronUpdateSubnetRequestBody::unsetsubnet()
{
    subnetIsSet_ = false;
}

}
}
}
}
}


