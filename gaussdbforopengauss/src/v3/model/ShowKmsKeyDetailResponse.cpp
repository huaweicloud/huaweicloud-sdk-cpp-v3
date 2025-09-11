

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowKmsKeyDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowKmsKeyDetailResponse::ShowKmsKeyDetailResponse()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    keyAlias_ = "";
    keyAliasIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    keyState_ = "";
    keyStateIsSet_ = false;
}

ShowKmsKeyDetailResponse::~ShowKmsKeyDetailResponse() = default;

void ShowKmsKeyDetailResponse::validate()
{
}

web::json::value ShowKmsKeyDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(keyAliasIsSet_) {
        val[utility::conversions::to_string_t("key_alias")] = ModelBase::toJson(keyAlias_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(keyStateIsSet_) {
        val[utility::conversions::to_string_t("key_state")] = ModelBase::toJson(keyState_);
    }

    return val;
}
bool ShowKmsKeyDetailResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("key_alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyAlias(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
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


std::string ShowKmsKeyDetailResponse::getKeyId() const
{
    return keyId_;
}

void ShowKmsKeyDetailResponse::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool ShowKmsKeyDetailResponse::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void ShowKmsKeyDetailResponse::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string ShowKmsKeyDetailResponse::getKeyAlias() const
{
    return keyAlias_;
}

void ShowKmsKeyDetailResponse::setKeyAlias(const std::string& value)
{
    keyAlias_ = value;
    keyAliasIsSet_ = true;
}

bool ShowKmsKeyDetailResponse::keyAliasIsSet() const
{
    return keyAliasIsSet_;
}

void ShowKmsKeyDetailResponse::unsetkeyAlias()
{
    keyAliasIsSet_ = false;
}

std::string ShowKmsKeyDetailResponse::getDomainId() const
{
    return domainId_;
}

void ShowKmsKeyDetailResponse::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ShowKmsKeyDetailResponse::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ShowKmsKeyDetailResponse::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ShowKmsKeyDetailResponse::getKeyState() const
{
    return keyState_;
}

void ShowKmsKeyDetailResponse::setKeyState(const std::string& value)
{
    keyState_ = value;
    keyStateIsSet_ = true;
}

bool ShowKmsKeyDetailResponse::keyStateIsSet() const
{
    return keyStateIsSet_;
}

void ShowKmsKeyDetailResponse::unsetkeyState()
{
    keyStateIsSet_ = false;
}

}
}
}
}
}


