

#include "huaweicloud/codeartscheck/v2/model/CustomAttributes.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




CustomAttributes::CustomAttributes()
{
    attribute_ = "";
    attributeIsSet_ = false;
    rulesIsSet_ = false;
}

CustomAttributes::~CustomAttributes() = default;

void CustomAttributes::validate()
{
}

web::json::value CustomAttributes::toJson() const
{
    web::json::value val = web::json::value::object();

    if(attributeIsSet_) {
        val[utility::conversions::to_string_t("attribute")] = ModelBase::toJson(attribute_);
    }
    if(rulesIsSet_) {
        val[utility::conversions::to_string_t("rules")] = ModelBase::toJson(rules_);
    }

    return val;
}
bool CustomAttributes::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("attribute"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("attribute"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAttribute(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rules"));
        if(!fieldValue.is_null())
        {
            std::vector<CustomAttributesRule> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRules(refVal);
        }
    }
    return ok;
}


std::string CustomAttributes::getAttribute() const
{
    return attribute_;
}

void CustomAttributes::setAttribute(const std::string& value)
{
    attribute_ = value;
    attributeIsSet_ = true;
}

bool CustomAttributes::attributeIsSet() const
{
    return attributeIsSet_;
}

void CustomAttributes::unsetattribute()
{
    attributeIsSet_ = false;
}

std::vector<CustomAttributesRule>& CustomAttributes::getRules()
{
    return rules_;
}

void CustomAttributes::setRules(const std::vector<CustomAttributesRule>& value)
{
    rules_ = value;
    rulesIsSet_ = true;
}

bool CustomAttributes::rulesIsSet() const
{
    return rulesIsSet_;
}

void CustomAttributes::unsetrules()
{
    rulesIsSet_ = false;
}

}
}
}
}
}


