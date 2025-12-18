

#include "huaweicloud/meeting/v1/model/SearchCorpDirRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchCorpDirRequest::SearchCorpDirRequest()
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
    deptCode_ = "";
    deptCodeIsSet_ = false;
    querySubDept_ = false;
    querySubDeptIsSet_ = false;
    searchScope_ = "";
    searchScopeIsSet_ = false;
}

SearchCorpDirRequest::~SearchCorpDirRequest() = default;

void SearchCorpDirRequest::validate()
{
}

web::json::value SearchCorpDirRequest::toJson() const
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
    if(deptCodeIsSet_) {
        val[utility::conversions::to_string_t("deptCode")] = ModelBase::toJson(deptCode_);
    }
    if(querySubDeptIsSet_) {
        val[utility::conversions::to_string_t("querySubDept")] = ModelBase::toJson(querySubDept_);
    }
    if(searchScopeIsSet_) {
        val[utility::conversions::to_string_t("searchScope")] = ModelBase::toJson(searchScope_);
    }

    return val;
}
bool SearchCorpDirRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("deptCode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deptCode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeptCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("querySubDept"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("querySubDept"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuerySubDept(refVal);
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


std::string SearchCorpDirRequest::getXRequestId() const
{
    return xRequestId_;
}

void SearchCorpDirRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool SearchCorpDirRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void SearchCorpDirRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string SearchCorpDirRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void SearchCorpDirRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool SearchCorpDirRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void SearchCorpDirRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

int32_t SearchCorpDirRequest::getOffset() const
{
    return offset_;
}

void SearchCorpDirRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SearchCorpDirRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void SearchCorpDirRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t SearchCorpDirRequest::getLimit() const
{
    return limit_;
}

void SearchCorpDirRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchCorpDirRequest::limitIsSet() const
{
    return limitIsSet_;
}

void SearchCorpDirRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string SearchCorpDirRequest::getSearchKey() const
{
    return searchKey_;
}

void SearchCorpDirRequest::setSearchKey(const std::string& value)
{
    searchKey_ = value;
    searchKeyIsSet_ = true;
}

bool SearchCorpDirRequest::searchKeyIsSet() const
{
    return searchKeyIsSet_;
}

void SearchCorpDirRequest::unsetsearchKey()
{
    searchKeyIsSet_ = false;
}

std::string SearchCorpDirRequest::getDeptCode() const
{
    return deptCode_;
}

void SearchCorpDirRequest::setDeptCode(const std::string& value)
{
    deptCode_ = value;
    deptCodeIsSet_ = true;
}

bool SearchCorpDirRequest::deptCodeIsSet() const
{
    return deptCodeIsSet_;
}

void SearchCorpDirRequest::unsetdeptCode()
{
    deptCodeIsSet_ = false;
}

bool SearchCorpDirRequest::isQuerySubDept() const
{
    return querySubDept_;
}

void SearchCorpDirRequest::setQuerySubDept(bool value)
{
    querySubDept_ = value;
    querySubDeptIsSet_ = true;
}

bool SearchCorpDirRequest::querySubDeptIsSet() const
{
    return querySubDeptIsSet_;
}

void SearchCorpDirRequest::unsetquerySubDept()
{
    querySubDeptIsSet_ = false;
}

std::string SearchCorpDirRequest::getSearchScope() const
{
    return searchScope_;
}

void SearchCorpDirRequest::setSearchScope(const std::string& value)
{
    searchScope_ = value;
    searchScopeIsSet_ = true;
}

bool SearchCorpDirRequest::searchScopeIsSet() const
{
    return searchScopeIsSet_;
}

void SearchCorpDirRequest::unsetsearchScope()
{
    searchScopeIsSet_ = false;
}

}
}
}
}
}


