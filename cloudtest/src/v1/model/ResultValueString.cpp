

#include "huaweicloud/cloudtest/v1/model/ResultValueString.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ResultValueString::ResultValueString()
{
    value_ = "";
    valueIsSet_ = false;
}

ResultValueString::~ResultValueString() = default;

void ResultValueString::validate()
{
}

web::json::value ResultValueString::toJson() const
{
    web::json::value val = web::json::value::object();

    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool ResultValueString::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string ResultValueString::getValue() const
{
    return value_;
}

void ResultValueString::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ResultValueString::valueIsSet() const
{
    return valueIsSet_;
}

void ResultValueString::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


