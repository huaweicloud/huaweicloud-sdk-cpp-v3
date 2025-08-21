

#include "huaweicloud/cfw/v1/model/Vpc.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




Vpc::Vpc()
{
    protectedIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
}

Vpc::~Vpc() = default;

void Vpc::validate()
{
}

web::json::value Vpc::toJson() const
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
bool Vpc::fromJson(const web::json::value& val)
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


ChangedVO Vpc::getProtected() const
{
    return protected_;
}

void Vpc::setProtected(const ChangedVO& value)
{
    protected_ = value;
    protectedIsSet_ = true;
}

bool Vpc::protectedIsSet() const
{
    return protectedIsSet_;
}

void Vpc::unsetprotected()
{
    protectedIsSet_ = false;
}

int32_t Vpc::getTotal() const
{
    return total_;
}

void Vpc::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool Vpc::totalIsSet() const
{
    return totalIsSet_;
}

void Vpc::unsettotal()
{
    totalIsSet_ = false;
}

}
}
}
}
}


