

#include "huaweicloud/cfw/v1/model/UpdateDnsServersRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateDnsServersRequest::UpdateDnsServersRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateDnsServersRequest::~UpdateDnsServersRequest() = default;

void UpdateDnsServersRequest::validate()
{
}

web::json::value UpdateDnsServersRequest::toJson() const
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
bool UpdateDnsServersRequest::fromJson(const web::json::value& val)
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
            UpdateDnsServersRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateDnsServersRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void UpdateDnsServersRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool UpdateDnsServersRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void UpdateDnsServersRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

std::string UpdateDnsServersRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void UpdateDnsServersRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool UpdateDnsServersRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void UpdateDnsServersRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

UpdateDnsServersRequestBody UpdateDnsServersRequest::getBody() const
{
    return body_;
}

void UpdateDnsServersRequest::setBody(const UpdateDnsServersRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDnsServersRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDnsServersRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


