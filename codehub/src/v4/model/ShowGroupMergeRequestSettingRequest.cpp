

#include "huaweicloud/codehub/v4/model/ShowGroupMergeRequestSettingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowGroupMergeRequestSettingRequest::ShowGroupMergeRequestSettingRequest()
{
    groupId_ = 0;
    groupIdIsSet_ = false;
}

ShowGroupMergeRequestSettingRequest::~ShowGroupMergeRequestSettingRequest() = default;

void ShowGroupMergeRequestSettingRequest::validate()
{
}

web::json::value ShowGroupMergeRequestSettingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }

    return val;
}
bool ShowGroupMergeRequestSettingRequest::fromJson(const web::json::value& val)
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


int32_t ShowGroupMergeRequestSettingRequest::getGroupId() const
{
    return groupId_;
}

void ShowGroupMergeRequestSettingRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ShowGroupMergeRequestSettingRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ShowGroupMergeRequestSettingRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

}
}
}
}
}


