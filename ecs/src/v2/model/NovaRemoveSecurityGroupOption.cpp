

#include "huaweicloud/ecs/v2/model/NovaRemoveSecurityGroupOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaRemoveSecurityGroupOption::NovaRemoveSecurityGroupOption()
{
    name_ = "";
    nameIsSet_ = false;
}

NovaRemoveSecurityGroupOption::~NovaRemoveSecurityGroupOption() = default;

void NovaRemoveSecurityGroupOption::validate()
{
}

web::json::value NovaRemoveSecurityGroupOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}

bool NovaRemoveSecurityGroupOption::fromJson(const web::json::value& val)
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


std::string NovaRemoveSecurityGroupOption::getName() const
{
    return name_;
}

void NovaRemoveSecurityGroupOption::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NovaRemoveSecurityGroupOption::nameIsSet() const
{
    return nameIsSet_;
}

void NovaRemoveSecurityGroupOption::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


