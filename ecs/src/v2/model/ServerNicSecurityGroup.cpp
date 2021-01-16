

#include "huaweicloud/ecs/v2/model/ServerNicSecurityGroup.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ServerNicSecurityGroup::ServerNicSecurityGroup()
{
    id_ = "";
    idIsSet_ = false;
}

ServerNicSecurityGroup::~ServerNicSecurityGroup() = default;

void ServerNicSecurityGroup::validate()
{
}

web::json::value ServerNicSecurityGroup::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}

bool ServerNicSecurityGroup::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    return ok;
}


std::string ServerNicSecurityGroup::getId() const
{
    return id_;
}

void ServerNicSecurityGroup::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ServerNicSecurityGroup::idIsSet() const
{
    return idIsSet_;
}

void ServerNicSecurityGroup::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


