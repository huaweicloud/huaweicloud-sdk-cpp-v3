

#include "huaweicloud/vpc/model/CreateSubnetRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreateSubnetRequestBody::CreateSubnetRequestBody()
{
    subnetIsSet_ = false;
}

CreateSubnetRequestBody::~CreateSubnetRequestBody() = default;

void CreateSubnetRequestBody::validate()
{
}

web::json::value CreateSubnetRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subnetIsSet_) {
        val[utility::conversions::to_string_t("subnet")] = ModelBase::toJson(subnet_);
    }

    return val;
}

bool CreateSubnetRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("subnet"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet"));
        if(!fieldValue.is_null())
        {
            CreateSubnetOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnet(refVal);
        }
    }
    return ok;
}


CreateSubnetOption CreateSubnetRequestBody::getSubnet() const
{
    return subnet_;
}

void CreateSubnetRequestBody::setSubnet(const CreateSubnetOption& value)
{
    subnet_ = value;
    subnetIsSet_ = true;
}

bool CreateSubnetRequestBody::subnetIsSet() const
{
    return subnetIsSet_;
}

void CreateSubnetRequestBody::unsetsubnet()
{
    subnetIsSet_ = false;
}

}
}
}
}
}


