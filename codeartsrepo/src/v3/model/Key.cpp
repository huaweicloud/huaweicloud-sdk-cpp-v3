

#include "huaweicloud/codeartsrepo/v3/model/Key.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {
namespace Model {




Key::Key()
{
    canPush_ = false;
    canPushIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    key_ = "";
    keyIsSet_ = false;
    keyId_ = "";
    keyIdIsSet_ = false;
    keyTitle_ = "";
    keyTitleIsSet_ = false;
}

Key::~Key() = default;

void Key::validate()
{
}

web::json::value Key::toJson() const
{
    web::json::value val = web::json::value::object();

    if(canPushIsSet_) {
        val[utility::conversions::to_string_t("can_push")] = ModelBase::toJson(canPush_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(keyTitleIsSet_) {
        val[utility::conversions::to_string_t("key_title")] = ModelBase::toJson(keyTitle_);
    }

    return val;
}
bool Key::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("can_push"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_push"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanPush(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyId(refVal);
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


bool Key::isCanPush() const
{
    return canPush_;
}

void Key::setCanPush(bool value)
{
    canPush_ = value;
    canPushIsSet_ = true;
}

bool Key::canPushIsSet() const
{
    return canPushIsSet_;
}

void Key::unsetcanPush()
{
    canPushIsSet_ = false;
}

std::string Key::getCreatedAt() const
{
    return createdAt_;
}

void Key::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool Key::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void Key::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string Key::getKey() const
{
    return key_;
}

void Key::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool Key::keyIsSet() const
{
    return keyIsSet_;
}

void Key::unsetkey()
{
    keyIsSet_ = false;
}

std::string Key::getKeyId() const
{
    return keyId_;
}

void Key::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool Key::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void Key::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string Key::getKeyTitle() const
{
    return keyTitle_;
}

void Key::setKeyTitle(const std::string& value)
{
    keyTitle_ = value;
    keyTitleIsSet_ = true;
}

bool Key::keyTitleIsSet() const
{
    return keyTitleIsSet_;
}

void Key::unsetkeyTitle()
{
    keyTitleIsSet_ = false;
}

}
}
}
}
}


