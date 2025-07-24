

#include "huaweicloud/cloudtest/v1/model/ResultValueBoolean.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ResultValueBoolean::ResultValueBoolean()
{
    value_ = false;
    valueIsSet_ = false;
}

ResultValueBoolean::~ResultValueBoolean() = default;

void ResultValueBoolean::validate()
{
}

web::json::value ResultValueBoolean::toJson() const
{
    web::json::value val = web::json::value::object();

    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool ResultValueBoolean::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


bool ResultValueBoolean::isValue() const
{
    return value_;
}

void ResultValueBoolean::setValue(bool value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ResultValueBoolean::valueIsSet() const
{
    return valueIsSet_;
}

void ResultValueBoolean::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


