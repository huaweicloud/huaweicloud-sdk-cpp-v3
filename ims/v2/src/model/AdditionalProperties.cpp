

#include "huaweicloud/ims/model/AdditionalProperties.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ims {
namespace V2 {
namespace Model {




AdditionalProperties::AdditionalProperties()
{
    type_ = "";
    typeIsSet_ = false;
}

AdditionalProperties::~AdditionalProperties() = default;

void AdditionalProperties::validate()
{
}

web::json::value AdditionalProperties::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}

bool AdditionalProperties::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string AdditionalProperties::getType() const
{
    return type_;
}

void AdditionalProperties::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool AdditionalProperties::typeIsSet() const
{
    return typeIsSet_;
}

void AdditionalProperties::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


