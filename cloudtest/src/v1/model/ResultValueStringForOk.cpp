

#include "huaweicloud/cloudtest/v1/model/ResultValueStringForOk.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ResultValueStringForOk::ResultValueStringForOk()
{
    value_ = "";
    valueIsSet_ = false;
}

ResultValueStringForOk::~ResultValueStringForOk() = default;

void ResultValueStringForOk::validate()
{
}

web::json::value ResultValueStringForOk::toJson() const
{
    web::json::value val = web::json::value::object();

    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool ResultValueStringForOk::fromJson(const web::json::value& val)
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


std::string ResultValueStringForOk::getValue() const
{
    return value_;
}

void ResultValueStringForOk::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ResultValueStringForOk::valueIsSet() const
{
    return valueIsSet_;
}

void ResultValueStringForOk::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


