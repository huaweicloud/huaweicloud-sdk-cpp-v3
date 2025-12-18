

#include "huaweicloud/meeting/v1/model/SearchMeetingsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchMeetingsRequest::SearchMeetingsRequest()
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
    queryConfMode_ = "";
    queryConfModeIsSet_ = false;
    sortType_ = "";
    sortTypeIsSet_ = false;
    xAuthorizationType_ = "";
    xAuthorizationTypeIsSet_ = false;
    xSiteId_ = "";
    xSiteIdIsSet_ = false;
}

SearchMeetingsRequest::~SearchMeetingsRequest() = default;

void SearchMeetingsRequest::validate()
{
}

web::json::value SearchMeetingsRequest::toJson() const
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
    if(queryConfModeIsSet_) {
        val[utility::conversions::to_string_t("queryConfMode")] = ModelBase::toJson(queryConfMode_);
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
bool SearchMeetingsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("queryConfMode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("queryConfMode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryConfMode(refVal);
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


std::string SearchMeetingsRequest::getUserUUID() const
{
    return userUUID_;
}

void SearchMeetingsRequest::setUserUUID(const std::string& value)
{
    userUUID_ = value;
    userUUIDIsSet_ = true;
}

bool SearchMeetingsRequest::userUUIDIsSet() const
{
    return userUUIDIsSet_;
}

void SearchMeetingsRequest::unsetuserUUID()
{
    userUUIDIsSet_ = false;
}

int32_t SearchMeetingsRequest::getOffset() const
{
    return offset_;
}

void SearchMeetingsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SearchMeetingsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void SearchMeetingsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t SearchMeetingsRequest::getLimit() const
{
    return limit_;
}

void SearchMeetingsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchMeetingsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void SearchMeetingsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

bool SearchMeetingsRequest::isQueryAll() const
{
    return queryAll_;
}

void SearchMeetingsRequest::setQueryAll(bool value)
{
    queryAll_ = value;
    queryAllIsSet_ = true;
}

bool SearchMeetingsRequest::queryAllIsSet() const
{
    return queryAllIsSet_;
}

void SearchMeetingsRequest::unsetqueryAll()
{
    queryAllIsSet_ = false;
}

std::string SearchMeetingsRequest::getSearchKey() const
{
    return searchKey_;
}

void SearchMeetingsRequest::setSearchKey(const std::string& value)
{
    searchKey_ = value;
    searchKeyIsSet_ = true;
}

bool SearchMeetingsRequest::searchKeyIsSet() const
{
    return searchKeyIsSet_;
}

void SearchMeetingsRequest::unsetsearchKey()
{
    searchKeyIsSet_ = false;
}

std::string SearchMeetingsRequest::getQueryConfMode() const
{
    return queryConfMode_;
}

void SearchMeetingsRequest::setQueryConfMode(const std::string& value)
{
    queryConfMode_ = value;
    queryConfModeIsSet_ = true;
}

bool SearchMeetingsRequest::queryConfModeIsSet() const
{
    return queryConfModeIsSet_;
}

void SearchMeetingsRequest::unsetqueryConfMode()
{
    queryConfModeIsSet_ = false;
}

std::string SearchMeetingsRequest::getSortType() const
{
    return sortType_;
}

void SearchMeetingsRequest::setSortType(const std::string& value)
{
    sortType_ = value;
    sortTypeIsSet_ = true;
}

bool SearchMeetingsRequest::sortTypeIsSet() const
{
    return sortTypeIsSet_;
}

void SearchMeetingsRequest::unsetsortType()
{
    sortTypeIsSet_ = false;
}

std::string SearchMeetingsRequest::getXAuthorizationType() const
{
    return xAuthorizationType_;
}

void SearchMeetingsRequest::setXAuthorizationType(const std::string& value)
{
    xAuthorizationType_ = value;
    xAuthorizationTypeIsSet_ = true;
}

bool SearchMeetingsRequest::xAuthorizationTypeIsSet() const
{
    return xAuthorizationTypeIsSet_;
}

void SearchMeetingsRequest::unsetxAuthorizationType()
{
    xAuthorizationTypeIsSet_ = false;
}

std::string SearchMeetingsRequest::getXSiteId() const
{
    return xSiteId_;
}

void SearchMeetingsRequest::setXSiteId(const std::string& value)
{
    xSiteId_ = value;
    xSiteIdIsSet_ = true;
}

bool SearchMeetingsRequest::xSiteIdIsSet() const
{
    return xSiteIdIsSet_;
}

void SearchMeetingsRequest::unsetxSiteId()
{
    xSiteIdIsSet_ = false;
}

}
}
}
}
}


