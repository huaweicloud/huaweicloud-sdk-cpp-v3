

#include "huaweicloud/vpc/v2/model/CreateVpcRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




CreateVpcRequestBody::CreateVpcRequestBody()
{
    vpcIsSet_ = false;
}

CreateVpcRequestBody::~CreateVpcRequestBody() = default;

void CreateVpcRequestBody::validate()
{
}

web::json::value CreateVpcRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vpcIsSet_) {
        val[utility::conversions::to_string_t("vpc")] = ModelBase::toJson(vpc_);
    }

    return val;
}
bool CreateVpcRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vpc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc"));
        if(!fieldValue.is_null())
        {
            CreateVpcOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpc(refVal);
        }
    }
    return ok;
}


CreateVpcOption CreateVpcRequestBody::getVpc() const
{
    return vpc_;
}

void CreateVpcRequestBody::setVpc(const CreateVpcOption& value)
{
    vpc_ = value;
    vpcIsSet_ = true;
}

bool CreateVpcRequestBody::vpcIsSet() const
{
    return vpcIsSet_;
}

void CreateVpcRequestBody::unsetvpc()
{
    vpcIsSet_ = false;
}

}
}
}
}
}


