

#include "huaweicloud/codeartsrepo/v4/model/ShowGroupWebhookRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowGroupWebhookRequest::ShowGroupWebhookRequest()
{
    groupId_ = 0;
    groupIdIsSet_ = false;
    hookId_ = 0;
    hookIdIsSet_ = false;
}

ShowGroupWebhookRequest::~ShowGroupWebhookRequest() = default;

void ShowGroupWebhookRequest::validate()
{
}

web::json::value ShowGroupWebhookRequest::toJson() const
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
bool ShowGroupWebhookRequest::fromJson(const web::json::value& val)
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


int32_t ShowGroupWebhookRequest::getGroupId() const
{
    return groupId_;
}

void ShowGroupWebhookRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ShowGroupWebhookRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ShowGroupWebhookRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

int32_t ShowGroupWebhookRequest::getHookId() const
{
    return hookId_;
}

void ShowGroupWebhookRequest::setHookId(int32_t value)
{
    hookId_ = value;
    hookIdIsSet_ = true;
}

bool ShowGroupWebhookRequest::hookIdIsSet() const
{
    return hookIdIsSet_;
}

void ShowGroupWebhookRequest::unsethookId()
{
    hookIdIsSet_ = false;
}

}
}
}
}
}


