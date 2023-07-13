

#include "huaweicloud/cfw/v1/model/ChangeIpsProtectModeUsingPostRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ChangeIpsProtectModeUsingPostRequest::ChangeIpsProtectModeUsingPostRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ChangeIpsProtectModeUsingPostRequest::~ChangeIpsProtectModeUsingPostRequest() = default;

void ChangeIpsProtectModeUsingPostRequest::validate()
{
}

web::json::value ChangeIpsProtectModeUsingPostRequest::toJson() const
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

bool ChangeIpsProtectModeUsingPostRequest::fromJson(const web::json::value& val)
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
            IpsProtectDTO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string ChangeIpsProtectModeUsingPostRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ChangeIpsProtectModeUsingPostRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ChangeIpsProtectModeUsingPostRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ChangeIpsProtectModeUsingPostRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ChangeIpsProtectModeUsingPostRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ChangeIpsProtectModeUsingPostRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ChangeIpsProtectModeUsingPostRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ChangeIpsProtectModeUsingPostRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

IpsProtectDTO ChangeIpsProtectModeUsingPostRequest::getBody() const
{
    return body_;
}

void ChangeIpsProtectModeUsingPostRequest::setBody(const IpsProtectDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ChangeIpsProtectModeUsingPostRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ChangeIpsProtectModeUsingPostRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


