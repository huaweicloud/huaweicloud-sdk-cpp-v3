

#include "huaweicloud/smn/v2/model/ApplicationItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Smn {
namespace V2 {
namespace Model {




ApplicationItem::ApplicationItem()
{
    name_ = "";
    nameIsSet_ = false;
    platform_ = "";
    platformIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    applicationUrn_ = "";
    applicationUrnIsSet_ = false;
    applicationId_ = "";
    applicationIdIsSet_ = false;
    enabled_ = "";
    enabledIsSet_ = false;
    appleCertificateExpirationDate_ = "";
    appleCertificateExpirationDateIsSet_ = false;
}

ApplicationItem::~ApplicationItem() = default;

void ApplicationItem::validate()
{
}

web::json::value ApplicationItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(platformIsSet_) {
        val[utility::conversions::to_string_t("platform")] = ModelBase::toJson(platform_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(applicationUrnIsSet_) {
        val[utility::conversions::to_string_t("application_urn")] = ModelBase::toJson(applicationUrn_);
    }
    if(applicationIdIsSet_) {
        val[utility::conversions::to_string_t("application_id")] = ModelBase::toJson(applicationId_);
    }
    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
    }
    if(appleCertificateExpirationDateIsSet_) {
        val[utility::conversions::to_string_t("apple_certificate_expiration_date")] = ModelBase::toJson(appleCertificateExpirationDate_);
    }

    return val;
}
bool ApplicationItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("platform"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("platform"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlatform(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("application_urn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_urn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationUrn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("application_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabled(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("apple_certificate_expiration_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apple_certificate_expiration_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppleCertificateExpirationDate(refVal);
        }
    }
    return ok;
}


std::string ApplicationItem::getName() const
{
    return name_;
}

void ApplicationItem::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ApplicationItem::nameIsSet() const
{
    return nameIsSet_;
}

void ApplicationItem::unsetname()
{
    nameIsSet_ = false;
}

std::string ApplicationItem::getPlatform() const
{
    return platform_;
}

void ApplicationItem::setPlatform(const std::string& value)
{
    platform_ = value;
    platformIsSet_ = true;
}

bool ApplicationItem::platformIsSet() const
{
    return platformIsSet_;
}

void ApplicationItem::unsetplatform()
{
    platformIsSet_ = false;
}

std::string ApplicationItem::getCreateTime() const
{
    return createTime_;
}

void ApplicationItem::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ApplicationItem::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ApplicationItem::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string ApplicationItem::getApplicationUrn() const
{
    return applicationUrn_;
}

void ApplicationItem::setApplicationUrn(const std::string& value)
{
    applicationUrn_ = value;
    applicationUrnIsSet_ = true;
}

bool ApplicationItem::applicationUrnIsSet() const
{
    return applicationUrnIsSet_;
}

void ApplicationItem::unsetapplicationUrn()
{
    applicationUrnIsSet_ = false;
}

std::string ApplicationItem::getApplicationId() const
{
    return applicationId_;
}

void ApplicationItem::setApplicationId(const std::string& value)
{
    applicationId_ = value;
    applicationIdIsSet_ = true;
}

bool ApplicationItem::applicationIdIsSet() const
{
    return applicationIdIsSet_;
}

void ApplicationItem::unsetapplicationId()
{
    applicationIdIsSet_ = false;
}

std::string ApplicationItem::getEnabled() const
{
    return enabled_;
}

void ApplicationItem::setEnabled(const std::string& value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool ApplicationItem::enabledIsSet() const
{
    return enabledIsSet_;
}

void ApplicationItem::unsetenabled()
{
    enabledIsSet_ = false;
}

std::string ApplicationItem::getAppleCertificateExpirationDate() const
{
    return appleCertificateExpirationDate_;
}

void ApplicationItem::setAppleCertificateExpirationDate(const std::string& value)
{
    appleCertificateExpirationDate_ = value;
    appleCertificateExpirationDateIsSet_ = true;
}

bool ApplicationItem::appleCertificateExpirationDateIsSet() const
{
    return appleCertificateExpirationDateIsSet_;
}

void ApplicationItem::unsetappleCertificateExpirationDate()
{
    appleCertificateExpirationDateIsSet_ = false;
}

}
}
}
}
}


