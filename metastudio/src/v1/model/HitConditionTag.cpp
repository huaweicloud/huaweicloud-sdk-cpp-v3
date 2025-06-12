

#include "huaweicloud/metastudio/v1/model/HitConditionTag.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




HitConditionTag::HitConditionTag()
{
    tag_ = "";
    tagIsSet_ = false;
    operation_ = "";
    operationIsSet_ = false;
    match_ = "";
    matchIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

HitConditionTag::~HitConditionTag() = default;

void HitConditionTag::validate()
{
}

web::json::value HitConditionTag::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tagIsSet_) {
        val[utility::conversions::to_string_t("tag")] = ModelBase::toJson(tag_);
    }
    if(operationIsSet_) {
        val[utility::conversions::to_string_t("operation")] = ModelBase::toJson(operation_);
    }
    if(matchIsSet_) {
        val[utility::conversions::to_string_t("match")] = ModelBase::toJson(match_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool HitConditionTag::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("operation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("operation"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOperation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("match"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("match"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMatch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string HitConditionTag::getTag() const
{
    return tag_;
}

void HitConditionTag::setTag(const std::string& value)
{
    tag_ = value;
    tagIsSet_ = true;
}

bool HitConditionTag::tagIsSet() const
{
    return tagIsSet_;
}

void HitConditionTag::unsettag()
{
    tagIsSet_ = false;
}

std::string HitConditionTag::getOperation() const
{
    return operation_;
}

void HitConditionTag::setOperation(const std::string& value)
{
    operation_ = value;
    operationIsSet_ = true;
}

bool HitConditionTag::operationIsSet() const
{
    return operationIsSet_;
}

void HitConditionTag::unsetoperation()
{
    operationIsSet_ = false;
}

std::string HitConditionTag::getMatch() const
{
    return match_;
}

void HitConditionTag::setMatch(const std::string& value)
{
    match_ = value;
    matchIsSet_ = true;
}

bool HitConditionTag::matchIsSet() const
{
    return matchIsSet_;
}

void HitConditionTag::unsetmatch()
{
    matchIsSet_ = false;
}

std::string HitConditionTag::getValue() const
{
    return value_;
}

void HitConditionTag::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool HitConditionTag::valueIsSet() const
{
    return valueIsSet_;
}

void HitConditionTag::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


