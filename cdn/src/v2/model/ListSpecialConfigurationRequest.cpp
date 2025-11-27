

#include "huaweicloud/cdn/v2/model/ListSpecialConfigurationRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ListSpecialConfigurationRequest::ListSpecialConfigurationRequest()
{
    domainName_ = "";
    domainNameIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    pageNumber_ = 0;
    pageNumberIsSet_ = false;
}

ListSpecialConfigurationRequest::~ListSpecialConfigurationRequest() = default;

void ListSpecialConfigurationRequest::validate()
{
}

web::json::value ListSpecialConfigurationRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainNameIsSet_) {
        val[utility::conversions::to_string_t("domain_name")] = ModelBase::toJson(domainName_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(pageNumberIsSet_) {
        val[utility::conversions::to_string_t("page_number")] = ModelBase::toJson(pageNumber_);
    }

    return val;
}
bool ListSpecialConfigurationRequest::fromJson(const web::json::value& val)
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


std::string ListSpecialConfigurationRequest::getDomainName() const
{
    return domainName_;
}

void ListSpecialConfigurationRequest::setDomainName(const std::string& value)
{
    domainName_ = value;
    domainNameIsSet_ = true;
}

bool ListSpecialConfigurationRequest::domainNameIsSet() const
{
    return domainNameIsSet_;
}

void ListSpecialConfigurationRequest::unsetdomainName()
{
    domainNameIsSet_ = false;
}

int32_t ListSpecialConfigurationRequest::getPageSize() const
{
    return pageSize_;
}

void ListSpecialConfigurationRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListSpecialConfigurationRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListSpecialConfigurationRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t ListSpecialConfigurationRequest::getPageNumber() const
{
    return pageNumber_;
}

void ListSpecialConfigurationRequest::setPageNumber(int32_t value)
{
    pageNumber_ = value;
    pageNumberIsSet_ = true;
}

bool ListSpecialConfigurationRequest::pageNumberIsSet() const
{
    return pageNumberIsSet_;
}

void ListSpecialConfigurationRequest::unsetpageNumber()
{
    pageNumberIsSet_ = false;
}

}
}
}
}
}


