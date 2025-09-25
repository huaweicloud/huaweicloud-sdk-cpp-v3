

#include "huaweicloud/codeartspipeline/v2/model/Constraint.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




Constraint::Constraint()
{
    type_ = "";
    typeIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    errormsg_ = "";
    errormsgIsSet_ = false;
}

Constraint::~Constraint() = default;

void Constraint::validate()
{
}

web::json::value Constraint::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(errormsgIsSet_) {
        val[utility::conversions::to_string_t("errormsg")] = ModelBase::toJson(errormsg_);
    }

    return val;
}
bool Constraint::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("errormsg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("errormsg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrormsg(refVal);
        }
    }
    return ok;
}


std::string Constraint::getType() const
{
    return type_;
}

void Constraint::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Constraint::typeIsSet() const
{
    return typeIsSet_;
}

void Constraint::unsettype()
{
    typeIsSet_ = false;
}

std::string Constraint::getValue() const
{
    return value_;
}

void Constraint::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool Constraint::valueIsSet() const
{
    return valueIsSet_;
}

void Constraint::unsetvalue()
{
    valueIsSet_ = false;
}

std::string Constraint::getErrormsg() const
{
    return errormsg_;
}

void Constraint::setErrormsg(const std::string& value)
{
    errormsg_ = value;
    errormsgIsSet_ = true;
}

bool Constraint::errormsgIsSet() const
{
    return errormsgIsSet_;
}

void Constraint::unseterrormsg()
{
    errormsgIsSet_ = false;
}

}
}
}
}
}


