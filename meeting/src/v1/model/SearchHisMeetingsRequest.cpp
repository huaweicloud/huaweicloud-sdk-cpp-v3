

#include "huaweicloud/meeting/v1/model/SearchHisMeetingsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchHisMeetingsRequest::SearchHisMeetingsRequest()
{
    userUUID_ = "";
    userUUIDIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    searchKey_ = "";
    searchKeyIsSet_ = false;
    queryAll_ = false;
    queryAllIsSet_ = false;
    startDate_ = 0L;
    startDateIsSet_ = false;
    endDate_ = 0L;
    endDateIsSet_ = false;
    sortType_ = "";
    sortTypeIsSet_ = false;
    xAuthorizationType_ = "";
    xAuthorizationTypeIsSet_ = false;
    xSiteId_ = "";
    xSiteIdIsSet_ = false;
}

SearchHisMeetingsRequest::~SearchHisMeetingsRequest() = default;

void SearchHisMeetingsRequest::validate()
{
}

web::json::value SearchHisMeetingsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userUUIDIsSet_) {
        val[utility::conversions::to_string_t("userUUID")] = ModelBase::toJson(userUUID_);
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
    if(queryAllIsSet_) {
        val[utility::conversions::to_string_t("queryAll")] = ModelBase::toJson(queryAll_);
    }
    if(startDateIsSet_) {
        val[utility::conversions::to_string_t("startDate")] = ModelBase::toJson(startDate_);
    }
    if(endDateIsSet_) {
        val[utility::conversions::to_string_t("endDate")] = ModelBase::toJson(endDate_);
    }
    if(sortTypeIsSet_) {
        val[utility::conversions::to_string_t("sortType")] = ModelBase::toJson(sortType_);
    }
    if(xAuthorizationTypeIsSet_) {
        val[utility::conversions::to_string_t("X-Authorization-Type")] = ModelBase::toJson(xAuthorizationType_);
    }
    if(xSiteIdIsSet_) {
        val[utility::conversions::to_string_t("X-Site-Id")] = ModelBase::toJson(xSiteId_);
    }

    return val;
}
bool SearchHisMeetingsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("userUUID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userUUID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserUUID(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("queryAll"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("queryAll"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryAll(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("startDate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("startDate"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endDate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endDate"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndDate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("X-Authorization-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Authorization-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXAuthorizationType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Site-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Site-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSiteId(refVal);
        }
    }
    return ok;
}


std::string SearchHisMeetingsRequest::getUserUUID() const
{
    return userUUID_;
}

void SearchHisMeetingsRequest::setUserUUID(const std::string& value)
{
    userUUID_ = value;
    userUUIDIsSet_ = true;
}

bool SearchHisMeetingsRequest::userUUIDIsSet() const
{
    return userUUIDIsSet_;
}

void SearchHisMeetingsRequest::unsetuserUUID()
{
    userUUIDIsSet_ = false;
}

int32_t SearchHisMeetingsRequest::getOffset() const
{
    return offset_;
}

void SearchHisMeetingsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SearchHisMeetingsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void SearchHisMeetingsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t SearchHisMeetingsRequest::getLimit() const
{
    return limit_;
}

void SearchHisMeetingsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchHisMeetingsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void SearchHisMeetingsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string SearchHisMeetingsRequest::getSearchKey() const
{
    return searchKey_;
}

void SearchHisMeetingsRequest::setSearchKey(const std::string& value)
{
    searchKey_ = value;
    searchKeyIsSet_ = true;
}

bool SearchHisMeetingsRequest::searchKeyIsSet() const
{
    return searchKeyIsSet_;
}

void SearchHisMeetingsRequest::unsetsearchKey()
{
    searchKeyIsSet_ = false;
}

bool SearchHisMeetingsRequest::isQueryAll() const
{
    return queryAll_;
}

void SearchHisMeetingsRequest::setQueryAll(bool value)
{
    queryAll_ = value;
    queryAllIsSet_ = true;
}

bool SearchHisMeetingsRequest::queryAllIsSet() const
{
    return queryAllIsSet_;
}

void SearchHisMeetingsRequest::unsetqueryAll()
{
    queryAllIsSet_ = false;
}

int64_t SearchHisMeetingsRequest::getStartDate() const
{
    return startDate_;
}

void SearchHisMeetingsRequest::setStartDate(int64_t value)
{
    startDate_ = value;
    startDateIsSet_ = true;
}

bool SearchHisMeetingsRequest::startDateIsSet() const
{
    return startDateIsSet_;
}

void SearchHisMeetingsRequest::unsetstartDate()
{
    startDateIsSet_ = false;
}

int64_t SearchHisMeetingsRequest::getEndDate() const
{
    return endDate_;
}

void SearchHisMeetingsRequest::setEndDate(int64_t value)
{
    endDate_ = value;
    endDateIsSet_ = true;
}

bool SearchHisMeetingsRequest::endDateIsSet() const
{
    return endDateIsSet_;
}

void SearchHisMeetingsRequest::unsetendDate()
{
    endDateIsSet_ = false;
}

std::string SearchHisMeetingsRequest::getSortType() const
{
    return sortType_;
}

void SearchHisMeetingsRequest::setSortType(const std::string& value)
{
    sortType_ = value;
    sortTypeIsSet_ = true;
}

bool SearchHisMeetingsRequest::sortTypeIsSet() const
{
    return sortTypeIsSet_;
}

void SearchHisMeetingsRequest::unsetsortType()
{
    sortTypeIsSet_ = false;
}

std::string SearchHisMeetingsRequest::getXAuthorizationType() const
{
    return xAuthorizationType_;
}

void SearchHisMeetingsRequest::setXAuthorizationType(const std::string& value)
{
    xAuthorizationType_ = value;
    xAuthorizationTypeIsSet_ = true;
}

bool SearchHisMeetingsRequest::xAuthorizationTypeIsSet() const
{
    return xAuthorizationTypeIsSet_;
}

void SearchHisMeetingsRequest::unsetxAuthorizationType()
{
    xAuthorizationTypeIsSet_ = false;
}

std::string SearchHisMeetingsRequest::getXSiteId() const
{
    return xSiteId_;
}

void SearchHisMeetingsRequest::setXSiteId(const std::string& value)
{
    xSiteId_ = value;
    xSiteIdIsSet_ = true;
}

bool SearchHisMeetingsRequest::xSiteIdIsSet() const
{
    return xSiteIdIsSet_;
}

void SearchHisMeetingsRequest::unsetxSiteId()
{
    xSiteIdIsSet_ = false;
}

}
}
}
}
}


