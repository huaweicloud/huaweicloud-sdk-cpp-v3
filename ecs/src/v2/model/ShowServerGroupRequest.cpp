

#include "huaweicloud/ecs/v2/model/ShowServerGroupRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ShowServerGroupRequest::ShowServerGroupRequest()
{
    serverGroupId_ = "";
    serverGroupIdIsSet_ = false;
}

ShowServerGroupRequest::~ShowServerGroupRequest() = default;

void ShowServerGroupRequest::validate()
{
}

web::json::value ShowServerGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverGroupIdIsSet_) {
        val[utility::conversions::to_string_t("server_group_id")] = ModelBase::toJson(serverGroupId_);
    }

    return val;
}

bool ShowServerGroupRequest::fromJson(const web::json::value& val)
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


std::string ShowServerGroupRequest::getServerGroupId() const
{
    return serverGroupId_;
}

void ShowServerGroupRequest::setServerGroupId(const std::string& value)
{
    serverGroupId_ = value;
    serverGroupIdIsSet_ = true;
}

bool ShowServerGroupRequest::serverGroupIdIsSet() const
{
    return serverGroupIdIsSet_;
}

void ShowServerGroupRequest::unsetserverGroupId()
{
    serverGroupIdIsSet_ = false;
}

}
}
}
}
}


