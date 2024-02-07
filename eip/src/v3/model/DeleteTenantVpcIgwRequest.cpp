

#include "huaweicloud/eip/v3/model/DeleteTenantVpcIgwRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




DeleteTenantVpcIgwRequest::DeleteTenantVpcIgwRequest()
{
    vpcIgwId_ = "";
    vpcIgwIdIsSet_ = false;
}

DeleteTenantVpcIgwRequest::~DeleteTenantVpcIgwRequest() = default;

void DeleteTenantVpcIgwRequest::validate()
{
}

web::json::value DeleteTenantVpcIgwRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vpcIgwIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_igw_id")] = ModelBase::toJson(vpcIgwId_);
    }

    return val;
}
bool DeleteTenantVpcIgwRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vpc_igw_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_igw_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcIgwId(refVal);
        }
    }
    return ok;
}


std::string DeleteTenantVpcIgwRequest::getVpcIgwId() const
{
    return vpcIgwId_;
}

void DeleteTenantVpcIgwRequest::setVpcIgwId(const std::string& value)
{
    vpcIgwId_ = value;
    vpcIgwIdIsSet_ = true;
}

bool DeleteTenantVpcIgwRequest::vpcIgwIdIsSet() const
{
    return vpcIgwIdIsSet_;
}

void DeleteTenantVpcIgwRequest::unsetvpcIgwId()
{
    vpcIgwIdIsSet_ = false;
}

}
}
}
}
}


