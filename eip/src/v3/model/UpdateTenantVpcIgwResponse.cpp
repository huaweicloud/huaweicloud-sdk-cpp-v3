

#include "huaweicloud/eip/v3/model/UpdateTenantVpcIgwResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




UpdateTenantVpcIgwResponse::UpdateTenantVpcIgwResponse()
{
    vpcIgwIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

UpdateTenantVpcIgwResponse::~UpdateTenantVpcIgwResponse() = default;

void UpdateTenantVpcIgwResponse::validate()
{
}

web::json::value UpdateTenantVpcIgwResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vpcIgwIsSet_) {
        val[utility::conversions::to_string_t("vpc_igw")] = ModelBase::toJson(vpcIgw_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool UpdateTenantVpcIgwResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vpc_igw"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_igw"));
        if(!fieldValue.is_null())
        {
            VpcIgwsTenantResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcIgw(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestId(refVal);
        }
    }
    return ok;
}


VpcIgwsTenantResp UpdateTenantVpcIgwResponse::getVpcIgw() const
{
    return vpcIgw_;
}

void UpdateTenantVpcIgwResponse::setVpcIgw(const VpcIgwsTenantResp& value)
{
    vpcIgw_ = value;
    vpcIgwIsSet_ = true;
}

bool UpdateTenantVpcIgwResponse::vpcIgwIsSet() const
{
    return vpcIgwIsSet_;
}

void UpdateTenantVpcIgwResponse::unsetvpcIgw()
{
    vpcIgwIsSet_ = false;
}

std::string UpdateTenantVpcIgwResponse::getRequestId() const
{
    return requestId_;
}

void UpdateTenantVpcIgwResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool UpdateTenantVpcIgwResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void UpdateTenantVpcIgwResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


