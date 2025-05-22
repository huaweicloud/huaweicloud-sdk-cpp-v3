

#include "huaweicloud/live/v1/model/ShowChannelStatisticResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ShowChannelStatisticResponse::ShowChannelStatisticResponse()
{
    domain_ = "";
    domainIsSet_ = false;
    appName_ = "";
    appNameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    scte35IsSet_ = false;
}

ShowChannelStatisticResponse::~ShowChannelStatisticResponse() = default;

void ShowChannelStatisticResponse::validate()
{
}

web::json::value ShowChannelStatisticResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(domainIsSet_) {
        val[utility::conversions::to_string_t("domain")] = ModelBase::toJson(domain_);
    }
    if(appNameIsSet_) {
        val[utility::conversions::to_string_t("app_name")] = ModelBase::toJson(appName_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(scte35IsSet_) {
        val[utility::conversions::to_string_t("scte35")] = ModelBase::toJson(scte35_);
    }

    return val;
}
bool ShowChannelStatisticResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scte35"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scte35"));
        if(!fieldValue.is_null())
        {
            SCTE35StatisticRsp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScte35(refVal);
        }
    }
    return ok;
}


std::string ShowChannelStatisticResponse::getDomain() const
{
    return domain_;
}

void ShowChannelStatisticResponse::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ShowChannelStatisticResponse::domainIsSet() const
{
    return domainIsSet_;
}

void ShowChannelStatisticResponse::unsetdomain()
{
    domainIsSet_ = false;
}

std::string ShowChannelStatisticResponse::getAppName() const
{
    return appName_;
}

void ShowChannelStatisticResponse::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool ShowChannelStatisticResponse::appNameIsSet() const
{
    return appNameIsSet_;
}

void ShowChannelStatisticResponse::unsetappName()
{
    appNameIsSet_ = false;
}

std::string ShowChannelStatisticResponse::getId() const
{
    return id_;
}

void ShowChannelStatisticResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowChannelStatisticResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowChannelStatisticResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowChannelStatisticResponse::getType() const
{
    return type_;
}

void ShowChannelStatisticResponse::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowChannelStatisticResponse::typeIsSet() const
{
    return typeIsSet_;
}

void ShowChannelStatisticResponse::unsettype()
{
    typeIsSet_ = false;
}

SCTE35StatisticRsp ShowChannelStatisticResponse::getScte35() const
{
    return scte35_;
}

void ShowChannelStatisticResponse::setScte35(const SCTE35StatisticRsp& value)
{
    scte35_ = value;
    scte35IsSet_ = true;
}

bool ShowChannelStatisticResponse::scte35IsSet() const
{
    return scte35IsSet_;
}

void ShowChannelStatisticResponse::unsetscte35()
{
    scte35IsSet_ = false;
}

}
}
}
}
}


