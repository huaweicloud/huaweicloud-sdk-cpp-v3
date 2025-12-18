

#include "huaweicloud/meeting/v1/model/SearchMemberVmrRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchMemberVmrRequest::SearchMemberVmrRequest()
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
    specialVmr_ = false;
    specialVmrIsSet_ = false;
}

SearchMemberVmrRequest::~SearchMemberVmrRequest() = default;

void SearchMemberVmrRequest::validate()
{
}

web::json::value SearchMemberVmrRequest::toJson() const
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
    if(specialVmrIsSet_) {
        val[utility::conversions::to_string_t("specialVmr")] = ModelBase::toJson(specialVmr_);
    }

    return val;
}
bool SearchMemberVmrRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("specialVmr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("specialVmr"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpecialVmr(refVal);
        }
    }
    return ok;
}


std::string SearchMemberVmrRequest::getXRequestId() const
{
    return xRequestId_;
}

void SearchMemberVmrRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool SearchMemberVmrRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void SearchMemberVmrRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string SearchMemberVmrRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void SearchMemberVmrRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool SearchMemberVmrRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void SearchMemberVmrRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

int32_t SearchMemberVmrRequest::getOffset() const
{
    return offset_;
}

void SearchMemberVmrRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SearchMemberVmrRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void SearchMemberVmrRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t SearchMemberVmrRequest::getLimit() const
{
    return limit_;
}

void SearchMemberVmrRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchMemberVmrRequest::limitIsSet() const
{
    return limitIsSet_;
}

void SearchMemberVmrRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string SearchMemberVmrRequest::getSearchKey() const
{
    return searchKey_;
}

void SearchMemberVmrRequest::setSearchKey(const std::string& value)
{
    searchKey_ = value;
    searchKeyIsSet_ = true;
}

bool SearchMemberVmrRequest::searchKeyIsSet() const
{
    return searchKeyIsSet_;
}

void SearchMemberVmrRequest::unsetsearchKey()
{
    searchKeyIsSet_ = false;
}

bool SearchMemberVmrRequest::isSpecialVmr() const
{
    return specialVmr_;
}

void SearchMemberVmrRequest::setSpecialVmr(bool value)
{
    specialVmr_ = value;
    specialVmrIsSet_ = true;
}

bool SearchMemberVmrRequest::specialVmrIsSet() const
{
    return specialVmrIsSet_;
}

void SearchMemberVmrRequest::unsetspecialVmr()
{
    specialVmrIsSet_ = false;
}

}
}
}
}
}


