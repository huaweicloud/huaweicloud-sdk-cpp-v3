

#include "huaweicloud/evs/v2/model/Bss_param2.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




Bss_param2::Bss_param2()
{
    isAutoPay_ = false;
    isAutoPayIsSet_ = false;
}

Bss_param2::~Bss_param2() = default;

void Bss_param2::validate()
{
}

web::json::value Bss_param2::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isAutoPayIsSet_) {
        val[utility::conversions::to_string_t("is_auto_pay")] = ModelBase::toJson(isAutoPay_);
    }

    return val;
}
bool Bss_param2::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_auto_pay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_auto_pay"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsAutoPay(refVal);
        }
    }
    return ok;
}


bool Bss_param2::isIsAutoPay() const
{
    return isAutoPay_;
}

void Bss_param2::setIsAutoPay(bool value)
{
    isAutoPay_ = value;
    isAutoPayIsSet_ = true;
}

bool Bss_param2::isAutoPayIsSet() const
{
    return isAutoPayIsSet_;
}

void Bss_param2::unsetisAutoPay()
{
    isAutoPayIsSet_ = false;
}

}
}
}
}
}


