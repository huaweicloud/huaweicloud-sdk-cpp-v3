

#include "huaweicloud/kms/v2/model/KeyDescriptionInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




KeyDescriptionInfo::KeyDescriptionInfo()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    keyDescription_ = "";
    keyDescriptionIsSet_ = false;
}

KeyDescriptionInfo::~KeyDescriptionInfo() = default;

void KeyDescriptionInfo::validate()
{
}

web::json::value KeyDescriptionInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(keyDescriptionIsSet_) {
        val[utility::conversions::to_string_t("key_description")] = ModelBase::toJson(keyDescription_);
    }

    return val;
}
bool KeyDescriptionInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("key_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyDescription(refVal);
        }
    }
    return ok;
}


std::string KeyDescriptionInfo::getKeyId() const
{
    return keyId_;
}

void KeyDescriptionInfo::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool KeyDescriptionInfo::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void KeyDescriptionInfo::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string KeyDescriptionInfo::getKeyDescription() const
{
    return keyDescription_;
}

void KeyDescriptionInfo::setKeyDescription(const std::string& value)
{
    keyDescription_ = value;
    keyDescriptionIsSet_ = true;
}

bool KeyDescriptionInfo::keyDescriptionIsSet() const
{
    return keyDescriptionIsSet_;
}

void KeyDescriptionInfo::unsetkeyDescription()
{
    keyDescriptionIsSet_ = false;
}

}
}
}
}
}


