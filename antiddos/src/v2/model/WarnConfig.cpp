

#include "huaweicloud/antiddos/v2/model/WarnConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V2 {
namespace Model {




WarnConfig::WarnConfig()
{
    antiDDoS_ = false;
    antiDDoSIsSet_ = false;
    backDoors_ = false;
    backDoorsIsSet_ = false;
    bruceForce_ = false;
    bruceForceIsSet_ = false;
    highPrivilege_ = false;
    highPrivilegeIsSet_ = false;
    remoteLogin_ = false;
    remoteLoginIsSet_ = false;
    sendFrequency_ = 0;
    sendFrequencyIsSet_ = false;
    waf_ = false;
    wafIsSet_ = false;
    weakPassword_ = false;
    weakPasswordIsSet_ = false;
}

WarnConfig::~WarnConfig() = default;

void WarnConfig::validate()
{
}

web::json::value WarnConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(antiDDoSIsSet_) {
        val[utility::conversions::to_string_t("antiDDoS")] = ModelBase::toJson(antiDDoS_);
    }
    if(backDoorsIsSet_) {
        val[utility::conversions::to_string_t("back_doors")] = ModelBase::toJson(backDoors_);
    }
    if(bruceForceIsSet_) {
        val[utility::conversions::to_string_t("bruce_force")] = ModelBase::toJson(bruceForce_);
    }
    if(highPrivilegeIsSet_) {
        val[utility::conversions::to_string_t("high_privilege")] = ModelBase::toJson(highPrivilege_);
    }
    if(remoteLoginIsSet_) {
        val[utility::conversions::to_string_t("remote_login")] = ModelBase::toJson(remoteLogin_);
    }
    if(sendFrequencyIsSet_) {
        val[utility::conversions::to_string_t("send_frequency")] = ModelBase::toJson(sendFrequency_);
    }
    if(wafIsSet_) {
        val[utility::conversions::to_string_t("waf")] = ModelBase::toJson(waf_);
    }
    if(weakPasswordIsSet_) {
        val[utility::conversions::to_string_t("weak_password")] = ModelBase::toJson(weakPassword_);
    }

    return val;
}
bool WarnConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("antiDDoS"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("antiDDoS"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAntiDDoS(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("back_doors"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("back_doors"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackDoors(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bruce_force"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bruce_force"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBruceForce(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("high_privilege"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("high_privilege"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHighPrivilege(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remote_login"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remote_login"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemoteLogin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("send_frequency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("send_frequency"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSendFrequency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("waf"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("waf"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWaf(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("weak_password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("weak_password"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWeakPassword(refVal);
        }
    }
    return ok;
}


bool WarnConfig::isAntiDDoS() const
{
    return antiDDoS_;
}

void WarnConfig::setAntiDDoS(bool value)
{
    antiDDoS_ = value;
    antiDDoSIsSet_ = true;
}

bool WarnConfig::antiDDoSIsSet() const
{
    return antiDDoSIsSet_;
}

void WarnConfig::unsetantiDDoS()
{
    antiDDoSIsSet_ = false;
}

bool WarnConfig::isBackDoors() const
{
    return backDoors_;
}

void WarnConfig::setBackDoors(bool value)
{
    backDoors_ = value;
    backDoorsIsSet_ = true;
}

bool WarnConfig::backDoorsIsSet() const
{
    return backDoorsIsSet_;
}

void WarnConfig::unsetbackDoors()
{
    backDoorsIsSet_ = false;
}

bool WarnConfig::isBruceForce() const
{
    return bruceForce_;
}

void WarnConfig::setBruceForce(bool value)
{
    bruceForce_ = value;
    bruceForceIsSet_ = true;
}

bool WarnConfig::bruceForceIsSet() const
{
    return bruceForceIsSet_;
}

void WarnConfig::unsetbruceForce()
{
    bruceForceIsSet_ = false;
}

bool WarnConfig::isHighPrivilege() const
{
    return highPrivilege_;
}

void WarnConfig::setHighPrivilege(bool value)
{
    highPrivilege_ = value;
    highPrivilegeIsSet_ = true;
}

bool WarnConfig::highPrivilegeIsSet() const
{
    return highPrivilegeIsSet_;
}

void WarnConfig::unsethighPrivilege()
{
    highPrivilegeIsSet_ = false;
}

bool WarnConfig::isRemoteLogin() const
{
    return remoteLogin_;
}

void WarnConfig::setRemoteLogin(bool value)
{
    remoteLogin_ = value;
    remoteLoginIsSet_ = true;
}

bool WarnConfig::remoteLoginIsSet() const
{
    return remoteLoginIsSet_;
}

void WarnConfig::unsetremoteLogin()
{
    remoteLoginIsSet_ = false;
}

int32_t WarnConfig::getSendFrequency() const
{
    return sendFrequency_;
}

void WarnConfig::setSendFrequency(int32_t value)
{
    sendFrequency_ = value;
    sendFrequencyIsSet_ = true;
}

bool WarnConfig::sendFrequencyIsSet() const
{
    return sendFrequencyIsSet_;
}

void WarnConfig::unsetsendFrequency()
{
    sendFrequencyIsSet_ = false;
}

bool WarnConfig::isWaf() const
{
    return waf_;
}

void WarnConfig::setWaf(bool value)
{
    waf_ = value;
    wafIsSet_ = true;
}

bool WarnConfig::wafIsSet() const
{
    return wafIsSet_;
}

void WarnConfig::unsetwaf()
{
    wafIsSet_ = false;
}

bool WarnConfig::isWeakPassword() const
{
    return weakPassword_;
}

void WarnConfig::setWeakPassword(bool value)
{
    weakPassword_ = value;
    weakPasswordIsSet_ = true;
}

bool WarnConfig::weakPasswordIsSet() const
{
    return weakPasswordIsSet_;
}

void WarnConfig::unsetweakPassword()
{
    weakPasswordIsSet_ = false;
}

}
}
}
}
}


