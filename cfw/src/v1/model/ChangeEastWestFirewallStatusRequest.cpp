

#include "huaweicloud/cfw/v1/model/ChangeEastWestFirewallStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ChangeEastWestFirewallStatusRequest::ChangeEastWestFirewallStatusRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ChangeEastWestFirewallStatusRequest::~ChangeEastWestFirewallStatusRequest() = default;

void ChangeEastWestFirewallStatusRequest::validate()
{
}

web::json::value ChangeEastWestFirewallStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ChangeEastWestFirewallStatusRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ChangeProtectStatusRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ChangeEastWestFirewallStatusRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ChangeEastWestFirewallStatusRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ChangeEastWestFirewallStatusRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ChangeEastWestFirewallStatusRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ChangeEastWestFirewallStatusRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ChangeEastWestFirewallStatusRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ChangeEastWestFirewallStatusRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ChangeEastWestFirewallStatusRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

ChangeProtectStatusRequestBody ChangeEastWestFirewallStatusRequest::getBody() const
{
    return body_;
}

void ChangeEastWestFirewallStatusRequest::setBody(const ChangeProtectStatusRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ChangeEastWestFirewallStatusRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ChangeEastWestFirewallStatusRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


