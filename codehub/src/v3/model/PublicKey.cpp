

#include "huaweicloud/codehub/v3/model/PublicKey.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




PublicKey::PublicKey()
{
    id_ = "";
    idIsSet_ = false;
    key_ = "";
    keyIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
}

PublicKey::~PublicKey() = default;

void PublicKey::validate()
{
}

web::json::value PublicKey::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(keyIsSet_) {
        val[utility::conversions::to_string_t("key")] = ModelBase::toJson(key_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }

    return val;
}
bool PublicKey::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
        }
    }
    return ok;
}


std::string PublicKey::getId() const
{
    return id_;
}

void PublicKey::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PublicKey::idIsSet() const
{
    return idIsSet_;
}

void PublicKey::unsetid()
{
    idIsSet_ = false;
}

std::string PublicKey::getKey() const
{
    return key_;
}

void PublicKey::setKey(const std::string& value)
{
    key_ = value;
    keyIsSet_ = true;
}

bool PublicKey::keyIsSet() const
{
    return keyIsSet_;
}

void PublicKey::unsetkey()
{
    keyIsSet_ = false;
}

std::string PublicKey::getTitle() const
{
    return title_;
}

void PublicKey::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool PublicKey::titleIsSet() const
{
    return titleIsSet_;
}

void PublicKey::unsettitle()
{
    titleIsSet_ = false;
}

}
}
}
}
}


