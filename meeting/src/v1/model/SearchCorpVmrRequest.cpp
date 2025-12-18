

#include "huaweicloud/meeting/v1/model/SearchCorpVmrRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchCorpVmrRequest::SearchCorpVmrRequest()
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
    vmrMode_ = 0;
    vmrModeIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
}

SearchCorpVmrRequest::~SearchCorpVmrRequest() = default;

void SearchCorpVmrRequest::validate()
{
}

web::json::value SearchCorpVmrRequest::toJson() const
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
    if(vmrModeIsSet_) {
        val[utility::conversions::to_string_t("vmrMode")] = ModelBase::toJson(vmrMode_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool SearchCorpVmrRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("vmrMode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vmrMode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVmrMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


std::string SearchCorpVmrRequest::getXRequestId() const
{
    return xRequestId_;
}

void SearchCorpVmrRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool SearchCorpVmrRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void SearchCorpVmrRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string SearchCorpVmrRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void SearchCorpVmrRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool SearchCorpVmrRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void SearchCorpVmrRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

int32_t SearchCorpVmrRequest::getOffset() const
{
    return offset_;
}

void SearchCorpVmrRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SearchCorpVmrRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void SearchCorpVmrRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t SearchCorpVmrRequest::getLimit() const
{
    return limit_;
}

void SearchCorpVmrRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchCorpVmrRequest::limitIsSet() const
{
    return limitIsSet_;
}

void SearchCorpVmrRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string SearchCorpVmrRequest::getSearchKey() const
{
    return searchKey_;
}

void SearchCorpVmrRequest::setSearchKey(const std::string& value)
{
    searchKey_ = value;
    searchKeyIsSet_ = true;
}

bool SearchCorpVmrRequest::searchKeyIsSet() const
{
    return searchKeyIsSet_;
}

void SearchCorpVmrRequest::unsetsearchKey()
{
    searchKeyIsSet_ = false;
}

int32_t SearchCorpVmrRequest::getVmrMode() const
{
    return vmrMode_;
}

void SearchCorpVmrRequest::setVmrMode(int32_t value)
{
    vmrMode_ = value;
    vmrModeIsSet_ = true;
}

bool SearchCorpVmrRequest::vmrModeIsSet() const
{
    return vmrModeIsSet_;
}

void SearchCorpVmrRequest::unsetvmrMode()
{
    vmrModeIsSet_ = false;
}

int32_t SearchCorpVmrRequest::getStatus() const
{
    return status_;
}

void SearchCorpVmrRequest::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SearchCorpVmrRequest::statusIsSet() const
{
    return statusIsSet_;
}

void SearchCorpVmrRequest::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


