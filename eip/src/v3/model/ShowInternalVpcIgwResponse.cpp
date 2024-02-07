

#include "huaweicloud/eip/v3/model/ShowInternalVpcIgwResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




ShowInternalVpcIgwResponse::ShowInternalVpcIgwResponse()
{
    vpcIgwIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

ShowInternalVpcIgwResponse::~ShowInternalVpcIgwResponse() = default;

void ShowInternalVpcIgwResponse::validate()
{
}

web::json::value ShowInternalVpcIgwResponse::toJson() const
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
bool ShowInternalVpcIgwResponse::fromJson(const web::json::value& val)
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


VpcIgwsTenantResp ShowInternalVpcIgwResponse::getVpcIgw() const
{
    return vpcIgw_;
}

void ShowInternalVpcIgwResponse::setVpcIgw(const VpcIgwsTenantResp& value)
{
    vpcIgw_ = value;
    vpcIgwIsSet_ = true;
}

bool ShowInternalVpcIgwResponse::vpcIgwIsSet() const
{
    return vpcIgwIsSet_;
}

void ShowInternalVpcIgwResponse::unsetvpcIgw()
{
    vpcIgwIsSet_ = false;
}

std::string ShowInternalVpcIgwResponse::getRequestId() const
{
    return requestId_;
}

void ShowInternalVpcIgwResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ShowInternalVpcIgwResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ShowInternalVpcIgwResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


