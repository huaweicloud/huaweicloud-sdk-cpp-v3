

#include "huaweicloud/cdn/v2/model/ListDomainsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ListDomainsRequest::ListDomainsRequest()
{
    domainName_ = "";
    domainNameIsSet_ = false;
    businessType_ = "";
    businessTypeIsSet_ = false;
    domainStatus_ = "";
    domainStatusIsSet_ = false;
    serviceArea_ = "";
    serviceAreaIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    pageNumber_ = 0;
    pageNumberIsSet_ = false;
    showTags_ = false;
    showTagsIsSet_ = false;
    exactMatch_ = false;
    exactMatchIsSet_ = false;
    enterpriseProjectId_ = "";
    enterpriseProjectIdIsSet_ = false;
}

ListDomainsRequest::~ListDomainsRequest() = default;

void ListDomainsRequest::validate()
{
}

web::json::value ListDomainsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(businessTypeIsSet_) {
        val[utility::conversions::to_string_t("business_type")] = ModelBase::toJson(businessType_);
    }
    if(domainStatusIsSet_) {
        val[utility::conversions::to_string_t("domain_status")] = ModelBase::toJson(domainStatus_);
    }
    if(serviceAreaIsSet_) {
        val[utility::conversions::to_string_t("service_area")] = ModelBase::toJson(serviceArea_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(pageNumberIsSet_) {
        val[utility::conversions::to_string_t("page_number")] = ModelBase::toJson(pageNumber_);
    }
    if(showTagsIsSet_) {
        val[utility::conversions::to_string_t("show_tags")] = ModelBase::toJson(showTags_);
    }
    if(exactMatchIsSet_) {
        val[utility::conversions::to_string_t("exact_match")] = ModelBase::toJson(exactMatch_);
    }
    if(enterpriseProjectIdIsSet_) {
        val[utility::conversions::to_string_t("enterprise_project_id")] = ModelBase::toJson(enterpriseProjectId_);
    }

    return val;
}

bool ListDomainsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("business_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("business_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBusinessType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_area"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_area"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceArea(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("show_tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("show_tags"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShowTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exact_match"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exact_match"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExactMatch(refVal);
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

std::string ListDomainsRequest::getDomainName() const
{
    return domainName_;
}

void ListDomainsRequest::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ListDomainsRequest::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ListDomainsRequest::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string ListDomainsRequest::getBusinessType() const
{
    return businessType_;
}

void ListDomainsRequest::setBusinessType(const std::string& value)
{
    businessType_ = value;
    businessTypeIsSet_ = true;
}

bool ListDomainsRequest::businessTypeIsSet() const
{
    return businessTypeIsSet_;
}

void ListDomainsRequest::unsetbusinessType()
{
    businessTypeIsSet_ = false;
}

std::string ListDomainsRequest::getDomainStatus() const
{
    return domainStatus_;
}

void ListDomainsRequest::setDomainStatus(const std::string& value)
{
    domainStatus_ = value;
    domainStatusIsSet_ = true;
}

bool ListDomainsRequest::domainStatusIsSet() const
{
    return domainStatusIsSet_;
}

void ListDomainsRequest::unsetdomainStatus()
{
    domainStatusIsSet_ = false;
}

std::string ListDomainsRequest::getServiceArea() const
{
    return serviceArea_;
}

void ListDomainsRequest::setServiceArea(const std::string& value)
{
    serviceArea_ = value;
    serviceAreaIsSet_ = true;
}

bool ListDomainsRequest::serviceAreaIsSet() const
{
    return serviceAreaIsSet_;
}

void ListDomainsRequest::unsetserviceArea()
{
    serviceAreaIsSet_ = false;
}

int32_t ListDomainsRequest::getPageSize() const
{
    return pageSize_;
}

void ListDomainsRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListDomainsRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListDomainsRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t ListDomainsRequest::getPageNumber() const
{
    return pageNumber_;
}

void ListDomainsRequest::setPageNumber(int32_t value)
{
    pageNumber_ = value;
    pageNumberIsSet_ = true;
}

bool ListDomainsRequest::pageNumberIsSet() const
{
    return pageNumberIsSet_;
}

void ListDomainsRequest::unsetpageNumber()
{
    pageNumberIsSet_ = false;
}

bool ListDomainsRequest::isShowTags() const
{
    return showTags_;
}

void ListDomainsRequest::setShowTags(bool value)
{
    showTags_ = value;
    showTagsIsSet_ = true;
}

bool ListDomainsRequest::showTagsIsSet() const
{
    return showTagsIsSet_;
}

void ListDomainsRequest::unsetshowTags()
{
    showTagsIsSet_ = false;
}

bool ListDomainsRequest::isExactMatch() const
{
    return exactMatch_;
}

void ListDomainsRequest::setExactMatch(bool value)
{
    exactMatch_ = value;
    exactMatchIsSet_ = true;
}

bool ListDomainsRequest::exactMatchIsSet() const
{
    return exactMatchIsSet_;
}

void ListDomainsRequest::unsetexactMatch()
{
    exactMatchIsSet_ = false;
}

std::string ListDomainsRequest::getEnterpriseProjectId() const
{
    return enterpriseProjectId_;
}

void ListDomainsRequest::setEnterpriseProjectId(const std::string& value)
{
    enterpriseProjectId_ = value;
    enterpriseProjectIdIsSet_ = true;
}

bool ListDomainsRequest::enterpriseProjectIdIsSet() const
{
    return enterpriseProjectIdIsSet_;
}

void ListDomainsRequest::unsetenterpriseProjectId()
{
    enterpriseProjectIdIsSet_ = false;
}

}
}
}
}
}


