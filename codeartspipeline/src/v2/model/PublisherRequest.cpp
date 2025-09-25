

#include "huaweicloud/codeartspipeline/v2/model/PublisherRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




PublisherRequest::PublisherRequest()
{
    name_ = "";
    nameIsSet_ = false;
    userId_ = "";
    userIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    logoUrl_ = "";
    logoUrlIsSet_ = false;
    website_ = "";
    websiteIsSet_ = false;
    supportUrl_ = "";
    supportUrlIsSet_ = false;
    sourceUrl_ = "";
    sourceUrlIsSet_ = false;
    enName_ = "";
    enNameIsSet_ = false;
    publisherUniqueId_ = "";
    publisherUniqueIdIsSet_ = false;
}

PublisherRequest::~PublisherRequest() = default;

void PublisherRequest::validate()
{
}

web::json::value PublisherRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(userIdIsSet_) {
        val[utility::conversions::to_string_t("user_id")] = ModelBase::toJson(userId_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(logoUrlIsSet_) {
        val[utility::conversions::to_string_t("logo_url")] = ModelBase::toJson(logoUrl_);
    }
    if(websiteIsSet_) {
        val[utility::conversions::to_string_t("website")] = ModelBase::toJson(website_);
    }
    if(supportUrlIsSet_) {
        val[utility::conversions::to_string_t("support_url")] = ModelBase::toJson(supportUrl_);
    }
    if(sourceUrlIsSet_) {
        val[utility::conversions::to_string_t("source_url")] = ModelBase::toJson(sourceUrl_);
    }
    if(enNameIsSet_) {
        val[utility::conversions::to_string_t("en_name")] = ModelBase::toJson(enName_);
    }
    if(publisherUniqueIdIsSet_) {
        val[utility::conversions::to_string_t("publisher_unique_id")] = ModelBase::toJson(publisherUniqueId_);
    }

    return val;
}
bool PublisherRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("user_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("logo_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("logo_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogoUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("website"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("website"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWebsite(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("support_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("support_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("en_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("en_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publisher_unique_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publisher_unique_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublisherUniqueId(refVal);
        }
    }
    return ok;
}


std::string PublisherRequest::getName() const
{
    return name_;
}

void PublisherRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool PublisherRequest::nameIsSet() const
{
    return nameIsSet_;
}

void PublisherRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string PublisherRequest::getUserId() const
{
    return userId_;
}

void PublisherRequest::setUserId(const std::string& value)
{
    userId_ = value;
    userIdIsSet_ = true;
}

bool PublisherRequest::userIdIsSet() const
{
    return userIdIsSet_;
}

void PublisherRequest::unsetuserId()
{
    userIdIsSet_ = false;
}

std::string PublisherRequest::getDescription() const
{
    return description_;
}

void PublisherRequest::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool PublisherRequest::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void PublisherRequest::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string PublisherRequest::getLogoUrl() const
{
    return logoUrl_;
}

void PublisherRequest::setLogoUrl(const std::string& value)
{
    logoUrl_ = value;
    logoUrlIsSet_ = true;
}

bool PublisherRequest::logoUrlIsSet() const
{
    return logoUrlIsSet_;
}

void PublisherRequest::unsetlogoUrl()
{
    logoUrlIsSet_ = false;
}

std::string PublisherRequest::getWebsite() const
{
    return website_;
}

void PublisherRequest::setWebsite(const std::string& value)
{
    website_ = value;
    websiteIsSet_ = true;
}

bool PublisherRequest::websiteIsSet() const
{
    return websiteIsSet_;
}

void PublisherRequest::unsetwebsite()
{
    websiteIsSet_ = false;
}

std::string PublisherRequest::getSupportUrl() const
{
    return supportUrl_;
}

void PublisherRequest::setSupportUrl(const std::string& value)
{
    supportUrl_ = value;
    supportUrlIsSet_ = true;
}

bool PublisherRequest::supportUrlIsSet() const
{
    return supportUrlIsSet_;
}

void PublisherRequest::unsetsupportUrl()
{
    supportUrlIsSet_ = false;
}

std::string PublisherRequest::getSourceUrl() const
{
    return sourceUrl_;
}

void PublisherRequest::setSourceUrl(const std::string& value)
{
    sourceUrl_ = value;
    sourceUrlIsSet_ = true;
}

bool PublisherRequest::sourceUrlIsSet() const
{
    return sourceUrlIsSet_;
}

void PublisherRequest::unsetsourceUrl()
{
    sourceUrlIsSet_ = false;
}

std::string PublisherRequest::getEnName() const
{
    return enName_;
}

void PublisherRequest::setEnName(const std::string& value)
{
    enName_ = value;
    enNameIsSet_ = true;
}

bool PublisherRequest::enNameIsSet() const
{
    return enNameIsSet_;
}

void PublisherRequest::unsetenName()
{
    enNameIsSet_ = false;
}

std::string PublisherRequest::getPublisherUniqueId() const
{
    return publisherUniqueId_;
}

void PublisherRequest::setPublisherUniqueId(const std::string& value)
{
    publisherUniqueId_ = value;
    publisherUniqueIdIsSet_ = true;
}

bool PublisherRequest::publisherUniqueIdIsSet() const
{
    return publisherUniqueIdIsSet_;
}

void PublisherRequest::unsetpublisherUniqueId()
{
    publisherUniqueIdIsSet_ = false;
}

}
}
}
}
}


