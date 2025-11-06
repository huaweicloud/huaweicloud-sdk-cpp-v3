

#include "huaweicloud/codeartsrepo/v4/model/DeleteGroupMergeRequestApproverSettingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




DeleteGroupMergeRequestApproverSettingRequest::DeleteGroupMergeRequestApproverSettingRequest()
{
    groupId_ = 0;
    groupIdIsSet_ = false;
    settingId_ = 0;
    settingIdIsSet_ = false;
}

DeleteGroupMergeRequestApproverSettingRequest::~DeleteGroupMergeRequestApproverSettingRequest() = default;

void DeleteGroupMergeRequestApproverSettingRequest::validate()
{
}

web::json::value DeleteGroupMergeRequestApproverSettingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(settingIdIsSet_) {
        val[utility::conversions::to_string_t("setting_id")] = ModelBase::toJson(settingId_);
    }

    return val;
}
bool DeleteGroupMergeRequestApproverSettingRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("setting_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("setting_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSettingId(refVal);
        }
    }
    return ok;
}


int32_t DeleteGroupMergeRequestApproverSettingRequest::getGroupId() const
{
    return groupId_;
}

void DeleteGroupMergeRequestApproverSettingRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool DeleteGroupMergeRequestApproverSettingRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void DeleteGroupMergeRequestApproverSettingRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

int32_t DeleteGroupMergeRequestApproverSettingRequest::getSettingId() const
{
    return settingId_;
}

void DeleteGroupMergeRequestApproverSettingRequest::setSettingId(int32_t value)
{
    settingId_ = value;
    settingIdIsSet_ = true;
}

bool DeleteGroupMergeRequestApproverSettingRequest::settingIdIsSet() const
{
    return settingIdIsSet_;
}

void DeleteGroupMergeRequestApproverSettingRequest::unsetsettingId()
{
    settingIdIsSet_ = false;
}

}
}
}
}
}


