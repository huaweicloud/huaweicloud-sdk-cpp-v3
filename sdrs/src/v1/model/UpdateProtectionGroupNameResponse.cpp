

#include "huaweicloud/sdrs/v1/model/UpdateProtectionGroupNameResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




UpdateProtectionGroupNameResponse::UpdateProtectionGroupNameResponse()
{
    serverGroupIsSet_ = false;
}

UpdateProtectionGroupNameResponse::~UpdateProtectionGroupNameResponse() = default;

void UpdateProtectionGroupNameResponse::validate()
{
}

web::json::value UpdateProtectionGroupNameResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverGroupIsSet_) {
        val[utility::conversions::to_string_t("server_group")] = ModelBase::toJson(serverGroup_);
    }

    return val;
}
bool UpdateProtectionGroupNameResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_group"));
        if(!fieldValue.is_null())
        {
            ShowProtectionGroupParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerGroup(refVal);
        }
    }
    return ok;
}


ShowProtectionGroupParams UpdateProtectionGroupNameResponse::getServerGroup() const
{
    return serverGroup_;
}

void UpdateProtectionGroupNameResponse::setServerGroup(const ShowProtectionGroupParams& value)
{
    serverGroup_ = value;
    serverGroupIsSet_ = true;
}

bool UpdateProtectionGroupNameResponse::serverGroupIsSet() const
{
    return serverGroupIsSet_;
}

void UpdateProtectionGroupNameResponse::unsetserverGroup()
{
    serverGroupIsSet_ = false;
}

}
}
}
}
}


