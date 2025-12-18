

#include "huaweicloud/meeting/v1/model/ListHistoryWebinarsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ListHistoryWebinarsRequest::ListHistoryWebinarsRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    searchKey_ = "";
    searchKeyIsSet_ = false;
    sortType_ = "";
    sortTypeIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
}

ListHistoryWebinarsRequest::~ListHistoryWebinarsRequest() = default;

void ListHistoryWebinarsRequest::validate()
{
}

web::json::value ListHistoryWebinarsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }
    if(acceptLanguageIsSet_) {
        val[utility::conversions::to_string_t("Accept-Language")] = ModelBase::toJson(acceptLanguage_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(searchKeyIsSet_) {
        val[utility::conversions::to_string_t("searchKey")] = ModelBase::toJson(searchKey_);
    }
    if(sortTypeIsSet_) {
        val[utility::conversions::to_string_t("sortType")] = ModelBase::toJson(sortType_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("startTime")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("endTime")] = ModelBase::toJson(endTime_);
    }

    return val;
}
bool ListHistoryWebinarsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("Accept-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Accept-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAcceptLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("searchKey"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("searchKey"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearchKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sortType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sortType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSortType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("startTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("startTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}


std::string ListHistoryWebinarsRequest::getXRequestId() const
{
    return xRequestId_;
}

void ListHistoryWebinarsRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListHistoryWebinarsRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListHistoryWebinarsRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string ListHistoryWebinarsRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void ListHistoryWebinarsRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool ListHistoryWebinarsRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void ListHistoryWebinarsRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

int32_t ListHistoryWebinarsRequest::getOffset() const
{
    return offset_;
}

void ListHistoryWebinarsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListHistoryWebinarsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListHistoryWebinarsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListHistoryWebinarsRequest::getLimit() const
{
    return limit_;
}

void ListHistoryWebinarsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListHistoryWebinarsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListHistoryWebinarsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListHistoryWebinarsRequest::getSearchKey() const
{
    return searchKey_;
}

void ListHistoryWebinarsRequest::setSearchKey(const std::string& value)
{
    searchKey_ = value;
    searchKeyIsSet_ = true;
}

bool ListHistoryWebinarsRequest::searchKeyIsSet() const
{
    return searchKeyIsSet_;
}

void ListHistoryWebinarsRequest::unsetsearchKey()
{
    searchKeyIsSet_ = false;
}

std::string ListHistoryWebinarsRequest::getSortType() const
{
    return sortType_;
}

void ListHistoryWebinarsRequest::setSortType(const std::string& value)
{
    sortType_ = value;
    sortTypeIsSet_ = true;
}

bool ListHistoryWebinarsRequest::sortTypeIsSet() const
{
    return sortTypeIsSet_;
}

void ListHistoryWebinarsRequest::unsetsortType()
{
    sortTypeIsSet_ = false;
}

std::string ListHistoryWebinarsRequest::getStartTime() const
{
    return startTime_;
}

void ListHistoryWebinarsRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListHistoryWebinarsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListHistoryWebinarsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListHistoryWebinarsRequest::getEndTime() const
{
    return endTime_;
}

void ListHistoryWebinarsRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListHistoryWebinarsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListHistoryWebinarsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


