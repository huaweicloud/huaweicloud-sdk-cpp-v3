

#include "huaweicloud/meeting/v1/model/ShowWebHookConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowWebHookConfigResponse::ShowWebHookConfigResponse()
{
    returnCode_ = 0;
    returnCodeIsSet_ = false;
    returnDesc_ = "";
    returnDescIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    subscriberId_ = "";
    subscriberIdIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    status_ = 0;
    statusIsSet_ = false;
}

ShowWebHookConfigResponse::~ShowWebHookConfigResponse() = default;

void ShowWebHookConfigResponse::validate()
{
}

web::json::value ShowWebHookConfigResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(returnCodeIsSet_) {
        val[utility::conversions::to_string_t("returnCode")] = ModelBase::toJson(returnCode_);
    }
    if(returnDescIsSet_) {
        val[utility::conversions::to_string_t("returnDesc")] = ModelBase::toJson(returnDesc_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(subscriberIdIsSet_) {
        val[utility::conversions::to_string_t("subscriberId")] = ModelBase::toJson(subscriberId_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }

    return val;
}
bool ShowWebHookConfigResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("returnCode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("returnCode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("returnDesc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("returnDesc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnDesc(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subscriberId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subscriberId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubscriberId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    return ok;
}


int32_t ShowWebHookConfigResponse::getReturnCode() const
{
    return returnCode_;
}

void ShowWebHookConfigResponse::setReturnCode(int32_t value)
{
    returnCode_ = value;
    returnCodeIsSet_ = true;
}

bool ShowWebHookConfigResponse::returnCodeIsSet() const
{
    return returnCodeIsSet_;
}

void ShowWebHookConfigResponse::unsetreturnCode()
{
    returnCodeIsSet_ = false;
}

std::string ShowWebHookConfigResponse::getReturnDesc() const
{
    return returnDesc_;
}

void ShowWebHookConfigResponse::setReturnDesc(const std::string& value)
{
    returnDesc_ = value;
    returnDescIsSet_ = true;
}

bool ShowWebHookConfigResponse::returnDescIsSet() const
{
    return returnDescIsSet_;
}

void ShowWebHookConfigResponse::unsetreturnDesc()
{
    returnDescIsSet_ = false;
}

std::string ShowWebHookConfigResponse::getId() const
{
    return id_;
}

void ShowWebHookConfigResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowWebHookConfigResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowWebHookConfigResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowWebHookConfigResponse::getSubscriberId() const
{
    return subscriberId_;
}

void ShowWebHookConfigResponse::setSubscriberId(const std::string& value)
{
    subscriberId_ = value;
    subscriberIdIsSet_ = true;
}

bool ShowWebHookConfigResponse::subscriberIdIsSet() const
{
    return subscriberIdIsSet_;
}

void ShowWebHookConfigResponse::unsetsubscriberId()
{
    subscriberIdIsSet_ = false;
}

std::string ShowWebHookConfigResponse::getUrl() const
{
    return url_;
}

void ShowWebHookConfigResponse::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool ShowWebHookConfigResponse::urlIsSet() const
{
    return urlIsSet_;
}

void ShowWebHookConfigResponse::unseturl()
{
    urlIsSet_ = false;
}

int32_t ShowWebHookConfigResponse::getStatus() const
{
    return status_;
}

void ShowWebHookConfigResponse::setStatus(int32_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowWebHookConfigResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowWebHookConfigResponse::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


