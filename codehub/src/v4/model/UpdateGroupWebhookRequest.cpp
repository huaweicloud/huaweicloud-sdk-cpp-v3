

#include "huaweicloud/codehub/v4/model/UpdateGroupWebhookRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UpdateGroupWebhookRequest::UpdateGroupWebhookRequest()
{
    groupId_ = 0;
    groupIdIsSet_ = false;
    hookId_ = 0;
    hookIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateGroupWebhookRequest::~UpdateGroupWebhookRequest() = default;

void UpdateGroupWebhookRequest::validate()
{
}

web::json::value UpdateGroupWebhookRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(hookIdIsSet_) {
        val[utility::conversions::to_string_t("hook_id")] = ModelBase::toJson(hookId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateGroupWebhookRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("hook_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hook_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHookId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            WebhookParamsDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t UpdateGroupWebhookRequest::getGroupId() const
{
    return groupId_;
}

void UpdateGroupWebhookRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool UpdateGroupWebhookRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void UpdateGroupWebhookRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

int32_t UpdateGroupWebhookRequest::getHookId() const
{
    return hookId_;
}

void UpdateGroupWebhookRequest::setHookId(int32_t value)
{
    hookId_ = value;
    hookIdIsSet_ = true;
}

bool UpdateGroupWebhookRequest::hookIdIsSet() const
{
    return hookIdIsSet_;
}

void UpdateGroupWebhookRequest::unsethookId()
{
    hookIdIsSet_ = false;
}

WebhookParamsDto UpdateGroupWebhookRequest::getBody() const
{
    return body_;
}

void UpdateGroupWebhookRequest::setBody(const WebhookParamsDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateGroupWebhookRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateGroupWebhookRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


