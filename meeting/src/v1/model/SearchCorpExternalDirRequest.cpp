

#include "huaweicloud/meeting/v1/model/SearchCorpExternalDirRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchCorpExternalDirRequest::SearchCorpExternalDirRequest()
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
    searchScope_ = "";
    searchScopeIsSet_ = false;
}

SearchCorpExternalDirRequest::~SearchCorpExternalDirRequest() = default;

void SearchCorpExternalDirRequest::validate()
{
}

web::json::value SearchCorpExternalDirRequest::toJson() const
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
    if(searchScopeIsSet_) {
        val[utility::conversions::to_string_t("searchScope")] = ModelBase::toJson(searchScope_);
    }

    return val;
}
bool SearchCorpExternalDirRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("searchScope"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("searchScope"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearchScope(refVal);
        }
    }
    return ok;
}


std::string SearchCorpExternalDirRequest::getXRequestId() const
{
    return xRequestId_;
}

void SearchCorpExternalDirRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool SearchCorpExternalDirRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void SearchCorpExternalDirRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string SearchCorpExternalDirRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void SearchCorpExternalDirRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool SearchCorpExternalDirRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void SearchCorpExternalDirRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

int32_t SearchCorpExternalDirRequest::getOffset() const
{
    return offset_;
}

void SearchCorpExternalDirRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SearchCorpExternalDirRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void SearchCorpExternalDirRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t SearchCorpExternalDirRequest::getLimit() const
{
    return limit_;
}

void SearchCorpExternalDirRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchCorpExternalDirRequest::limitIsSet() const
{
    return limitIsSet_;
}

void SearchCorpExternalDirRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string SearchCorpExternalDirRequest::getSearchKey() const
{
    return searchKey_;
}

void SearchCorpExternalDirRequest::setSearchKey(const std::string& value)
{
    searchKey_ = value;
    searchKeyIsSet_ = true;
}

bool SearchCorpExternalDirRequest::searchKeyIsSet() const
{
    return searchKeyIsSet_;
}

void SearchCorpExternalDirRequest::unsetsearchKey()
{
    searchKeyIsSet_ = false;
}

std::string SearchCorpExternalDirRequest::getSearchScope() const
{
    return searchScope_;
}

void SearchCorpExternalDirRequest::setSearchScope(const std::string& value)
{
    searchScope_ = value;
    searchScopeIsSet_ = true;
}

bool SearchCorpExternalDirRequest::searchScopeIsSet() const
{
    return searchScopeIsSet_;
}

void SearchCorpExternalDirRequest::unsetsearchScope()
{
    searchScopeIsSet_ = false;
}

}
}
}
}
}


