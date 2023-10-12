

#include "huaweicloud/lts/v2/model/ShowStructTemplateRule.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ShowStructTemplateRule::ShowStructTemplateRule()
{
    param_ = "";
    paramIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

ShowStructTemplateRule::~ShowStructTemplateRule() = default;

void ShowStructTemplateRule::validate()
{
}

web::json::value ShowStructTemplateRule::toJson() const
{
    web::json::value val = web::json::value::object();

    if(paramIsSet_) {
        val[utility::conversions::to_string_t("param")] = ModelBase::toJson(param_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool ShowStructTemplateRule::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("param"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("param"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParam(refVal);
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
    return ok;
}


std::string ShowStructTemplateRule::getParam() const
{
    return param_;
}

void ShowStructTemplateRule::setParam(const std::string& value)
{
    param_ = value;
    paramIsSet_ = true;
}

bool ShowStructTemplateRule::paramIsSet() const
{
    return paramIsSet_;
}

void ShowStructTemplateRule::unsetparam()
{
    paramIsSet_ = false;
}

std::string ShowStructTemplateRule::getType() const
{
    return type_;
}

void ShowStructTemplateRule::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowStructTemplateRule::typeIsSet() const
{
    return typeIsSet_;
}

void ShowStructTemplateRule::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


