

#include "huaweicloud/vpc/v2/model/UpdateVpcRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




UpdateVpcRequestBody::UpdateVpcRequestBody()
{
    vpcIsSet_ = false;
}

UpdateVpcRequestBody::~UpdateVpcRequestBody() = default;

void UpdateVpcRequestBody::validate()
{
}

web::json::value UpdateVpcRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vpcIsSet_) {
        val[utility::conversions::to_string_t("vpc")] = ModelBase::toJson(vpc_);
    }

    return val;
}

bool UpdateVpcRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vpc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc"));
        if(!fieldValue.is_null())
        {
            UpdateVpcOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpc(refVal);
        }
    }
    return ok;
}

UpdateVpcOption UpdateVpcRequestBody::getVpc() const
{
    return vpc_;
}

void UpdateVpcRequestBody::setVpc(const UpdateVpcOption& value)
{
    vpc_ = value;
    vpcIsSet_ = true;
}

bool UpdateVpcRequestBody::vpcIsSet() const
{
    return vpcIsSet_;
}

void UpdateVpcRequestBody::unsetvpc()
{
    vpcIsSet_ = false;
}

}
}
}
}
}


