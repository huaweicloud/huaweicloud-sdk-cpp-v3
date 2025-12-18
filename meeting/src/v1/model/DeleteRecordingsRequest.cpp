

#include "huaweicloud/meeting/v1/model/DeleteRecordingsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




DeleteRecordingsRequest::DeleteRecordingsRequest()
{
    confUUIDs_ = "";
    confUUIDsIsSet_ = false;
    userUUID_ = "";
    userUUIDIsSet_ = false;
    xAuthorizationType_ = "";
    xAuthorizationTypeIsSet_ = false;
    xSiteId_ = "";
    xSiteIdIsSet_ = false;
}

DeleteRecordingsRequest::~DeleteRecordingsRequest() = default;

void DeleteRecordingsRequest::validate()
{
}

web::json::value DeleteRecordingsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(confUUIDsIsSet_) {
        val[utility::conversions::to_string_t("confUUIDs")] = ModelBase::toJson(confUUIDs_);
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

    return val;
}
bool DeleteRecordingsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("confUUIDs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confUUIDs"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfUUIDs(refVal);
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
    return ok;
}


std::string DeleteRecordingsRequest::getConfUUIDs() const
{
    return confUUIDs_;
}

void DeleteRecordingsRequest::setConfUUIDs(const std::string& value)
{
    confUUIDs_ = value;
    confUUIDsIsSet_ = true;
}

bool DeleteRecordingsRequest::confUUIDsIsSet() const
{
    return confUUIDsIsSet_;
}

void DeleteRecordingsRequest::unsetconfUUIDs()
{
    confUUIDsIsSet_ = false;
}

std::string DeleteRecordingsRequest::getUserUUID() const
{
    return userUUID_;
}

void DeleteRecordingsRequest::setUserUUID(const std::string& value)
{
    userUUID_ = value;
    userUUIDIsSet_ = true;
}

bool DeleteRecordingsRequest::userUUIDIsSet() const
{
    return userUUIDIsSet_;
}

void DeleteRecordingsRequest::unsetuserUUID()
{
    userUUIDIsSet_ = false;
}

std::string DeleteRecordingsRequest::getXAuthorizationType() const
{
    return xAuthorizationType_;
}

void DeleteRecordingsRequest::setXAuthorizationType(const std::string& value)
{
    xAuthorizationType_ = value;
    xAuthorizationTypeIsSet_ = true;
}

bool DeleteRecordingsRequest::xAuthorizationTypeIsSet() const
{
    return xAuthorizationTypeIsSet_;
}

void DeleteRecordingsRequest::unsetxAuthorizationType()
{
    xAuthorizationTypeIsSet_ = false;
}

std::string DeleteRecordingsRequest::getXSiteId() const
{
    return xSiteId_;
}

void DeleteRecordingsRequest::setXSiteId(const std::string& value)
{
    xSiteId_ = value;
    xSiteIdIsSet_ = true;
}

bool DeleteRecordingsRequest::xSiteIdIsSet() const
{
    return xSiteIdIsSet_;
}

void DeleteRecordingsRequest::unsetxSiteId()
{
    xSiteIdIsSet_ = false;
}

}
}
}
}
}


