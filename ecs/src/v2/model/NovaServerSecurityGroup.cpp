

#include "huaweicloud/ecs/v2/model/NovaServerSecurityGroup.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaServerSecurityGroup::NovaServerSecurityGroup()
{
    name_ = "";
    nameIsSet_ = false;
}

NovaServerSecurityGroup::~NovaServerSecurityGroup() = default;

void NovaServerSecurityGroup::validate()
{
}

web::json::value NovaServerSecurityGroup::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool NovaServerSecurityGroup::fromJson(const web::json::value& val)
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


std::string NovaServerSecurityGroup::getName() const
{
    return name_;
}

void NovaServerSecurityGroup::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NovaServerSecurityGroup::nameIsSet() const
{
    return nameIsSet_;
}

void NovaServerSecurityGroup::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


