

#include "huaweicloud/sdrs/v1/model/ShowProtectionGroupRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ShowProtectionGroupRequest::ShowProtectionGroupRequest()
{
    serverGroupId_ = "";
    serverGroupIdIsSet_ = false;
}

ShowProtectionGroupRequest::~ShowProtectionGroupRequest() = default;

void ShowProtectionGroupRequest::validate()
{
}

web::json::value ShowProtectionGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverGroupIdIsSet_) {
        val[utility::conversions::to_string_t("server_group_id")] = ModelBase::toJson(serverGroupId_);
    }

    return val;
}

bool ShowProtectionGroupRequest::fromJson(const web::json::value& val)
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

std::string ShowProtectionGroupRequest::getServerGroupId() const
{
    return serverGroupId_;
}

void ShowProtectionGroupRequest::setServerGroupId(const std::string& value)
{
    serverGroupId_ = value;
    serverGroupIdIsSet_ = true;
}

bool ShowProtectionGroupRequest::serverGroupIdIsSet() const
{
    return serverGroupIdIsSet_;
}

void ShowProtectionGroupRequest::unsetserverGroupId()
{
    serverGroupIdIsSet_ = false;
}

}
}
}
}
}


