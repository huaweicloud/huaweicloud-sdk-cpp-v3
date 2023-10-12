

#include "huaweicloud/vpc/v2/model/NeutronCreateSubnetRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronCreateSubnetRequestBody::NeutronCreateSubnetRequestBody()
{
    subnetIsSet_ = false;
}

NeutronCreateSubnetRequestBody::~NeutronCreateSubnetRequestBody() = default;

void NeutronCreateSubnetRequestBody::validate()
{
}

web::json::value NeutronCreateSubnetRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subnetIsSet_) {
        val[utility::conversions::to_string_t("subnet")] = ModelBase::toJson(subnet_);
    }

    return val;
}
bool NeutronCreateSubnetRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("subnet"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet"));
        if(!fieldValue.is_null())
        {
            NeutronCreateSubnetOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnet(refVal);
        }
    }
    return ok;
}


NeutronCreateSubnetOption NeutronCreateSubnetRequestBody::getSubnet() const
{
    return subnet_;
}

void NeutronCreateSubnetRequestBody::setSubnet(const NeutronCreateSubnetOption& value)
{
    subnet_ = value;
    subnetIsSet_ = true;
}

bool NeutronCreateSubnetRequestBody::subnetIsSet() const
{
    return subnetIsSet_;
}

void NeutronCreateSubnetRequestBody::unsetsubnet()
{
    subnetIsSet_ = false;
}

}
}
}
}
}


