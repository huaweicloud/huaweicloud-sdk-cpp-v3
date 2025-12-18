

#include "huaweicloud/meeting/v1/model/InterpreterAiDigitalInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




InterpreterAiDigitalInfo::InterpreterAiDigitalInfo()
{
    type_ = "";
    typeIsSet_ = false;
    digitalAccount_ = "";
    digitalAccountIsSet_ = false;
    digitalName_ = "";
    digitalNameIsSet_ = false;
    presenterAccount_ = "";
    presenterAccountIsSet_ = false;
    presenterRealNameAccount_ = "";
    presenterRealNameAccountIsSet_ = false;
    presenterName_ = "";
    presenterNameIsSet_ = false;
    presenterUserID_ = "";
    presenterUserIDIsSet_ = false;
    localConfId_ = "";
    localConfIdIsSet_ = false;
    localConfAddr_ = "";
    localConfAddrIsSet_ = false;
    localAuthInfo_ = "";
    localAuthInfoIsSet_ = false;
    localNeedProxy_ = false;
    localNeedProxyIsSet_ = false;
    localAuthUrl_ = "";
    localAuthUrlIsSet_ = false;
    localAuthAppId_ = "";
    localAuthAppIdIsSet_ = false;
}

InterpreterAiDigitalInfo::~InterpreterAiDigitalInfo() = default;

void InterpreterAiDigitalInfo::validate()
{
}

