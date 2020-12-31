

#include "huaweicloud/ecs/model/CreateServerGroupRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




CreateServerGroupRequestBody::CreateServerGroupRequestBody()
{
    serverGroupIsSet_ = false;
}

CreateServerGroupRequestBody::~CreateServerGroupRequestBody() = default;

void CreateServerGroupRequestBody::validate()
{
}

web::json::value CreateServerGroupRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverGroupIsSet_) {
        val[utility::conversions::to_string_t("server_group")] = ModelBase::toJson(serverGroup_);
    }

    return val;
}

bool CreateServerGroupRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_group"));
        if(!fieldValue.is_null())
        {
            CreateServerGroupOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerGroup(refVal);
        }
    }
    return ok;
}


CreateServerGroupOption CreateServerGroupRequestBody::getServerGroup() const
{
    return serverGroup_;
}

void CreateServerGroupRequestBody::setServerGroup(const CreateServerGroupOption& value)
{
    serverGroup_ = value;
    serverGroupIsSet_ = true;
}

bool CreateServerGroupRequestBody::serverGroupIsSet() const
{
    return serverGroupIsSet_;
}

void CreateServerGroupRequestBody::unsetserverGroup()
{
    serverGroupIsSet_ = false;
}

}
}
}
}
}


