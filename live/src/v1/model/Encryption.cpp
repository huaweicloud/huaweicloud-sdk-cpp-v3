

#include "huaweicloud/live/v1/model/Encryption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




Encryption::Encryption()
{
    keyRotationIntervalSeconds_ = 0;
    keyRotationIntervalSecondsIsSet_ = false;
    encryptionMethod_ = "";
    encryptionMethodIsSet_ = false;
    level_ = "";
    levelIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
    systemIdsIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    spekeVersion_ = "";
    spekeVersionIsSet_ = false;
    requestMode_ = "";
    requestModeIsSet_ = false;
    httpHeadersIsSet_ = false;
    urn_ = "";
    urnIsSet_ = false;
}

Encryption::~Encryption() = default;

void Encryption::validate()
{
}

web::json::value Encryption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyRotationIntervalSecondsIsSet_) {
        val[utility::conversions::to_string_t("key_rotation_interval_seconds")] = ModelBase::toJson(keyRotationIntervalSeconds_);
    }
    if(encryptionMethodIsSet_) {
        val[utility::conversions::to_string_t("encryption_method")] = ModelBase::toJson(encryptionMethod_);
    }
    if(levelIsSet_) {
        val[utility::conversions::to_string_t("level")] = ModelBase::toJson(level_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }
    if(systemIdsIsSet_) {
        val[utility::conversions::to_string_t("system_ids")] = ModelBase::toJson(systemIds_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(spekeVersionIsSet_) {
        val[utility::conversions::to_string_t("speke_version")] = ModelBase::toJson(spekeVersion_);
    }
    if(requestModeIsSet_) {
        val[utility::conversions::to_string_t("request_mode")] = ModelBase::toJson(requestMode_);
    }
    if(httpHeadersIsSet_) {
        val[utility::conversions::to_string_t("http_headers")] = ModelBase::toJson(httpHeaders_);
    }
    if(urnIsSet_) {
        val[utility::conversions::to_string_t("urn")] = ModelBase::toJson(urn_);
    }

    return val;
}
bool Encryption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key_rotation_interval_seconds"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_rotation_interval_seconds"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyRotationIntervalSeconds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("encryption_method"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encryption_method"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncryptionMethod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("system_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("system_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSystemIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("speke_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("speke_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpekeVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("http_headers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("http_headers"));
        if(!fieldValue.is_null())
        {
            std::vector<HttpHeader> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpHeaders(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrn(refVal);
        }
    }
    return ok;
}


int32_t Encryption::getKeyRotationIntervalSeconds() const
{
    return keyRotationIntervalSeconds_;
}

void Encryption::setKeyRotationIntervalSeconds(int32_t value)
{
    keyRotationIntervalSeconds_ = value;
    keyRotationIntervalSecondsIsSet_ = true;
}

bool Encryption::keyRotationIntervalSecondsIsSet() const
{
    return keyRotationIntervalSecondsIsSet_;
}

void Encryption::unsetkeyRotationIntervalSeconds()
{
    keyRotationIntervalSecondsIsSet_ = false;
}

std::string Encryption::getEncryptionMethod() const
{
    return encryptionMethod_;
}

void Encryption::setEncryptionMethod(const std::string& value)
{
    encryptionMethod_ = value;
    encryptionMethodIsSet_ = true;
}

bool Encryption::encryptionMethodIsSet() const
{
    return encryptionMethodIsSet_;
}

void Encryption::unsetencryptionMethod()
{
    encryptionMethodIsSet_ = false;
}

std::string Encryption::getLevel() const
{
    return level_;
}

void Encryption::setLevel(const std::string& value)
{
    level_ = value;
    levelIsSet_ = true;
}

bool Encryption::levelIsSet() const
{
    return levelIsSet_;
}

void Encryption::unsetlevel()
{
    levelIsSet_ = false;
}

std::string Encryption::getResourceId() const
{
    return resourceId_;
}

void Encryption::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool Encryption::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void Encryption::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

std::vector<std::string>& Encryption::getSystemIds()
{
    return systemIds_;
}

void Encryption::setSystemIds(const std::vector<std::string>& value)
{
    systemIds_ = value;
    systemIdsIsSet_ = true;
}

bool Encryption::systemIdsIsSet() const
{
    return systemIdsIsSet_;
}

void Encryption::unsetsystemIds()
{
    systemIdsIsSet_ = false;
}

std::string Encryption::getUrl() const
{
    return url_;
}

void Encryption::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool Encryption::urlIsSet() const
{
    return urlIsSet_;
}

void Encryption::unseturl()
{
    urlIsSet_ = false;
}

std::string Encryption::getSpekeVersion() const
{
    return spekeVersion_;
}

void Encryption::setSpekeVersion(const std::string& value)
{
    spekeVersion_ = value;
    spekeVersionIsSet_ = true;
}

bool Encryption::spekeVersionIsSet() const
{
    return spekeVersionIsSet_;
}

void Encryption::unsetspekeVersion()
{
    spekeVersionIsSet_ = false;
}

std::string Encryption::getRequestMode() const
{
    return requestMode_;
}

void Encryption::setRequestMode(const std::string& value)
{
    requestMode_ = value;
    requestModeIsSet_ = true;
}

bool Encryption::requestModeIsSet() const
{
    return requestModeIsSet_;
}

void Encryption::unsetrequestMode()
{
    requestModeIsSet_ = false;
}

std::vector<HttpHeader>& Encryption::getHttpHeaders()
{
    return httpHeaders_;
}

void Encryption::setHttpHeaders(const std::vector<HttpHeader>& value)
{
    httpHeaders_ = value;
    httpHeadersIsSet_ = true;
}

bool Encryption::httpHeadersIsSet() const
{
    return httpHeadersIsSet_;
}

void Encryption::unsethttpHeaders()
{
    httpHeadersIsSet_ = false;
}

std::string Encryption::getUrn() const
{
    return urn_;
}

void Encryption::setUrn(const std::string& value)
{
    urn_ = value;
    urnIsSet_ = true;
}

bool Encryption::urnIsSet() const
{
    return urnIsSet_;
}

void Encryption::unseturn()
{
    urnIsSet_ = false;
}

}
}
}
}
}


