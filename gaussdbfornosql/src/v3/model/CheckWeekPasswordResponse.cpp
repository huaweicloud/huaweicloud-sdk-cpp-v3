

#include "huaweicloud/gaussdbfornosql/v3/model/CheckWeekPasswordResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




CheckWeekPasswordResponse::CheckWeekPasswordResponse()
{
    weak_ = false;
    weakIsSet_ = false;
}

CheckWeekPasswordResponse::~CheckWeekPasswordResponse() = default;

void CheckWeekPasswordResponse::validate()
{
}

web::json::value CheckWeekPasswordResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(weakIsSet_) {
        val[utility::conversions::to_string_t("weak")] = ModelBase::toJson(weak_);
    }

    return val;
}

bool CheckWeekPasswordResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("weak"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("weak"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWeak(refVal);
        }
    }
    return ok;
}

bool CheckWeekPasswordResponse::isWeak() const
{
    return weak_;
}

void CheckWeekPasswordResponse::setWeak(bool value)
{
    weak_ = value;
    weakIsSet_ = true;
}

bool CheckWeekPasswordResponse::weakIsSet() const
{
    return weakIsSet_;
}

void CheckWeekPasswordResponse::unsetweak()
{
    weakIsSet_ = false;
}

}
}
}
}
}


