

#include "huaweicloud/codeartsbuild/v3/model/DownloadKeystoreByNameRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




DownloadKeystoreByNameRequest::DownloadKeystoreByNameRequest()
{
    name_ = "";
    nameIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

DownloadKeystoreByNameRequest::~DownloadKeystoreByNameRequest() = default;

void DownloadKeystoreByNameRequest::validate()
{
}

web::json::value DownloadKeystoreByNameRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool DownloadKeystoreByNameRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DownloadKeystoreByNameRequest::getName() const
{
    return name_;
}

void DownloadKeystoreByNameRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DownloadKeystoreByNameRequest::nameIsSet() const
{
    return nameIsSet_;
}

void DownloadKeystoreByNameRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string DownloadKeystoreByNameRequest::getDomainId() const
{
    return domainId_;
}

void DownloadKeystoreByNameRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool DownloadKeystoreByNameRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void DownloadKeystoreByNameRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string DownloadKeystoreByNameRequest::getId() const
{
    return id_;
}

void DownloadKeystoreByNameRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DownloadKeystoreByNameRequest::idIsSet() const
{
    return idIsSet_;
}

void DownloadKeystoreByNameRequest::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


