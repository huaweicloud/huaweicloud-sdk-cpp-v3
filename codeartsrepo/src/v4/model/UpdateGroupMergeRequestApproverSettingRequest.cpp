

#include "huaweicloud/codeartsrepo/v4/model/UpdateGroupMergeRequestApproverSettingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateGroupMergeRequestApproverSettingRequest::UpdateGroupMergeRequestApproverSettingRequest()
{
    groupId_ = 0;
    groupIdIsSet_ = false;
    settingId_ = 0;
    settingIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateGroupMergeRequestApproverSettingRequest::~UpdateGroupMergeRequestApproverSettingRequest() = default;

void UpdateGroupMergeRequestApproverSettingRequest::validate()
{
}

web::json::value UpdateGroupMergeRequestApproverSettingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(settingIdIsSet_) {
        val[utility::conversions::to_string_t("setting_id")] = ModelBase::toJson(settingId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateGroupMergeRequestApproverSettingRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            CreateMergeRequestApproverSettingDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t UpdateGroupMergeRequestApproverSettingRequest::getGroupId() const
{
    return groupId_;
}

void UpdateGroupMergeRequestApproverSettingRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool UpdateGroupMergeRequestApproverSettingRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void UpdateGroupMergeRequestApproverSettingRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

int32_t UpdateGroupMergeRequestApproverSettingRequest::getSettingId() const
{
    return settingId_;
}

void UpdateGroupMergeRequestApproverSettingRequest::setSettingId(int32_t value)
{
    settingId_ = value;
    settingIdIsSet_ = true;
}

bool UpdateGroupMergeRequestApproverSettingRequest::settingIdIsSet() const
{
    return settingIdIsSet_;
}

void UpdateGroupMergeRequestApproverSettingRequest::unsetsettingId()
{
    settingIdIsSet_ = false;
}

CreateMergeRequestApproverSettingDto UpdateGroupMergeRequestApproverSettingRequest::getBody() const
{
    return body_;
}

void UpdateGroupMergeRequestApproverSettingRequest::setBody(const CreateMergeRequestApproverSettingDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateGroupMergeRequestApproverSettingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateGroupMergeRequestApproverSettingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


