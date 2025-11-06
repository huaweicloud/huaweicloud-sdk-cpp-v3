

#include "huaweicloud/codeartsrepo/v4/model/ShowGroupWebhookLogRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowGroupWebhookLogRequest::ShowGroupWebhookLogRequest()
{
    groupId_ = 0;
    groupIdIsSet_ = false;
    hookId_ = 0;
    hookIdIsSet_ = false;
    logId_ = 0;
    logIdIsSet_ = false;
}

ShowGroupWebhookLogRequest::~ShowGroupWebhookLogRequest() = default;

void ShowGroupWebhookLogRequest::validate()
{
}

web::json::value ShowGroupWebhookLogRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(hookIdIsSet_) {
        val[utility::conversions::to_string_t("hook_id")] = ModelBase::toJson(hookId_);
    }
    if(logIdIsSet_) {
        val[utility::conversions::to_string_t("log_id")] = ModelBase::toJson(logId_);
    }

    return val;
}
bool ShowGroupWebhookLogRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("log_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogId(refVal);
        }
    }
    return ok;
}


int32_t ShowGroupWebhookLogRequest::getGroupId() const
{
    return groupId_;
}

void ShowGroupWebhookLogRequest::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ShowGroupWebhookLogRequest::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ShowGroupWebhookLogRequest::unsetgroupId()
{
    groupIdIsSet_ = false;
}

int32_t ShowGroupWebhookLogRequest::getHookId() const
{
    return hookId_;
}

void ShowGroupWebhookLogRequest::setHookId(int32_t value)
{
    hookId_ = value;
    hookIdIsSet_ = true;
}

bool ShowGroupWebhookLogRequest::hookIdIsSet() const
{
    return hookIdIsSet_;
}

void ShowGroupWebhookLogRequest::unsethookId()
{
    hookIdIsSet_ = false;
}

int32_t ShowGroupWebhookLogRequest::getLogId() const
{
    return logId_;
}

void ShowGroupWebhookLogRequest::setLogId(int32_t value)
{
    logId_ = value;
    logIdIsSet_ = true;
}

bool ShowGroupWebhookLogRequest::logIdIsSet() const
{
    return logIdIsSet_;
}

void ShowGroupWebhookLogRequest::unsetlogId()
{
    logIdIsSet_ = false;
}

}
}
}
}
}


