

#include "huaweicloud/ecs/v2/model/ReinstallSeverMetadata.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ReinstallSeverMetadata::ReinstallSeverMetadata()
{
    systemEncrypted_ = "";
    systemEncryptedIsSet_ = false;
    systemCmkid_ = "";
    systemCmkidIsSet_ = false;
    userData_ = "";
    userDataIsSet_ = false;
}

ReinstallSeverMetadata::~ReinstallSeverMetadata() = default;

void ReinstallSeverMetadata::validate()
{
}

web::json::value ReinstallSeverMetadata::toJson() const
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

    return val;
}

bool ReinstallSeverMetadata::fromJson(const web::json::value& val)
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
    return ok;
}

std::string ReinstallSeverMetadata::getSystemEncrypted() const
{
    return systemEncrypted_;
}

void ReinstallSeverMetadata::setSystemEncrypted(const std::string& value)
{
    systemEncrypted_ = value;
    systemEncryptedIsSet_ = true;
}

bool ReinstallSeverMetadata::systemEncryptedIsSet() const
{
    return systemEncryptedIsSet_;
}

void ReinstallSeverMetadata::unsetsystemEncrypted()
{
    systemEncryptedIsSet_ = false;
}

std::string ReinstallSeverMetadata::getSystemCmkid() const
{
    return systemCmkid_;
}

void ReinstallSeverMetadata::setSystemCmkid(const std::string& value)
{
    systemCmkid_ = value;
    systemCmkidIsSet_ = true;
}

bool ReinstallSeverMetadata::systemCmkidIsSet() const
{
    return systemCmkidIsSet_;
}

void ReinstallSeverMetadata::unsetsystemCmkid()
{
    systemCmkidIsSet_ = false;
}

std::string ReinstallSeverMetadata::getUserData() const
{
    return userData_;
}

void ReinstallSeverMetadata::setUserData(const std::string& value)
{
    userData_ = value;
    userDataIsSet_ = true;
}

bool ReinstallSeverMetadata::userDataIsSet() const
{
    return userDataIsSet_;
}

void ReinstallSeverMetadata::unsetuserData()
{
    userDataIsSet_ = false;
}

}
}
}
}
}


