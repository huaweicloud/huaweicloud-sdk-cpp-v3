

#include "huaweicloud/dds/v3/model/CheckWeakPasswordResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




CheckWeakPasswordResponse::CheckWeakPasswordResponse()
{
    weak_ = false;
    weakIsSet_ = false;
}

CheckWeakPasswordResponse::~CheckWeakPasswordResponse() = default;

void CheckWeakPasswordResponse::validate()
{
}

web::json::value CheckWeakPasswordResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(weakIsSet_) {
        val[utility::conversions::to_string_t("weak")] = ModelBase::toJson(weak_);
    }

    return val;
}

bool CheckWeakPasswordResponse::fromJson(const web::json::value& val)
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

bool CheckWeakPasswordResponse::isWeak() const
{
    return weak_;
}

void CheckWeakPasswordResponse::setWeak(bool value)
{
    weak_ = value;
    weakIsSet_ = true;
}

bool CheckWeakPasswordResponse::weakIsSet() const
{
    return weakIsSet_;
}

void CheckWeakPasswordResponse::unsetweak()
{
    weakIsSet_ = false;
}

}
}
}
}
}


