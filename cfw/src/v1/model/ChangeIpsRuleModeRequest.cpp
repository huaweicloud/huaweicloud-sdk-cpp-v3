

#include "huaweicloud/cfw/v1/model/ChangeIpsRuleModeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ChangeIpsRuleModeRequest::ChangeIpsRuleModeRequest()
{
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

ChangeIpsRuleModeRequest::~ChangeIpsRuleModeRequest() = default;

void ChangeIpsRuleModeRequest::validate()
{
}

web::json::value ChangeIpsRuleModeRequest::toJson() const
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
bool ChangeIpsRuleModeRequest::fromJson(const web::json::value& val)
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
            IpsRuleChangeDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ChangeIpsRuleModeRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ChangeIpsRuleModeRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ChangeIpsRuleModeRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ChangeIpsRuleModeRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

IpsRuleChangeDto ChangeIpsRuleModeRequest::getBody() const
{
    return body_;
}

void ChangeIpsRuleModeRequest::setBody(const IpsRuleChangeDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ChangeIpsRuleModeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ChangeIpsRuleModeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


