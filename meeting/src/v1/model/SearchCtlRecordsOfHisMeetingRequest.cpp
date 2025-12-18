

#include "huaweicloud/meeting/v1/model/SearchCtlRecordsOfHisMeetingRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchCtlRecordsOfHisMeetingRequest::SearchCtlRecordsOfHisMeetingRequest()
{
    confUUID_ = "";
    confUUIDIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    userUUID_ = "";
    userUUIDIsSet_ = false;
    xAuthorizationType_ = "";
    xAuthorizationTypeIsSet_ = false;
    xSiteId_ = "";
    xSiteIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
}

SearchCtlRecordsOfHisMeetingRequest::~SearchCtlRecordsOfHisMeetingRequest() = default;

void SearchCtlRecordsOfHisMeetingRequest::validate()
{
}

web::json::value SearchCtlRecordsOfHisMeetingRequest::toJson() const
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
bool SearchCtlRecordsOfHisMeetingRequest::fromJson(const web::json::value& val)
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


std::string SearchCtlRecordsOfHisMeetingRequest::getConfUUID() const
{
    return confUUID_;
}

void SearchCtlRecordsOfHisMeetingRequest::setConfUUID(const std::string& value)
{
    confUUID_ = value;
    confUUIDIsSet_ = true;
}

bool SearchCtlRecordsOfHisMeetingRequest::confUUIDIsSet() const
{
    return confUUIDIsSet_;
}

void SearchCtlRecordsOfHisMeetingRequest::unsetconfUUID()
{
    confUUIDIsSet_ = false;
}

int32_t SearchCtlRecordsOfHisMeetingRequest::getOffset() const
{
    return offset_;
}

void SearchCtlRecordsOfHisMeetingRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SearchCtlRecordsOfHisMeetingRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void SearchCtlRecordsOfHisMeetingRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t SearchCtlRecordsOfHisMeetingRequest::getLimit() const
{
    return limit_;
}

void SearchCtlRecordsOfHisMeetingRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchCtlRecordsOfHisMeetingRequest::limitIsSet() const
{
    return limitIsSet_;
}

void SearchCtlRecordsOfHisMeetingRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string SearchCtlRecordsOfHisMeetingRequest::getUserUUID() const
{
    return userUUID_;
}

void SearchCtlRecordsOfHisMeetingRequest::setUserUUID(const std::string& value)
{
    userUUID_ = value;
    userUUIDIsSet_ = true;
}

bool SearchCtlRecordsOfHisMeetingRequest::userUUIDIsSet() const
{
    return userUUIDIsSet_;
}

void SearchCtlRecordsOfHisMeetingRequest::unsetuserUUID()
{
    userUUIDIsSet_ = false;
}

std::string SearchCtlRecordsOfHisMeetingRequest::getXAuthorizationType() const
{
    return xAuthorizationType_;
}

void SearchCtlRecordsOfHisMeetingRequest::setXAuthorizationType(const std::string& value)
{
    xAuthorizationType_ = value;
    xAuthorizationTypeIsSet_ = true;
}

bool SearchCtlRecordsOfHisMeetingRequest::xAuthorizationTypeIsSet() const
{
    return xAuthorizationTypeIsSet_;
}

void SearchCtlRecordsOfHisMeetingRequest::unsetxAuthorizationType()
{
    xAuthorizationTypeIsSet_ = false;
}

std::string SearchCtlRecordsOfHisMeetingRequest::getXSiteId() const
{
    return xSiteId_;
}

void SearchCtlRecordsOfHisMeetingRequest::setXSiteId(const std::string& value)
{
    xSiteId_ = value;
    xSiteIdIsSet_ = true;
}

bool SearchCtlRecordsOfHisMeetingRequest::xSiteIdIsSet() const
{
    return xSiteIdIsSet_;
}

void SearchCtlRecordsOfHisMeetingRequest::unsetxSiteId()
{
    xSiteIdIsSet_ = false;
}

std::string SearchCtlRecordsOfHisMeetingRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void SearchCtlRecordsOfHisMeetingRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool SearchCtlRecordsOfHisMeetingRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void SearchCtlRecordsOfHisMeetingRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

}
}
}
}
}


