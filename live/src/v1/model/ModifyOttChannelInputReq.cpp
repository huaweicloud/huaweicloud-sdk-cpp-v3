

#include "huaweicloud/live/v1/model/ModifyOttChannelInputReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ModifyOttChannelInputReq::ModifyOttChannelInputReq()
{
    domain_ = "";
    domainIsSet_ = false;
    appName_ = "";
    appNameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    inputIsSet_ = false;
    encoderSettingsExpandIsSet_ = false;
}

ModifyOttChannelInputReq::~ModifyOttChannelInputReq() = default;

void ModifyOttChannelInputReq::validate()
{
}

web::json::value ModifyOttChannelInputReq::toJson() const
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
    if(inputIsSet_) {
        val[utility::conversions::to_string_t("input")] = ModelBase::toJson(input_);
    }
    if(encoderSettingsExpandIsSet_) {
        val[utility::conversions::to_string_t("encoder_settings_expand")] = ModelBase::toJson(encoderSettingsExpand_);
    }

    return val;
}
bool ModifyOttChannelInputReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("input"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("input"));
        if(!fieldValue.is_null())
        {
            InputStreamInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInput(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("encoder_settings_expand"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encoder_settings_expand"));
        if(!fieldValue.is_null())
        {
            EncoderSettingsExpand refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncoderSettingsExpand(refVal);
        }
    }
    return ok;
}


std::string ModifyOttChannelInputReq::getDomain() const
{
    return domain_;
}

void ModifyOttChannelInputReq::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ModifyOttChannelInputReq::domainIsSet() const
{
    return domainIsSet_;
}

void ModifyOttChannelInputReq::unsetdomain()
{
    domainIsSet_ = false;
}

std::string ModifyOttChannelInputReq::getAppName() const
{
    return appName_;
}

void ModifyOttChannelInputReq::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool ModifyOttChannelInputReq::appNameIsSet() const
{
    return appNameIsSet_;
}

void ModifyOttChannelInputReq::unsetappName()
{
    appNameIsSet_ = false;
}

std::string ModifyOttChannelInputReq::getId() const
{
    return id_;
}

void ModifyOttChannelInputReq::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ModifyOttChannelInputReq::idIsSet() const
{
    return idIsSet_;
}

void ModifyOttChannelInputReq::unsetid()
{
    idIsSet_ = false;
}

InputStreamInfo ModifyOttChannelInputReq::getInput() const
{
    return input_;
}

void ModifyOttChannelInputReq::setInput(const InputStreamInfo& value)
{
    input_ = value;
    inputIsSet_ = true;
}

bool ModifyOttChannelInputReq::inputIsSet() const
{
    return inputIsSet_;
}

void ModifyOttChannelInputReq::unsetinput()
{
    inputIsSet_ = false;
}

EncoderSettingsExpand ModifyOttChannelInputReq::getEncoderSettingsExpand() const
{
    return encoderSettingsExpand_;
}

void ModifyOttChannelInputReq::setEncoderSettingsExpand(const EncoderSettingsExpand& value)
{
    encoderSettingsExpand_ = value;
    encoderSettingsExpandIsSet_ = true;
}

bool ModifyOttChannelInputReq::encoderSettingsExpandIsSet() const
{
    return encoderSettingsExpandIsSet_;
}

void ModifyOttChannelInputReq::unsetencoderSettingsExpand()
{
    encoderSettingsExpandIsSet_ = false;
}

}
}
}
}
}


