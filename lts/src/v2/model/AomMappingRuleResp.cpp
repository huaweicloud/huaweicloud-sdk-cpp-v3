

#include "huaweicloud/lts/v2/model/AomMappingRuleResp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




AomMappingRuleResp::AomMappingRuleResp()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    ruleName_ = "";
    ruleNameIsSet_ = false;
    ruleId_ = "";
    ruleIdIsSet_ = false;
    ruleInfoIsSet_ = false;
}

AomMappingRuleResp::~AomMappingRuleResp() = default;

void AomMappingRuleResp::validate()
{
}

web::json::value AomMappingRuleResp::toJson() const
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
bool AomMappingRuleResp::fromJson(const web::json::value& val)
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


std::string AomMappingRuleResp::getProjectId() const
{
    return projectId_;
}

void AomMappingRuleResp::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool AomMappingRuleResp::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void AomMappingRuleResp::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string AomMappingRuleResp::getRuleName() const
{
    return ruleName_;
}

void AomMappingRuleResp::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool AomMappingRuleResp::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void AomMappingRuleResp::unsetruleName()
{
    ruleNameIsSet_ = false;
}

std::string AomMappingRuleResp::getRuleId() const
{
    return ruleId_;
}

void AomMappingRuleResp::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool AomMappingRuleResp::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void AomMappingRuleResp::unsetruleId()
{
    ruleIdIsSet_ = false;
}

AomMappingRuleInfo AomMappingRuleResp::getRuleInfo() const
{
    return ruleInfo_;
}

void AomMappingRuleResp::setRuleInfo(const AomMappingRuleInfo& value)
{
    ruleInfo_ = value;
    ruleInfoIsSet_ = true;
}

bool AomMappingRuleResp::ruleInfoIsSet() const
{
    return ruleInfoIsSet_;
}

void AomMappingRuleResp::unsetruleInfo()
{
    ruleInfoIsSet_ = false;
}

}
}
}
}
}


