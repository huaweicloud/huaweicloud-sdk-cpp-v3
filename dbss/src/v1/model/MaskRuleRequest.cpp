

#include "huaweicloud/dbss/v1/model/MaskRuleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




MaskRuleRequest::MaskRuleRequest()
{
    maskRegex_ = "";
    maskRegexIsSet_ = false;
    maskValue_ = "";
    maskValueIsSet_ = false;
    ruleName_ = "";
    ruleNameIsSet_ = false;
}

MaskRuleRequest::~MaskRuleRequest() = default;

void MaskRuleRequest::validate()
{
}

web::json::value MaskRuleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(maskRegexIsSet_) {
        val[utility::conversions::to_string_t("mask_regex")] = ModelBase::toJson(maskRegex_);
    }
    if(maskValueIsSet_) {
        val[utility::conversions::to_string_t("mask_value")] = ModelBase::toJson(maskValue_);
    }
    if(ruleNameIsSet_) {
        val[utility::conversions::to_string_t("rule_name")] = ModelBase::toJson(ruleName_);
    }

    return val;
}
bool MaskRuleRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("mask_regex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mask_regex"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaskRegex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mask_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mask_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaskValue(refVal);
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
    return ok;
}


std::string MaskRuleRequest::getMaskRegex() const
{
    return maskRegex_;
}

void MaskRuleRequest::setMaskRegex(const std::string& value)
{
    maskRegex_ = value;
    maskRegexIsSet_ = true;
}

bool MaskRuleRequest::maskRegexIsSet() const
{
    return maskRegexIsSet_;
}

void MaskRuleRequest::unsetmaskRegex()
{
    maskRegexIsSet_ = false;
}

std::string MaskRuleRequest::getMaskValue() const
{
    return maskValue_;
}

void MaskRuleRequest::setMaskValue(const std::string& value)
{
    maskValue_ = value;
    maskValueIsSet_ = true;
}

bool MaskRuleRequest::maskValueIsSet() const
{
    return maskValueIsSet_;
}

void MaskRuleRequest::unsetmaskValue()
{
    maskValueIsSet_ = false;
}

std::string MaskRuleRequest::getRuleName() const
{
    return ruleName_;
}

void MaskRuleRequest::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool MaskRuleRequest::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void MaskRuleRequest::unsetruleName()
{
    ruleNameIsSet_ = false;
}

}
}
}
}
}


