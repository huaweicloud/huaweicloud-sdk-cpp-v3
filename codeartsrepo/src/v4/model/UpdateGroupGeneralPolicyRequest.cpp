

#include "huaweicloud/codeartsrepo/v4/model/UpdateGroupGeneralPolicyRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateGroupGeneralPolicyRequest::UpdateGroupGeneralPolicyRequest()
{
    groupId_ = 0;
    groupIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateGroupGeneralPolicyRequest::~UpdateGroupGeneralPolicyRequest() = default;

void UpdateGroupGeneralPolicyRequest::validate()
{
}

web::json::value UpdateGroupGeneralPolicyRequest::toJson() const
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
bool UpdateGroupGeneralPolicyRequest::fromJson(const web::json::value& val)
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
            UpdateGeneralPolicyDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t UpdateGroupGeneralPolicyRequest::getGroupId() const
{
    return groupId_;
}

void UpdateGroupGeneralPolicyRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool UpdateGroupGeneralPolicyRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void UpdateGroupGeneralPolicyRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

UpdateGeneralPolicyDto UpdateGroupGeneralPolicyRequest::getBody() const
{
    return body_;
}

void UpdateGroupGeneralPolicyRequest::setBody(const UpdateGeneralPolicyDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateGroupGeneralPolicyRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateGroupGeneralPolicyRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


