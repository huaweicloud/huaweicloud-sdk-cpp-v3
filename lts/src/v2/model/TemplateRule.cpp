

#include "huaweicloud/lts/v2/model/TemplateRule.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




TemplateRule::TemplateRule()
{
    type_ = "";
    typeIsSet_ = false;
    param_ = "";
    paramIsSet_ = false;
}

TemplateRule::~TemplateRule() = default;

void TemplateRule::validate()
{
}

web::json::value TemplateRule::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(paramIsSet_) {
        val[utility::conversions::to_string_t("param")] = ModelBase::toJson(param_);
    }

    return val;
}

bool TemplateRule::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("param"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("param"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParam(refVal);
        }
    }
    return ok;
}

std::string TemplateRule::getType() const
{
    return type_;
}

void TemplateRule::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool TemplateRule::typeIsSet() const
{
    return typeIsSet_;
}

void TemplateRule::unsettype()
{
    typeIsSet_ = false;
}

std::string TemplateRule::getParam() const
{
    return param_;
}

void TemplateRule::setParam(const std::string& value)
{
    param_ = value;
    paramIsSet_ = true;
}

bool TemplateRule::paramIsSet() const
{
    return paramIsSet_;
}

void TemplateRule::unsetparam()
{
    paramIsSet_ = false;
}

}
}
}
}
}


