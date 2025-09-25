

#include "huaweicloud/codehub/v4/model/ShowGroupPermissionInheritEnabledRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowGroupPermissionInheritEnabledRequest::ShowGroupPermissionInheritEnabledRequest()
{
    groupId_ = 0;
    groupIdIsSet_ = false;
}

ShowGroupPermissionInheritEnabledRequest::~ShowGroupPermissionInheritEnabledRequest() = default;

void ShowGroupPermissionInheritEnabledRequest::validate()
{
}

web::json::value ShowGroupPermissionInheritEnabledRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }

    return val;
}
bool ShowGroupPermissionInheritEnabledRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    return ok;
}


int32_t ShowGroupPermissionInheritEnabledRequest::getGroupId() const
{
    return groupId_;
}

void ShowGroupPermissionInheritEnabledRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ShowGroupPermissionInheritEnabledRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ShowGroupPermissionInheritEnabledRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

}
}
}
}
}


