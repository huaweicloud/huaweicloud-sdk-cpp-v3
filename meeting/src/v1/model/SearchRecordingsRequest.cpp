

#include "huaweicloud/meeting/v1/model/SearchRecordingsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchRecordingsRequest::SearchRecordingsRequest()
{
    userUUID_ = "";
    userUUIDIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    queryAll_ = false;
    queryAllIsSet_ = false;
    searchKey_ = "";
    searchKeyIsSet_ = false;
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

SearchRecordingsRequest::~SearchRecordingsRequest() = default;

void SearchRecordingsRequest::validate()
{
}

web::json::value SearchRecordingsRequest::toJson() const
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
    if(queryAllIsSet_) {
        val[utility::conversions::to_string_t("queryAll")] = ModelBase::toJson(queryAll_);
    }
    if(searchKeyIsSet_) {
        val[utility::conversions::to_string_t("searchKey")] = ModelBase::toJson(searchKey_);
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
bool SearchRecordingsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("queryAll"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("queryAll"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryAll(refVal);
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


std::string SearchRecordingsRequest::getUserUUID() const
{
    return userUUID_;
}

void SearchRecordingsRequest::setUserUUID(const std::string& value)
{
    userUUID_ = value;
    userUUIDIsSet_ = true;
}

bool SearchRecordingsRequest::userUUIDIsSet() const
{
    return userUUIDIsSet_;
}

void SearchRecordingsRequest::unsetuserUUID()
{
    userUUIDIsSet_ = false;
}

int32_t SearchRecordingsRequest::getOffset() const
{
    return offset_;
}

void SearchRecordingsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SearchRecordingsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void SearchRecordingsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t SearchRecordingsRequest::getLimit() const
{
    return limit_;
}

void SearchRecordingsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchRecordingsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void SearchRecordingsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

bool SearchRecordingsRequest::isQueryAll() const
{
    return queryAll_;
}

void SearchRecordingsRequest::setQueryAll(bool value)
{
    queryAll_ = value;
    queryAllIsSet_ = true;
}

bool SearchRecordingsRequest::queryAllIsSet() const
{
    return queryAllIsSet_;
}

void SearchRecordingsRequest::unsetqueryAll()
{
    queryAllIsSet_ = false;
}

std::string SearchRecordingsRequest::getSearchKey() const
{
    return searchKey_;
}

void SearchRecordingsRequest::setSearchKey(const std::string& value)
{
    searchKey_ = value;
    searchKeyIsSet_ = true;
}

bool SearchRecordingsRequest::searchKeyIsSet() const
{
    return searchKeyIsSet_;
}

void SearchRecordingsRequest::unsetsearchKey()
{
    searchKeyIsSet_ = false;
}

int64_t SearchRecordingsRequest::getStartDate() const
{
    return startDate_;
}

void SearchRecordingsRequest::setStartDate(int64_t value)
{
    startDate_ = value;
    startDateIsSet_ = true;
}

bool SearchRecordingsRequest::startDateIsSet() const
{
    return startDateIsSet_;
}

void SearchRecordingsRequest::unsetstartDate()
{
    startDateIsSet_ = false;
}

int64_t SearchRecordingsRequest::getEndDate() const
{
    return endDate_;
}

void SearchRecordingsRequest::setEndDate(int64_t value)
{
    endDate_ = value;
    endDateIsSet_ = true;
}

bool SearchRecordingsRequest::endDateIsSet() const
{
    return endDateIsSet_;
}

void SearchRecordingsRequest::unsetendDate()
{
    endDateIsSet_ = false;
}

std::string SearchRecordingsRequest::getSortType() const
{
    return sortType_;
}

void SearchRecordingsRequest::setSortType(const std::string& value)
{
    sortType_ = value;
    sortTypeIsSet_ = true;
}

bool SearchRecordingsRequest::sortTypeIsSet() const
{
    return sortTypeIsSet_;
}

void SearchRecordingsRequest::unsetsortType()
{
    sortTypeIsSet_ = false;
}

std::string SearchRecordingsRequest::getXAuthorizationType() const
{
    return xAuthorizationType_;
}

void SearchRecordingsRequest::setXAuthorizationType(const std::string& value)
{
    xAuthorizationType_ = value;
    xAuthorizationTypeIsSet_ = true;
}

bool SearchRecordingsRequest::xAuthorizationTypeIsSet() const
{
    return xAuthorizationTypeIsSet_;
}

void SearchRecordingsRequest::unsetxAuthorizationType()
{
    xAuthorizationTypeIsSet_ = false;
}

std::string SearchRecordingsRequest::getXSiteId() const
{
    return xSiteId_;
}

void SearchRecordingsRequest::setXSiteId(const std::string& value)
{
    xSiteId_ = value;
    xSiteIdIsSet_ = true;
}

bool SearchRecordingsRequest::xSiteIdIsSet() const
{
    return xSiteIdIsSet_;
}

void SearchRecordingsRequest::unsetxSiteId()
{
    xSiteIdIsSet_ = false;
}

}
}
}
}
}


