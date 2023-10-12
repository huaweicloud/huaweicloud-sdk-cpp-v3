

#include "huaweicloud/live/v2/model/TranscodeSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




TranscodeSpec::TranscodeSpec()
{
    type_ = "";
    typeIsSet_ = false;
    value_ = 0.0;
    valueIsSet_ = false;
}

TranscodeSpec::~TranscodeSpec() = default;

void TranscodeSpec::validate()
{
}

web::json::value TranscodeSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool TranscodeSpec::fromJson(const web::json::value& val)
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
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string TranscodeSpec::getType() const
{
    return type_;
}

void TranscodeSpec::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool TranscodeSpec::typeIsSet() const
{
    return typeIsSet_;
}

void TranscodeSpec::unsettype()
{
    typeIsSet_ = false;
}

double TranscodeSpec::getValue() const
{
    return value_;
}

void TranscodeSpec::setValue(double value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool TranscodeSpec::valueIsSet() const
{
    return valueIsSet_;
}

void TranscodeSpec::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


