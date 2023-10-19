

#include "huaweicloud/cfw/v1/model/AddDomainSetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




AddDomainSetRequest::AddDomainSetRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddDomainSetRequest::~AddDomainSetRequest() = default;

void AddDomainSetRequest::validate()
{
}

web::json::value AddDomainSetRequest::toJson() const
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
bool AddDomainSetRequest::fromJson(const web::json::value& val)
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
            AddDomainSetInfoDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddDomainSetRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void AddDomainSetRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool AddDomainSetRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void AddDomainSetRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string AddDomainSetRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void AddDomainSetRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool AddDomainSetRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void AddDomainSetRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

AddDomainSetInfoDto AddDomainSetRequest::getBody() const
{
    return body_;
}

void AddDomainSetRequest::setBody(const AddDomainSetInfoDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddDomainSetRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddDomainSetRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


