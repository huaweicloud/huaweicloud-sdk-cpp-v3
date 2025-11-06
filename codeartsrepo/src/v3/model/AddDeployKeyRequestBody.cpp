

#include "huaweicloud/codeartsrepo/v3/model/AddDeployKeyRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




AddDeployKeyRequestBody::AddDeployKeyRequestBody()
{
    application_ = "";
    applicationIsSet_ = false;
    canPush_ = false;
    canPushIsSet_ = false;
    key_ = "";
    keyIsSet_ = false;
    keyTitle_ = "";
    keyTitleIsSet_ = false;
}

AddDeployKeyRequestBody::~AddDeployKeyRequestBody() = default;

void AddDeployKeyRequestBody::validate()
{
}

web::json::value AddDeployKeyRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(applicationIsSet_) {
        val[utility::conversions::to_string_t("application")] = ModelBase::toJson(application_);
    }
    if(canPushIsSet_) {
        val[utility::conversions::to_string_t("can_push")] = ModelBase::toJson(canPush_);
    }
    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(keyTitleIsSet_) {
        val[utility::conversions::to_string_t("key_title")] = ModelBase::toJson(keyTitle_);
    }

    return val;
}
bool AddDeployKeyRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("application"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplication(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("can_push"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_push"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanPush(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyTitle(refVal);
        }
    }
    return ok;
}


std::string AddDeployKeyRequestBody::getApplication() const
{
    return application_;
}

void AddDeployKeyRequestBody::setApplication(const std::string& value)
{
    application_ = value;
    applicationIsSet_ = true;
}

bool AddDeployKeyRequestBody::applicationIsSet() const
{
    return applicationIsSet_;
}

void AddDeployKeyRequestBody::unsetapplication()
{
    applicationIsSet_ = false;
}

bool AddDeployKeyRequestBody::isCanPush() const
{
    return canPush_;
}

void AddDeployKeyRequestBody::setCanPush(bool value)
{
    canPush_ = value;
    canPushIsSet_ = true;
}

bool AddDeployKeyRequestBody::canPushIsSet() const
{
    return canPushIsSet_;
}

void AddDeployKeyRequestBody::unsetcanPush()
{
    canPushIsSet_ = false;
}

std::string AddDeployKeyRequestBody::getKey() const
{
    return key_;
}

void AddDeployKeyRequestBody::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool AddDeployKeyRequestBody::keyIsSet() const
{
    return keyIsSet_;
}

void AddDeployKeyRequestBody::unsetkey()
{
    keyIsSet_ = false;
}

std::string AddDeployKeyRequestBody::getKeyTitle() const
{
    return keyTitle_;
}

void AddDeployKeyRequestBody::setKeyTitle(const std::string& value)
{
    keyTitle_ = value;
    keyTitleIsSet_ = true;
}

bool AddDeployKeyRequestBody::keyTitleIsSet() const
{
    return keyTitleIsSet_;
}

void AddDeployKeyRequestBody::unsetkeyTitle()
{
    keyTitleIsSet_ = false;
}

}
}
}
}
}


