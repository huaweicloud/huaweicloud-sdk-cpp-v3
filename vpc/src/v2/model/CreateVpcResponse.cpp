

#include "huaweicloud/vpc/v2/model/CreateVpcResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreateVpcResponse::CreateVpcResponse()
{
    vpcIsSet_ = false;
}

CreateVpcResponse::~CreateVpcResponse() = default;

void CreateVpcResponse::validate()
{
}

web::json::value CreateVpcResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vpcIsSet_) {
        val[utility::conversions::to_string_t("vpc")] = ModelBase::toJson(vpc_);
    }

    return val;
}

bool CreateVpcResponse::fromJson(const web::json::value& val)
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


Vpc CreateVpcResponse::getVpc() const
{
    return vpc_;
}

void CreateVpcResponse::setVpc(const Vpc& value)
{
    vpc_ = value;
    vpcIsSet_ = true;
}

bool CreateVpcResponse::vpcIsSet() const
{
    return vpcIsSet_;
}

void CreateVpcResponse::unsetvpc()
{
    vpcIsSet_ = false;
}

}
}
}
}
}


