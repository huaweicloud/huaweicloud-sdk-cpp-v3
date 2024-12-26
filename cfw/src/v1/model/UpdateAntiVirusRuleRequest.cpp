

#include "huaweicloud/cfw/v1/model/UpdateAntiVirusRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateAntiVirusRuleRequest::UpdateAntiVirusRuleRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateAntiVirusRuleRequest::~UpdateAntiVirusRuleRequest() = default;

void UpdateAntiVirusRuleRequest::validate()
{
}

web::json::value UpdateAntiVirusRuleRequest::toJson() const
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
bool UpdateAntiVirusRuleRequest::fromJson(const web::json::value& val)
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
            AntiVirusRuleDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateAntiVirusRuleRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void UpdateAntiVirusRuleRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool UpdateAntiVirusRuleRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void UpdateAntiVirusRuleRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

AntiVirusRuleDto UpdateAntiVirusRuleRequest::getBody() const
{
    return body_;
}

void UpdateAntiVirusRuleRequest::setBody(const AntiVirusRuleDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAntiVirusRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAntiVirusRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


