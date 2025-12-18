

#include "huaweicloud/meeting/v1/model/SearchVisionActiveCodeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchVisionActiveCodeRequest::SearchVisionActiveCodeRequest()
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
    devType_ = "";
    devTypeIsSet_ = false;
}

SearchVisionActiveCodeRequest::~SearchVisionActiveCodeRequest() = default;

void SearchVisionActiveCodeRequest::validate()
{
}

web::json::value SearchVisionActiveCodeRequest::toJson() const
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
    if(devTypeIsSet_) {
        val[utility::conversions::to_string_t("devType")] = ModelBase::toJson(devType_);
    }

    return val;
}
bool SearchVisionActiveCodeRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("devType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("devType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDevType(refVal);
        }
    }
    return ok;
}


std::string SearchVisionActiveCodeRequest::getXRequestId() const
{
    return xRequestId_;
}

void SearchVisionActiveCodeRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool SearchVisionActiveCodeRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void SearchVisionActiveCodeRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string SearchVisionActiveCodeRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void SearchVisionActiveCodeRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool SearchVisionActiveCodeRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void SearchVisionActiveCodeRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

int32_t SearchVisionActiveCodeRequest::getOffset() const
{
    return offset_;
}

void SearchVisionActiveCodeRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SearchVisionActiveCodeRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void SearchVisionActiveCodeRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t SearchVisionActiveCodeRequest::getLimit() const
{
    return limit_;
}

void SearchVisionActiveCodeRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchVisionActiveCodeRequest::limitIsSet() const
{
    return limitIsSet_;
}

void SearchVisionActiveCodeRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string SearchVisionActiveCodeRequest::getSearchKey() const
{
    return searchKey_;
}

void SearchVisionActiveCodeRequest::setSearchKey(const std::string& value)
{
    searchKey_ = value;
    searchKeyIsSet_ = true;
}

bool SearchVisionActiveCodeRequest::searchKeyIsSet() const
{
    return searchKeyIsSet_;
}

void SearchVisionActiveCodeRequest::unsetsearchKey()
{
    searchKeyIsSet_ = false;
}

std::string SearchVisionActiveCodeRequest::getDevType() const
{
    return devType_;
}

void SearchVisionActiveCodeRequest::setDevType(const std::string& value)
{
    devType_ = value;
    devTypeIsSet_ = true;
}

bool SearchVisionActiveCodeRequest::devTypeIsSet() const
{
    return devTypeIsSet_;
}

void SearchVisionActiveCodeRequest::unsetdevType()
{
    devTypeIsSet_ = false;
}

}
}
}
}
}


