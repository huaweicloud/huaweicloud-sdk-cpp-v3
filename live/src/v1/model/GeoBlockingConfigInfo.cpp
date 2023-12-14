

#include "huaweicloud/live/v1/model/GeoBlockingConfigInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




GeoBlockingConfigInfo::GeoBlockingConfigInfo()
{
    app_ = "";
    appIsSet_ = false;
    areaWhitelistIsSet_ = false;
}

GeoBlockingConfigInfo::~GeoBlockingConfigInfo() = default;

void GeoBlockingConfigInfo::validate()
{
}

web::json::value GeoBlockingConfigInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(appIsSet_) {
        val[utility::conversions::to_string_t("app")] = ModelBase::toJson(app_);
    }
    if(areaWhitelistIsSet_) {
        val[utility::conversions::to_string_t("area_whitelist")] = ModelBase::toJson(areaWhitelist_);
    }

    return val;
}
bool GeoBlockingConfigInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("app"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("area_whitelist"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("area_whitelist"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAreaWhitelist(refVal);
        }
    }
    return ok;
}


std::string GeoBlockingConfigInfo::getApp() const
{
    return app_;
}

void GeoBlockingConfigInfo::setApp(const std::string& value)
{
    app_ = value;
    appIsSet_ = true;
}

bool GeoBlockingConfigInfo::appIsSet() const
{
    return appIsSet_;
}

void GeoBlockingConfigInfo::unsetapp()
{
    appIsSet_ = false;
}

std::vector<std::string>& GeoBlockingConfigInfo::getAreaWhitelist()
{
    return areaWhitelist_;
}

void GeoBlockingConfigInfo::setAreaWhitelist(const std::vector<std::string>& value)
{
    areaWhitelist_ = value;
    areaWhitelistIsSet_ = true;
}

bool GeoBlockingConfigInfo::areaWhitelistIsSet() const
{
    return areaWhitelistIsSet_;
}

void GeoBlockingConfigInfo::unsetareaWhitelist()
{
    areaWhitelistIsSet_ = false;
}

}
}
}
}
}


