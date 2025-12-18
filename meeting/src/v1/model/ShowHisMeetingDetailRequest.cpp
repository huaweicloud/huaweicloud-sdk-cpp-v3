

#include "huaweicloud/meeting/v1/model/ShowHisMeetingDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowHisMeetingDetailRequest::ShowHisMeetingDetailRequest()
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
    xType_ = 0;
    xTypeIsSet_ = false;
    xQueryType_ = 0;
    xQueryTypeIsSet_ = false;
    xAuthorizationType_ = "";
    xAuthorizationTypeIsSet_ = false;
    xSiteId_ = "";
    xSiteIdIsSet_ = false;
}

ShowHisMeetingDetailRequest::~ShowHisMeetingDetailRequest() = default;

void ShowHisMeetingDetailRequest::validate()
{
}

web::json::value ShowHisMeetingDetailRequest::toJson() const
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
bool ShowHisMeetingDetailRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Query-Type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Query-Type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
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


std::string ShowHisMeetingDetailRequest::getConfUUID() const
{
    return confUUID_;
}

void ShowHisMeetingDetailRequest::setConfUUID(const std::string& value)
{
    confUUID_ = value;
    confUUIDIsSet_ = true;
}

bool ShowHisMeetingDetailRequest::confUUIDIsSet() const
{
    return confUUIDIsSet_;
}

void ShowHisMeetingDetailRequest::unsetconfUUID()
{
    confUUIDIsSet_ = false;
}

int32_t ShowHisMeetingDetailRequest::getOffset() const
{
    return offset_;
}

void ShowHisMeetingDetailRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowHisMeetingDetailRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowHisMeetingDetailRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowHisMeetingDetailRequest::getLimit() const
{
    return limit_;
}

void ShowHisMeetingDetailRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowHisMeetingDetailRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowHisMeetingDetailRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ShowHisMeetingDetailRequest::getSearchKey() const
{
    return searchKey_;
}

void ShowHisMeetingDetailRequest::setSearchKey(const std::string& value)
{
    searchKey_ = value;
    searchKeyIsSet_ = true;
}

bool ShowHisMeetingDetailRequest::searchKeyIsSet() const
{
    return searchKeyIsSet_;
}

void ShowHisMeetingDetailRequest::unsetsearchKey()
{
    searchKeyIsSet_ = false;
}

std::string ShowHisMeetingDetailRequest::getUserUUID() const
{
    return userUUID_;
}

void ShowHisMeetingDetailRequest::setUserUUID(const std::string& value)
{
    userUUID_ = value;
    userUUIDIsSet_ = true;
}

bool ShowHisMeetingDetailRequest::userUUIDIsSet() const
{
    return userUUIDIsSet_;
}

void ShowHisMeetingDetailRequest::unsetuserUUID()
{
    userUUIDIsSet_ = false;
}

int32_t ShowHisMeetingDetailRequest::getXType() const
{
    return xType_;
}

void ShowHisMeetingDetailRequest::setXType(int32_t value)
{
    xType_ = value;
    xTypeIsSet_ = true;
}

bool ShowHisMeetingDetailRequest::xTypeIsSet() const
{
    return xTypeIsSet_;
}

void ShowHisMeetingDetailRequest::unsetxType()
{
    xTypeIsSet_ = false;
}

int32_t ShowHisMeetingDetailRequest::getXQueryType() const
{
    return xQueryType_;
}

void ShowHisMeetingDetailRequest::setXQueryType(int32_t value)
{
    xQueryType_ = value;
    xQueryTypeIsSet_ = true;
}

bool ShowHisMeetingDetailRequest::xQueryTypeIsSet() const
{
    return xQueryTypeIsSet_;
}

void ShowHisMeetingDetailRequest::unsetxQueryType()
{
    xQueryTypeIsSet_ = false;
}

std::string ShowHisMeetingDetailRequest::getXAuthorizationType() const
{
    return xAuthorizationType_;
}

void ShowHisMeetingDetailRequest::setXAuthorizationType(const std::string& value)
{
    xAuthorizationType_ = value;
    xAuthorizationTypeIsSet_ = true;
}

bool ShowHisMeetingDetailRequest::xAuthorizationTypeIsSet() const
{
    return xAuthorizationTypeIsSet_;
}

void ShowHisMeetingDetailRequest::unsetxAuthorizationType()
{
    xAuthorizationTypeIsSet_ = false;
}

std::string ShowHisMeetingDetailRequest::getXSiteId() const
{
    return xSiteId_;
}

void ShowHisMeetingDetailRequest::setXSiteId(const std::string& value)
{
    xSiteId_ = value;
    xSiteIdIsSet_ = true;
}

bool ShowHisMeetingDetailRequest::xSiteIdIsSet() const
{
    return xSiteIdIsSet_;
}

void ShowHisMeetingDetailRequest::unsetxSiteId()
{
    xSiteIdIsSet_ = false;
}

}
}
}
}
}


