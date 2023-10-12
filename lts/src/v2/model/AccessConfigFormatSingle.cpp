

#include "huaweicloud/lts/v2/model/AccessConfigFormatSingle.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




AccessConfigFormatSingle::AccessConfigFormatSingle()
{
    mode_ = "";
    modeIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

AccessConfigFormatSingle::~AccessConfigFormatSingle() = default;

void AccessConfigFormatSingle::validate()
{
}

web::json::value AccessConfigFormatSingle::toJson() const
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
bool AccessConfigFormatSingle::fromJson(const web::json::value& val)
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


std::string AccessConfigFormatSingle::getMode() const
{
    return mode_;
}

void AccessConfigFormatSingle::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool AccessConfigFormatSingle::modeIsSet() const
{
    return modeIsSet_;
}

void AccessConfigFormatSingle::unsetmode()
{
    modeIsSet_ = false;
}

std::string AccessConfigFormatSingle::getValue() const
{
    return value_;
}

void AccessConfigFormatSingle::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool AccessConfigFormatSingle::valueIsSet() const
{
    return valueIsSet_;
}

void AccessConfigFormatSingle::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


