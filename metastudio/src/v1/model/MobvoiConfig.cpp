

#include "huaweicloud/metastudio/v1/model/MobvoiConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




MobvoiConfig::MobvoiConfig()
{
    appKey_ = "";
    appKeyIsSet_ = false;
    appSecret_ = "";
    appSecretIsSet_ = false;
    roleId_ = "";
    roleIdIsSet_ = false;
    sisRegion_ = 0;
    sisRegionIsSet_ = false;
    sisProjectId_ = "";
    sisProjectIdIsSet_ = false;
    enableHotWords_ = false;
    enableHotWordsIsSet_ = false;
}

MobvoiConfig::~MobvoiConfig() = default;

void MobvoiConfig::validate()
{
}

web::json::value MobvoiConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appKeyIsSet_) {
        val[utility::conversions::to_string_t("app_key")] = ModelBase::toJson(appKey_);
    }
    if(appSecretIsSet_) {
        val[utility::conversions::to_string_t("app_secret")] = ModelBase::toJson(appSecret_);
    }
    if(roleIdIsSet_) {
        val[utility::conversions::to_string_t("role_id")] = ModelBase::toJson(roleId_);
    }
    if(sisRegionIsSet_) {
        val[utility::conversions::to_string_t("sis_region")] = ModelBase::toJson(sisRegion_);
    }
    if(sisProjectIdIsSet_) {
        val[utility::conversions::to_string_t("sis_project_id")] = ModelBase::toJson(sisProjectId_);
    }
    if(enableHotWordsIsSet_) {
        val[utility::conversions::to_string_t("enable_hot_words")] = ModelBase::toJson(enableHotWords_);
    }

    return val;
}
bool MobvoiConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("app_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_secret"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_secret"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppSecret(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sis_region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sis_region"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSisRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sis_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sis_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSisProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_hot_words"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_hot_words"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableHotWords(refVal);
        }
    }
    return ok;
}


std::string MobvoiConfig::getAppKey() const
{
    return appKey_;
}

void MobvoiConfig::setAppKey(const std::string& value)
{
    appKey_ = value;
    appKeyIsSet_ = true;
}

bool MobvoiConfig::appKeyIsSet() const
{
    return appKeyIsSet_;
}

void MobvoiConfig::unsetappKey()
{
    appKeyIsSet_ = false;
}

std::string MobvoiConfig::getAppSecret() const
{
    return appSecret_;
}

void MobvoiConfig::setAppSecret(const std::string& value)
{
    appSecret_ = value;
    appSecretIsSet_ = true;
}

bool MobvoiConfig::appSecretIsSet() const
{
    return appSecretIsSet_;
}

void MobvoiConfig::unsetappSecret()
{
    appSecretIsSet_ = false;
}

std::string MobvoiConfig::getRoleId() const
{
    return roleId_;
}

void MobvoiConfig::setRoleId(const std::string& value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool MobvoiConfig::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void MobvoiConfig::unsetroleId()
{
    roleIdIsSet_ = false;
}

int32_t MobvoiConfig::getSisRegion() const
{
    return sisRegion_;
}

void MobvoiConfig::setSisRegion(int32_t value)
{
    sisRegion_ = value;
    sisRegionIsSet_ = true;
}

bool MobvoiConfig::sisRegionIsSet() const
{
    return sisRegionIsSet_;
}

void MobvoiConfig::unsetsisRegion()
{
    sisRegionIsSet_ = false;
}

std::string MobvoiConfig::getSisProjectId() const
{
    return sisProjectId_;
}

void MobvoiConfig::setSisProjectId(const std::string& value)
{
    sisProjectId_ = value;
    sisProjectIdIsSet_ = true;
}

bool MobvoiConfig::sisProjectIdIsSet() const
{
    return sisProjectIdIsSet_;
}

void MobvoiConfig::unsetsisProjectId()
{
    sisProjectIdIsSet_ = false;
}

bool MobvoiConfig::isEnableHotWords() const
{
    return enableHotWords_;
}

void MobvoiConfig::setEnableHotWords(bool value)
{
    enableHotWords_ = value;
    enableHotWordsIsSet_ = true;
}

bool MobvoiConfig::enableHotWordsIsSet() const
{
    return enableHotWordsIsSet_;
}

void MobvoiConfig::unsetenableHotWords()
{
    enableHotWordsIsSet_ = false;
}

}
}
}
}
}


