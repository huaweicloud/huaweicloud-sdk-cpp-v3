

#include "huaweicloud/meeting/v1/model/ShowRecordingDetailRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowRecordingDetailRequest::ShowRecordingDetailRequest()
{
    confUUID_ = "";
    confUUIDIsSet_ = false;
    userUUID_ = "";
    userUUIDIsSet_ = false;
    xAuthorizationType_ = "";
    xAuthorizationTypeIsSet_ = false;
    xSiteId_ = "";
    xSiteIdIsSet_ = false;
}

ShowRecordingDetailRequest::~ShowRecordingDetailRequest() = default;

void ShowRecordingDetailRequest::validate()
{
}

web::json::value ShowRecordingDetailRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(confUUIDIsSet_) {
        val[utility::conversions::to_string_t("confUUID")] = ModelBase::toJson(confUUID_);
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
bool ShowRecordingDetailRequest::fromJson(const web::json::value& val)
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


std::string ShowRecordingDetailRequest::getConfUUID() const
{
    return confUUID_;
}

void ShowRecordingDetailRequest::setConfUUID(const std::string& value)
{
    confUUID_ = value;
    confUUIDIsSet_ = true;
}

bool ShowRecordingDetailRequest::confUUIDIsSet() const
{
    return confUUIDIsSet_;
}

void ShowRecordingDetailRequest::unsetconfUUID()
{
    confUUIDIsSet_ = false;
}

std::string ShowRecordingDetailRequest::getUserUUID() const
{
    return userUUID_;
}

void ShowRecordingDetailRequest::setUserUUID(const std::string& value)
{
    userUUID_ = value;
    userUUIDIsSet_ = true;
}

bool ShowRecordingDetailRequest::userUUIDIsSet() const
{
    return userUUIDIsSet_;
}

void ShowRecordingDetailRequest::unsetuserUUID()
{
    userUUIDIsSet_ = false;
}

std::string ShowRecordingDetailRequest::getXAuthorizationType() const
{
    return xAuthorizationType_;
}

void ShowRecordingDetailRequest::setXAuthorizationType(const std::string& value)
{
    xAuthorizationType_ = value;
    xAuthorizationTypeIsSet_ = true;
}

bool ShowRecordingDetailRequest::xAuthorizationTypeIsSet() const
{
    return xAuthorizationTypeIsSet_;
}

void ShowRecordingDetailRequest::unsetxAuthorizationType()
{
    xAuthorizationTypeIsSet_ = false;
}

std::string ShowRecordingDetailRequest::getXSiteId() const
{
    return xSiteId_;
}

void ShowRecordingDetailRequest::setXSiteId(const std::string& value)
{
    xSiteId_ = value;
    xSiteIdIsSet_ = true;
}

bool ShowRecordingDetailRequest::xSiteIdIsSet() const
{
    return xSiteIdIsSet_;
}

void ShowRecordingDetailRequest::unsetxSiteId()
{
    xSiteIdIsSet_ = false;
}

}
}
}
}
}


