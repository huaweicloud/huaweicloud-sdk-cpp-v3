

#include "huaweicloud/cdn/v2/model/CriteriaItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




CriteriaItem::CriteriaItem()
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
    criteriaIsSet_ = false;
}

CriteriaItem::~CriteriaItem() = default;

void CriteriaItem::validate()
{
}

web::json::value CriteriaItem::toJson() const
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
    if(criteriaIsSet_) {
        val[utility::conversions::to_string_t("criteria")] = ModelBase::toJson(*criteria_);
    }

    return val;
}
bool CriteriaItem::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("criteria"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("criteria"));
        if(!fieldValue.is_null())
        {
            std::vector<CriteriaItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCriteria(refVal);
        }
    }
    return ok;
}


std::string CriteriaItem::getMatchTargetType() const
{
    return matchTargetType_;
}

void CriteriaItem::setMatchTargetType(const std::string& value)
{
    matchTargetType_ = value;
    matchTargetTypeIsSet_ = true;
}

bool CriteriaItem::matchTargetTypeIsSet() const
{
    return matchTargetTypeIsSet_;
}

void CriteriaItem::unsetmatchTargetType()
{
    matchTargetTypeIsSet_ = false;
}

std::string CriteriaItem::getMatchTargetName() const
{
    return matchTargetName_;
}

void CriteriaItem::setMatchTargetName(const std::string& value)
{
    matchTargetName_ = value;
    matchTargetNameIsSet_ = true;
}

bool CriteriaItem::matchTargetNameIsSet() const
{
    return matchTargetNameIsSet_;
}

void CriteriaItem::unsetmatchTargetName()
{
    matchTargetNameIsSet_ = false;
}

std::string CriteriaItem::getMatchType() const
{
    return matchType_;
}

void CriteriaItem::setMatchType(const std::string& value)
{
    matchType_ = value;
    matchTypeIsSet_ = true;
}

bool CriteriaItem::matchTypeIsSet() const
{
    return matchTypeIsSet_;
}

void CriteriaItem::unsetmatchType()
{
    matchTypeIsSet_ = false;
}

std::vector<std::string>& CriteriaItem::getMatchPattern()
{
    return matchPattern_;
}

void CriteriaItem::setMatchPattern(const std::vector<std::string>& value)
{
    matchPattern_ = value;
    matchPatternIsSet_ = true;
}

bool CriteriaItem::matchPatternIsSet() const
{
    return matchPatternIsSet_;
}

void CriteriaItem::unsetmatchPattern()
{
    matchPatternIsSet_ = false;
}

bool CriteriaItem::isNegate() const
{
    return negate_;
}

void CriteriaItem::setNegate(bool value)
{
    negate_ = value;
    negateIsSet_ = true;
}

bool CriteriaItem::negateIsSet() const
{
    return negateIsSet_;
}

void CriteriaItem::unsetnegate()
{
    negateIsSet_ = false;
}

bool CriteriaItem::isCaseSensitive() const
{
    return caseSensitive_;
}

void CriteriaItem::setCaseSensitive(bool value)
{
    caseSensitive_ = value;
    caseSensitiveIsSet_ = true;
}

bool CriteriaItem::caseSensitiveIsSet() const
{
    return caseSensitiveIsSet_;
}

void CriteriaItem::unsetcaseSensitive()
{
    caseSensitiveIsSet_ = false;
}

std::string CriteriaItem::getLogic() const
{
    return logic_;
}

void CriteriaItem::setLogic(const std::string& value)
{
    logic_ = value;
    logicIsSet_ = true;
}

bool CriteriaItem::logicIsSet() const
{
    return logicIsSet_;
}

void CriteriaItem::unsetlogic()
{
    logicIsSet_ = false;
}

std::vector<CriteriaItem>& CriteriaItem::getCriteria()
{
    return *criteria_;
}

void CriteriaItem::setCriteria(const std::vector<CriteriaItem>& value)
{
    *criteria_ = value;
    criteriaIsSet_ = true;
}

bool CriteriaItem::criteriaIsSet() const
{
    return criteriaIsSet_;
}

void CriteriaItem::unsetcriteria()
{
    criteriaIsSet_ = false;
}

}
}
}
}
}


