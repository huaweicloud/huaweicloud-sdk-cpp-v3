

#include "huaweicloud/codeartspipeline/v2/model/ShowRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ShowRuleRequest::ShowRuleRequest()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    ruleId_ = "";
    ruleIdIsSet_ = false;
    cloudProjectId_ = "";
    cloudProjectIdIsSet_ = false;
}

ShowRuleRequest::~ShowRuleRequest() = default;

void ShowRuleRequest::validate()
{
}

web::json::value ShowRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(ruleIdIsSet_) {
        val[utility::conversions::to_string_t("rule_id")] = ModelBase::toJson(ruleId_);
    }
    if(cloudProjectIdIsSet_) {
        val[utility::conversions::to_string_t("cloud_project_id")] = ModelBase::toJson(cloudProjectId_);
    }

    return val;
}
bool ShowRuleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cloud_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cloud_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCloudProjectId(refVal);
        }
    }
    return ok;
}


std::string ShowRuleRequest::getDomainId() const
{
    return domainId_;
}

void ShowRuleRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ShowRuleRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ShowRuleRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ShowRuleRequest::getRuleId() const
{
    return ruleId_;
}

void ShowRuleRequest::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool ShowRuleRequest::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void ShowRuleRequest::unsetruleId()
{
    ruleIdIsSet_ = false;
}

std::string ShowRuleRequest::getCloudProjectId() const
{
    return cloudProjectId_;
}

void ShowRuleRequest::setCloudProjectId(const std::string& value)
{
    cloudProjectId_ = value;
    cloudProjectIdIsSet_ = true;
}

bool ShowRuleRequest::cloudProjectIdIsSet() const
{
    return cloudProjectIdIsSet_;
}

void ShowRuleRequest::unsetcloudProjectId()
{
    cloudProjectIdIsSet_ = false;
}

}
}
}
}
}


