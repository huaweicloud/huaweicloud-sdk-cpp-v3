

#include "huaweicloud/rgc/v1/model/ShowAvailableUpdatesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ShowAvailableUpdatesResponse::ShowAvailableUpdatesResponse()
{
    baselineUpdateAvailable_ = false;
    baselineUpdateAvailableIsSet_ = false;
    controlUpdateAvailable_ = false;
    controlUpdateAvailableIsSet_ = false;
    landingZoneUpdateAvailable_ = false;
    landingZoneUpdateAvailableIsSet_ = false;
    serviceLandingZoneVersion_ = "";
    serviceLandingZoneVersionIsSet_ = false;
    userLandingZoneVersion_ = "";
    userLandingZoneVersionIsSet_ = false;
}

ShowAvailableUpdatesResponse::~ShowAvailableUpdatesResponse() = default;

void ShowAvailableUpdatesResponse::validate()
{
}

web::json::value ShowAvailableUpdatesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(baselineUpdateAvailableIsSet_) {
        val[utility::conversions::to_string_t("baseline_update_available")] = ModelBase::toJson(baselineUpdateAvailable_);
    }
    if(controlUpdateAvailableIsSet_) {
        val[utility::conversions::to_string_t("control_update_available")] = ModelBase::toJson(controlUpdateAvailable_);
    }
    if(landingZoneUpdateAvailableIsSet_) {
        val[utility::conversions::to_string_t("landing_zone_update_available")] = ModelBase::toJson(landingZoneUpdateAvailable_);
    }
    if(serviceLandingZoneVersionIsSet_) {
        val[utility::conversions::to_string_t("service_landing_zone_version")] = ModelBase::toJson(serviceLandingZoneVersion_);
    }
    if(userLandingZoneVersionIsSet_) {
        val[utility::conversions::to_string_t("user_landing_zone_version")] = ModelBase::toJson(userLandingZoneVersion_);
    }

    return val;
}
bool ShowAvailableUpdatesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("baseline_update_available"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("baseline_update_available"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBaselineUpdateAvailable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("control_update_available"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("control_update_available"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setControlUpdateAvailable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("landing_zone_update_available"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("landing_zone_update_available"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLandingZoneUpdateAvailable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_landing_zone_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_landing_zone_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceLandingZoneVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_landing_zone_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_landing_zone_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserLandingZoneVersion(refVal);
        }
    }
    return ok;
}


bool ShowAvailableUpdatesResponse::isBaselineUpdateAvailable() const
{
    return baselineUpdateAvailable_;
}

void ShowAvailableUpdatesResponse::setBaselineUpdateAvailable(bool value)
{
    baselineUpdateAvailable_ = value;
    baselineUpdateAvailableIsSet_ = true;
}

bool ShowAvailableUpdatesResponse::baselineUpdateAvailableIsSet() const
{
    return baselineUpdateAvailableIsSet_;
}

void ShowAvailableUpdatesResponse::unsetbaselineUpdateAvailable()
{
    baselineUpdateAvailableIsSet_ = false;
}

bool ShowAvailableUpdatesResponse::isControlUpdateAvailable() const
{
    return controlUpdateAvailable_;
}

void ShowAvailableUpdatesResponse::setControlUpdateAvailable(bool value)
{
    controlUpdateAvailable_ = value;
    controlUpdateAvailableIsSet_ = true;
}

bool ShowAvailableUpdatesResponse::controlUpdateAvailableIsSet() const
{
    return controlUpdateAvailableIsSet_;
}

void ShowAvailableUpdatesResponse::unsetcontrolUpdateAvailable()
{
    controlUpdateAvailableIsSet_ = false;
}

bool ShowAvailableUpdatesResponse::isLandingZoneUpdateAvailable() const
{
    return landingZoneUpdateAvailable_;
}

void ShowAvailableUpdatesResponse::setLandingZoneUpdateAvailable(bool value)
{
    landingZoneUpdateAvailable_ = value;
    landingZoneUpdateAvailableIsSet_ = true;
}

bool ShowAvailableUpdatesResponse::landingZoneUpdateAvailableIsSet() const
{
    return landingZoneUpdateAvailableIsSet_;
}

void ShowAvailableUpdatesResponse::unsetlandingZoneUpdateAvailable()
{
    landingZoneUpdateAvailableIsSet_ = false;
}

std::string ShowAvailableUpdatesResponse::getServiceLandingZoneVersion() const
{
    return serviceLandingZoneVersion_;
}

void ShowAvailableUpdatesResponse::setServiceLandingZoneVersion(const std::string& value)
{
    serviceLandingZoneVersion_ = value;
    serviceLandingZoneVersionIsSet_ = true;
}

bool ShowAvailableUpdatesResponse::serviceLandingZoneVersionIsSet() const
{
    return serviceLandingZoneVersionIsSet_;
}

void ShowAvailableUpdatesResponse::unsetserviceLandingZoneVersion()
{
    serviceLandingZoneVersionIsSet_ = false;
}

std::string ShowAvailableUpdatesResponse::getUserLandingZoneVersion() const
{
    return userLandingZoneVersion_;
}

void ShowAvailableUpdatesResponse::setUserLandingZoneVersion(const std::string& value)
{
    userLandingZoneVersion_ = value;
    userLandingZoneVersionIsSet_ = true;
}

bool ShowAvailableUpdatesResponse::userLandingZoneVersionIsSet() const
{
    return userLandingZoneVersionIsSet_;
}

void ShowAvailableUpdatesResponse::unsetuserLandingZoneVersion()
{
    userLandingZoneVersionIsSet_ = false;
}

}
}
}
}
}


