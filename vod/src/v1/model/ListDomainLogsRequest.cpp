

#include "huaweicloud/vod/v1/model/ListDomainLogsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ListDomainLogsRequest::ListDomainLogsRequest()
{
    authorization_ = "";
    authorizationIsSet_ = false;
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    domainName_ = "";
    domainNameIsSet_ = false;
    queryDate_ = "";
    queryDateIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    pageNumber_ = 0;
    pageNumberIsSet_ = false;
}

ListDomainLogsRequest::~ListDomainLogsRequest() = default;

void ListDomainLogsRequest::validate()
{
}

web::json::value ListDomainLogsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("Authorization")] = ModelBase::toJson(authorization_);
    }
    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(queryDateIsSet_) {
        val[utility::conversions::to_string_t("query_date")] = ModelBase::toJson(queryDate_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(pageNumberIsSet_) {
        val[utility::conversions::to_string_t("page_number")] = ModelBase::toJson(pageNumber_);
    }

    return val;
}

bool ListDomainLogsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Authorization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Authorization"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("query_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryDate(refVal);
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
    return ok;
}


std::string ListDomainLogsRequest::getAuthorization() const
{
    return authorization_;
}

void ListDomainLogsRequest::setAuthorization(const std::string& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool ListDomainLogsRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void ListDomainLogsRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string ListDomainLogsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListDomainLogsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListDomainLogsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListDomainLogsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListDomainLogsRequest::getDomainName() const
{
    return domainName_;
}

void ListDomainLogsRequest::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ListDomainLogsRequest::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ListDomainLogsRequest::unsetdomainName()
{
    domainNameIsSet_ = false;
}

std::string ListDomainLogsRequest::getQueryDate() const
{
    return queryDate_;
}

void ListDomainLogsRequest::setQueryDate(const std::string& value)
{
    queryDate_ = value;
    queryDateIsSet_ = true;
}

bool ListDomainLogsRequest::queryDateIsSet() const
{
    return queryDateIsSet_;
}

void ListDomainLogsRequest::unsetqueryDate()
{
    queryDateIsSet_ = false;
}

int32_t ListDomainLogsRequest::getPageSize() const
{
    return pageSize_;
}

void ListDomainLogsRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListDomainLogsRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListDomainLogsRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t ListDomainLogsRequest::getPageNumber() const
{
    return pageNumber_;
}

void ListDomainLogsRequest::setPageNumber(int32_t value)
{
    pageNumber_ = value;
    pageNumberIsSet_ = true;
}

bool ListDomainLogsRequest::pageNumberIsSet() const
{
    return pageNumberIsSet_;
}

void ListDomainLogsRequest::unsetpageNumber()
{
    pageNumberIsSet_ = false;
}

}
}
}
}
}


