

#include "huaweicloud/lts/v2/model/UpdateAomMappingRulesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




UpdateAomMappingRulesResponse::UpdateAomMappingRulesResponse()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    ruleName_ = "";
    ruleNameIsSet_ = false;
    ruleId_ = "";
    ruleIdIsSet_ = false;
    ruleInfoIsSet_ = false;
}

UpdateAomMappingRulesResponse::~UpdateAomMappingRulesResponse() = default;

void UpdateAomMappingRulesResponse::validate()
{
}

web::json::value UpdateAomMappingRulesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(ruleNameIsSet_) {
        val[utility::conversions::to_string_t("rule_name")] = ModelBase::toJson(ruleName_);
    }
    if(ruleIdIsSet_) {
        val[utility::conversions::to_string_t("rule_id")] = ModelBase::toJson(ruleId_);
    }
    if(ruleInfoIsSet_) {
        val[utility::conversions::to_string_t("rule_info")] = ModelBase::toJson(ruleInfo_);
    }

    return val;
}
bool UpdateAomMappingRulesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleId(refVal);
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


std::string UpdateAomMappingRulesResponse::getProjectId() const
{
    return projectId_;
}

void UpdateAomMappingRulesResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdateAomMappingRulesResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdateAomMappingRulesResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string UpdateAomMappingRulesResponse::getRuleName() const
{
    return ruleName_;
}

void UpdateAomMappingRulesResponse::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool UpdateAomMappingRulesResponse::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void UpdateAomMappingRulesResponse::unsetruleName()
{
    ruleNameIsSet_ = false;
}

std::string UpdateAomMappingRulesResponse::getRuleId() const
{
    return ruleId_;
}

void UpdateAomMappingRulesResponse::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool UpdateAomMappingRulesResponse::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void UpdateAomMappingRulesResponse::unsetruleId()
{
    ruleIdIsSet_ = false;
}

AomMappingRuleInfo UpdateAomMappingRulesResponse::getRuleInfo() const
{
    return ruleInfo_;
}

void UpdateAomMappingRulesResponse::setRuleInfo(const AomMappingRuleInfo& value)
{
    ruleInfo_ = value;
    ruleInfoIsSet_ = true;
}

bool UpdateAomMappingRulesResponse::ruleInfoIsSet() const
{
    return ruleInfoIsSet_;
}

void UpdateAomMappingRulesResponse::unsetruleInfo()
{
    ruleInfoIsSet_ = false;
}

}
}
}
}
}


