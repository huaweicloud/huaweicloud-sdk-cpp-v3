

#include "huaweicloud/cfw/v1/model/UpdateAdvancedIpsRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




UpdateAdvancedIpsRuleRequest::UpdateAdvancedIpsRuleRequest()
{
    fwInstanceId_ = "";
    fwInstanceIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateAdvancedIpsRuleRequest::~UpdateAdvancedIpsRuleRequest() = default;

void UpdateAdvancedIpsRuleRequest::validate()
{
}

web::json::value UpdateAdvancedIpsRuleRequest::toJson() const
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
bool UpdateAdvancedIpsRuleRequest::fromJson(const web::json::value& val)
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
            AdvancedIpsRuleDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateAdvancedIpsRuleRequest::getFwInstanceId() const
{
    return fwInstanceId_;
}

void UpdateAdvancedIpsRuleRequest::setFwInstanceId(const std::string& value)
{
    fwInstanceId_ = value;
    fwInstanceIdIsSet_ = true;
}

bool UpdateAdvancedIpsRuleRequest::fwInstanceIdIsSet() const
{
    return fwInstanceIdIsSet_;
}

void UpdateAdvancedIpsRuleRequest::unsetfwInstanceId()
{
    fwInstanceIdIsSet_ = false;
}

std::string UpdateAdvancedIpsRuleRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void UpdateAdvancedIpsRuleRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool UpdateAdvancedIpsRuleRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void UpdateAdvancedIpsRuleRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

AdvancedIpsRuleDto UpdateAdvancedIpsRuleRequest::getBody() const
{
    return body_;
}

void UpdateAdvancedIpsRuleRequest::setBody(const AdvancedIpsRuleDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAdvancedIpsRuleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAdvancedIpsRuleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


