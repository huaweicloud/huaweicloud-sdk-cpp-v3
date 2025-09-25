

#include "huaweicloud/codeartspipeline/v2/model/ShowStrategyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ShowStrategyRequest::ShowStrategyRequest()
{
    ruleSetId_ = "";
    ruleSetIdIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    cloudProjectId_ = "";
    cloudProjectIdIsSet_ = false;
}

ShowStrategyRequest::~ShowStrategyRequest() = default;

void ShowStrategyRequest::validate()
{
}

web::json::value ShowStrategyRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ruleSetIdIsSet_) {
        val[utility::conversions::to_string_t("rule_set_id")] = ModelBase::toJson(ruleSetId_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(cloudProjectIdIsSet_) {
        val[utility::conversions::to_string_t("cloud_project_id")] = ModelBase::toJson(cloudProjectId_);
    }

    return val;
}
bool ShowStrategyRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rule_set_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_set_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleSetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
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


std::string ShowStrategyRequest::getRuleSetId() const
{
    return ruleSetId_;
}

void ShowStrategyRequest::setRuleSetId(const std::string& value)
{
    ruleSetId_ = value;
    ruleSetIdIsSet_ = true;
}

bool ShowStrategyRequest::ruleSetIdIsSet() const
{
    return ruleSetIdIsSet_;
}

void ShowStrategyRequest::unsetruleSetId()
{
    ruleSetIdIsSet_ = false;
}

std::string ShowStrategyRequest::getDomainId() const
{
    return domainId_;
}

void ShowStrategyRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ShowStrategyRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ShowStrategyRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ShowStrategyRequest::getCloudProjectId() const
{
    return cloudProjectId_;
}

void ShowStrategyRequest::setCloudProjectId(const std::string& value)
{
    cloudProjectId_ = value;
    cloudProjectIdIsSet_ = true;
}

bool ShowStrategyRequest::cloudProjectIdIsSet() const
{
    return cloudProjectIdIsSet_;
}

void ShowStrategyRequest::unsetcloudProjectId()
{
    cloudProjectIdIsSet_ = false;
}

}
}
}
}
}


