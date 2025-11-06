

#include "huaweicloud/codeartsrepo/v4/model/ShowNotificationSubscriptionsStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowNotificationSubscriptionsStatusResponse::ShowNotificationSubscriptionsStatusResponse()
{
    internalMessageIsSet_ = false;
    emailIsSet_ = false;
    qyweixinIsSet_ = false;
    feishuIsSet_ = false;
    dingdingIsSet_ = false;
}

ShowNotificationSubscriptionsStatusResponse::~ShowNotificationSubscriptionsStatusResponse() = default;

void ShowNotificationSubscriptionsStatusResponse::validate()
{
}

web::json::value ShowNotificationSubscriptionsStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(internalMessageIsSet_) {
        val[utility::conversions::to_string_t("internal_message")] = ModelBase::toJson(internalMessage_);
    }
    if(emailIsSet_) {
        val[utility::conversions::to_string_t("email")] = ModelBase::toJson(email_);
    }
    if(qyweixinIsSet_) {
        val[utility::conversions::to_string_t("qyweixin")] = ModelBase::toJson(qyweixin_);
    }
    if(feishuIsSet_) {
        val[utility::conversions::to_string_t("feishu")] = ModelBase::toJson(feishu_);
    }
    if(dingdingIsSet_) {
        val[utility::conversions::to_string_t("dingding")] = ModelBase::toJson(dingding_);
    }

    return val;
}
bool ShowNotificationSubscriptionsStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("internal_message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("internal_message"));
        if(!fieldValue.is_null())
        {
            RepoNotificationSubscriptionStateDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInternalMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("email"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("email"));
        if(!fieldValue.is_null())
        {
            RepoNotificationSubscriptionStateDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEmail(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("qyweixin"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("qyweixin"));
        if(!fieldValue.is_null())
        {
            RepoNotificationSubscriptionStateDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQyweixin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("feishu"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("feishu"));
        if(!fieldValue.is_null())
        {
            RepoNotificationSubscriptionStateDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFeishu(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dingding"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dingding"));
        if(!fieldValue.is_null())
        {
            RepoNotificationSubscriptionStateDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDingding(refVal);
        }
    }
    return ok;
}


RepoNotificationSubscriptionStateDto ShowNotificationSubscriptionsStatusResponse::getInternalMessage() const
{
    return internalMessage_;
}

void ShowNotificationSubscriptionsStatusResponse::setInternalMessage(const RepoNotificationSubscriptionStateDto& value)
{
    internalMessage_ = value;
    internalMessageIsSet_ = true;
}

bool ShowNotificationSubscriptionsStatusResponse::internalMessageIsSet() const
{
    return internalMessageIsSet_;
}

void ShowNotificationSubscriptionsStatusResponse::unsetinternalMessage()
{
    internalMessageIsSet_ = false;
}

RepoNotificationSubscriptionStateDto ShowNotificationSubscriptionsStatusResponse::getEmail() const
{
    return email_;
}

void ShowNotificationSubscriptionsStatusResponse::setEmail(const RepoNotificationSubscriptionStateDto& value)
{
    email_ = value;
    emailIsSet_ = true;
}

bool ShowNotificationSubscriptionsStatusResponse::emailIsSet() const
{
    return emailIsSet_;
}

void ShowNotificationSubscriptionsStatusResponse::unsetemail()
{
    emailIsSet_ = false;
}

RepoNotificationSubscriptionStateDto ShowNotificationSubscriptionsStatusResponse::getQyweixin() const
{
    return qyweixin_;
}

void ShowNotificationSubscriptionsStatusResponse::setQyweixin(const RepoNotificationSubscriptionStateDto& value)
{
    qyweixin_ = value;
    qyweixinIsSet_ = true;
}

bool ShowNotificationSubscriptionsStatusResponse::qyweixinIsSet() const
{
    return qyweixinIsSet_;
}

void ShowNotificationSubscriptionsStatusResponse::unsetqyweixin()
{
    qyweixinIsSet_ = false;
}

RepoNotificationSubscriptionStateDto ShowNotificationSubscriptionsStatusResponse::getFeishu() const
{
    return feishu_;
}

void ShowNotificationSubscriptionsStatusResponse::setFeishu(const RepoNotificationSubscriptionStateDto& value)
{
    feishu_ = value;
    feishuIsSet_ = true;
}

bool ShowNotificationSubscriptionsStatusResponse::feishuIsSet() const
{
    return feishuIsSet_;
}

void ShowNotificationSubscriptionsStatusResponse::unsetfeishu()
{
    feishuIsSet_ = false;
}

RepoNotificationSubscriptionStateDto ShowNotificationSubscriptionsStatusResponse::getDingding() const
{
    return dingding_;
}

void ShowNotificationSubscriptionsStatusResponse::setDingding(const RepoNotificationSubscriptionStateDto& value)
{
    dingding_ = value;
    dingdingIsSet_ = true;
}

bool ShowNotificationSubscriptionsStatusResponse::dingdingIsSet() const
{
    return dingdingIsSet_;
}

void ShowNotificationSubscriptionsStatusResponse::unsetdingding()
{
    dingdingIsSet_ = false;
}

}
}
}
}
}


