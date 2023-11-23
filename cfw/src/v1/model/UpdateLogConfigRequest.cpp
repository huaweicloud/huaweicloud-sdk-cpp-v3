

#include "huaweicloud/cfw/v1/model/UpdateLogConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateLogConfigRequest::UpdateLogConfigRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateLogConfigRequest::~UpdateLogConfigRequest() = default;

void UpdateLogConfigRequest::validate()
{
}

web::json::value UpdateLogConfigRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fwInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("fw_instance_id")] = ModelBase::toJson(fwInstanceId_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateLogConfigRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("fw_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fw_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFwInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            LogConfigDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateLogConfigRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void UpdateLogConfigRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool UpdateLogConfigRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void UpdateLogConfigRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

std::string UpdateLogConfigRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void UpdateLogConfigRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool UpdateLogConfigRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void UpdateLogConfigRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

LogConfigDto UpdateLogConfigRequest::getBody() const
{
    return body_;
}

void UpdateLogConfigRequest::setBody(const LogConfigDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateLogConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateLogConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


