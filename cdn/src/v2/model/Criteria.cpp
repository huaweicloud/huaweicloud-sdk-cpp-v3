

#include "huaweicloud/cdn/v2/model/Criteria.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




Criteria::Criteria()
{
    matchTargetType_ = "";
    matchTargetTypeIsSet_ = false;
    matchTargetName_ = "";
    matchTargetNameIsSet_ = false;
    matchType_ = "";
    matchTypeIsSet_ = false;
    matchPatternIsSet_ = false;
    negate_ = false;
    negateIsSet_ = false;
    caseSensitive_ = false;
    caseSensitiveIsSet_ = false;
    logic_ = "";
    logicIsSet_ = false;
    subCriteriaIsSet_ = false;
}

Criteria::~Criteria() = default;

void Criteria::validate()
{
}

web::json::value Criteria::toJson() const
{
    web::json::value val = web::json::value::object();

    if(matchTargetTypeIsSet_) {
        val[utility::conversions::to_string_t("match_target_type")] = ModelBase::toJson(matchTargetType_);
    }
    if(matchTargetNameIsSet_) {
        val[utility::conversions::to_string_t("match_target_name")] = ModelBase::toJson(matchTargetName_);
    }
    if(matchTypeIsSet_) {
        val[utility::conversions::to_string_t("match_type")] = ModelBase::toJson(matchType_);
    }
    if(matchPatternIsSet_) {
        val[utility::conversions::to_string_t("match_pattern")] = ModelBase::toJson(matchPattern_);
    }
    if(negateIsSet_) {
        val[utility::conversions::to_string_t("negate")] = ModelBase::toJson(negate_);
    }
    if(caseSensitiveIsSet_) {
        val[utility::conversions::to_string_t("case_sensitive")] = ModelBase::toJson(caseSensitive_);
    }
    if(logicIsSet_) {
        val[utility::conversions::to_string_t("logic")] = ModelBase::toJson(logic_);
    }
    if(subCriteriaIsSet_) {
        val[utility::conversions::to_string_t("sub_criteria")] = ModelBase::toJson(*subCriteria_);
    }

    return val;
}
bool Criteria::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("match_target_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("match_target_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMatchTargetType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("match_target_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("match_target_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMatchTargetName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("match_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("match_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMatchType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("match_pattern"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("match_pattern"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMatchPattern(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("negate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("negate"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNegate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("case_sensitive"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("case_sensitive"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaseSensitive(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("logic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logic"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sub_criteria"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sub_criteria"));
        if(!fieldValue.is_null())
        {
            std::vector<Criteria> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubCriteria(refVal);
        }
    }
    return ok;
}


std::string Criteria::getMatchTargetType() const
{
    return matchTargetType_;
}

void Criteria::setMatchTargetType(const std::string& value)
{
    matchTargetType_ = value;
    matchTargetTypeIsSet_ = true;
}

bool Criteria::matchTargetTypeIsSet() const
{
    return matchTargetTypeIsSet_;
}

void Criteria::unsetmatchTargetType()
{
    matchTargetTypeIsSet_ = false;
}

std::string Criteria::getMatchTargetName() const
{
    return matchTargetName_;
}

void Criteria::setMatchTargetName(const std::string& value)
{
    matchTargetName_ = value;
    matchTargetNameIsSet_ = true;
}

bool Criteria::matchTargetNameIsSet() const
{
    return matchTargetNameIsSet_;
}

void Criteria::unsetmatchTargetName()
{
    matchTargetNameIsSet_ = false;
}

std::string Criteria::getMatchType() const
{
    return matchType_;
}

void Criteria::setMatchType(const std::string& value)
{
    matchType_ = value;
    matchTypeIsSet_ = true;
}

bool Criteria::matchTypeIsSet() const
{
    return matchTypeIsSet_;
}

void Criteria::unsetmatchType()
{
    matchTypeIsSet_ = false;
}

std::vector<std::string>& Criteria::getMatchPattern()
{
    return matchPattern_;
}

void Criteria::setMatchPattern(const std::vector<std::string>& value)
{
    matchPattern_ = value;
    matchPatternIsSet_ = true;
}

bool Criteria::matchPatternIsSet() const
{
    return matchPatternIsSet_;
}

void Criteria::unsetmatchPattern()
{
    matchPatternIsSet_ = false;
}

bool Criteria::isNegate() const
{
    return negate_;
}

void Criteria::setNegate(bool value)
{
    negate_ = value;
    negateIsSet_ = true;
}

bool Criteria::negateIsSet() const
{
    return negateIsSet_;
}

void Criteria::unsetnegate()
{
    negateIsSet_ = false;
}

bool Criteria::isCaseSensitive() const
{
    return caseSensitive_;
}

void Criteria::setCaseSensitive(bool value)
{
    caseSensitive_ = value;
    caseSensitiveIsSet_ = true;
}

bool Criteria::caseSensitiveIsSet() const
{
    return caseSensitiveIsSet_;
}

void Criteria::unsetcaseSensitive()
{
    caseSensitiveIsSet_ = false;
}

std::string Criteria::getLogic() const
{
    return logic_;
}

void Criteria::setLogic(const std::string& value)
{
    logic_ = value;
    logicIsSet_ = true;
}

bool Criteria::logicIsSet() const
{
    return logicIsSet_;
}

void Criteria::unsetlogic()
{
    logicIsSet_ = false;
}

std::vector<Criteria>& Criteria::getSubCriteria()
{
    return *subCriteria_;
}

void Criteria::setSubCriteria(const std::vector<Criteria>& value)
{
    *subCriteria_ = value;
    subCriteriaIsSet_ = true;
}

bool Criteria::subCriteriaIsSet() const
{
    return subCriteriaIsSet_;
}

void Criteria::unsetsubCriteria()
{
    subCriteriaIsSet_ = false;
}

}
}
}
}
}


