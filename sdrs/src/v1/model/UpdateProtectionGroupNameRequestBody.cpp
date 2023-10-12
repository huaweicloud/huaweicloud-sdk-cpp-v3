

#include "huaweicloud/sdrs/v1/model/UpdateProtectionGroupNameRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




UpdateProtectionGroupNameRequestBody::UpdateProtectionGroupNameRequestBody()
{
    serverGroupIsSet_ = false;
}

UpdateProtectionGroupNameRequestBody::~UpdateProtectionGroupNameRequestBody() = default;

void UpdateProtectionGroupNameRequestBody::validate()
{
}

web::json::value UpdateProtectionGroupNameRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverGroupIsSet_) {
        val[utility::conversions::to_string_t("server_group")] = ModelBase::toJson(serverGroup_);
    }

    return val;
}
bool UpdateProtectionGroupNameRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_group"));
        if(!fieldValue.is_null())
        {
            UpdateProtectionGroupNameRequestParams refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerGroup(refVal);
        }
    }
    return ok;
}


UpdateProtectionGroupNameRequestParams UpdateProtectionGroupNameRequestBody::getServerGroup() const
{
    return serverGroup_;
}

void UpdateProtectionGroupNameRequestBody::setServerGroup(const UpdateProtectionGroupNameRequestParams& value)
{
    serverGroup_ = value;
    serverGroupIsSet_ = true;
}

bool UpdateProtectionGroupNameRequestBody::serverGroupIsSet() const
{
    return serverGroupIsSet_;
}

void UpdateProtectionGroupNameRequestBody::unsetserverGroup()
{
    serverGroupIsSet_ = false;
}

}
}
}
}
}


