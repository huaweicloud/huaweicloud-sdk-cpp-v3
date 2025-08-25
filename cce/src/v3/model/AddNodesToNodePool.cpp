

#include "huaweicloud/cce/v3/model/AddNodesToNodePool.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AddNodesToNodePool::AddNodesToNodePool()
{
    serverID_ = "";
    serverIDIsSet_ = false;
}

AddNodesToNodePool::~AddNodesToNodePool() = default;

void AddNodesToNodePool::validate()
{
}

web::json::value AddNodesToNodePool::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIDIsSet_) {
        val[utility::conversions::to_string_t("serverID")] = ModelBase::toJson(serverID_);
    }

    return val;
}
bool AddNodesToNodePool::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("serverID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("serverID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerID(refVal);
        }
    }
    return ok;
}


std::string AddNodesToNodePool::getServerID() const
{
    return serverID_;
}

void AddNodesToNodePool::setServerID(const std::string& value)
{
    serverID_ = value;
    serverIDIsSet_ = true;
}

bool AddNodesToNodePool::serverIDIsSet() const
{
    return serverIDIsSet_;
}

void AddNodesToNodePool::unsetserverID()
{
    serverIDIsSet_ = false;
}

}
}
}
}
}


