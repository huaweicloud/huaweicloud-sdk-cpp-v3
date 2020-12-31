

#include "huaweicloud/ecs/model/DeleteServerGroupRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




DeleteServerGroupRequest::DeleteServerGroupRequest()
{
    serverGroupId_ = "";
    serverGroupIdIsSet_ = false;
}

DeleteServerGroupRequest::~DeleteServerGroupRequest() = default;

void DeleteServerGroupRequest::validate()
{
}

web::json::value DeleteServerGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverGroupIdIsSet_) {
        val[utility::conversions::to_string_t("server_group_id")] = ModelBase::toJson(serverGroupId_);
    }

    return val;
}

bool DeleteServerGroupRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerGroupId(refVal);
        }
    }
    return ok;
}


std::string DeleteServerGroupRequest::getServerGroupId() const
{
    return serverGroupId_;
}

void DeleteServerGroupRequest::setServerGroupId(const std::string& value)
{
    serverGroupId_ = value;
    serverGroupIdIsSet_ = true;
}

bool DeleteServerGroupRequest::serverGroupIdIsSet() const
{
    return serverGroupIdIsSet_;
}

void DeleteServerGroupRequest::unsetserverGroupId()
{
    serverGroupIdIsSet_ = false;
}

}
}
}
}
}


