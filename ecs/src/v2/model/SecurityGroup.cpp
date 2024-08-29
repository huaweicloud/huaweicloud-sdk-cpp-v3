

#include "huaweicloud/ecs/v2/model/SecurityGroup.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




SecurityGroup::SecurityGroup()
{
    name_ = "";
    nameIsSet_ = false;
}

SecurityGroup::~SecurityGroup() = default;

void SecurityGroup::validate()
{
}

web::json::value SecurityGroup::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool SecurityGroup::fromJson(const web::json::value& val)
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


std::string SecurityGroup::getName() const
{
    return name_;
}

void SecurityGroup::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SecurityGroup::nameIsSet() const
{
    return nameIsSet_;
}

void SecurityGroup::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


