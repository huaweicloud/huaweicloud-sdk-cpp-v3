

#include "huaweicloud/cfw/v1/model/ChangeIpsProtectModeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ChangeIpsProtectModeRequest::ChangeIpsProtectModeRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ChangeIpsProtectModeRequest::~ChangeIpsProtectModeRequest() = default;

void ChangeIpsProtectModeRequest::validate()
{
}

web::json::value ChangeIpsProtectModeRequest::toJson() const
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
bool ChangeIpsProtectModeRequest::fromJson(const web::json::value& val)
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


std::string ChangeIpsProtectModeRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ChangeIpsProtectModeRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ChangeIpsProtectModeRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ChangeIpsProtectModeRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ChangeIpsProtectModeRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ChangeIpsProtectModeRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ChangeIpsProtectModeRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ChangeIpsProtectModeRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

IpsProtectDTO ChangeIpsProtectModeRequest::getBody() const
{
    return body_;
}

void ChangeIpsProtectModeRequest::setBody(const IpsProtectDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ChangeIpsProtectModeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ChangeIpsProtectModeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


