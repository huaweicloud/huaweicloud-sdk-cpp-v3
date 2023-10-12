

#include "huaweicloud/codeartsbuild/v3/model/DownloadKeystoreRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




DownloadKeystoreRequest::DownloadKeystoreRequest()
{
    fileName_ = "";
    fileNameIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
}

DownloadKeystoreRequest::~DownloadKeystoreRequest() = default;

void DownloadKeystoreRequest::validate()
{
}

web::json::value DownloadKeystoreRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(fileNameIsSet_) {
        val[utility::conversions::to_string_t("file_name")] = ModelBase::toJson(fileName_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }

    return val;
}
bool DownloadKeystoreRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("file_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileName(refVal);
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
    return ok;
}


std::string DownloadKeystoreRequest::getFileName() const
{
    return fileName_;
}

void DownloadKeystoreRequest::setFileName(const std::string& value)
{
    fileName_ = value;
    fileNameIsSet_ = true;
}

bool DownloadKeystoreRequest::fileNameIsSet() const
{
    return fileNameIsSet_;
}

void DownloadKeystoreRequest::unsetfileName()
{
    fileNameIsSet_ = false;
}

std::string DownloadKeystoreRequest::getDomainId() const
{
    return domainId_;
}

void DownloadKeystoreRequest::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool DownloadKeystoreRequest::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void DownloadKeystoreRequest::unsetdomainId()
{
    domainIdIsSet_ = false;
}

}
}
}
}
}


