

#include "huaweicloud/sdrs/v1/model/ShowProtectionGroupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ShowProtectionGroupResponse::ShowProtectionGroupResponse()
{
    serverGroupIsSet_ = false;
}

ShowProtectionGroupResponse::~ShowProtectionGroupResponse() = default;

void ShowProtectionGroupResponse::validate()
{
}

web::json::value ShowProtectionGroupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverGroupIsSet_) {
        val[utility::conversions::to_string_t("server_group")] = ModelBase::toJson(serverGroup_);
    }

    return val;
}
bool ShowProtectionGroupResponse::fromJson(const web::json::value& val)
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


ShowProtectionGroupParams ShowProtectionGroupResponse::getServerGroup() const
{
    return serverGroup_;
}

void ShowProtectionGroupResponse::setServerGroup(const ShowProtectionGroupParams& value)
{
    serverGroup_ = value;
    serverGroupIsSet_ = true;
}

bool ShowProtectionGroupResponse::serverGroupIsSet() const
{
    return serverGroupIsSet_;
}

void ShowProtectionGroupResponse::unsetserverGroup()
{
    serverGroupIsSet_ = false;
}

}
}
}
}
}


