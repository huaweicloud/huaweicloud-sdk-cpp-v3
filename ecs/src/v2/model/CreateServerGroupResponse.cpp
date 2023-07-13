

#include "huaweicloud/ecs/v2/model/CreateServerGroupResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




CreateServerGroupResponse::CreateServerGroupResponse()
{
    serverGroupIsSet_ = false;
}

CreateServerGroupResponse::~CreateServerGroupResponse() = default;

void CreateServerGroupResponse::validate()
{
}

web::json::value CreateServerGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverGroupIsSet_) {
        val[utility::conversions::to_string_t("server_group")] = ModelBase::toJson(serverGroup_);
    }

    return val;
}

bool CreateServerGroupResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_group"));
        if(!fieldValue.is_null())
        {
            CreateServerGroupResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerGroup(refVal);
        }
    }
    return ok;
}

CreateServerGroupResult CreateServerGroupResponse::getServerGroup() const
{
    return serverGroup_;
}

void CreateServerGroupResponse::setServerGroup(const CreateServerGroupResult& value)
{
    serverGroup_ = value;
    serverGroupIsSet_ = true;
}

bool CreateServerGroupResponse::serverGroupIsSet() const
{
    return serverGroupIsSet_;
}

void CreateServerGroupResponse::unsetserverGroup()
{
    serverGroupIsSet_ = false;
}

}
}
}
}
}


