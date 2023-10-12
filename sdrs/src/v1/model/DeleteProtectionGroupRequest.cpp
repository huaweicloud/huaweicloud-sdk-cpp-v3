

#include "huaweicloud/sdrs/v1/model/DeleteProtectionGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




DeleteProtectionGroupRequest::DeleteProtectionGroupRequest()
{
    serverGroupId_ = "";
    serverGroupIdIsSet_ = false;
}

DeleteProtectionGroupRequest::~DeleteProtectionGroupRequest() = default;

void DeleteProtectionGroupRequest::validate()
{
}

web::json::value DeleteProtectionGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverGroupIdIsSet_) {
        val[utility::conversions::to_string_t("server_group_id")] = ModelBase::toJson(serverGroupId_);
    }

    return val;
}
bool DeleteProtectionGroupRequest::fromJson(const web::json::value& val)
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


std::string DeleteProtectionGroupRequest::getServerGroupId() const
{
    return serverGroupId_;
}

void DeleteProtectionGroupRequest::setServerGroupId(const std::string& value)
{
    serverGroupId_ = value;
    serverGroupIdIsSet_ = true;
}

bool DeleteProtectionGroupRequest::serverGroupIdIsSet() const
{
    return serverGroupIdIsSet_;
}

void DeleteProtectionGroupRequest::unsetserverGroupId()
{
    serverGroupIdIsSet_ = false;
}

}
}
}
}
}


