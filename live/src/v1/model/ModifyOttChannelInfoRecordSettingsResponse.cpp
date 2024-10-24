

#include "huaweicloud/live/v1/model/ModifyOttChannelInfoRecordSettingsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ModifyOttChannelInfoRecordSettingsResponse::ModifyOttChannelInfoRecordSettingsResponse()
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

ModifyOttChannelInfoRecordSettingsResponse::~ModifyOttChannelInfoRecordSettingsResponse() = default;

void ModifyOttChannelInfoRecordSettingsResponse::validate()
{
}

web::json::value ModifyOttChannelInfoRecordSettingsResponse::toJson() const
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
bool ModifyOttChannelInfoRecordSettingsResponse::fromJson(const web::json::value& val)
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


std::string ModifyOttChannelInfoRecordSettingsResponse::getResultCode() const
{
    return resultCode_;
}

void ModifyOttChannelInfoRecordSettingsResponse::setResultCode(const std::string& value)
{
    resultCode_ = value;
    resultCodeIsSet_ = true;
}

bool ModifyOttChannelInfoRecordSettingsResponse::resultCodeIsSet() const
{
    return resultCodeIsSet_;
}

void ModifyOttChannelInfoRecordSettingsResponse::unsetresultCode()
{
    resultCodeIsSet_ = false;
}

std::string ModifyOttChannelInfoRecordSettingsResponse::getResultMsg() const
{
    return resultMsg_;
}

void ModifyOttChannelInfoRecordSettingsResponse::setResultMsg(const std::string& value)
{
    resultMsg_ = value;
    resultMsgIsSet_ = true;
}

bool ModifyOttChannelInfoRecordSettingsResponse::resultMsgIsSet() const
{
    return resultMsgIsSet_;
}

void ModifyOttChannelInfoRecordSettingsResponse::unsetresultMsg()
{
    resultMsgIsSet_ = false;
}

std::string ModifyOttChannelInfoRecordSettingsResponse::getDomain() const
{
    return domain_;
}

void ModifyOttChannelInfoRecordSettingsResponse::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ModifyOttChannelInfoRecordSettingsResponse::domainIsSet() const
{
    return domainIsSet_;
}

void ModifyOttChannelInfoRecordSettingsResponse::unsetdomain()
{
    domainIsSet_ = false;
}

std::string ModifyOttChannelInfoRecordSettingsResponse::getAppName() const
{
    return appName_;
}

void ModifyOttChannelInfoRecordSettingsResponse::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool ModifyOttChannelInfoRecordSettingsResponse::appNameIsSet() const
{
    return appNameIsSet_;
}

void ModifyOttChannelInfoRecordSettingsResponse::unsetappName()
{
    appNameIsSet_ = false;
}

std::string ModifyOttChannelInfoRecordSettingsResponse::getId() const
{
    return id_;
}

void ModifyOttChannelInfoRecordSettingsResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ModifyOttChannelInfoRecordSettingsResponse::idIsSet() const
{
    return idIsSet_;
}

void ModifyOttChannelInfoRecordSettingsResponse::unsetid()
{
    idIsSet_ = false;
}

}
}
}
}
}


