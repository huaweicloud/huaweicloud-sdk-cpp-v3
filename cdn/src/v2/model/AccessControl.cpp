

#include "huaweicloud/cdn/v2/model/AccessControl.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




AccessControl::AccessControl()
{
    type_ = "";
    typeIsSet_ = false;
}

AccessControl::~AccessControl() = default;

void AccessControl::validate()
{
}

web::json::value AccessControl::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool AccessControl::fromJson(const web::json::value& val)
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


std::string AccessControl::getType() const
{
    return type_;
}

void AccessControl::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool AccessControl::typeIsSet() const
{
    return typeIsSet_;
}

void AccessControl::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


