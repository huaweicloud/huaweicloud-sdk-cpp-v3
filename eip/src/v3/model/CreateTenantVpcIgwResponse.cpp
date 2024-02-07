

#include "huaweicloud/eip/v3/model/CreateTenantVpcIgwResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




CreateTenantVpcIgwResponse::CreateTenantVpcIgwResponse()
{
    vpcIgwIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

CreateTenantVpcIgwResponse::~CreateTenantVpcIgwResponse() = default;

void CreateTenantVpcIgwResponse::validate()
{
}

web::json::value CreateTenantVpcIgwResponse::toJson() const
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
bool CreateTenantVpcIgwResponse::fromJson(const web::json::value& val)
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


VpcIgwsTenantResp CreateTenantVpcIgwResponse::getVpcIgw() const
{
    return vpcIgw_;
}

void CreateTenantVpcIgwResponse::setVpcIgw(const VpcIgwsTenantResp& value)
{
    vpcIgw_ = value;
    vpcIgwIsSet_ = true;
}

bool CreateTenantVpcIgwResponse::vpcIgwIsSet() const
{
    return vpcIgwIsSet_;
}

void CreateTenantVpcIgwResponse::unsetvpcIgw()
{
    vpcIgwIsSet_ = false;
}

std::string CreateTenantVpcIgwResponse::getRequestId() const
{
    return requestId_;
}

void CreateTenantVpcIgwResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool CreateTenantVpcIgwResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void CreateTenantVpcIgwResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


