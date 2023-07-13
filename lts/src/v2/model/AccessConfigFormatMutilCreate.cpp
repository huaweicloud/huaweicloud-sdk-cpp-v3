

#include "huaweicloud/lts/v2/model/AccessConfigFormatMutilCreate.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




AccessConfigFormatMutilCreate::AccessConfigFormatMutilCreate()
{
    mode_ = "";
    modeIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

AccessConfigFormatMutilCreate::~AccessConfigFormatMutilCreate() = default;

void AccessConfigFormatMutilCreate::validate()
{
}

web::json::value AccessConfigFormatMutilCreate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(modeIsSet_) {
        val[utility::conversions::to_string_t("mode")] = ModelBase::toJson(mode_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}

bool AccessConfigFormatMutilCreate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMode(refVal);
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

std::string AccessConfigFormatMutilCreate::getMode() const
{
    return mode_;
}

void AccessConfigFormatMutilCreate::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool AccessConfigFormatMutilCreate::modeIsSet() const
{
    return modeIsSet_;
}

void AccessConfigFormatMutilCreate::unsetmode()
{
    modeIsSet_ = false;
}

std::string AccessConfigFormatMutilCreate::getValue() const
{
    return value_;
}

void AccessConfigFormatMutilCreate::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool AccessConfigFormatMutilCreate::valueIsSet() const
{
    return valueIsSet_;
}

void AccessConfigFormatMutilCreate::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


