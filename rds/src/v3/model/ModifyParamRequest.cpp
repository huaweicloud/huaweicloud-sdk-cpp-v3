

#include "huaweicloud/rds/v3/model/ModifyParamRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ModifyParamRequest::ModifyParamRequest()
{
    value_ = "";
    valueIsSet_ = false;
}

ModifyParamRequest::~ModifyParamRequest() = default;

void ModifyParamRequest::validate()
{
}

web::json::value ModifyParamRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool ModifyParamRequest::fromJson(const web::json::value& val)
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


std::string ModifyParamRequest::getValue() const
{
    return value_;
}

void ModifyParamRequest::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool ModifyParamRequest::valueIsSet() const
{
    return valueIsSet_;
}

void ModifyParamRequest::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


