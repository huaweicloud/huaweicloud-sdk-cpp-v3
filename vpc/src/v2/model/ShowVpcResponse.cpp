

#include "huaweicloud/vpc/v2/model/ShowVpcResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ShowVpcResponse::ShowVpcResponse()
{
    vpcIsSet_ = false;
}

ShowVpcResponse::~ShowVpcResponse() = default;

void ShowVpcResponse::validate()
{
}

web::json::value ShowVpcResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vpcIsSet_) {
        val[utility::conversions::to_string_t("vpc")] = ModelBase::toJson(vpc_);
    }

    return val;
}
bool ShowVpcResponse::fromJson(const web::json::value& val)
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


Vpc ShowVpcResponse::getVpc() const
{
    return vpc_;
}

void ShowVpcResponse::setVpc(const Vpc& value)
{
    vpc_ = value;
    vpcIsSet_ = true;
}

bool ShowVpcResponse::vpcIsSet() const
{
    return vpcIsSet_;
}

void ShowVpcResponse::unsetvpc()
{
    vpcIsSet_ = false;
}

}
}
}
}
}


