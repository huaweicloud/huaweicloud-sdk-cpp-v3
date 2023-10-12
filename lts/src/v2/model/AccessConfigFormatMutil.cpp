

#include "huaweicloud/lts/v2/model/AccessConfigFormatMutil.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




AccessConfigFormatMutil::AccessConfigFormatMutil()
{
    mode_ = "";
    modeIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

AccessConfigFormatMutil::~AccessConfigFormatMutil() = default;

void AccessConfigFormatMutil::validate()
{
}

web::json::value AccessConfigFormatMutil::toJson() const
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
bool AccessConfigFormatMutil::fromJson(const web::json::value& val)
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


std::string AccessConfigFormatMutil::getMode() const
{
    return mode_;
}

void AccessConfigFormatMutil::setMode(const std::string& value)
{
    mode_ = value;
    modeIsSet_ = true;
}

bool AccessConfigFormatMutil::modeIsSet() const
{
    return modeIsSet_;
}

void AccessConfigFormatMutil::unsetmode()
{
    modeIsSet_ = false;
}

std::string AccessConfigFormatMutil::getValue() const
{
    return value_;
}

void AccessConfigFormatMutil::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool AccessConfigFormatMutil::valueIsSet() const
{
    return valueIsSet_;
}

void AccessConfigFormatMutil::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


