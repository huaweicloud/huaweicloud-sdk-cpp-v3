

#include "huaweicloud/codeartsbuild/v3/model/Constraints.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




Constraints::Constraints()
{
    errormsg_ = "";
    errormsgIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

Constraints::~Constraints() = default;

void Constraints::validate()
{
}

web::json::value Constraints::toJson() const
{
    web::json::value val = web::json::value::object();

    if(errormsgIsSet_) {
        val[utility::conversions::to_string_t("errormsg")] = ModelBase::toJson(errormsg_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool Constraints::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("errormsg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("errormsg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrormsg(refVal);
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


std::string Constraints::getErrormsg() const
{
    return errormsg_;
}

void Constraints::setErrormsg(const std::string& value)
{
    errormsg_ = value;
    errormsgIsSet_ = true;
}

bool Constraints::errormsgIsSet() const
{
    return errormsgIsSet_;
}

void Constraints::unseterrormsg()
{
    errormsgIsSet_ = false;
}

std::string Constraints::getType() const
{
    return type_;
}

void Constraints::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Constraints::typeIsSet() const
{
    return typeIsSet_;
}

void Constraints::unsettype()
{
    typeIsSet_ = false;
}

std::string Constraints::getValue() const
{
    return value_;
}

void Constraints::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool Constraints::valueIsSet() const
{
    return valueIsSet_;
}

void Constraints::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


