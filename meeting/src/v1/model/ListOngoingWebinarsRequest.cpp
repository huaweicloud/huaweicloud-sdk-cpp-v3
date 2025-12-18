

#include "huaweicloud/meeting/v1/model/ListOngoingWebinarsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ListOngoingWebinarsRequest::ListOngoingWebinarsRequest()
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
}

ListOngoingWebinarsRequest::~ListOngoingWebinarsRequest() = default;

void ListOngoingWebinarsRequest::validate()
{
}

web::json::value ListOngoingWebinarsRequest::toJson() const
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

    return val;
}
bool ListOngoingWebinarsRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListOngoingWebinarsRequest::getXRequestId() const
{
    return xRequestId_;
}

void ListOngoingWebinarsRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListOngoingWebinarsRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListOngoingWebinarsRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string ListOngoingWebinarsRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void ListOngoingWebinarsRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool ListOngoingWebinarsRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void ListOngoingWebinarsRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

int32_t ListOngoingWebinarsRequest::getOffset() const
{
    return offset_;
}

void ListOngoingWebinarsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListOngoingWebinarsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListOngoingWebinarsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListOngoingWebinarsRequest::getLimit() const
{
    return limit_;
}

void ListOngoingWebinarsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListOngoingWebinarsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListOngoingWebinarsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListOngoingWebinarsRequest::getSearchKey() const
{
    return searchKey_;
}

void ListOngoingWebinarsRequest::setSearchKey(const std::string& value)
{
    searchKey_ = value;
    searchKeyIsSet_ = true;
}

bool ListOngoingWebinarsRequest::searchKeyIsSet() const
{
    return searchKeyIsSet_;
}

void ListOngoingWebinarsRequest::unsetsearchKey()
{
    searchKeyIsSet_ = false;
}

std::string ListOngoingWebinarsRequest::getSortType() const
{
    return sortType_;
}

void ListOngoingWebinarsRequest::setSortType(const std::string& value)
{
    sortType_ = value;
    sortTypeIsSet_ = true;
}

bool ListOngoingWebinarsRequest::sortTypeIsSet() const
{
    return sortTypeIsSet_;
}

void ListOngoingWebinarsRequest::unsetsortType()
{
    sortTypeIsSet_ = false;
}

}
}
}
}
}


