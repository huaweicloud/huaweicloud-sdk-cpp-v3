

#include "huaweicloud/live/v1/model/ListStreamForbiddenRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ListStreamForbiddenRequest::ListStreamForbiddenRequest()
{
    domain_ = "";
    domainIsSet_ = false;
    appName_ = "";
    appNameIsSet_ = false;
    streamName_ = "";
    streamNameIsSet_ = false;
    page_ = 0;
    pageIsSet_ = false;
    size_ = 0;
    sizeIsSet_ = false;
}

ListStreamForbiddenRequest::~ListStreamForbiddenRequest() = default;

void ListStreamForbiddenRequest::validate()
{
}

web::json::value ListStreamForbiddenRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(appNameIsSet_) {
        val[utility::conversions::to_string_t("app_name")] = ModelBase::toJson(appName_);
    }
    if(streamNameIsSet_) {
        val[utility::conversions::to_string_t("stream_name")] = ModelBase::toJson(streamName_);
    }
    if(pageIsSet_) {
        val[utility::conversions::to_string_t("page")] = ModelBase::toJson(page_);
    }
    if(sizeIsSet_) {
        val[utility::conversions::to_string_t("size")] = ModelBase::toJson(size_);
    }

    return val;
}
bool ListStreamForbiddenRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stream_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStreamName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("page"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("size"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSize(refVal);
        }
    }
    return ok;
}


std::string ListStreamForbiddenRequest::getDomain() const
{
    return domain_;
}

void ListStreamForbiddenRequest::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ListStreamForbiddenRequest::domainIsSet() const
{
    return domainIsSet_;
}

void ListStreamForbiddenRequest::unsetdomain()
{
    domainIsSet_ = false;
}

std::string ListStreamForbiddenRequest::getAppName() const
{
    return appName_;
}

void ListStreamForbiddenRequest::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool ListStreamForbiddenRequest::appNameIsSet() const
{
    return appNameIsSet_;
}

void ListStreamForbiddenRequest::unsetappName()
{
    appNameIsSet_ = false;
}

std::string ListStreamForbiddenRequest::getStreamName() const
{
    return streamName_;
}

void ListStreamForbiddenRequest::setStreamName(const std::string& value)
{
    streamName_ = value;
    streamNameIsSet_ = true;
}

bool ListStreamForbiddenRequest::streamNameIsSet() const
{
    return streamNameIsSet_;
}

void ListStreamForbiddenRequest::unsetstreamName()
{
    streamNameIsSet_ = false;
}

int32_t ListStreamForbiddenRequest::getPage() const
{
    return page_;
}

void ListStreamForbiddenRequest::setPage(int32_t value)
{
    page_ = value;
    pageIsSet_ = true;
}

bool ListStreamForbiddenRequest::pageIsSet() const
{
    return pageIsSet_;
}

void ListStreamForbiddenRequest::unsetpage()
{
    pageIsSet_ = false;
}

int32_t ListStreamForbiddenRequest::getSize() const
{
    return size_;
}

void ListStreamForbiddenRequest::setSize(int32_t value)
{
    size_ = value;
    sizeIsSet_ = true;
}

bool ListStreamForbiddenRequest::sizeIsSet() const
{
    return sizeIsSet_;
}

void ListStreamForbiddenRequest::unsetsize()
{
    sizeIsSet_ = false;
}

}
}
}
}
}


