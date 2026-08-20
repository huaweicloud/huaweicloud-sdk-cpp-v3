

#include "huaweicloud/projectman/v4/model/ThirdPartyAssociatedDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




ThirdPartyAssociatedDTO::ThirdPartyAssociatedDTO()
{
    domainId_ = "";
    domainIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    createdDate_ = "";
    createdDateIsSet_ = false;
    createdBy_ = "";
    createdByIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
}

ThirdPartyAssociatedDTO::~ThirdPartyAssociatedDTO() = default;

void ThirdPartyAssociatedDTO::validate()
{
}

web::json::value ThirdPartyAssociatedDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(createdDateIsSet_) {
        val[utility::conversions::to_string_t("created_date")] = ModelBase::toJson(createdDate_);
    }
    if(createdByIsSet_) {
        val[utility::conversions::to_string_t("created_by")] = ModelBase::toJson(createdBy_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }

    return val;
}
bool ThirdPartyAssociatedDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
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
    return ok;
}


std::string ThirdPartyAssociatedDTO::getDomainId() const
{
    return domainId_;
}

void ThirdPartyAssociatedDTO::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ThirdPartyAssociatedDTO::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ThirdPartyAssociatedDTO::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ThirdPartyAssociatedDTO::getId() const
{
    return id_;
}

void ThirdPartyAssociatedDTO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ThirdPartyAssociatedDTO::idIsSet() const
{
    return idIsSet_;
}

void ThirdPartyAssociatedDTO::unsetid()
{
    idIsSet_ = false;
}

std::string ThirdPartyAssociatedDTO::getCreatedDate() const
{
    return createdDate_;
}

void ThirdPartyAssociatedDTO::setCreatedDate(const std::string& value)
{
    createdDate_ = value;
    createdDateIsSet_ = true;
}

bool ThirdPartyAssociatedDTO::createdDateIsSet() const
{
    return createdDateIsSet_;
}

void ThirdPartyAssociatedDTO::unsetcreatedDate()
{
    createdDateIsSet_ = false;
}

std::string ThirdPartyAssociatedDTO::getCreatedBy() const
{
    return createdBy_;
}

void ThirdPartyAssociatedDTO::setCreatedBy(const std::string& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool ThirdPartyAssociatedDTO::createdByIsSet() const
{
    return createdByIsSet_;
}

void ThirdPartyAssociatedDTO::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

std::string ThirdPartyAssociatedDTO::getTitle() const
{
    return title_;
}

void ThirdPartyAssociatedDTO::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool ThirdPartyAssociatedDTO::titleIsSet() const
{
    return titleIsSet_;
}

void ThirdPartyAssociatedDTO::unsettitle()
{
    titleIsSet_ = false;
}

std::string ThirdPartyAssociatedDTO::getUrl() const
{
    return url_;
}

void ThirdPartyAssociatedDTO::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool ThirdPartyAssociatedDTO::urlIsSet() const
{
    return urlIsSet_;
}

void ThirdPartyAssociatedDTO::unseturl()
{
    urlIsSet_ = false;
}

}
}
}
}
}


