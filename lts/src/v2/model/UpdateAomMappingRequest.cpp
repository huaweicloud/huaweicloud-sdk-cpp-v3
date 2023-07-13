

#include "huaweicloud/lts/v2/model/UpdateAomMappingRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




UpdateAomMappingRequest::UpdateAomMappingRequest()
{
    ruleId_ = "";
    ruleIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    ruleName_ = "";
    ruleNameIsSet_ = false;
    ruleInfoIsSet_ = false;
}

UpdateAomMappingRequest::~UpdateAomMappingRequest() = default;

void UpdateAomMappingRequest::validate()
{
}

web::json::value UpdateAomMappingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ruleIdIsSet_) {
        val[utility::conversions::to_string_t("rule_id")] = ModelBase::toJson(ruleId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(ruleNameIsSet_) {
        val[utility::conversions::to_string_t("rule_name")] = ModelBase::toJson(ruleName_);
    }
    if(ruleInfoIsSet_) {
        val[utility::conversions::to_string_t("rule_info")] = ModelBase::toJson(ruleInfo_);
    }

    return val;
}

bool UpdateAomMappingRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_info"));
        if(!fieldValue.is_null())
        {
            AomMappingRuleInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleInfo(refVal);
        }
    }
    return ok;
}

std::string UpdateAomMappingRequest::getRuleId() const
{
    return ruleId_;
}

void UpdateAomMappingRequest::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool UpdateAomMappingRequest::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void UpdateAomMappingRequest::unsetruleId()
{
    ruleIdIsSet_ = false;
}

std::string UpdateAomMappingRequest::getProjectId() const
{
    return projectId_;
}

void UpdateAomMappingRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdateAomMappingRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdateAomMappingRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string UpdateAomMappingRequest::getRuleName() const
{
    return ruleName_;
}

void UpdateAomMappingRequest::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool UpdateAomMappingRequest::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void UpdateAomMappingRequest::unsetruleName()
{
    ruleNameIsSet_ = false;
}

AomMappingRuleInfo UpdateAomMappingRequest::getRuleInfo() const
{
    return ruleInfo_;
}

void UpdateAomMappingRequest::setRuleInfo(const AomMappingRuleInfo& value)
{
    ruleInfo_ = value;
    ruleInfoIsSet_ = true;
}

bool UpdateAomMappingRequest::ruleInfoIsSet() const
{
    return ruleInfoIsSet_;
}

void UpdateAomMappingRequest::unsetruleInfo()
{
    ruleInfoIsSet_ = false;
}

}
}
}
}
}


