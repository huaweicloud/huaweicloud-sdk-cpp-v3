

#include "huaweicloud/vod/v1/model/CreateObjectRetrievalRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateObjectRetrievalRequestBody::CreateObjectRetrievalRequestBody()
{
    obsInfoIsSet_ = false;
    days_ = 0;
    daysIsSet_ = false;
    callbackUrl_ = "";
    callbackUrlIsSet_ = false;
    sessionContext_ = "";
    sessionContextIsSet_ = false;
}

CreateObjectRetrievalRequestBody::~CreateObjectRetrievalRequestBody() = default;

void CreateObjectRetrievalRequestBody::validate()
{
}

web::json::value CreateObjectRetrievalRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(obsInfoIsSet_) {
        val[utility::conversions::to_string_t("obs_info")] = ModelBase::toJson(obsInfo_);
    }
    if(daysIsSet_) {
        val[utility::conversions::to_string_t("days")] = ModelBase::toJson(days_);
    }
    if(callbackUrlIsSet_) {
        val[utility::conversions::to_string_t("callback_url")] = ModelBase::toJson(callbackUrl_);
    }
    if(sessionContextIsSet_) {
        val[utility::conversions::to_string_t("session_context")] = ModelBase::toJson(sessionContext_);
    }

    return val;
}
bool CreateObjectRetrievalRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("obs_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_info"));
        if(!fieldValue.is_null())
        {
            ObsInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDays(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("callback_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("callback_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCallbackUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("session_context"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("session_context"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessionContext(refVal);
        }
    }
    return ok;
}


ObsInfo CreateObjectRetrievalRequestBody::getObsInfo() const
{
    return obsInfo_;
}

void CreateObjectRetrievalRequestBody::setObsInfo(const ObsInfo& value)
{
    obsInfo_ = value;
    obsInfoIsSet_ = true;
}

bool CreateObjectRetrievalRequestBody::obsInfoIsSet() const
{
    return obsInfoIsSet_;
}

void CreateObjectRetrievalRequestBody::unsetobsInfo()
{
    obsInfoIsSet_ = false;
}

int32_t CreateObjectRetrievalRequestBody::getDays() const
{
    return days_;
}

void CreateObjectRetrievalRequestBody::setDays(int32_t value)
{
    days_ = value;
    daysIsSet_ = true;
}

bool CreateObjectRetrievalRequestBody::daysIsSet() const
{
    return daysIsSet_;
}

void CreateObjectRetrievalRequestBody::unsetdays()
{
    daysIsSet_ = false;
}

std::string CreateObjectRetrievalRequestBody::getCallbackUrl() const
{
    return callbackUrl_;
}

void CreateObjectRetrievalRequestBody::setCallbackUrl(const std::string& value)
{
    callbackUrl_ = value;
    callbackUrlIsSet_ = true;
}

bool CreateObjectRetrievalRequestBody::callbackUrlIsSet() const
{
    return callbackUrlIsSet_;
}

void CreateObjectRetrievalRequestBody::unsetcallbackUrl()
{
    callbackUrlIsSet_ = false;
}

std::string CreateObjectRetrievalRequestBody::getSessionContext() const
{
    return sessionContext_;
}

void CreateObjectRetrievalRequestBody::setSessionContext(const std::string& value)
{
    sessionContext_ = value;
    sessionContextIsSet_ = true;
}

bool CreateObjectRetrievalRequestBody::sessionContextIsSet() const
{
    return sessionContextIsSet_;
}

void CreateObjectRetrievalRequestBody::unsetsessionContext()
{
    sessionContextIsSet_ = false;
}

}
}
}
}
}


