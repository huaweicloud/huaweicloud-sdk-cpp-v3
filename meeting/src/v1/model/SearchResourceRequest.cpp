

#include "huaweicloud/meeting/v1/model/SearchResourceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchResourceRequest::SearchResourceRequest()
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
    corpId_ = "";
    corpIdIsSet_ = false;
    startExpireDate_ = 0L;
    startExpireDateIsSet_ = false;
    endExpireDate_ = 0L;
    endExpireDateIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    typeId_ = "";
    typeIdIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
}

SearchResourceRequest::~SearchResourceRequest() = default;

void SearchResourceRequest::validate()
{
}

web::json::value SearchResourceRequest::toJson() const
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
    if(corpIdIsSet_) {
        val[utility::conversions::to_string_t("corp_id")] = ModelBase::toJson(corpId_);
    }
    if(startExpireDateIsSet_) {
        val[utility::conversions::to_string_t("startExpireDate")] = ModelBase::toJson(startExpireDate_);
    }
    if(endExpireDateIsSet_) {
        val[utility::conversions::to_string_t("endExpireDate")] = ModelBase::toJson(endExpireDate_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(typeIdIsSet_) {
        val[utility::conversions::to_string_t("typeId")] = ModelBase::toJson(typeId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool SearchResourceRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("corp_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("corp_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCorpId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("startExpireDate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("startExpireDate"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartExpireDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endExpireDate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endExpireDate"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndExpireDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("typeId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("typeId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTypeId(refVal);
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


std::string SearchResourceRequest::getXRequestId() const
{
    return xRequestId_;
}

void SearchResourceRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool SearchResourceRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void SearchResourceRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string SearchResourceRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void SearchResourceRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool SearchResourceRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void SearchResourceRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

int32_t SearchResourceRequest::getOffset() const
{
    return offset_;
}

void SearchResourceRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SearchResourceRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void SearchResourceRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t SearchResourceRequest::getLimit() const
{
    return limit_;
}

void SearchResourceRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchResourceRequest::limitIsSet() const
{
    return limitIsSet_;
}

void SearchResourceRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string SearchResourceRequest::getSearchKey() const
{
    return searchKey_;
}

void SearchResourceRequest::setSearchKey(const std::string& value)
{
    searchKey_ = value;
    searchKeyIsSet_ = true;
}

bool SearchResourceRequest::searchKeyIsSet() const
{
    return searchKeyIsSet_;
}

void SearchResourceRequest::unsetsearchKey()
{
    searchKeyIsSet_ = false;
}

std::string SearchResourceRequest::getCorpId() const
{
    return corpId_;
}

void SearchResourceRequest::setCorpId(const std::string& value)
{
    corpId_ = value;
    corpIdIsSet_ = true;
}

bool SearchResourceRequest::corpIdIsSet() const
{
    return corpIdIsSet_;
}

void SearchResourceRequest::unsetcorpId()
{
    corpIdIsSet_ = false;
}

int64_t SearchResourceRequest::getStartExpireDate() const
{
    return startExpireDate_;
}

void SearchResourceRequest::setStartExpireDate(int64_t value)
{
    startExpireDate_ = value;
    startExpireDateIsSet_ = true;
}

bool SearchResourceRequest::startExpireDateIsSet() const
{
    return startExpireDateIsSet_;
}

void SearchResourceRequest::unsetstartExpireDate()
{
    startExpireDateIsSet_ = false;
}

int64_t SearchResourceRequest::getEndExpireDate() const
{
    return endExpireDate_;
}

void SearchResourceRequest::setEndExpireDate(int64_t value)
{
    endExpireDate_ = value;
    endExpireDateIsSet_ = true;
}

bool SearchResourceRequest::endExpireDateIsSet() const
{
    return endExpireDateIsSet_;
}

void SearchResourceRequest::unsetendExpireDate()
{
    endExpireDateIsSet_ = false;
}

std::string SearchResourceRequest::getType() const
{
    return type_;
}

void SearchResourceRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool SearchResourceRequest::typeIsSet() const
{
    return typeIsSet_;
}

void SearchResourceRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string SearchResourceRequest::getTypeId() const
{
    return typeId_;
}

void SearchResourceRequest::setTypeId(const std::string& value)
{
    typeId_ = value;
    typeIdIsSet_ = true;
}

bool SearchResourceRequest::typeIdIsSet() const
{
    return typeIdIsSet_;
}

void SearchResourceRequest::unsettypeId()
{
    typeIdIsSet_ = false;
}

int32_t SearchResourceRequest::getStatus() const
{
    return status_;
}

void SearchResourceRequest::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SearchResourceRequest::statusIsSet() const
{
    return statusIsSet_;
}

void SearchResourceRequest::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


