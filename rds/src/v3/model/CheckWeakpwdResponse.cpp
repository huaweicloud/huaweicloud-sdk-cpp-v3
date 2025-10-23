

#include "huaweicloud/rds/v3/model/CheckWeakpwdResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CheckWeakpwdResponse::CheckWeakpwdResponse()
{
    weak_ = false;
    weakIsSet_ = false;
}

CheckWeakpwdResponse::~CheckWeakpwdResponse() = default;

void CheckWeakpwdResponse::validate()
{
}

web::json::value CheckWeakpwdResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(weakIsSet_) {
        val[utility::conversions::to_string_t("weak")] = ModelBase::toJson(weak_);
    }

    return val;
}
bool CheckWeakpwdResponse::fromJson(const web::json::value& val)
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


bool CheckWeakpwdResponse::isWeak() const
{
    return weak_;
}

void CheckWeakpwdResponse::setWeak(bool value)
{
    weak_ = value;
    weakIsSet_ = true;
}

bool CheckWeakpwdResponse::weakIsSet() const
{
    return weakIsSet_;
}

void CheckWeakpwdResponse::unsetweak()
{
    weakIsSet_ = false;
}

}
}
}
}
}


