

#include "huaweicloud/live/v1/model/AppQualityInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




AppQualityInfo::AppQualityInfo()
{
    appName_ = "";
    appNameIsSet_ = false;
    qualityInfoIsSet_ = false;
}

AppQualityInfo::~AppQualityInfo() = default;

void AppQualityInfo::validate()
{
}

web::json::value AppQualityInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appNameIsSet_) {
        val[utility::conversions::to_string_t("app_name")] = ModelBase::toJson(appName_);
    }
    if(qualityInfoIsSet_) {
        val[utility::conversions::to_string_t("quality_info")] = ModelBase::toJson(qualityInfo_);
    }

    return val;
}

bool AppQualityInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("app_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("quality_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quality_info"));
        if(!fieldValue.is_null())
        {
            std::vector<QualityInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQualityInfo(refVal);
        }
    }
    return ok;
}

std::string AppQualityInfo::getAppName() const
{
    return appName_;
}

void AppQualityInfo::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool AppQualityInfo::appNameIsSet() const
{
    return appNameIsSet_;
}

void AppQualityInfo::unsetappName()
{
    appNameIsSet_ = false;
}

std::vector<QualityInfo>& AppQualityInfo::getQualityInfo()
{
    return qualityInfo_;
}

void AppQualityInfo::setQualityInfo(const std::vector<QualityInfo>& value)
{
    qualityInfo_ = value;
    qualityInfoIsSet_ = true;
}

bool AppQualityInfo::qualityInfoIsSet() const
{
    return qualityInfoIsSet_;
}

void AppQualityInfo::unsetqualityInfo()
{
    qualityInfoIsSet_ = false;
}

}
}
}
}
}


