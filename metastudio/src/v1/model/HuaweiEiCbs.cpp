

#include "huaweicloud/metastudio/v1/model/HuaweiEiCbs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




HuaweiEiCbs::HuaweiEiCbs()
{
    appId_ = "";
    appIdIsSet_ = false;
    region_ = 0;
    regionIsSet_ = false;
    cbsProjectId_ = "";
    cbsProjectIdIsSet_ = false;
    sisRegion_ = 0;
    sisRegionIsSet_ = false;
    sisProjectId_ = "";
    sisProjectIdIsSet_ = false;
    enableHotWords_ = false;
    enableHotWordsIsSet_ = false;
}

HuaweiEiCbs::~HuaweiEiCbs() = default;

void HuaweiEiCbs::validate()
{
}

web::json::value HuaweiEiCbs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appIdIsSet_) {
        val[utility::conversions::to_string_t("app_id")] = ModelBase::toJson(appId_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(cbsProjectIdIsSet_) {
        val[utility::conversions::to_string_t("cbs_project_id")] = ModelBase::toJson(cbsProjectId_);
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
bool HuaweiEiCbs::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("app_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cbs_project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cbs_project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCbsProjectId(refVal);
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


std::string HuaweiEiCbs::getAppId() const
{
    return appId_;
}

void HuaweiEiCbs::setAppId(const std::string& value)
{
    appId_ = value;
    appIdIsSet_ = true;
}

bool HuaweiEiCbs::appIdIsSet() const
{
    return appIdIsSet_;
}

void HuaweiEiCbs::unsetappId()
{
    appIdIsSet_ = false;
}

int32_t HuaweiEiCbs::getRegion() const
{
    return region_;
}

void HuaweiEiCbs::setRegion(int32_t value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool HuaweiEiCbs::regionIsSet() const
{
    return regionIsSet_;
}

void HuaweiEiCbs::unsetregion()
{
    regionIsSet_ = false;
}

std::string HuaweiEiCbs::getCbsProjectId() const
{
    return cbsProjectId_;
}

void HuaweiEiCbs::setCbsProjectId(const std::string& value)
{
    cbsProjectId_ = value;
    cbsProjectIdIsSet_ = true;
}

bool HuaweiEiCbs::cbsProjectIdIsSet() const
{
    return cbsProjectIdIsSet_;
}

void HuaweiEiCbs::unsetcbsProjectId()
{
    cbsProjectIdIsSet_ = false;
}

int32_t HuaweiEiCbs::getSisRegion() const
{
    return sisRegion_;
}

void HuaweiEiCbs::setSisRegion(int32_t value)
{
    sisRegion_ = value;
    sisRegionIsSet_ = true;
}

bool HuaweiEiCbs::sisRegionIsSet() const
{
    return sisRegionIsSet_;
}

void HuaweiEiCbs::unsetsisRegion()
{
    sisRegionIsSet_ = false;
}

std::string HuaweiEiCbs::getSisProjectId() const
{
    return sisProjectId_;
}

void HuaweiEiCbs::setSisProjectId(const std::string& value)
{
    sisProjectId_ = value;
    sisProjectIdIsSet_ = true;
}

bool HuaweiEiCbs::sisProjectIdIsSet() const
{
    return sisProjectIdIsSet_;
}

void HuaweiEiCbs::unsetsisProjectId()
{
    sisProjectIdIsSet_ = false;
}

bool HuaweiEiCbs::isEnableHotWords() const
{
    return enableHotWords_;
}

void HuaweiEiCbs::setEnableHotWords(bool value)
{
    enableHotWords_ = value;
    enableHotWordsIsSet_ = true;
}

bool HuaweiEiCbs::enableHotWordsIsSet() const
{
    return enableHotWordsIsSet_;
}

void HuaweiEiCbs::unsetenableHotWords()
{
    enableHotWordsIsSet_ = false;
}

}
}
}
}
}


