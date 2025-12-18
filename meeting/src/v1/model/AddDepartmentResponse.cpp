

#include "huaweicloud/meeting/v1/model/AddDepartmentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




AddDepartmentResponse::AddDepartmentResponse()
{
    value_ = "";
    valueIsSet_ = false;
}

AddDepartmentResponse::~AddDepartmentResponse() = default;

void AddDepartmentResponse::validate()
{
}

web::json::value AddDepartmentResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool AddDepartmentResponse::fromJson(const web::json::value& val)
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


std::string AddDepartmentResponse::getValue() const
{
    return value_;
}

void AddDepartmentResponse::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool AddDepartmentResponse::valueIsSet() const
{
    return valueIsSet_;
}

void AddDepartmentResponse::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


