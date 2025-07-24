

#include "huaweicloud/cloudtest/v1/model/ListUsingGetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListUsingGetRequest::ListUsingGetRequest()
{
    serviceId_ = "";
    serviceIdIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    pageNumber_ = 0;
    pageNumberIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
}

ListUsingGetRequest::~ListUsingGetRequest() = default;

void ListUsingGetRequest::validate()
{
}

web::json::value ListUsingGetRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serviceIdIsSet_) {
        val[utility::conversions::to_string_t("service_id")] = ModelBase::toJson(serviceId_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(pageNumberIsSet_) {
        val[utility::conversions::to_string_t("page_number")] = ModelBase::toJson(pageNumber_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }

    return val;
}
bool ListUsingGetRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("service_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("page_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageSize(refVal);
        }
    }
    return ok;
}


std::string ListUsingGetRequest::getServiceId() const
{
    return serviceId_;
}

void ListUsingGetRequest::setServiceId(const std::string& value)
{
    serviceId_ = value;
    serviceIdIsSet_ = true;
}

bool ListUsingGetRequest::serviceIdIsSet() const
{
    return serviceIdIsSet_;
}

void ListUsingGetRequest::unsetserviceId()
{
    serviceIdIsSet_ = false;
}

std::string ListUsingGetRequest::getName() const
{
    return name_;
}

void ListUsingGetRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListUsingGetRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ListUsingGetRequest::unsetname()
{
    nameIsSet_ = false;
}

int32_t ListUsingGetRequest::getPageNumber() const
{
    return pageNumber_;
}

void ListUsingGetRequest::setPageNumber(int32_t value)
{
    pageNumber_ = value;
    pageNumberIsSet_ = true;
}

bool ListUsingGetRequest::pageNumberIsSet() const
{
    return pageNumberIsSet_;
}

void ListUsingGetRequest::unsetpageNumber()
{
    pageNumberIsSet_ = false;
}

int32_t ListUsingGetRequest::getPageSize() const
{
    return pageSize_;
}

void ListUsingGetRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListUsingGetRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListUsingGetRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

}
}
}
}
}


