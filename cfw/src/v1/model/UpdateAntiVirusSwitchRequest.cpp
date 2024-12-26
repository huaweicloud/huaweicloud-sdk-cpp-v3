

#include "huaweicloud/cfw/v1/model/UpdateAntiVirusSwitchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateAntiVirusSwitchRequest::UpdateAntiVirusSwitchRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateAntiVirusSwitchRequest::~UpdateAntiVirusSwitchRequest() = default;

void UpdateAntiVirusSwitchRequest::validate()
{
}

web::json::value UpdateAntiVirusSwitchRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateAntiVirusSwitchRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            AntiVirusSwitchDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateAntiVirusSwitchRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void UpdateAntiVirusSwitchRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool UpdateAntiVirusSwitchRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void UpdateAntiVirusSwitchRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

AntiVirusSwitchDto UpdateAntiVirusSwitchRequest::getBody() const
{
    return body_;
}

void UpdateAntiVirusSwitchRequest::setBody(const AntiVirusSwitchDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAntiVirusSwitchRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAntiVirusSwitchRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


