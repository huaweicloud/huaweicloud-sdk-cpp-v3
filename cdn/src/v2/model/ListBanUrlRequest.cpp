

#include "huaweicloud/cdn/v2/model/ListBanUrlRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




ListBanUrlRequest::ListBanUrlRequest()
{
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    pageSize_ = 0;
    pageSizeIsSet_ = false;
    pageNumber_ = 0;
    pageNumberIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
}

ListBanUrlRequest::~ListBanUrlRequest() = default;

void ListBanUrlRequest::validate()
{
}

web::json::value ListBanUrlRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(pageSizeIsSet_) {
        val[utility::conversions::to_string_t("page_size")] = ModelBase::toJson(pageSize_);
    }
    if(pageNumberIsSet_) {
        val[utility::conversions::to_string_t("page_number")] = ModelBase::toJson(pageNumber_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }

    return val;
}
bool ListBanUrlRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
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


int64_t ListBanUrlRequest::getStartTime() const
{
    return startTime_;
}

void ListBanUrlRequest::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListBanUrlRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListBanUrlRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ListBanUrlRequest::getEndTime() const
{
    return endTime_;
}

void ListBanUrlRequest::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListBanUrlRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListBanUrlRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ListBanUrlRequest::getPageSize() const
{
    return pageSize_;
}

void ListBanUrlRequest::setPageSize(int32_t value)
{
    pageSize_ = value;
    pageSizeIsSet_ = true;
}

bool ListBanUrlRequest::pageSizeIsSet() const
{
    return pageSizeIsSet_;
}

void ListBanUrlRequest::unsetpageSize()
{
    pageSizeIsSet_ = false;
}

int32_t ListBanUrlRequest::getPageNumber() const
{
    return pageNumber_;
}

void ListBanUrlRequest::setPageNumber(int32_t value)
{
    pageNumber_ = value;
    pageNumberIsSet_ = true;
}

bool ListBanUrlRequest::pageNumberIsSet() const
{
    return pageNumberIsSet_;
}

void ListBanUrlRequest::unsetpageNumber()
{
    pageNumberIsSet_ = false;
}

std::string ListBanUrlRequest::getUrl() const
{
    return url_;
}

void ListBanUrlRequest::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool ListBanUrlRequest::urlIsSet() const
{
    return urlIsSet_;
}

void ListBanUrlRequest::unseturl()
{
    urlIsSet_ = false;
}

}
}
}
}
}


