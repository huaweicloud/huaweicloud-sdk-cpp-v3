

#include "huaweicloud/projectman/v4/model/FieldCodeValuePair.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




FieldCodeValuePair::FieldCodeValuePair()
{
    code_ = "";
    codeIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

FieldCodeValuePair::~FieldCodeValuePair() = default;

void FieldCodeValuePair::validate()
{
}

web::json::value FieldCodeValuePair::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool FieldCodeValuePair::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
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


std::string FieldCodeValuePair::getCode() const
{
    return code_;
}

void FieldCodeValuePair::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool FieldCodeValuePair::codeIsSet() const
{
    return codeIsSet_;
}

void FieldCodeValuePair::unsetcode()
{
    codeIsSet_ = false;
}

std::string FieldCodeValuePair::getValue() const
{
    return value_;
}

void FieldCodeValuePair::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool FieldCodeValuePair::valueIsSet() const
{
    return valueIsSet_;
}

void FieldCodeValuePair::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


