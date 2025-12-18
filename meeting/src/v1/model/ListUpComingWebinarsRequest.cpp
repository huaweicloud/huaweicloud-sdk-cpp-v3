

#include "huaweicloud/meeting/v1/model/ListUpComingWebinarsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ListUpComingWebinarsRequest::ListUpComingWebinarsRequest()
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

ListUpComingWebinarsRequest::~ListUpComingWebinarsRequest() = default;

void ListUpComingWebinarsRequest::validate()
{
}

web::json::value ListUpComingWebinarsRequest::toJson() const
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
bool ListUpComingWebinarsRequest::fromJson(const web::json::value& val)
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


std::string ListUpComingWebinarsRequest::getXRequestId() const
{
    return xRequestId_;
}

void ListUpComingWebinarsRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ListUpComingWebinarsRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ListUpComingWebinarsRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string ListUpComingWebinarsRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void ListUpComingWebinarsRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool ListUpComingWebinarsRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void ListUpComingWebinarsRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

int32_t ListUpComingWebinarsRequest::getOffset() const
{
    return offset_;
}

void ListUpComingWebinarsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListUpComingWebinarsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListUpComingWebinarsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListUpComingWebinarsRequest::getLimit() const
{
    return limit_;
}

void ListUpComingWebinarsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListUpComingWebinarsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListUpComingWebinarsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListUpComingWebinarsRequest::getSearchKey() const
{
    return searchKey_;
}

void ListUpComingWebinarsRequest::setSearchKey(const std::string& value)
{
    searchKey_ = value;
    searchKeyIsSet_ = true;
}

bool ListUpComingWebinarsRequest::searchKeyIsSet() const
{
    return searchKeyIsSet_;
}

void ListUpComingWebinarsRequest::unsetsearchKey()
{
    searchKeyIsSet_ = false;
}

std::string ListUpComingWebinarsRequest::getSortType() const
{
    return sortType_;
}

void ListUpComingWebinarsRequest::setSortType(const std::string& value)
{
    sortType_ = value;
    sortTypeIsSet_ = true;
}

bool ListUpComingWebinarsRequest::sortTypeIsSet() const
{
    return sortTypeIsSet_;
}

void ListUpComingWebinarsRequest::unsetsortType()
{
    sortTypeIsSet_ = false;
}

}
}
}
}
}


