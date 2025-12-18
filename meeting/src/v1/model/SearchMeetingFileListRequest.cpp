

#include "huaweicloud/meeting/v1/model/SearchMeetingFileListRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchMeetingFileListRequest::SearchMeetingFileListRequest()
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
}

SearchMeetingFileListRequest::~SearchMeetingFileListRequest() = default;

void SearchMeetingFileListRequest::validate()
{
}

web::json::value SearchMeetingFileListRequest::toJson() const
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

    return val;
}
bool SearchMeetingFileListRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string SearchMeetingFileListRequest::getXRequestId() const
{
    return xRequestId_;
}

void SearchMeetingFileListRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool SearchMeetingFileListRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void SearchMeetingFileListRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string SearchMeetingFileListRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void SearchMeetingFileListRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool SearchMeetingFileListRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void SearchMeetingFileListRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

int32_t SearchMeetingFileListRequest::getOffset() const
{
    return offset_;
}

void SearchMeetingFileListRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SearchMeetingFileListRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void SearchMeetingFileListRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t SearchMeetingFileListRequest::getLimit() const
{
    return limit_;
}

void SearchMeetingFileListRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchMeetingFileListRequest::limitIsSet() const
{
    return limitIsSet_;
}

void SearchMeetingFileListRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string SearchMeetingFileListRequest::getSearchKey() const
{
    return searchKey_;
}

void SearchMeetingFileListRequest::setSearchKey(const std::string& value)
{
    searchKey_ = value;
    searchKeyIsSet_ = true;
}

bool SearchMeetingFileListRequest::searchKeyIsSet() const
{
    return searchKeyIsSet_;
}

void SearchMeetingFileListRequest::unsetsearchKey()
{
    searchKeyIsSet_ = false;
}

}
}
}
}
}


