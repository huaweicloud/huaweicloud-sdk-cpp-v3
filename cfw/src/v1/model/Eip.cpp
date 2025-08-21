

#include "huaweicloud/cfw/v1/model/Eip.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




Eip::Eip()
{
    protectedIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

Eip::~Eip() = default;

void Eip::validate()
{
}

web::json::value Eip::toJson() const
{
    web::json::value val = web::json::value::object();

    if(protectedIsSet_) {
        val[utility::conversions::to_string_t("protected")] = ModelBase::toJson(protected_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }

    return val;
}
bool Eip::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("protected"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protected"));
        if(!fieldValue.is_null())
        {
            ChangedVO refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtected(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    return ok;
}


ChangedVO Eip::getProtected() const
{
    return protected_;
}

void Eip::setProtected(const ChangedVO& value)
{
    protected_ = value;
    protectedIsSet_ = true;
}

bool Eip::protectedIsSet() const
{
    return protectedIsSet_;
}

void Eip::unsetprotected()
{
    protectedIsSet_ = false;
}

int32_t Eip::getTotal() const
{
    return total_;
}

void Eip::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool Eip::totalIsSet() const
{
    return totalIsSet_;
}

void Eip::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


