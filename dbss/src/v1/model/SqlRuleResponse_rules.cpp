

#include "huaweicloud/dbss/v1/model/SqlRuleResponse_rules.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




SqlRuleResponse_rules::SqlRuleResponse_rules()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    riskLevel_ = "";
    riskLevelIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    rank_ = 0;
    rankIsSet_ = false;
    feature_ = "";
    featureIsSet_ = false;
    regex_ = "";
    regexIsSet_ = false;
}

SqlRuleResponse_rules::~SqlRuleResponse_rules() = default;

void SqlRuleResponse_rules::validate()
{
}

web::json::value SqlRuleResponse_rules::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(riskLevelIsSet_) {
        val[utility::conversions::to_string_t("risk_level")] = ModelBase::toJson(riskLevel_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(rankIsSet_) {
        val[utility::conversions::to_string_t("rank")] = ModelBase::toJson(rank_);
    }
    if(featureIsSet_) {
        val[utility::conversions::to_string_t("feature")] = ModelBase::toJson(feature_);
    }
    if(regexIsSet_) {
        val[utility::conversions::to_string_t("regex")] = ModelBase::toJson(regex_);
    }

    return val;
}
bool SqlRuleResponse_rules::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("feature"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("feature"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFeature(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("regex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("regex"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegex(refVal);
        }
    }
    return ok;
}


std::string SqlRuleResponse_rules::getId() const
{
    return id_;
}

void SqlRuleResponse_rules::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SqlRuleResponse_rules::idIsSet() const
{
    return idIsSet_;
}

void SqlRuleResponse_rules::unsetid()
{
    idIsSet_ = false;
}

std::string SqlRuleResponse_rules::getName() const
{
    return name_;
}

void SqlRuleResponse_rules::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SqlRuleResponse_rules::nameIsSet() const
{
    return nameIsSet_;
}

void SqlRuleResponse_rules::unsetname()
{
    nameIsSet_ = false;
}

std::string SqlRuleResponse_rules::getStatus() const
{
    return status_;
}

void SqlRuleResponse_rules::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SqlRuleResponse_rules::statusIsSet() const
{
    return statusIsSet_;
}

void SqlRuleResponse_rules::unsetstatus()
{
    statusIsSet_ = false;
}

std::string SqlRuleResponse_rules::getRiskLevel() const
{
    return riskLevel_;
}

void SqlRuleResponse_rules::setRiskLevel(const std::string& value)
{
    riskLevel_ = value;
    riskLevelIsSet_ = true;
}

bool SqlRuleResponse_rules::riskLevelIsSet() const
{
    return riskLevelIsSet_;
}

void SqlRuleResponse_rules::unsetriskLevel()
{
    riskLevelIsSet_ = false;
}

std::string SqlRuleResponse_rules::getType() const
{
    return type_;
}

void SqlRuleResponse_rules::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool SqlRuleResponse_rules::typeIsSet() const
{
    return typeIsSet_;
}

void SqlRuleResponse_rules::unsettype()
{
    typeIsSet_ = false;
}

int32_t SqlRuleResponse_rules::getRank() const
{
    return rank_;
}

void SqlRuleResponse_rules::setRank(int32_t value)
{
    rank_ = value;
    rankIsSet_ = true;
}

bool SqlRuleResponse_rules::rankIsSet() const
{
    return rankIsSet_;
}

void SqlRuleResponse_rules::unsetrank()
{
    rankIsSet_ = false;
}

std::string SqlRuleResponse_rules::getFeature() const
{
    return feature_;
}

void SqlRuleResponse_rules::setFeature(const std::string& value)
{
    feature_ = value;
    featureIsSet_ = true;
}

bool SqlRuleResponse_rules::featureIsSet() const
{
    return featureIsSet_;
}

void SqlRuleResponse_rules::unsetfeature()
{
    featureIsSet_ = false;
}

std::string SqlRuleResponse_rules::getRegex() const
{
    return regex_;
}

void SqlRuleResponse_rules::setRegex(const std::string& value)
{
    regex_ = value;
    regexIsSet_ = true;
}

bool SqlRuleResponse_rules::regexIsSet() const
{
    return regexIsSet_;
}

void SqlRuleResponse_rules::unsetregex()
{
    regexIsSet_ = false;
}

}
}
}
}
}


