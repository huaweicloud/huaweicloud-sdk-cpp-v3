

#include "huaweicloud/live/v1/model/DeleteOttChannelInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




DeleteOttChannelInfoResponse::DeleteOttChannelInfoResponse()
{
    resultCode_ = "";
    resultCodeIsSet_ = false;
    resultMsg_ = "";
    resultMsgIsSet_ = false;
    domain_ = "";
    domainIsSet_ = false;
    appName_ = "";
    appNameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
}

DeleteOttChannelInfoResponse::~DeleteOttChannelInfoResponse() = default;

void DeleteOttChannelInfoResponse::validate()
{
}

web::json::value DeleteOttChannelInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(resultCodeIsSet_) {
        val[utility::conversions::to_string_t("result_code")] = ModelBase::toJson(resultCode_);
    }
    if(resultMsgIsSet_) {
        val[utility::conversions::to_string_t("result_msg")] = ModelBase::toJson(resultMsg_);
    }
    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(appNameIsSet_) {
        val[utility::conversions::to_string_t("app_name")] = ModelBase::toJson(appName_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }

    return val;
}
bool DeleteOttChannelInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("result_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResultCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("result_msg"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("result_msg"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResultMsg(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppName(refVal);
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
    return ok;
}


std::string DeleteOttChannelInfoResponse::getResultCode() const
{
    return resultCode_;
}

void DeleteOttChannelInfoResponse::setResultCode(const std::string& value)
{
    resultCode_ = value;
    resultCodeIsSet_ = true;
}

bool DeleteOttChannelInfoResponse::resultCodeIsSet() const
{
    return resultCodeIsSet_;
}

void DeleteOttChannelInfoResponse::unsetresultCode()
{
    resultCodeIsSet_ = false;
}

std::string DeleteOttChannelInfoResponse::getResultMsg() const
{
    return resultMsg_;
}

void DeleteOttChannelInfoResponse::setResultMsg(const std::string& value)
{
    resultMsg_ = value;
    resultMsgIsSet_ = true;
}

bool DeleteOttChannelInfoResponse::resultMsgIsSet() const
{
    return resultMsgIsSet_;
}

void DeleteOttChannelInfoResponse::unsetresultMsg()
{
    resultMsgIsSet_ = false;
}

std::string DeleteOttChannelInfoResponse::getDomain() const
{
    return domain_;
}

void DeleteOttChannelInfoResponse::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool DeleteOttChannelInfoResponse::domainIsSet() const
{
    return domainIsSet_;
}

void DeleteOttChannelInfoResponse::unsetdomain()
{
    domainIsSet_ = false;
}

std::string DeleteOttChannelInfoResponse::getAppName() const
{
    return appName_;
}

void DeleteOttChannelInfoResponse::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool DeleteOttChannelInfoResponse::appNameIsSet() const
{
    return appNameIsSet_;
}

void DeleteOttChannelInfoResponse::unsetappName()
{
    appNameIsSet_ = false;
}

std::string DeleteOttChannelInfoResponse::getId() const
{
    return id_;
}

void DeleteOttChannelInfoResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DeleteOttChannelInfoResponse::idIsSet() const
{
    return idIsSet_;
}

void DeleteOttChannelInfoResponse::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


