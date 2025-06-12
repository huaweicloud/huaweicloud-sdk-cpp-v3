

#include "huaweicloud/metastudio/v1/model/WiseBrainConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




WiseBrainConfig::WiseBrainConfig()
{
    roleId_ = "";
    roleIdIsSet_ = false;
    sisRegion_ = 0;
    sisRegionIsSet_ = false;
    sisProjectId_ = "";
    sisProjectIdIsSet_ = false;
    enableHotWords_ = false;
    enableHotWordsIsSet_ = false;
}

WiseBrainConfig::~WiseBrainConfig() = default;

void WiseBrainConfig::validate()
{
}

web::json::value WiseBrainConfig::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool WiseBrainConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string WiseBrainConfig::getRoleId() const
{
    return roleId_;
}

void WiseBrainConfig::setRoleId(const std::string& value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool WiseBrainConfig::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void WiseBrainConfig::unsetroleId()
{
    roleIdIsSet_ = false;
}

int32_t WiseBrainConfig::getSisRegion() const
{
    return sisRegion_;
}

void WiseBrainConfig::setSisRegion(int32_t value)
{
    sisRegion_ = value;
    sisRegionIsSet_ = true;
}

bool WiseBrainConfig::sisRegionIsSet() const
{
    return sisRegionIsSet_;
}

void WiseBrainConfig::unsetsisRegion()
{
    sisRegionIsSet_ = false;
}

std::string WiseBrainConfig::getSisProjectId() const
{
    return sisProjectId_;
}

void WiseBrainConfig::setSisProjectId(const std::string& value)
{
    sisProjectId_ = value;
    sisProjectIdIsSet_ = true;
}

bool WiseBrainConfig::sisProjectIdIsSet() const
{
    return sisProjectIdIsSet_;
}

void WiseBrainConfig::unsetsisProjectId()
{
    sisProjectIdIsSet_ = false;
}

bool WiseBrainConfig::isEnableHotWords() const
{
    return enableHotWords_;
}

void WiseBrainConfig::setEnableHotWords(bool value)
{
    enableHotWords_ = value;
    enableHotWordsIsSet_ = true;
}

bool WiseBrainConfig::enableHotWordsIsSet() const
{
    return enableHotWordsIsSet_;
}

void WiseBrainConfig::unsetenableHotWords()
{
    enableHotWordsIsSet_ = false;
}

}
}
}
}
}


