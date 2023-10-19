

#include "huaweicloud/cfw/v1/model/UpdateDomainSetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateDomainSetRequest::UpdateDomainSetRequest()
{
    setId_ = "";
    setIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateDomainSetRequest::~UpdateDomainSetRequest() = default;

void UpdateDomainSetRequest::validate()
{
}

web::json::value UpdateDomainSetRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(setIdIsSet_) {
        val[utility::conversions::to_string_t("set_id")] = ModelBase::toJson(setId_);
    }
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
bool UpdateDomainSetRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("set_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("set_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSetId(refVal);
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
            UpdateDomainSetInfoDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateDomainSetRequest::getSetId() const
{
    return setId_;
}

void UpdateDomainSetRequest::setSetId(const std::string& value)
{
    setId_ = value;
    setIdIsSet_ = true;
}

bool UpdateDomainSetRequest::setIdIsSet() const
{
    return setIdIsSet_;
}

void UpdateDomainSetRequest::unsetsetId()
{
    setIdIsSet_ = false;
}

std::string UpdateDomainSetRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void UpdateDomainSetRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool UpdateDomainSetRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void UpdateDomainSetRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string UpdateDomainSetRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void UpdateDomainSetRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool UpdateDomainSetRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void UpdateDomainSetRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

UpdateDomainSetInfoDto UpdateDomainSetRequest::getBody() const
{
    return body_;
}

void UpdateDomainSetRequest::setBody(const UpdateDomainSetInfoDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDomainSetRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDomainSetRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


