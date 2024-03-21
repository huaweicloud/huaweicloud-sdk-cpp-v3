

#include "huaweicloud/live/v1/model/ModifyOttChannelInfoGeneralResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ModifyOttChannelInfoGeneralResponse::ModifyOttChannelInfoGeneralResponse()
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
    sourcesIsSet_ = false;
}

ModifyOttChannelInfoGeneralResponse::~ModifyOttChannelInfoGeneralResponse() = default;

void ModifyOttChannelInfoGeneralResponse::validate()
{
}

web::json::value ModifyOttChannelInfoGeneralResponse::toJson() const
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
    if(sourcesIsSet_) {
        val[utility::conversions::to_string_t("sources")] = ModelBase::toJson(sources_);
    }

    return val;
}
bool ModifyOttChannelInfoGeneralResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sources"));
        if(!fieldValue.is_null())
        {
            std::vector<SourceRsp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSources(refVal);
        }
    }
    return ok;
}


std::string ModifyOttChannelInfoGeneralResponse::getResultCode() const
{
    return resultCode_;
}

void ModifyOttChannelInfoGeneralResponse::setResultCode(const std::string& value)
{
    resultCode_ = value;
    resultCodeIsSet_ = true;
}

bool ModifyOttChannelInfoGeneralResponse::resultCodeIsSet() const
{
    return resultCodeIsSet_;
}

void ModifyOttChannelInfoGeneralResponse::unsetresultCode()
{
    resultCodeIsSet_ = false;
}

std::string ModifyOttChannelInfoGeneralResponse::getResultMsg() const
{
    return resultMsg_;
}

void ModifyOttChannelInfoGeneralResponse::setResultMsg(const std::string& value)
{
    resultMsg_ = value;
    resultMsgIsSet_ = true;
}

bool ModifyOttChannelInfoGeneralResponse::resultMsgIsSet() const
{
    return resultMsgIsSet_;
}

void ModifyOttChannelInfoGeneralResponse::unsetresultMsg()
{
    resultMsgIsSet_ = false;
}

std::string ModifyOttChannelInfoGeneralResponse::getDomain() const
{
    return domain_;
}

void ModifyOttChannelInfoGeneralResponse::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ModifyOttChannelInfoGeneralResponse::domainIsSet() const
{
    return domainIsSet_;
}

void ModifyOttChannelInfoGeneralResponse::unsetdomain()
{
    domainIsSet_ = false;
}

std::string ModifyOttChannelInfoGeneralResponse::getAppName() const
{
    return appName_;
}

void ModifyOttChannelInfoGeneralResponse::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool ModifyOttChannelInfoGeneralResponse::appNameIsSet() const
{
    return appNameIsSet_;
}

void ModifyOttChannelInfoGeneralResponse::unsetappName()
{
    appNameIsSet_ = false;
}

std::string ModifyOttChannelInfoGeneralResponse::getId() const
{
    return id_;
}

void ModifyOttChannelInfoGeneralResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ModifyOttChannelInfoGeneralResponse::idIsSet() const
{
    return idIsSet_;
}

void ModifyOttChannelInfoGeneralResponse::unsetid()
{
    idIsSet_ = false;
}

std::vector<SourceRsp>& ModifyOttChannelInfoGeneralResponse::getSources()
{
    return sources_;
}

void ModifyOttChannelInfoGeneralResponse::setSources(const std::vector<SourceRsp>& value)
{
    sources_ = value;
    sourcesIsSet_ = true;
}

bool ModifyOttChannelInfoGeneralResponse::sourcesIsSet() const
{
    return sourcesIsSet_;
}

void ModifyOttChannelInfoGeneralResponse::unsetsources()
{
    sourcesIsSet_ = false;
}

}
}
}
}
}


