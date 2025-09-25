

#include "huaweicloud/codehub/v4/model/AddGroupWebhookRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




AddGroupWebhookRequest::AddGroupWebhookRequest()
{
    groupId_ = 0;
    groupIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddGroupWebhookRequest::~AddGroupWebhookRequest() = default;

void AddGroupWebhookRequest::validate()
{
}

web::json::value AddGroupWebhookRequest::toJson() const
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
bool AddGroupWebhookRequest::fromJson(const web::json::value& val)
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
            WebhookParamsDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t AddGroupWebhookRequest::getGroupId() const
{
    return groupId_;
}

void AddGroupWebhookRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool AddGroupWebhookRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void AddGroupWebhookRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

WebhookParamsDto AddGroupWebhookRequest::getBody() const
{
    return body_;
}

void AddGroupWebhookRequest::setBody(const WebhookParamsDto& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddGroupWebhookRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddGroupWebhookRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


