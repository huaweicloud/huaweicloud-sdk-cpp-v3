

#include "huaweicloud/cfw/v1/model/ChangedVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




ChangedVO::ChangedVO()
{
    changed_ = 0;
    changedIsSet_ = false;
    total_ = 0;
    totalIsSet_ = false;
    value_ = 0;
    valueIsSet_ = false;
}

ChangedVO::~ChangedVO() = default;

void ChangedVO::validate()
{
}

web::json::value ChangedVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(changedIsSet_) {
        val[utility::conversions::to_string_t("changed")] = ModelBase::toJson(changed_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool ChangedVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("changed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("changed"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChanged(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


int32_t ChangedVO::getChanged() const
{
    return changed_;
}

void ChangedVO::setChanged(int32_t value)
{
    changed_ = value;
    changedIsSet_ = true;
}

bool ChangedVO::changedIsSet() const
{
    return changedIsSet_;
}

void ChangedVO::unsetchanged()
{
    changedIsSet_ = false;
}

int32_t ChangedVO::getTotal() const
{
    return total_;
}

void ChangedVO::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ChangedVO::totalIsSet() const
{
    return totalIsSet_;
}

void ChangedVO::unsettotal()
{
    totalIsSet_ = false;
}

int32_t ChangedVO::getValue() const
{
    return value_;
}

void ChangedVO::setValue(int32_t value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ChangedVO::valueIsSet() const
{
    return valueIsSet_;
}

void ChangedVO::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


