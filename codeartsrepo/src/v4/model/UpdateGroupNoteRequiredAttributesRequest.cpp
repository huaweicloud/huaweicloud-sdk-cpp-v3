

#include "huaweicloud/codeartsrepo/v4/model/UpdateGroupNoteRequiredAttributesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateGroupNoteRequiredAttributesRequest::UpdateGroupNoteRequiredAttributesRequest()
{
    groupId_ = 0;
    groupIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateGroupNoteRequiredAttributesRequest::~UpdateGroupNoteRequiredAttributesRequest() = default;

void UpdateGroupNoteRequiredAttributesRequest::validate()
{
}

web::json::value UpdateGroupNoteRequiredAttributesRequest::toJson() const
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
bool UpdateGroupNoteRequiredAttributesRequest::fromJson(const web::json::value& val)
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
            PostNoteRequiredAttributeDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t UpdateGroupNoteRequiredAttributesRequest::getGroupId() const
{
    return groupId_;
}

void UpdateGroupNoteRequiredAttributesRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool UpdateGroupNoteRequiredAttributesRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void UpdateGroupNoteRequiredAttributesRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

PostNoteRequiredAttributeDto UpdateGroupNoteRequiredAttributesRequest::getBody() const
{
    return body_;
}

void UpdateGroupNoteRequiredAttributesRequest::setBody(const PostNoteRequiredAttributeDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateGroupNoteRequiredAttributesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateGroupNoteRequiredAttributesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


