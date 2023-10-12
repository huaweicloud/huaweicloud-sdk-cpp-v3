

#include "huaweicloud/live/v1/model/CreateRecordCallbackConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




CreateRecordCallbackConfigResponse::CreateRecordCallbackConfigResponse()
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

CreateRecordCallbackConfigResponse::~CreateRecordCallbackConfigResponse() = default;

void CreateRecordCallbackConfigResponse::validate()
{
}

web::json::value CreateRecordCallbackConfigResponse::toJson() const
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
bool CreateRecordCallbackConfigResponse::fromJson(const web::json::value& val)
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


std::string CreateRecordCallbackConfigResponse::getId() const
{
    return id_;
}

void CreateRecordCallbackConfigResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateRecordCallbackConfigResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateRecordCallbackConfigResponse::unsetid()
{
    idIsSet_ = false;
}

std::string CreateRecordCallbackConfigResponse::getPublishDomain() const
{
    return publishDomain_;
}

void CreateRecordCallbackConfigResponse::setPublishDomain(const std::string& value)
{
    publishDomain_ = value;
    publishDomainIsSet_ = true;
}

bool CreateRecordCallbackConfigResponse::publishDomainIsSet() const
{
    return publishDomainIsSet_;
}

void CreateRecordCallbackConfigResponse::unsetpublishDomain()
{
    publishDomainIsSet_ = false;
}

std::string CreateRecordCallbackConfigResponse::getApp() const
{
    return app_;
}

void CreateRecordCallbackConfigResponse::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool CreateRecordCallbackConfigResponse::appIsSet() const
{
    return appIsSet_;
}

void CreateRecordCallbackConfigResponse::unsetapp()
{
    appIsSet_ = false;
}

std::string CreateRecordCallbackConfigResponse::getNotifyCallbackUrl() const
{
    return notifyCallbackUrl_;
}

void CreateRecordCallbackConfigResponse::setNotifyCallbackUrl(const std::string& value)
{
    notifyCallbackUrl_ = value;
    notifyCallbackUrlIsSet_ = true;
}

bool CreateRecordCallbackConfigResponse::notifyCallbackUrlIsSet() const
{
    return notifyCallbackUrlIsSet_;
}

void CreateRecordCallbackConfigResponse::unsetnotifyCallbackUrl()
{
    notifyCallbackUrlIsSet_ = false;
}

std::vector<std::string>& CreateRecordCallbackConfigResponse::getNotifyEventSubscription()
{
    return notifyEventSubscription_;
}

void CreateRecordCallbackConfigResponse::setNotifyEventSubscription(const std::vector<std::string>& value)
{
    notifyEventSubscription_ = value;
    notifyEventSubscriptionIsSet_ = true;
}

bool CreateRecordCallbackConfigResponse::notifyEventSubscriptionIsSet() const
{
    return notifyEventSubscriptionIsSet_;
}

void CreateRecordCallbackConfigResponse::unsetnotifyEventSubscription()
{
    notifyEventSubscriptionIsSet_ = false;
}

std::string CreateRecordCallbackConfigResponse::getSignType() const
{
    return signType_;
}

void CreateRecordCallbackConfigResponse::setSignType(const std::string& value)
{
    signType_ = value;
    signTypeIsSet_ = true;
}

bool CreateRecordCallbackConfigResponse::signTypeIsSet() const
{
    return signTypeIsSet_;
}

void CreateRecordCallbackConfigResponse::unsetsignType()
{
    signTypeIsSet_ = false;
}

utility::datetime CreateRecordCallbackConfigResponse::getCreateTime() const
{
    return createTime_;
}

void CreateRecordCallbackConfigResponse::setCreateTime(const utility::datetime& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool CreateRecordCallbackConfigResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void CreateRecordCallbackConfigResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

utility::datetime CreateRecordCallbackConfigResponse::getUpdateTime() const
{
    return updateTime_;
}

void CreateRecordCallbackConfigResponse::setUpdateTime(const utility::datetime& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool CreateRecordCallbackConfigResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void CreateRecordCallbackConfigResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


