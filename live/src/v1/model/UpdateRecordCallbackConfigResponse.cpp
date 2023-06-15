

#include "huaweicloud/live/v1/model/UpdateRecordCallbackConfigResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




UpdateRecordCallbackConfigResponse::UpdateRecordCallbackConfigResponse()
{
    id_ = "";
    idIsSet_ = false;
    publishDomain_ = "";
    publishDomainIsSet_ = false;
    app_ = "";
    appIsSet_ = false;
    notifyCallbackUrl_ = "";
    notifyCallbackUrlIsSet_ = false;
    notifyEventSubscriptionIsSet_ = false;
    signType_ = "";
    signTypeIsSet_ = false;
    createTimeIsSet_ = false;
    updateTimeIsSet_ = false;
}

UpdateRecordCallbackConfigResponse::~UpdateRecordCallbackConfigResponse() = default;

void UpdateRecordCallbackConfigResponse::validate()
{
}

web::json::value UpdateRecordCallbackConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(publishDomainIsSet_) {
        val[utility::conversions::to_string_t("publish_domain")] = ModelBase::toJson(publishDomain_);
    }
    if(appIsSet_) {
        val[utility::conversions::to_string_t("app")] = ModelBase::toJson(app_);
    }
    if(notifyCallbackUrlIsSet_) {
        val[utility::conversions::to_string_t("notify_callback_url")] = ModelBase::toJson(notifyCallbackUrl_);
    }
    if(notifyEventSubscriptionIsSet_) {
        val[utility::conversions::to_string_t("notify_event_subscription")] = ModelBase::toJson(notifyEventSubscription_);
    }
    if(signTypeIsSet_) {
        val[utility::conversions::to_string_t("sign_type")] = ModelBase::toJson(signType_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}

bool UpdateRecordCallbackConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publish_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publish_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublishDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("notify_callback_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notify_callback_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotifyCallbackUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("notify_event_subscription"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notify_event_subscription"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotifyEventSubscription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sign_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sign_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSignType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    return ok;
}


std::string UpdateRecordCallbackConfigResponse::getId() const
{
    return id_;
}

void UpdateRecordCallbackConfigResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateRecordCallbackConfigResponse::idIsSet() const
{
    return idIsSet_;
}

void UpdateRecordCallbackConfigResponse::unsetid()
{
    idIsSet_ = false;
}

std::string UpdateRecordCallbackConfigResponse::getPublishDomain() const
{
    return publishDomain_;
}

void UpdateRecordCallbackConfigResponse::setPublishDomain(const std::string& value)
{
    publishDomain_ = value;
    publishDomainIsSet_ = true;
}

bool UpdateRecordCallbackConfigResponse::publishDomainIsSet() const
{
    return publishDomainIsSet_;
}

void UpdateRecordCallbackConfigResponse::unsetpublishDomain()
{
    publishDomainIsSet_ = false;
}

std::string UpdateRecordCallbackConfigResponse::getApp() const
{
    return app_;
}

void UpdateRecordCallbackConfigResponse::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool UpdateRecordCallbackConfigResponse::appIsSet() const
{
    return appIsSet_;
}

void UpdateRecordCallbackConfigResponse::unsetapp()
{
    appIsSet_ = false;
}

std::string UpdateRecordCallbackConfigResponse::getNotifyCallbackUrl() const
{
    return notifyCallbackUrl_;
}

void UpdateRecordCallbackConfigResponse::setNotifyCallbackUrl(const std::string& value)
{
    notifyCallbackUrl_ = value;
    notifyCallbackUrlIsSet_ = true;
}

bool UpdateRecordCallbackConfigResponse::notifyCallbackUrlIsSet() const
{
    return notifyCallbackUrlIsSet_;
}

void UpdateRecordCallbackConfigResponse::unsetnotifyCallbackUrl()
{
    notifyCallbackUrlIsSet_ = false;
}

std::vector<std::string>& UpdateRecordCallbackConfigResponse::getNotifyEventSubscription()
{
    return notifyEventSubscription_;
}

void UpdateRecordCallbackConfigResponse::setNotifyEventSubscription(const std::vector<std::string>& value)
{
    notifyEventSubscription_ = value;
    notifyEventSubscriptionIsSet_ = true;
}

bool UpdateRecordCallbackConfigResponse::notifyEventSubscriptionIsSet() const
{
    return notifyEventSubscriptionIsSet_;
}

void UpdateRecordCallbackConfigResponse::unsetnotifyEventSubscription()
{
    notifyEventSubscriptionIsSet_ = false;
}

std::string UpdateRecordCallbackConfigResponse::getSignType() const
{
    return signType_;
}

void UpdateRecordCallbackConfigResponse::setSignType(const std::string& value)
{
    signType_ = value;
    signTypeIsSet_ = true;
}

bool UpdateRecordCallbackConfigResponse::signTypeIsSet() const
{
    return signTypeIsSet_;
}

void UpdateRecordCallbackConfigResponse::unsetsignType()
{
    signTypeIsSet_ = false;
}

utility::datetime UpdateRecordCallbackConfigResponse::getCreateTime() const
{
    return createTime_;
}

void UpdateRecordCallbackConfigResponse::setCreateTime(const utility::datetime& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool UpdateRecordCallbackConfigResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void UpdateRecordCallbackConfigResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

utility::datetime UpdateRecordCallbackConfigResponse::getUpdateTime() const
{
    return updateTime_;
}

void UpdateRecordCallbackConfigResponse::setUpdateTime(const utility::datetime& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool UpdateRecordCallbackConfigResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void UpdateRecordCallbackConfigResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


