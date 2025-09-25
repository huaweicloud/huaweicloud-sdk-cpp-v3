

#include "huaweicloud/codehub/v4/model/UpdateGroupReviewSettingsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UpdateGroupReviewSettingsRequest::UpdateGroupReviewSettingsRequest()
{
    groupId_ = 0;
    groupIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateGroupReviewSettingsRequest::~UpdateGroupReviewSettingsRequest() = default;

void UpdateGroupReviewSettingsRequest::validate()
{
}

web::json::value UpdateGroupReviewSettingsRequest::toJson() const
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
bool UpdateGroupReviewSettingsRequest::fromJson(const web::json::value& val)
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
            ReviewSettingParamDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t UpdateGroupReviewSettingsRequest::getGroupId() const
{
    return groupId_;
}

void UpdateGroupReviewSettingsRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool UpdateGroupReviewSettingsRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void UpdateGroupReviewSettingsRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

ReviewSettingParamDto UpdateGroupReviewSettingsRequest::getBody() const
{
    return body_;
}

void UpdateGroupReviewSettingsRequest::setBody(const ReviewSettingParamDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateGroupReviewSettingsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateGroupReviewSettingsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


