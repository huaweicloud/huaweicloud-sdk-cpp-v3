

#include "huaweicloud/ecs/v2/model/ChangeSeversOsMetadata.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ChangeSeversOsMetadata::ChangeSeversOsMetadata()
{
    systemEncrypted_ = "";
    systemEncryptedIsSet_ = false;
    systemCmkid_ = "";
    systemCmkidIsSet_ = false;
    userData_ = "";
    userDataIsSet_ = false;
    byol_ = "";
    byolIsSet_ = false;
}

ChangeSeversOsMetadata::~ChangeSeversOsMetadata() = default;

void ChangeSeversOsMetadata::validate()
{
}

web::json::value ChangeSeversOsMetadata::toJson() const
{
    web::json::value val = web::json::value::object();

    if(systemEncryptedIsSet_) {
        val[utility::conversions::to_string_t("__system__encrypted")] = ModelBase::toJson(systemEncrypted_);
    }
    if(systemCmkidIsSet_) {
        val[utility::conversions::to_string_t("__system__cmkid")] = ModelBase::toJson(systemCmkid_);
    }
    if(userDataIsSet_) {
        val[utility::conversions::to_string_t("user_data")] = ModelBase::toJson(userData_);
    }
    if(byolIsSet_) {
        val[utility::conversions::to_string_t("BYOL")] = ModelBase::toJson(byol_);
    }

    return val;
}
bool ChangeSeversOsMetadata::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("__system__encrypted"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__system__encrypted"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSystemEncrypted(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("__system__cmkid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("__system__cmkid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSystemCmkid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_data"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_data"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("BYOL"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("BYOL"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setByol(refVal);
        }
    }
    return ok;
}


std::string ChangeSeversOsMetadata::getSystemEncrypted() const
{
    return systemEncrypted_;
}

void ChangeSeversOsMetadata::setSystemEncrypted(const std::string& value)
{
    systemEncrypted_ = value;
    systemEncryptedIsSet_ = true;
}

bool ChangeSeversOsMetadata::systemEncryptedIsSet() const
{
    return systemEncryptedIsSet_;
}

void ChangeSeversOsMetadata::unsetsystemEncrypted()
{
    systemEncryptedIsSet_ = false;
}

std::string ChangeSeversOsMetadata::getSystemCmkid() const
{
    return systemCmkid_;
}

void ChangeSeversOsMetadata::setSystemCmkid(const std::string& value)
{
    systemCmkid_ = value;
    systemCmkidIsSet_ = true;
}

bool ChangeSeversOsMetadata::systemCmkidIsSet() const
{
    return systemCmkidIsSet_;
}

void ChangeSeversOsMetadata::unsetsystemCmkid()
{
    systemCmkidIsSet_ = false;
}

std::string ChangeSeversOsMetadata::getUserData() const
{
    return userData_;
}

void ChangeSeversOsMetadata::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool ChangeSeversOsMetadata::userDataIsSet() const
{
    return userDataIsSet_;
}

void ChangeSeversOsMetadata::unsetuserData()
{
    userDataIsSet_ = false;
}

std::string ChangeSeversOsMetadata::getByol() const
{
    return byol_;
}

void ChangeSeversOsMetadata::setByol(const std::string& value)
{
    byol_ = value;
    byolIsSet_ = true;
}

bool ChangeSeversOsMetadata::byolIsSet() const
{
    return byolIsSet_;
}

void ChangeSeversOsMetadata::unsetbyol()
{
    byolIsSet_ = false;
}

}
}
}
}
}


