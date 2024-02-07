

#include "huaweicloud/eip/v3/model/ListTenantVpcIgwsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V3 {
namespace Model {




ListTenantVpcIgwsResponse::ListTenantVpcIgwsResponse()
{
    vpcIgwsIsSet_ = false;
    requestId_ = "";
    requestIdIsSet_ = false;
}

ListTenantVpcIgwsResponse::~ListTenantVpcIgwsResponse() = default;

void ListTenantVpcIgwsResponse::validate()
{
}

web::json::value ListTenantVpcIgwsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(vpcIgwsIsSet_) {
        val[utility::conversions::to_string_t("vpc_igws")] = ModelBase::toJson(vpcIgws_);
    }
    if(requestIdIsSet_) {
        val[utility::conversions::to_string_t("request_id")] = ModelBase::toJson(requestId_);
    }

    return val;
}
bool ListTenantVpcIgwsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("vpc_igws"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_igws"));
        if(!fieldValue.is_null())
        {
            std::vector<VpcIgwsTenantResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcIgws(refVal);
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


std::vector<VpcIgwsTenantResp>& ListTenantVpcIgwsResponse::getVpcIgws()
{
    return vpcIgws_;
}

void ListTenantVpcIgwsResponse::setVpcIgws(const std::vector<VpcIgwsTenantResp>& value)
{
    vpcIgws_ = value;
    vpcIgwsIsSet_ = true;
}

bool ListTenantVpcIgwsResponse::vpcIgwsIsSet() const
{
    return vpcIgwsIsSet_;
}

void ListTenantVpcIgwsResponse::unsetvpcIgws()
{
    vpcIgwsIsSet_ = false;
}

std::string ListTenantVpcIgwsResponse::getRequestId() const
{
    return requestId_;
}

void ListTenantVpcIgwsResponse::setRequestId(const std::string& value)
{
    requestId_ = value;
    requestIdIsSet_ = true;
}

bool ListTenantVpcIgwsResponse::requestIdIsSet() const
{
    return requestIdIsSet_;
}

void ListTenantVpcIgwsResponse::unsetrequestId()
{
    requestIdIsSet_ = false;
}

}
}
}
}
}


