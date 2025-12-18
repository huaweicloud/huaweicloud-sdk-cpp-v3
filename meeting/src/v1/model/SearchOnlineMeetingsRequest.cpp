

#include "huaweicloud/meeting/v1/model/SearchOnlineMeetingsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchOnlineMeetingsRequest::SearchOnlineMeetingsRequest()
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
    xAuthorizationType_ = "";
    xAuthorizationTypeIsSet_ = false;
    xSiteId_ = "";
    xSiteIdIsSet_ = false;
}

SearchOnlineMeetingsRequest::~SearchOnlineMeetingsRequest() = default;

void SearchOnlineMeetingsRequest::validate()
{
}

web::json::value SearchOnlineMeetingsRequest::toJson() const
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
    if(xAuthorizationTypeIsSet_) {
        val[utility::conversions::to_string_t("X-Authorization-Type")] = ModelBase::toJson(xAuthorizationType_);
    }
    if(xSiteIdIsSet_) {
        val[utility::conversions::to_string_t("X-Site-Id")] = ModelBase::toJson(xSiteId_);
    }

    return val;
}
bool SearchOnlineMeetingsRequest::fromJson(const web::json::value& val)
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


std::string SearchOnlineMeetingsRequest::getUserUUID() const
{
    return userUUID_;
}

void SearchOnlineMeetingsRequest::setUserUUID(const std::string& value)
{
    userUUID_ = value;
    userUUIDIsSet_ = true;
}

bool SearchOnlineMeetingsRequest::userUUIDIsSet() const
{
    return userUUIDIsSet_;
}

void SearchOnlineMeetingsRequest::unsetuserUUID()
{
    userUUIDIsSet_ = false;
}

int32_t SearchOnlineMeetingsRequest::getOffset() const
{
    return offset_;
}

void SearchOnlineMeetingsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SearchOnlineMeetingsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void SearchOnlineMeetingsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t SearchOnlineMeetingsRequest::getLimit() const
{
    return limit_;
}

void SearchOnlineMeetingsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchOnlineMeetingsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void SearchOnlineMeetingsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

bool SearchOnlineMeetingsRequest::isQueryAll() const
{
    return queryAll_;
}

void SearchOnlineMeetingsRequest::setQueryAll(bool value)
{
    queryAll_ = value;
    queryAllIsSet_ = true;
}

bool SearchOnlineMeetingsRequest::queryAllIsSet() const
{
    return queryAllIsSet_;
}

void SearchOnlineMeetingsRequest::unsetqueryAll()
{
    queryAllIsSet_ = false;
}

std::string SearchOnlineMeetingsRequest::getSearchKey() const
{
    return searchKey_;
}

void SearchOnlineMeetingsRequest::setSearchKey(const std::string& value)
{
    searchKey_ = value;
    searchKeyIsSet_ = true;
}

bool SearchOnlineMeetingsRequest::searchKeyIsSet() const
{
    return searchKeyIsSet_;
}

void SearchOnlineMeetingsRequest::unsetsearchKey()
{
    searchKeyIsSet_ = false;
}

std::string SearchOnlineMeetingsRequest::getXAuthorizationType() const
{
    return xAuthorizationType_;
}

void SearchOnlineMeetingsRequest::setXAuthorizationType(const std::string& value)
{
    xAuthorizationType_ = value;
    xAuthorizationTypeIsSet_ = true;
}

bool SearchOnlineMeetingsRequest::xAuthorizationTypeIsSet() const
{
    return xAuthorizationTypeIsSet_;
}

void SearchOnlineMeetingsRequest::unsetxAuthorizationType()
{
    xAuthorizationTypeIsSet_ = false;
}

std::string SearchOnlineMeetingsRequest::getXSiteId() const
{
    return xSiteId_;
}

void SearchOnlineMeetingsRequest::setXSiteId(const std::string& value)
{
    xSiteId_ = value;
    xSiteIdIsSet_ = true;
}

bool SearchOnlineMeetingsRequest::xSiteIdIsSet() const
{
    return xSiteIdIsSet_;
}

void SearchOnlineMeetingsRequest::unsetxSiteId()
{
    xSiteIdIsSet_ = false;
}

}
}
}
}
}


