

#include "huaweicloud/live/v1/model/LiveSnapshotConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




LiveSnapshotConfig::LiveSnapshotConfig()
{
    domain_ = "";
    domainIsSet_ = false;
    appName_ = "";
    appNameIsSet_ = false;
    authKey_ = "";
    authKeyIsSet_ = false;
    timeInterval_ = 0;
    timeIntervalIsSet_ = false;
    objectWriteMode_ = 0;
    objectWriteModeIsSet_ = false;
    obsLocationIsSet_ = false;
    callBackEnable_ = "";
    callBackEnableIsSet_ = false;
    callBackUrl_ = "";
    callBackUrlIsSet_ = false;
    imageAccessProtocol_ = "";
    imageAccessProtocolIsSet_ = false;
    imageAccessDomain_ = "";
    imageAccessDomainIsSet_ = false;
}

LiveSnapshotConfig::~LiveSnapshotConfig() = default;

void LiveSnapshotConfig::validate()
{
}

web::json::value LiveSnapshotConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(appNameIsSet_) {
        val[utility::conversions::to_string_t("app_name")] = ModelBase::toJson(appName_);
    }
    if(authKeyIsSet_) {
        val[utility::conversions::to_string_t("auth_key")] = ModelBase::toJson(authKey_);
    }
    if(timeIntervalIsSet_) {
        val[utility::conversions::to_string_t("time_interval")] = ModelBase::toJson(timeInterval_);
    }
    if(objectWriteModeIsSet_) {
        val[utility::conversions::to_string_t("object_write_mode")] = ModelBase::toJson(objectWriteMode_);
    }
    if(obsLocationIsSet_) {
        val[utility::conversions::to_string_t("obs_location")] = ModelBase::toJson(obsLocation_);
    }
    if(callBackEnableIsSet_) {
        val[utility::conversions::to_string_t("call_back_enable")] = ModelBase::toJson(callBackEnable_);
    }
    if(callBackUrlIsSet_) {
        val[utility::conversions::to_string_t("call_back_url")] = ModelBase::toJson(callBackUrl_);
    }
    if(imageAccessProtocolIsSet_) {
        val[utility::conversions::to_string_t("image_access_protocol")] = ModelBase::toJson(imageAccessProtocol_);
    }
    if(imageAccessDomainIsSet_) {
        val[utility::conversions::to_string_t("image_access_domain")] = ModelBase::toJson(imageAccessDomain_);
    }

    return val;
}
bool LiveSnapshotConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auth_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auth_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time_interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_interval"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeInterval(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("object_write_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("object_write_mode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObjectWriteMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("obs_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_location"));
        if(!fieldValue.is_null())
        {
            ObsFileAddr refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsLocation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("call_back_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("call_back_enable"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCallBackEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("call_back_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("call_back_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCallBackUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_access_protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_access_protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageAccessProtocol(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_access_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_access_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageAccessDomain(refVal);
        }
    }
    return ok;
}


std::string LiveSnapshotConfig::getDomain() const
{
    return domain_;
}

void LiveSnapshotConfig::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool LiveSnapshotConfig::domainIsSet() const
{
    return domainIsSet_;
}

void LiveSnapshotConfig::unsetdomain()
{
    domainIsSet_ = false;
}

std::string LiveSnapshotConfig::getAppName() const
{
    return appName_;
}

void LiveSnapshotConfig::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool LiveSnapshotConfig::appNameIsSet() const
{
    return appNameIsSet_;
}

void LiveSnapshotConfig::unsetappName()
{
    appNameIsSet_ = false;
}

std::string LiveSnapshotConfig::getAuthKey() const
{
    return authKey_;
}

void LiveSnapshotConfig::setAuthKey(const std::string& value)
{
    authKey_ = value;
    authKeyIsSet_ = true;
}

bool LiveSnapshotConfig::authKeyIsSet() const
{
    return authKeyIsSet_;
}

void LiveSnapshotConfig::unsetauthKey()
{
    authKeyIsSet_ = false;
}

int32_t LiveSnapshotConfig::getTimeInterval() const
{
    return timeInterval_;
}

void LiveSnapshotConfig::setTimeInterval(int32_t value)
{
    timeInterval_ = value;
    timeIntervalIsSet_ = true;
}

bool LiveSnapshotConfig::timeIntervalIsSet() const
{
    return timeIntervalIsSet_;
}

void LiveSnapshotConfig::unsettimeInterval()
{
    timeIntervalIsSet_ = false;
}

int32_t LiveSnapshotConfig::getObjectWriteMode() const
{
    return objectWriteMode_;
}

void LiveSnapshotConfig::setObjectWriteMode(int32_t value)
{
    objectWriteMode_ = value;
    objectWriteModeIsSet_ = true;
}

bool LiveSnapshotConfig::objectWriteModeIsSet() const
{
    return objectWriteModeIsSet_;
}

void LiveSnapshotConfig::unsetobjectWriteMode()
{
    objectWriteModeIsSet_ = false;
}

ObsFileAddr LiveSnapshotConfig::getObsLocation() const
{
    return obsLocation_;
}

void LiveSnapshotConfig::setObsLocation(const ObsFileAddr& value)
{
    obsLocation_ = value;
    obsLocationIsSet_ = true;
}

bool LiveSnapshotConfig::obsLocationIsSet() const
{
    return obsLocationIsSet_;
}

void LiveSnapshotConfig::unsetobsLocation()
{
    obsLocationIsSet_ = false;
}

std::string LiveSnapshotConfig::getCallBackEnable() const
{
    return callBackEnable_;
}

void LiveSnapshotConfig::setCallBackEnable(const std::string& value)
{
    callBackEnable_ = value;
    callBackEnableIsSet_ = true;
}

bool LiveSnapshotConfig::callBackEnableIsSet() const
{
    return callBackEnableIsSet_;
}

void LiveSnapshotConfig::unsetcallBackEnable()
{
    callBackEnableIsSet_ = false;
}

std::string LiveSnapshotConfig::getCallBackUrl() const
{
    return callBackUrl_;
}

void LiveSnapshotConfig::setCallBackUrl(const std::string& value)
{
    callBackUrl_ = value;
    callBackUrlIsSet_ = true;
}

bool LiveSnapshotConfig::callBackUrlIsSet() const
{
    return callBackUrlIsSet_;
}

void LiveSnapshotConfig::unsetcallBackUrl()
{
    callBackUrlIsSet_ = false;
}

std::string LiveSnapshotConfig::getImageAccessProtocol() const
{
    return imageAccessProtocol_;
}

void LiveSnapshotConfig::setImageAccessProtocol(const std::string& value)
{
    imageAccessProtocol_ = value;
    imageAccessProtocolIsSet_ = true;
}

bool LiveSnapshotConfig::imageAccessProtocolIsSet() const
{
    return imageAccessProtocolIsSet_;
}

void LiveSnapshotConfig::unsetimageAccessProtocol()
{
    imageAccessProtocolIsSet_ = false;
}

std::string LiveSnapshotConfig::getImageAccessDomain() const
{
    return imageAccessDomain_;
}

void LiveSnapshotConfig::setImageAccessDomain(const std::string& value)
{
    imageAccessDomain_ = value;
    imageAccessDomainIsSet_ = true;
}

bool LiveSnapshotConfig::imageAccessDomainIsSet() const
{
    return imageAccessDomainIsSet_;
}

void LiveSnapshotConfig::unsetimageAccessDomain()
{
    imageAccessDomainIsSet_ = false;
}

}
}
}
}
}


