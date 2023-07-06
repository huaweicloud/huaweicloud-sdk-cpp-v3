

#include "huaweicloud/lts/v2/model/Rule.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




Rule::Rule()
{
    type_ = "";
    typeIsSet_ = false;
    param_ = "";
    paramIsSet_ = false;
}

Rule::~Rule() = default;

void Rule::validate()
{
}

web::json::value Rule::toJson() const
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

bool Rule::fromJson(const web::json::value& val)
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

std::string Rule::getType() const
{
    return type_;
}

void Rule::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Rule::typeIsSet() const
{
    return typeIsSet_;
}

void Rule::unsettype()
{
    typeIsSet_ = false;
}

std::string Rule::getParam() const
{
    return param_;
}

void Rule::setParam(const std::string& value)
{
    param_ = value;
    paramIsSet_ = true;
}

bool Rule::paramIsSet() const
{
    return paramIsSet_;
}

void Rule::unsetparam()
{
    paramIsSet_ = false;
}

}
}
}
}
}


