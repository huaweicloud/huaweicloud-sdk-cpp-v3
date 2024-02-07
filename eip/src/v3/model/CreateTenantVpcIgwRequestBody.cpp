

#include "huaweicloud/eip/v3/model/CreateTenantVpcIgwRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




CreateTenantVpcIgwRequestBody::CreateTenantVpcIgwRequestBody()
{
    vpcIgwIsSet_ = false;
}

CreateTenantVpcIgwRequestBody::~CreateTenantVpcIgwRequestBody() = default;

void CreateTenantVpcIgwRequestBody::validate()
{
}

web::json::value CreateTenantVpcIgwRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vpcIgwIsSet_) {
        val[utility::conversions::to_string_t("vpc_igw")] = ModelBase::toJson(vpcIgw_);
    }

    return val;
}
bool CreateTenantVpcIgwRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vpc_igw"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_igw"));
        if(!fieldValue.is_null())
        {
            CreateTenantVpcIgwRequestBody_vpc_igw refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcIgw(refVal);
        }
    }
    return ok;
}


CreateTenantVpcIgwRequestBody_vpc_igw CreateTenantVpcIgwRequestBody::getVpcIgw() const
{
    return vpcIgw_;
}

void CreateTenantVpcIgwRequestBody::setVpcIgw(const CreateTenantVpcIgwRequestBody_vpc_igw& value)
{
    vpcIgw_ = value;
    vpcIgwIsSet_ = true;
}

bool CreateTenantVpcIgwRequestBody::vpcIgwIsSet() const
{
    return vpcIgwIsSet_;
}

void CreateTenantVpcIgwRequestBody::unsetvpcIgw()
{
    vpcIgwIsSet_ = false;
}

}
}
}
}
}


