

#include "huaweicloud/antiddos/v1/model/UpdateAlertConfigRequestBody_warn_config.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {




UpdateAlertConfigRequestBody_warn_config::UpdateAlertConfigRequestBody_warn_config()
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

UpdateAlertConfigRequestBody_warn_config::~UpdateAlertConfigRequestBody_warn_config() = default;

void UpdateAlertConfigRequestBody_warn_config::validate()
{
}

web::json::value UpdateAlertConfigRequestBody_warn_config::toJson() const
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
bool UpdateAlertConfigRequestBody_warn_config::fromJson(const web::json::value& val)
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


bool UpdateAlertConfigRequestBody_warn_config::isAntiDDoS() const
{
    return antiDDoS_;
}

void UpdateAlertConfigRequestBody_warn_config::setAntiDDoS(bool value)
{
    antiDDoS_ = value;
    antiDDoSIsSet_ = true;
}

bool UpdateAlertConfigRequestBody_warn_config::antiDDoSIsSet() const
{
    return antiDDoSIsSet_;
}

void UpdateAlertConfigRequestBody_warn_config::unsetantiDDoS()
{
    antiDDoSIsSet_ = false;
}

bool UpdateAlertConfigRequestBody_warn_config::isBackDoors() const
{
    return backDoors_;
}

void UpdateAlertConfigRequestBody_warn_config::setBackDoors(bool value)
{
    backDoors_ = value;
    backDoorsIsSet_ = true;
}

bool UpdateAlertConfigRequestBody_warn_config::backDoorsIsSet() const
{
    return backDoorsIsSet_;
}

void UpdateAlertConfigRequestBody_warn_config::unsetbackDoors()
{
    backDoorsIsSet_ = false;
}

bool UpdateAlertConfigRequestBody_warn_config::isBruceForce() const
{
    return bruceForce_;
}

void UpdateAlertConfigRequestBody_warn_config::setBruceForce(bool value)
{
    bruceForce_ = value;
    bruceForceIsSet_ = true;
}

bool UpdateAlertConfigRequestBody_warn_config::bruceForceIsSet() const
{
    return bruceForceIsSet_;
}

void UpdateAlertConfigRequestBody_warn_config::unsetbruceForce()
{
    bruceForceIsSet_ = false;
}

bool UpdateAlertConfigRequestBody_warn_config::isHighPrivilege() const
{
    return highPrivilege_;
}

void UpdateAlertConfigRequestBody_warn_config::setHighPrivilege(bool value)
{
    highPrivilege_ = value;
    highPrivilegeIsSet_ = true;
}

bool UpdateAlertConfigRequestBody_warn_config::highPrivilegeIsSet() const
{
    return highPrivilegeIsSet_;
}

void UpdateAlertConfigRequestBody_warn_config::unsethighPrivilege()
{
    highPrivilegeIsSet_ = false;
}

bool UpdateAlertConfigRequestBody_warn_config::isRemoteLogin() const
{
    return remoteLogin_;
}

void UpdateAlertConfigRequestBody_warn_config::setRemoteLogin(bool value)
{
    remoteLogin_ = value;
    remoteLoginIsSet_ = true;
}

bool UpdateAlertConfigRequestBody_warn_config::remoteLoginIsSet() const
{
    return remoteLoginIsSet_;
}

void UpdateAlertConfigRequestBody_warn_config::unsetremoteLogin()
{
    remoteLoginIsSet_ = false;
}

int32_t UpdateAlertConfigRequestBody_warn_config::getSendFrequency() const
{
    return sendFrequency_;
}

void UpdateAlertConfigRequestBody_warn_config::setSendFrequency(int32_t value)
{
    sendFrequency_ = value;
    sendFrequencyIsSet_ = true;
}

bool UpdateAlertConfigRequestBody_warn_config::sendFrequencyIsSet() const
{
    return sendFrequencyIsSet_;
}

void UpdateAlertConfigRequestBody_warn_config::unsetsendFrequency()
{
    sendFrequencyIsSet_ = false;
}

bool UpdateAlertConfigRequestBody_warn_config::isWaf() const
{
    return waf_;
}

void UpdateAlertConfigRequestBody_warn_config::setWaf(bool value)
{
    waf_ = value;
    wafIsSet_ = true;
}

bool UpdateAlertConfigRequestBody_warn_config::wafIsSet() const
{
    return wafIsSet_;
}

void UpdateAlertConfigRequestBody_warn_config::unsetwaf()
{
    wafIsSet_ = false;
}

bool UpdateAlertConfigRequestBody_warn_config::isWeakPassword() const
{
    return weakPassword_;
}

void UpdateAlertConfigRequestBody_warn_config::setWeakPassword(bool value)
{
    weakPassword_ = value;
    weakPasswordIsSet_ = true;
}

bool UpdateAlertConfigRequestBody_warn_config::weakPasswordIsSet() const
{
    return weakPasswordIsSet_;
}

void UpdateAlertConfigRequestBody_warn_config::unsetweakPassword()
{
    weakPasswordIsSet_ = false;
}

}
}
}
}
}


