

#include "huaweicloud/codeartsrepo/v4/model/RemoveGroupWebhookRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




RemoveGroupWebhookRequest::RemoveGroupWebhookRequest()
{
    groupId_ = 0;
    groupIdIsSet_ = false;
    hookId_ = 0;
    hookIdIsSet_ = false;
}

RemoveGroupWebhookRequest::~RemoveGroupWebhookRequest() = default;

void RemoveGroupWebhookRequest::validate()
{
}

web::json::value RemoveGroupWebhookRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(hookIdIsSet_) {
        val[utility::conversions::to_string_t("hook_id")] = ModelBase::toJson(hookId_);
    }

    return val;
}
bool RemoveGroupWebhookRequest::fromJson(const web::json::value& val)
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
    return ok;
}


int32_t RemoveGroupWebhookRequest::getGroupId() const
{
    return groupId_;
}

void RemoveGroupWebhookRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool RemoveGroupWebhookRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void RemoveGroupWebhookRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

int32_t RemoveGroupWebhookRequest::getHookId() const
{
    return hookId_;
}

void RemoveGroupWebhookRequest::setHookId(int32_t value)
{
    hookId_ = value;
    hookIdIsSet_ = true;
}

bool RemoveGroupWebhookRequest::hookIdIsSet() const
{
    return hookIdIsSet_;
}

void RemoveGroupWebhookRequest::unsethookId()
{
    hookIdIsSet_ = false;
}

}
}
}
}
}


