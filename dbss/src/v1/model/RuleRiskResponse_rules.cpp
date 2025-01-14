

#include "huaweicloud/dbss/v1/model/RuleRiskResponse_rules.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




RuleRiskResponse_rules::RuleRiskResponse_rules()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    feature_ = "";
    featureIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    rank_ = 0;
    rankIsSet_ = false;
    riskLevel_ = "";
    riskLevelIsSet_ = false;
    ruleType_ = "";
    ruleTypeIsSet_ = false;
}

RuleRiskResponse_rules::~RuleRiskResponse_rules() = default;

void RuleRiskResponse_rules::validate()
{
}

web::json::value RuleRiskResponse_rules::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(featureIsSet_) {
        val[utility::conversions::to_string_t("feature")] = ModelBase::toJson(feature_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(rankIsSet_) {
        val[utility::conversions::to_string_t("rank")] = ModelBase::toJson(rank_);
    }
    if(riskLevelIsSet_) {
        val[utility::conversions::to_string_t("risk_level")] = ModelBase::toJson(riskLevel_);
    }
    if(ruleTypeIsSet_) {
        val[utility::conversions::to_string_t("rule_type")] = ModelBase::toJson(ruleType_);
    }

    return val;
}
bool RuleRiskResponse_rules::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("feature"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("feature"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFeature(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rank"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rank"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRank(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("risk_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("risk_level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRiskLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleType(refVal);
        }
    }
    return ok;
}


std::string RuleRiskResponse_rules::getId() const
{
    return id_;
}

void RuleRiskResponse_rules::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool RuleRiskResponse_rules::idIsSet() const
{
    return idIsSet_;
}

void RuleRiskResponse_rules::unsetid()
{
    idIsSet_ = false;
}

std::string RuleRiskResponse_rules::getName() const
{
    return name_;
}

void RuleRiskResponse_rules::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RuleRiskResponse_rules::nameIsSet() const
{
    return nameIsSet_;
}

void RuleRiskResponse_rules::unsetname()
{
    nameIsSet_ = false;
}

std::string RuleRiskResponse_rules::getType() const
{
    return type_;
}

void RuleRiskResponse_rules::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool RuleRiskResponse_rules::typeIsSet() const
{
    return typeIsSet_;
}

void RuleRiskResponse_rules::unsettype()
{
    typeIsSet_ = false;
}

std::string RuleRiskResponse_rules::getFeature() const
{
    return feature_;
}

void RuleRiskResponse_rules::setFeature(const std::string& value)
{
    feature_ = value;
    featureIsSet_ = true;
}

bool RuleRiskResponse_rules::featureIsSet() const
{
    return featureIsSet_;
}

void RuleRiskResponse_rules::unsetfeature()
{
    featureIsSet_ = false;
}

std::string RuleRiskResponse_rules::getStatus() const
{
    return status_;
}

void RuleRiskResponse_rules::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool RuleRiskResponse_rules::statusIsSet() const
{
    return statusIsSet_;
}

void RuleRiskResponse_rules::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t RuleRiskResponse_rules::getRank() const
{
    return rank_;
}

void RuleRiskResponse_rules::setRank(int32_t value)
{
    rank_ = value;
    rankIsSet_ = true;
}

bool RuleRiskResponse_rules::rankIsSet() const
{
    return rankIsSet_;
}

void RuleRiskResponse_rules::unsetrank()
{
    rankIsSet_ = false;
}

std::string RuleRiskResponse_rules::getRiskLevel() const
{
    return riskLevel_;
}

void RuleRiskResponse_rules::setRiskLevel(const std::string& value)
{
    riskLevel_ = value;
    riskLevelIsSet_ = true;
}

bool RuleRiskResponse_rules::riskLevelIsSet() const
{
    return riskLevelIsSet_;
}

void RuleRiskResponse_rules::unsetriskLevel()
{
    riskLevelIsSet_ = false;
}

std::string RuleRiskResponse_rules::getRuleType() const
{
    return ruleType_;
}

void RuleRiskResponse_rules::setRuleType(const std::string& value)
{
    ruleType_ = value;
    ruleTypeIsSet_ = true;
}

bool RuleRiskResponse_rules::ruleTypeIsSet() const
{
    return ruleTypeIsSet_;
}

void RuleRiskResponse_rules::unsetruleType()
{
    ruleTypeIsSet_ = false;
}

}
}
}
}
}


