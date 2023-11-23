

#include "huaweicloud/cfw/v1/model/AddLogConfigRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddLogConfigRequest::AddLogConfigRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddLogConfigRequest::~AddLogConfigRequest() = default;

void AddLogConfigRequest::validate()
{
}

web::json::value AddLogConfigRequest::toJson() const
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
bool AddLogConfigRequest::fromJson(const web::json::value& val)
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


std::string AddLogConfigRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void AddLogConfigRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool AddLogConfigRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void AddLogConfigRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

std::string AddLogConfigRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void AddLogConfigRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool AddLogConfigRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void AddLogConfigRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

LogConfigDto AddLogConfigRequest::getBody() const
{
    return body_;
}

void AddLogConfigRequest::setBody(const LogConfigDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddLogConfigRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddLogConfigRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


