

#include "huaweicloud/cfw/v1/model/ChangeIpsSwitchStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ChangeIpsSwitchStatusRequest::ChangeIpsSwitchStatusRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ChangeIpsSwitchStatusRequest::~ChangeIpsSwitchStatusRequest() = default;

void ChangeIpsSwitchStatusRequest::validate()
{
}

web::json::value ChangeIpsSwitchStatusRequest::toJson() const
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
bool ChangeIpsSwitchStatusRequest::fromJson(const web::json::value& val)
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


std::string ChangeIpsSwitchStatusRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ChangeIpsSwitchStatusRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ChangeIpsSwitchStatusRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ChangeIpsSwitchStatusRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

std::string ChangeIpsSwitchStatusRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void ChangeIpsSwitchStatusRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool ChangeIpsSwitchStatusRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void ChangeIpsSwitchStatusRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

IpsSwitchDTO ChangeIpsSwitchStatusRequest::getBody() const
{
    return body_;
}

void ChangeIpsSwitchStatusRequest::setBody(const IpsSwitchDTO& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ChangeIpsSwitchStatusRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ChangeIpsSwitchStatusRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


