

#include "huaweicloud/identitycenterstore/v1/model/ManagerDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




ManagerDto::ManagerDto()
{
    value_ = "";
    valueIsSet_ = false;
}

ManagerDto::~ManagerDto() = default;

void ManagerDto::validate()
{
}

web::json::value ManagerDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool ManagerDto::fromJson(const web::json::value& val)
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


std::string ManagerDto::getValue() const
{
    return value_;
}

void ManagerDto::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ManagerDto::valueIsSet() const
{
    return valueIsSet_;
}

void ManagerDto::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


