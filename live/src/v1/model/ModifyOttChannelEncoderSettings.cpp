

#include "huaweicloud/live/v1/model/ModifyOttChannelEncoderSettings.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ModifyOttChannelEncoderSettings::ModifyOttChannelEncoderSettings()
{
    domain_ = "";
    domainIsSet_ = false;
    appName_ = "";
    appNameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    encoderSettingsIsSet_ = false;
    encoderSettingsExpandIsSet_ = false;
}

ModifyOttChannelEncoderSettings::~ModifyOttChannelEncoderSettings() = default;

void ModifyOttChannelEncoderSettings::validate()
{
}

web::json::value ModifyOttChannelEncoderSettings::toJson() const
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
    if(encoderSettingsIsSet_) {
        val[utility::conversions::to_string_t("encoder_settings")] = ModelBase::toJson(encoderSettings_);
    }
    if(encoderSettingsExpandIsSet_) {
        val[utility::conversions::to_string_t("encoder_settings_expand")] = ModelBase::toJson(encoderSettingsExpand_);
    }

    return val;
}
bool ModifyOttChannelEncoderSettings::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("encoder_settings"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encoder_settings"));
        if(!fieldValue.is_null())
        {
            std::vector<ModifyOttChannelEncoderSettings_encoder_settings> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncoderSettings(refVal);
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


std::string ModifyOttChannelEncoderSettings::getDomain() const
{
    return domain_;
}

void ModifyOttChannelEncoderSettings::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ModifyOttChannelEncoderSettings::domainIsSet() const
{
    return domainIsSet_;
}

void ModifyOttChannelEncoderSettings::unsetdomain()
{
    domainIsSet_ = false;
}

std::string ModifyOttChannelEncoderSettings::getAppName() const
{
    return appName_;
}

void ModifyOttChannelEncoderSettings::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool ModifyOttChannelEncoderSettings::appNameIsSet() const
{
    return appNameIsSet_;
}

void ModifyOttChannelEncoderSettings::unsetappName()
{
    appNameIsSet_ = false;
}

std::string ModifyOttChannelEncoderSettings::getId() const
{
    return id_;
}

void ModifyOttChannelEncoderSettings::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ModifyOttChannelEncoderSettings::idIsSet() const
{
    return idIsSet_;
}

void ModifyOttChannelEncoderSettings::unsetid()
{
    idIsSet_ = false;
}

std::vector<ModifyOttChannelEncoderSettings_encoder_settings>& ModifyOttChannelEncoderSettings::getEncoderSettings()
{
    return encoderSettings_;
}

void ModifyOttChannelEncoderSettings::setEncoderSettings(const std::vector<ModifyOttChannelEncoderSettings_encoder_settings>& value)
{
    encoderSettings_ = value;
    encoderSettingsIsSet_ = true;
}

bool ModifyOttChannelEncoderSettings::encoderSettingsIsSet() const
{
    return encoderSettingsIsSet_;
}

void ModifyOttChannelEncoderSettings::unsetencoderSettings()
{
    encoderSettingsIsSet_ = false;
}

EncoderSettingsExpand ModifyOttChannelEncoderSettings::getEncoderSettingsExpand() const
{
    return encoderSettingsExpand_;
}

void ModifyOttChannelEncoderSettings::setEncoderSettingsExpand(const EncoderSettingsExpand& value)
{
    encoderSettingsExpand_ = value;
    encoderSettingsExpandIsSet_ = true;
}

bool ModifyOttChannelEncoderSettings::encoderSettingsExpandIsSet() const
{
    return encoderSettingsExpandIsSet_;
}

void ModifyOttChannelEncoderSettings::unsetencoderSettingsExpand()
{
    encoderSettingsExpandIsSet_ = false;
}

}
}
}
}
}


