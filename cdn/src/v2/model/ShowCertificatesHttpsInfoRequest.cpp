

#include "huaweicloud/cdn/v2/model/ShowCertificatesHttpsInfoRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ShowCertificatesHttpsInfoRequest::ShowCertificatesHttpsInfoRequest()
{
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    pageNumber_ = 0;
    pageNumberIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    userDomainId_ = "";
    userDomainIdIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

ShowCertificatesHttpsInfoRequest::~ShowCertificatesHttpsInfoRequest() = default;

void ShowCertificatesHttpsInfoRequest::validate()
{
}

web::json::value ShowCertificatesHttpsInfoRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(pageNumberIsSet_) {
        val[utility::conversions::to_string_t("page_number")] = ModelBase::toJson(pageNumber_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(userDomainIdIsSet_) {
        val[utility::conversions::to_string_t("user_domain_id")] = ModelBase::toJson(userDomainId_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}
bool ShowCertificatesHttpsInfoRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("page_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enterprise_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enterprise_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnterpriseProjectId(refVal);
        }
    }
    return ok;
}


int32_t ShowCertificatesHttpsInfoRequest::getPageSize() const
{
    return pageSize_;
}

void ShowCertificatesHttpsInfoRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ShowCertificatesHttpsInfoRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ShowCertificatesHttpsInfoRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t ShowCertificatesHttpsInfoRequest::getPageNumber() const
{
    return pageNumber_;
}

void ShowCertificatesHttpsInfoRequest::setPageNumber(int32_t value)
{
    pageNumber_ = value;
    pageNumberIsSet_ = true;
}

bool ShowCertificatesHttpsInfoRequest::pageNumberIsSet() const
{
    return pageNumberIsSet_;
}

void ShowCertificatesHttpsInfoRequest::unsetpageNumber()
{
    pageNumberIsSet_ = false;
}

std::string ShowCertificatesHttpsInfoRequest::getDomainName() const
{
    return domainName_;
}

void ShowCertificatesHttpsInfoRequest::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ShowCertificatesHttpsInfoRequest::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ShowCertificatesHttpsInfoRequest::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string ShowCertificatesHttpsInfoRequest::getUserDomainId() const
{
    return userDomainId_;
}

void ShowCertificatesHttpsInfoRequest::setUserDomainId(const std::string& value)
{
    userDomainId_ = value;
    userDomainIdIsSet_ = true;
}

bool ShowCertificatesHttpsInfoRequest::userDomainIdIsSet() const
{
    return userDomainIdIsSet_;
}

void ShowCertificatesHttpsInfoRequest::unsetuserDomainId()
{
    userDomainIdIsSet_ = false;
}

std::string ShowCertificatesHttpsInfoRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ShowCertificatesHttpsInfoRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ShowCertificatesHttpsInfoRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ShowCertificatesHttpsInfoRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


