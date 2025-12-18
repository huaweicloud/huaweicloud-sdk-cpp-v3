

#include "huaweicloud/meeting/v1/model/SearchAttendanceRecordsOfHisMeetingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchAttendanceRecordsOfHisMeetingRequest::SearchAttendanceRecordsOfHisMeetingRequest()
{
    confUUID_ = "";
    confUUIDIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    searchKey_ = "";
    searchKeyIsSet_ = false;
    userUUID_ = "";
    userUUIDIsSet_ = false;
    xAuthorizationType_ = "";
    xAuthorizationTypeIsSet_ = false;
    xSiteId_ = "";
    xSiteIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
}

SearchAttendanceRecordsOfHisMeetingRequest::~SearchAttendanceRecordsOfHisMeetingRequest() = default;

void SearchAttendanceRecordsOfHisMeetingRequest::validate()
{
}

web::json::value SearchAttendanceRecordsOfHisMeetingRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(confUUIDIsSet_) {
        val[utility::conversions::to_string_t("confUUID")] = ModelBase::toJson(confUUID_);
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
    if(userUUIDIsSet_) {
        val[utility::conversions::to_string_t("userUUID")] = ModelBase::toJson(userUUID_);
    }
    if(xAuthorizationTypeIsSet_) {
        val[utility::conversions::to_string_t("X-Authorization-Type")] = ModelBase::toJson(xAuthorizationType_);
    }
    if(xSiteIdIsSet_) {
        val[utility::conversions::to_string_t("X-Site-Id")] = ModelBase::toJson(xSiteId_);
    }
    if(acceptLanguageIsSet_) {
        val[utility::conversions::to_string_t("Accept-Language")] = ModelBase::toJson(acceptLanguage_);
    }

    return val;
}
bool SearchAttendanceRecordsOfHisMeetingRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("confUUID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confUUID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfUUID(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("userUUID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userUUID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserUUID(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("Accept-Language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Accept-Language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAcceptLanguage(refVal);
        }
    }
    return ok;
}


std::string SearchAttendanceRecordsOfHisMeetingRequest::getConfUUID() const
{
    return confUUID_;
}

void SearchAttendanceRecordsOfHisMeetingRequest::setConfUUID(const std::string& value)
{
    confUUID_ = value;
    confUUIDIsSet_ = true;
}

bool SearchAttendanceRecordsOfHisMeetingRequest::confUUIDIsSet() const
{
    return confUUIDIsSet_;
}

void SearchAttendanceRecordsOfHisMeetingRequest::unsetconfUUID()
{
    confUUIDIsSet_ = false;
}

int32_t SearchAttendanceRecordsOfHisMeetingRequest::getOffset() const
{
    return offset_;
}

void SearchAttendanceRecordsOfHisMeetingRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SearchAttendanceRecordsOfHisMeetingRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void SearchAttendanceRecordsOfHisMeetingRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t SearchAttendanceRecordsOfHisMeetingRequest::getLimit() const
{
    return limit_;
}

void SearchAttendanceRecordsOfHisMeetingRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchAttendanceRecordsOfHisMeetingRequest::limitIsSet() const
{
    return limitIsSet_;
}

void SearchAttendanceRecordsOfHisMeetingRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string SearchAttendanceRecordsOfHisMeetingRequest::getSearchKey() const
{
    return searchKey_;
}

void SearchAttendanceRecordsOfHisMeetingRequest::setSearchKey(const std::string& value)
{
    searchKey_ = value;
    searchKeyIsSet_ = true;
}

bool SearchAttendanceRecordsOfHisMeetingRequest::searchKeyIsSet() const
{
    return searchKeyIsSet_;
}

void SearchAttendanceRecordsOfHisMeetingRequest::unsetsearchKey()
{
    searchKeyIsSet_ = false;
}

std::string SearchAttendanceRecordsOfHisMeetingRequest::getUserUUID() const
{
    return userUUID_;
}

void SearchAttendanceRecordsOfHisMeetingRequest::setUserUUID(const std::string& value)
{
    userUUID_ = value;
    userUUIDIsSet_ = true;
}

bool SearchAttendanceRecordsOfHisMeetingRequest::userUUIDIsSet() const
{
    return userUUIDIsSet_;
}

void SearchAttendanceRecordsOfHisMeetingRequest::unsetuserUUID()
{
    userUUIDIsSet_ = false;
}

std::string SearchAttendanceRecordsOfHisMeetingRequest::getXAuthorizationType() const
{
    return xAuthorizationType_;
}

void SearchAttendanceRecordsOfHisMeetingRequest::setXAuthorizationType(const std::string& value)
{
    xAuthorizationType_ = value;
    xAuthorizationTypeIsSet_ = true;
}

bool SearchAttendanceRecordsOfHisMeetingRequest::xAuthorizationTypeIsSet() const
{
    return xAuthorizationTypeIsSet_;
}

void SearchAttendanceRecordsOfHisMeetingRequest::unsetxAuthorizationType()
{
    xAuthorizationTypeIsSet_ = false;
}

std::string SearchAttendanceRecordsOfHisMeetingRequest::getXSiteId() const
{
    return xSiteId_;
}

void SearchAttendanceRecordsOfHisMeetingRequest::setXSiteId(const std::string& value)
{
    xSiteId_ = value;
    xSiteIdIsSet_ = true;
}

bool SearchAttendanceRecordsOfHisMeetingRequest::xSiteIdIsSet() const
{
    return xSiteIdIsSet_;
}

void SearchAttendanceRecordsOfHisMeetingRequest::unsetxSiteId()
{
    xSiteIdIsSet_ = false;
}

std::string SearchAttendanceRecordsOfHisMeetingRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void SearchAttendanceRecordsOfHisMeetingRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool SearchAttendanceRecordsOfHisMeetingRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void SearchAttendanceRecordsOfHisMeetingRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

}
}
}
}
}


