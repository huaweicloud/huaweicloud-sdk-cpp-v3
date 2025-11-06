

#include "huaweicloud/codeartsrepo/v4/model/UpdateGroupWatermarkRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateGroupWatermarkRequest::UpdateGroupWatermarkRequest()
{
    groupId_ = 0;
    groupIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateGroupWatermarkRequest::~UpdateGroupWatermarkRequest() = default;

void UpdateGroupWatermarkRequest::validate()
{
}

web::json::value UpdateGroupWatermarkRequest::toJson() const
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
bool UpdateGroupWatermarkRequest::fromJson(const web::json::value& val)
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
            UpdateWatermarkDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t UpdateGroupWatermarkRequest::getGroupId() const
{
    return groupId_;
}

void UpdateGroupWatermarkRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool UpdateGroupWatermarkRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void UpdateGroupWatermarkRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

UpdateWatermarkDto UpdateGroupWatermarkRequest::getBody() const
{
    return body_;
}

void UpdateGroupWatermarkRequest::setBody(const UpdateWatermarkDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateGroupWatermarkRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateGroupWatermarkRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


