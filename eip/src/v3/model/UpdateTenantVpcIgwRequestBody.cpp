

#include "huaweicloud/eip/v3/model/UpdateTenantVpcIgwRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




UpdateTenantVpcIgwRequestBody::UpdateTenantVpcIgwRequestBody()
{
    vpcIgwIsSet_ = false;
}

UpdateTenantVpcIgwRequestBody::~UpdateTenantVpcIgwRequestBody() = default;

void UpdateTenantVpcIgwRequestBody::validate()
{
}

web::json::value UpdateTenantVpcIgwRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vpcIgwIsSet_) {
        val[utility::conversions::to_string_t("vpc_igw")] = ModelBase::toJson(vpcIgw_);
    }

    return val;
}
bool UpdateTenantVpcIgwRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vpc_igw"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_igw"));
        if(!fieldValue.is_null())
        {
            UpdateTenantVpcIgwRequestBody_vpc_igw refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcIgw(refVal);
        }
    }
    return ok;
}


UpdateTenantVpcIgwRequestBody_vpc_igw UpdateTenantVpcIgwRequestBody::getVpcIgw() const
{
    return vpcIgw_;
}

void UpdateTenantVpcIgwRequestBody::setVpcIgw(const UpdateTenantVpcIgwRequestBody_vpc_igw& value)
{
    vpcIgw_ = value;
    vpcIgwIsSet_ = true;
}

bool UpdateTenantVpcIgwRequestBody::vpcIgwIsSet() const
{
    return vpcIgwIsSet_;
}

void UpdateTenantVpcIgwRequestBody::unsetvpcIgw()
{
    vpcIgwIsSet_ = false;
}

}
}
}
}
}