web::json::value InterpreterAiDigitalInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(digitalAccountIsSet_) {
        val[utility::conversions::to_string_t("digitalAccount")] = ModelBase::toJson(digitalAccount_);
    }
    if(digitalNameIsSet_) {
        val[utility::conversions::to_string_t("digitalName")] = ModelBase::toJson(digitalName_);
    }
    if(presenterAccountIsSet_) {
        val[utility::conversions::to_string_t("presenterAccount")] = ModelBase::toJson(presenterAccount_);
    }
    if(presenterRealNameAccountIsSet_) {
        val[utility::conversions::to_string_t("presenterRealNameAccount")] = ModelBase::toJson(presenterRealNameAccount_);
    }
    if(presenterNameIsSet_) {
        val[utility::conversions::to_string_t("presenterName")] = ModelBase::toJson(presenterName_);
    }
    if(presenterUserIDIsSet_) {
        val[utility::conversions::to_string_t("presenterUserID")] = ModelBase::toJson(presenterUserID_);
    }
    if(localConfIdIsSet_) {
        val[utility::conversions::to_string_t("localConfId")] = ModelBase::toJson(localConfId_);
    }
    if(localConfAddrIsSet_) {
        val[utility::conversions::to_string_t("localConfAddr")] = ModelBase::toJson(localConfAddr_);
    }
    if(localAuthInfoIsSet_) {
        val[utility::conversions::to_string_t("localAuthInfo")] = ModelBase::toJson(localAuthInfo_);
    }
    if(localNeedProxyIsSet_) {
        val[utility::conversions::to_string_t("localNeedProxy")] = ModelBase::toJson(localNeedProxy_);
    }
    if(localAuthUrlIsSet_) {
        val[utility::conversions::to_string_t("localAuthUrl")] = ModelBase::toJson(localAuthUrl_);
    }
    if(localAuthAppIdIsSet_) {
        val[utility::conversions::to_string_t("localAuthAppId")] = ModelBase::toJson(localAuthAppId_);
    }

    return val;
}
bool InterpreterAiDigitalInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("digitalAccount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("digitalAccount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDigitalAccount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("digitalName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("digitalName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDigitalName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("presenterAccount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("presenterAccount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPresenterAccount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("presenterRealNameAccount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("presenterRealNameAccount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPresenterRealNameAccount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("presenterName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("presenterName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPresenterName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("presenterUserID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("presenterUserID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPresenterUserID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("localConfId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("localConfId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocalConfId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("localConfAddr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("localConfAddr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocalConfAddr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("localAuthInfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("localAuthInfo"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocalAuthInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("localNeedProxy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("localNeedProxy"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocalNeedProxy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("localAuthUrl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("localAuthUrl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocalAuthUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("localAuthAppId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("localAuthAppId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocalAuthAppId(refVal);
        }
    }
    return ok;
}


std::string InterpreterAiDigitalInfo::getType() const
{
    return type_;
}

void InterpreterAiDigitalInfo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool InterpreterAiDigitalInfo::typeIsSet() const
{
    return typeIsSet_;
}

void InterpreterAiDigitalInfo::unsettype()
{
    typeIsSet_ = false;
}

std::string InterpreterAiDigitalInfo::getDigitalAccount() const
{
    return digitalAccount_;
}

void InterpreterAiDigitalInfo::setDigitalAccount(const std::string& value)
{
    digitalAccount_ = value;
    digitalAccountIsSet_ = true;
}

bool InterpreterAiDigitalInfo::digitalAccountIsSet() const
{
    return digitalAccountIsSet_;
}

void InterpreterAiDigitalInfo::unsetdigitalAccount()
{
    digitalAccountIsSet_ = false;
}

std::string InterpreterAiDigitalInfo::getDigitalName() const
{
    return digitalName_;
}

void InterpreterAiDigitalInfo::setDigitalName(const std::string& value)
{
    digitalName_ = value;
    digitalNameIsSet_ = true;
}

bool InterpreterAiDigitalInfo::digitalNameIsSet() const
{
    return digitalNameIsSet_;
}

void InterpreterAiDigitalInfo::unsetdigitalName()
{
    digitalNameIsSet_ = false;
}

std::string InterpreterAiDigitalInfo::getPresenterAccount() const
{
    return presenterAccount_;
}

void InterpreterAiDigitalInfo::setPresenterAccount(const std::string& value)
{
    presenterAccount_ = value;
    presenterAccountIsSet_ = true;
}

bool InterpreterAiDigitalInfo::presenterAccountIsSet() const
{
    return presenterAccountIsSet_;
}

void InterpreterAiDigitalInfo::unsetpresenterAccount()
{
    presenterAccountIsSet_ = false;
}

std::string InterpreterAiDigitalInfo::getPresenterRealNameAccount() const
{
    return presenterRealNameAccount_;
}

void InterpreterAiDigitalInfo::setPresenterRealNameAccount(const std::string& value)
{
    presenterRealNameAccount_ = value;
    presenterRealNameAccountIsSet_ = true;
}

bool InterpreterAiDigitalInfo::presenterRealNameAccountIsSet() const
{
    return presenterRealNameAccountIsSet_;
}

void InterpreterAiDigitalInfo::unsetpresenterRealNameAccount()
{
    presenterRealNameAccountIsSet_ = false;
}

std::string InterpreterAiDigitalInfo::getPresenterName() const
{
    return presenterName_;
}

void InterpreterAiDigitalInfo::setPresenterName(const std::string& value)
{
    presenterName_ = value;
    presenterNameIsSet_ = true;
}

bool InterpreterAiDigitalInfo::presenterNameIsSet() const
{
    return presenterNameIsSet_;
}

void InterpreterAiDigitalInfo::unsetpresenterName()
{
    presenterNameIsSet_ = false;
}

std::string InterpreterAiDigitalInfo::getPresenterUserID() const
{
    return presenterUserID_;
}

void InterpreterAiDigitalInfo::setPresenterUserID(const std::string& value)
{
    presenterUserID_ = value;
    presenterUserIDIsSet_ = true;
}

bool InterpreterAiDigitalInfo::presenterUserIDIsSet() const
{
    return presenterUserIDIsSet_;
}

void InterpreterAiDigitalInfo::unsetpresenterUserID()
{
    presenterUserIDIsSet_ = false;
}

std::string InterpreterAiDigitalInfo::getLocalConfId() const
{
    return localConfId_;
}

void InterpreterAiDigitalInfo::setLocalConfId(const std::string& value)
{
    localConfId_ = value;
    localConfIdIsSet_ = true;
}

bool InterpreterAiDigitalInfo::localConfIdIsSet() const
{
    return localConfIdIsSet_;
}

void InterpreterAiDigitalInfo::unsetlocalConfId()
{
    localConfIdIsSet_ = false;
}

std::string InterpreterAiDigitalInfo::getLocalConfAddr() const
{
    return localConfAddr_;
}

void InterpreterAiDigitalInfo::setLocalConfAddr(const std::string& value)
{
    localConfAddr_ = value;
    localConfAddrIsSet_ = true;
}

bool InterpreterAiDigitalInfo::localConfAddrIsSet() const
{
    return localConfAddrIsSet_;
}

void InterpreterAiDigitalInfo::unsetlocalConfAddr()
{
    localConfAddrIsSet_ = false;
}

std::string InterpreterAiDigitalInfo::getLocalAuthInfo() const
{
    return localAuthInfo_;
}

void InterpreterAiDigitalInfo::setLocalAuthInfo(const std::string& value)
{
    localAuthInfo_ = value;
    localAuthInfoIsSet_ = true;
}

bool InterpreterAiDigitalInfo::localAuthInfoIsSet() const
{
    return localAuthInfoIsSet_;
}

void InterpreterAiDigitalInfo::unsetlocalAuthInfo()
{
    localAuthInfoIsSet_ = false;
}

bool InterpreterAiDigitalInfo::isLocalNeedProxy() const
{
    return localNeedProxy_;
}

void InterpreterAiDigitalInfo::setLocalNeedProxy(bool value)
{
    localNeedProxy_ = value;
    localNeedProxyIsSet_ = true;
}

bool InterpreterAiDigitalInfo::localNeedProxyIsSet() const
{
    return localNeedProxyIsSet_;
}

void InterpreterAiDigitalInfo::unsetlocalNeedProxy()
{
    localNeedProxyIsSet_ = false;
}

std::string InterpreterAiDigitalInfo::getLocalAuthUrl() const
{
    return localAuthUrl_;
}

void InterpreterAiDigitalInfo::setLocalAuthUrl(const std::string& value)
{
    localAuthUrl_ = value;
    localAuthUrlIsSet_ = true;
}

bool InterpreterAiDigitalInfo::localAuthUrlIsSet() const
{
    return localAuthUrlIsSet_;
}

void InterpreterAiDigitalInfo::unsetlocalAuthUrl()
{
    localAuthUrlIsSet_ = false;
}

std::string InterpreterAiDigitalInfo::getLocalAuthAppId() const
{
    return localAuthAppId_;
}

void InterpreterAiDigitalInfo::setLocalAuthAppId(const std::string& value)
{
    localAuthAppId_ = value;
    localAuthAppIdIsSet_ = true;
}

bool InterpreterAiDigitalInfo::localAuthAppIdIsSet() const
{
    return localAuthAppIdIsSet_;
}

void InterpreterAiDigitalInfo::unsetlocalAuthAppId()
{
    localAuthAppIdIsSet_ = false;
}

}
}
}
}
}


