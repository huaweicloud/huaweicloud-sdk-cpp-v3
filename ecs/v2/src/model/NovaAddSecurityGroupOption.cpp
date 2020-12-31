

#include "huaweicloud/ecs/model/NovaAddSecurityGroupOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaAddSecurityGroupOption::NovaAddSecurityGroupOption()
{
    name_ = "";
    nameIsSet_ = false;
}

NovaAddSecurityGroupOption::~NovaAddSecurityGroupOption() = default;

void NovaAddSecurityGroupOption::validate()
{
}

web::json::value NovaAddSecurityGroupOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}

bool NovaAddSecurityGroupOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    return ok;
}


std::string NovaAddSecurityGroupOption::getName() const
{
    return name_;
}

void NovaAddSecurityGroupOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NovaAddSecurityGroupOption::nameIsSet() const
{
    return nameIsSet_;
}

void NovaAddSecurityGroupOption::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


