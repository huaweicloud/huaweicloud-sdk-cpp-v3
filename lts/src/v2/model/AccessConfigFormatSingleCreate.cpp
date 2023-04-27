

#include "huaweicloud/lts/v2/model/AccessConfigFormatSingleCreate.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




AccessConfigFormatSingleCreate::AccessConfigFormatSingleCreate()
{
    mode_ = "";
    modeIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

AccessConfigFormatSingleCreate::~AccessConfigFormatSingleCreate() = default;

void AccessConfigFormatSingleCreate::validate()
{
}

web::json::value AccessConfigFormatSingleCreate::toJson() const
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

bool AccessConfigFormatSingleCreate::fromJson(const web::json::value& val)
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


std::string AccessConfigFormatSingleCreate::getMode() const
{
    return mode_;
}

void AccessConfigFormatSingleCreate::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool AccessConfigFormatSingleCreate::modeIsSet() const
{
    return modeIsSet_;
}

void AccessConfigFormatSingleCreate::unsetmode()
{
    modeIsSet_ = false;
}

std::string AccessConfigFormatSingleCreate::getValue() const
{
    return value_;
}

void AccessConfigFormatSingleCreate::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool AccessConfigFormatSingleCreate::valueIsSet() const
{
    return valueIsSet_;
}

void AccessConfigFormatSingleCreate::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


