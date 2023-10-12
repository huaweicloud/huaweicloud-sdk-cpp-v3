

#include "huaweicloud/vpc/v2/model/UpdateVpcResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




UpdateVpcResponse::UpdateVpcResponse()
{
    vpcIsSet_ = false;
}

UpdateVpcResponse::~UpdateVpcResponse() = default;

void UpdateVpcResponse::validate()
{
}

web::json::value UpdateVpcResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vpcIsSet_) {
        val[utility::conversions::to_string_t("vpc")] = ModelBase::toJson(vpc_);
    }

    return val;
}
bool UpdateVpcResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vpc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc"));
        if(!fieldValue.is_null())
        {
            Vpc refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpc(refVal);
        }
    }
    return ok;
}


Vpc UpdateVpcResponse::getVpc() const
{
    return vpc_;
}

void UpdateVpcResponse::setVpc(const Vpc& value)
{
    vpc_ = value;
    vpcIsSet_ = true;
}

bool UpdateVpcResponse::vpcIsSet() const
{
    return vpcIsSet_;
}

void UpdateVpcResponse::unsetvpc()
{
    vpcIsSet_ = false;
}

}
}
}
}
}


