

#include "huaweicloud/cfw/v1/model/ChangeIpsSwitchUsingPostRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ChangeIpsSwitchUsingPostRequest::ChangeIpsSwitchUsingPostRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ChangeIpsSwitchUsingPostRequest::~ChangeIpsSwitchUsingPostRequest() = default;

void ChangeIpsSwitchUsingPostRequest::validate()
{
}

web::json::value ChangeIpsSwitchUsingPostRequest::toJson() const
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

bool ChangeIpsSwitchUsingPostRequest::fromJson(const web::json::value& val)
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
            IpsSwitchDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ChangeIpsSwitchUsingPostRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ChangeIpsSwitchUsingPostRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ChangeIpsSwitchUsingPostRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ChangeIpsSwitchUsingPostRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ChangeIpsSwitchUsingPostRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ChangeIpsSwitchUsingPostRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ChangeIpsSwitchUsingPostRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ChangeIpsSwitchUsingPostRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

IpsSwitchDTO ChangeIpsSwitchUsingPostRequest::getBody() const
{
    return body_;
}

void ChangeIpsSwitchUsingPostRequest::setBody(const IpsSwitchDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ChangeIpsSwitchUsingPostRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ChangeIpsSwitchUsingPostRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


