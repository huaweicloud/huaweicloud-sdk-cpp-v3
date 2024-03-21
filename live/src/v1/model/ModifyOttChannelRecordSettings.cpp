

#include "huaweicloud/live/v1/model/ModifyOttChannelRecordSettings.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ModifyOttChannelRecordSettings::ModifyOttChannelRecordSettings()
{
    domain_ = "";
    domainIsSet_ = false;
    appName_ = "";
    appNameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    recordSettingsIsSet_ = false;
}

ModifyOttChannelRecordSettings::~ModifyOttChannelRecordSettings() = default;

void ModifyOttChannelRecordSettings::validate()
{
}

web::json::value ModifyOttChannelRecordSettings::toJson() const
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
    if(recordSettingsIsSet_) {
        val[utility::conversions::to_string_t("record_settings")] = ModelBase::toJson(recordSettings_);
    }

    return val;
}
bool ModifyOttChannelRecordSettings::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("record_settings"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("record_settings"));
        if(!fieldValue.is_null())
        {
            ModifyOttChannelRecordSettings_record_settings refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordSettings(refVal);
        }
    }
    return ok;
}


std::string ModifyOttChannelRecordSettings::getDomain() const
{
    return domain_;
}

void ModifyOttChannelRecordSettings::setDomain(const std::string& value)
{
    domain_ = value;
    domainIsSet_ = true;
}

bool ModifyOttChannelRecordSettings::domainIsSet() const
{
    return domainIsSet_;
}

void ModifyOttChannelRecordSettings::unsetdomain()
{
    domainIsSet_ = false;
}

std::string ModifyOttChannelRecordSettings::getAppName() const
{
    return appName_;
}

void ModifyOttChannelRecordSettings::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool ModifyOttChannelRecordSettings::appNameIsSet() const
{
    return appNameIsSet_;
}

void ModifyOttChannelRecordSettings::unsetappName()
{
    appNameIsSet_ = false;
}

std::string ModifyOttChannelRecordSettings::getId() const
{
    return id_;
}

void ModifyOttChannelRecordSettings::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ModifyOttChannelRecordSettings::idIsSet() const
{
    return idIsSet_;
}

void ModifyOttChannelRecordSettings::unsetid()
{
    idIsSet_ = false;
}

ModifyOttChannelRecordSettings_record_settings ModifyOttChannelRecordSettings::getRecordSettings() const
{
    return recordSettings_;
}

void ModifyOttChannelRecordSettings::setRecordSettings(const ModifyOttChannelRecordSettings_record_settings& value)
{
    recordSettings_ = value;
    recordSettingsIsSet_ = true;
}

bool ModifyOttChannelRecordSettings::recordSettingsIsSet() const
{
    return recordSettingsIsSet_;
}

void ModifyOttChannelRecordSettings::unsetrecordSettings()
{
    recordSettingsIsSet_ = false;
}

}
}
}
}
}


