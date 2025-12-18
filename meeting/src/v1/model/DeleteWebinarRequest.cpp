

#include "huaweicloud/meeting/v1/model/DeleteWebinarRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




DeleteWebinarRequest::DeleteWebinarRequest()
{
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
    acceptLanguage_ = "";
    acceptLanguageIsSet_ = false;
    conferenceId_ = "";
    conferenceIdIsSet_ = false;
}

DeleteWebinarRequest::~DeleteWebinarRequest() = default;

void DeleteWebinarRequest::validate()
{
}

web::json::value DeleteWebinarRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }
    if(acceptLanguageIsSet_) {
        val[utility::conversions::to_string_t("Accept-Language")] = ModelBase::toJson(acceptLanguage_);
    }
    if(conferenceIdIsSet_) {
        val[utility::conversions::to_string_t("conference_id")] = ModelBase::toJson(conferenceId_);
    }

    return val;
}
bool DeleteWebinarRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("conference_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conference_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConferenceId(refVal);
        }
    }
    return ok;
}


std::string DeleteWebinarRequest::getXRequestId() const
{
    return xRequestId_;
}

void DeleteWebinarRequest::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool DeleteWebinarRequest::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void DeleteWebinarRequest::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

std::string DeleteWebinarRequest::getAcceptLanguage() const
{
    return acceptLanguage_;
}

void DeleteWebinarRequest::setAcceptLanguage(const std::string& value)
{
    acceptLanguage_ = value;
    acceptLanguageIsSet_ = true;
}

bool DeleteWebinarRequest::acceptLanguageIsSet() const
{
    return acceptLanguageIsSet_;
}

void DeleteWebinarRequest::unsetacceptLanguage()
{
    acceptLanguageIsSet_ = false;
}

std::string DeleteWebinarRequest::getConferenceId() const
{
    return conferenceId_;
}

void DeleteWebinarRequest::setConferenceId(const std::string& value)
{
    conferenceId_ = value;
    conferenceIdIsSet_ = true;
}

bool DeleteWebinarRequest::conferenceIdIsSet() const
{
    return conferenceIdIsSet_;
}

void DeleteWebinarRequest::unsetconferenceId()
{
    conferenceIdIsSet_ = false;
}

}
}
}
}
}


