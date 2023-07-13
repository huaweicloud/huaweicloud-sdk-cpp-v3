

#include "huaweicloud/ecs/v2/model/ShowServerGroupResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ShowServerGroupResponse::ShowServerGroupResponse()
{
    serverGroupIsSet_ = false;
}

ShowServerGroupResponse::~ShowServerGroupResponse() = default;

void ShowServerGroupResponse::validate()
{
}

web::json::value ShowServerGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverGroupIsSet_) {
        val[utility::conversions::to_string_t("server_group")] = ModelBase::toJson(serverGroup_);
    }

    return val;
}

bool ShowServerGroupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_group"));
        if(!fieldValue.is_null())
        {
            ShowServerGroupResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerGroup(refVal);
        }
    }
    return ok;
}

ShowServerGroupResult ShowServerGroupResponse::getServerGroup() const
{
    return serverGroup_;
}

void ShowServerGroupResponse::setServerGroup(const ShowServerGroupResult& value)
{
    serverGroup_ = value;
    serverGroupIsSet_ = true;
}

bool ShowServerGroupResponse::serverGroupIsSet() const
{
    return serverGroupIsSet_;
}

void ShowServerGroupResponse::unsetserverGroup()
{
    serverGroupIsSet_ = false;
}

}
}
}
}
}


