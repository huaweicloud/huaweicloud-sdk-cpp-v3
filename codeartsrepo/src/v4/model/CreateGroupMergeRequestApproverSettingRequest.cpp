

#include "huaweicloud/codeartsrepo/v4/model/CreateGroupMergeRequestApproverSettingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




CreateGroupMergeRequestApproverSettingRequest::CreateGroupMergeRequestApproverSettingRequest()
{
    groupId_ = 0;
    groupIdIsSet_ = false;
    bodyIsSet_ = false;
}

CreateGroupMergeRequestApproverSettingRequest::~CreateGroupMergeRequestApproverSettingRequest() = default;

void CreateGroupMergeRequestApproverSettingRequest::validate()
{
}

web::json::value CreateGroupMergeRequestApproverSettingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateGroupMergeRequestApproverSettingRequest::fromJson(const web::json::value& val)
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


int32_t CreateGroupMergeRequestApproverSettingRequest::getGroupId() const
{
    return groupId_;
}

void CreateGroupMergeRequestApproverSettingRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool CreateGroupMergeRequestApproverSettingRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void CreateGroupMergeRequestApproverSettingRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

CreateMergeRequestApproverSettingDto CreateGroupMergeRequestApproverSettingRequest::getBody() const
{
    return body_;
}

void CreateGroupMergeRequestApproverSettingRequest::setBody(const CreateMergeRequestApproverSettingDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateGroupMergeRequestApproverSettingRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateGroupMergeRequestApproverSettingRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


