

#include "huaweicloud/meeting/v1/model/ShowOnlineMeetingDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowOnlineMeetingDetailRequest::ShowOnlineMeetingDetailRequest()
{
    conferenceID_ = "";
    conferenceIDIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    searchKey_ = "";
    searchKeyIsSet_ = false;
    userUUID_ = "";
    userUUIDIsSet_ = false;
    xType_ = "";
    xTypeIsSet_ = false;
    xQueryType_ = "";
    xQueryTypeIsSet_ = false;
    xAuthorizationType_ = "";
    xAuthorizationTypeIsSet_ = false;
    xSiteId_ = "";
    xSiteIdIsSet_ = false;
}

ShowOnlineMeetingDetailRequest::~ShowOnlineMeetingDetailRequest() = default;

void ShowOnlineMeetingDetailRequest::validate()
{
}

web::json::value ShowOnlineMeetingDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(conferenceIDIsSet_) {
        val[utility::conversions::to_string_t("conferenceID")] = ModelBase::toJson(conferenceID_);
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
    if(xTypeIsSet_) {
        val[utility::conversions::to_string_t("X-Type")] = ModelBase::toJson(xType_);
    }
    if(xQueryTypeIsSet_) {
        val[utility::conversions::to_string_t("X-Query-Type")] = ModelBase::toJson(xQueryType_);
    }
    if(xAuthorizationTypeIsSet_) {
        val[utility::conversions::to_string_t("X-Authorization-Type")] = ModelBase::toJson(xAuthorizationType_);
    }
    if(xSiteIdIsSet_) {
        val[utility::conversions::to_string_t("X-Site-Id")] = ModelBase::toJson(xSiteId_);
    }

    return val;
}
bool ShowOnlineMeetingDetailRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("conferenceID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conferenceID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConferenceID(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("X-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Query-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Query-Type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXQueryType(refVal);
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


std::string ShowOnlineMeetingDetailRequest::getConferenceID() const
{
    return conferenceID_;
}

void ShowOnlineMeetingDetailRequest::setConferenceID(const std::string& value)
{
    conferenceID_ = value;
    conferenceIDIsSet_ = true;
}

bool ShowOnlineMeetingDetailRequest::conferenceIDIsSet() const
{
    return conferenceIDIsSet_;
}

void ShowOnlineMeetingDetailRequest::unsetconferenceID()
{
    conferenceIDIsSet_ = false;
}

int32_t ShowOnlineMeetingDetailRequest::getOffset() const
{
    return offset_;
}

void ShowOnlineMeetingDetailRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowOnlineMeetingDetailRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowOnlineMeetingDetailRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowOnlineMeetingDetailRequest::getLimit() const
{
    return limit_;
}

void ShowOnlineMeetingDetailRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowOnlineMeetingDetailRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowOnlineMeetingDetailRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowOnlineMeetingDetailRequest::getSearchKey() const
{
    return searchKey_;
}

void ShowOnlineMeetingDetailRequest::setSearchKey(const std::string& value)
{
    searchKey_ = value;
    searchKeyIsSet_ = true;
}

bool ShowOnlineMeetingDetailRequest::searchKeyIsSet() const
{
    return searchKeyIsSet_;
}

void ShowOnlineMeetingDetailRequest::unsetsearchKey()
{
    searchKeyIsSet_ = false;
}

std::string ShowOnlineMeetingDetailRequest::getUserUUID() const
{
    return userUUID_;
}

void ShowOnlineMeetingDetailRequest::setUserUUID(const std::string& value)
{
    userUUID_ = value;
    userUUIDIsSet_ = true;
}

bool ShowOnlineMeetingDetailRequest::userUUIDIsSet() const
{
    return userUUIDIsSet_;
}

void ShowOnlineMeetingDetailRequest::unsetuserUUID()
{
    userUUIDIsSet_ = false;
}

std::string ShowOnlineMeetingDetailRequest::getXType() const
{
    return xType_;
}

void ShowOnlineMeetingDetailRequest::setXType(const std::string& value)
{
    xType_ = value;
    xTypeIsSet_ = true;
}

bool ShowOnlineMeetingDetailRequest::xTypeIsSet() const
{
    return xTypeIsSet_;
}

void ShowOnlineMeetingDetailRequest::unsetxType()
{
    xTypeIsSet_ = false;
}

std::string ShowOnlineMeetingDetailRequest::getXQueryType() const
{
    return xQueryType_;
}

void ShowOnlineMeetingDetailRequest::setXQueryType(const std::string& value)
{
    xQueryType_ = value;
    xQueryTypeIsSet_ = true;
}

bool ShowOnlineMeetingDetailRequest::xQueryTypeIsSet() const
{
    return xQueryTypeIsSet_;
}

void ShowOnlineMeetingDetailRequest::unsetxQueryType()
{
    xQueryTypeIsSet_ = false;
}

std::string ShowOnlineMeetingDetailRequest::getXAuthorizationType() const
{
    return xAuthorizationType_;
}

void ShowOnlineMeetingDetailRequest::setXAuthorizationType(const std::string& value)
{
    xAuthorizationType_ = value;
    xAuthorizationTypeIsSet_ = true;
}

bool ShowOnlineMeetingDetailRequest::xAuthorizationTypeIsSet() const
{
    return xAuthorizationTypeIsSet_;
}

void ShowOnlineMeetingDetailRequest::unsetxAuthorizationType()
{
    xAuthorizationTypeIsSet_ = false;
}

std::string ShowOnlineMeetingDetailRequest::getXSiteId() const
{
    return xSiteId_;
}

void ShowOnlineMeetingDetailRequest::setXSiteId(const std::string& value)
{
    xSiteId_ = value;
    xSiteIdIsSet_ = true;
}

bool ShowOnlineMeetingDetailRequest::xSiteIdIsSet() const
{
    return xSiteIdIsSet_;
}

void ShowOnlineMeetingDetailRequest::unsetxSiteId()
{
    xSiteIdIsSet_ = false;
}

}
}
}
}
}


