

#include "huaweicloud/ecs/v2/model/ServerGroupMember.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ServerGroupMember::ServerGroupMember()
{
    instanceUuid_ = "";
    instanceUuidIsSet_ = false;
}

ServerGroupMember::~ServerGroupMember() = default;

void ServerGroupMember::validate()
{
}

web::json::value ServerGroupMember::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceUuidIsSet_) {
        val[utility::conversions::to_string_t("instance_uuid")] = ModelBase::toJson(instanceUuid_);
    }

    return val;
}

bool ServerGroupMember::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceUuid(refVal);
        }
    }
    return ok;
}

std::string ServerGroupMember::getInstanceUuid() const
{
    return instanceUuid_;
}

void ServerGroupMember::setInstanceUuid(const std::string& value)
{
    instanceUuid_ = value;
    instanceUuidIsSet_ = true;
}

bool ServerGroupMember::instanceUuidIsSet() const
{
    return instanceUuidIsSet_;
}

void ServerGroupMember::unsetinstanceUuid()
{
    instanceUuidIsSet_ = false;
}

}
}
}
}
}


