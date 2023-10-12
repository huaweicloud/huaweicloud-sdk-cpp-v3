

#include "huaweicloud/kms/v2/model/KeyStatusInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




KeyStatusInfo::KeyStatusInfo()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    keyState_ = "";
    keyStateIsSet_ = false;
}

KeyStatusInfo::~KeyStatusInfo() = default;

void KeyStatusInfo::validate()
{
}

web::json::value KeyStatusInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(keyStateIsSet_) {
        val[utility::conversions::to_string_t("key_state")] = ModelBase::toJson(keyState_);
    }

    return val;
}
bool KeyStatusInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyState(refVal);
        }
    }
    return ok;
}


std::string KeyStatusInfo::getKeyId() const
{
    return keyId_;
}

void KeyStatusInfo::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool KeyStatusInfo::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void KeyStatusInfo::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string KeyStatusInfo::getKeyState() const
{
    return keyState_;
}

void KeyStatusInfo::setKeyState(const std::string& value)
{
    keyState_ = value;
    keyStateIsSet_ = true;
}

bool KeyStatusInfo::keyStateIsSet() const
{
    return keyStateIsSet_;
}

void KeyStatusInfo::unsetkeyState()
{
    keyStateIsSet_ = false;
}

}
}
}
}
}


