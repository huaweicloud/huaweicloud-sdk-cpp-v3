

#include "huaweicloud/lts/v2/model/AomMappingRequestInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




AomMappingRequestInfo::AomMappingRequestInfo()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    ruleName_ = "";
    ruleNameIsSet_ = false;
    ruleId_ = "";
    ruleIdIsSet_ = false;
    ruleInfoIsSet_ = false;
}

AomMappingRequestInfo::~AomMappingRequestInfo() = default;

void AomMappingRequestInfo::validate()
{
}

web::json::value AomMappingRequestInfo::toJson() const
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

bool AomMappingRequestInfo::fromJson(const web::json::value& val)
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


std::string AomMappingRequestInfo::getProjectId() const
{
    return projectId_;
}

void AomMappingRequestInfo::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool AomMappingRequestInfo::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void AomMappingRequestInfo::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string AomMappingRequestInfo::getRuleName() const
{
    return ruleName_;
}

void AomMappingRequestInfo::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool AomMappingRequestInfo::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void AomMappingRequestInfo::unsetruleName()
{
    ruleNameIsSet_ = false;
}

std::string AomMappingRequestInfo::getRuleId() const
{
    return ruleId_;
}

void AomMappingRequestInfo::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool AomMappingRequestInfo::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void AomMappingRequestInfo::unsetruleId()
{
    ruleIdIsSet_ = false;
}

AomMappingRuleInfo AomMappingRequestInfo::getRuleInfo() const
{
    return ruleInfo_;
}

void AomMappingRequestInfo::setRuleInfo(const AomMappingRuleInfo& value)
{
    ruleInfo_ = value;
    ruleInfoIsSet_ = true;
}

bool AomMappingRequestInfo::ruleInfoIsSet() const
{
    return ruleInfoIsSet_;
}

void AomMappingRequestInfo::unsetruleInfo()
{
    ruleInfoIsSet_ = false;
}

}
}
}
}
}


