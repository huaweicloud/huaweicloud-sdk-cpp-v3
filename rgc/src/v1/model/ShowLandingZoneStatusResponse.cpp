

#include "huaweicloud/rgc/v1/model/ShowLandingZoneStatusResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ShowLandingZoneStatusResponse::ShowLandingZoneStatusResponse()
{
    deployedVersion_ = "";
    deployedVersionIsSet_ = false;
    landingZoneStatus_ = "";
    landingZoneStatusIsSet_ = false;
    percentageComplete_ = 0;
    percentageCompleteIsSet_ = false;
    percentageDetailsIsSet_ = false;
    landingZoneActionType_ = "";
    landingZoneActionTypeIsSet_ = false;
    messageIsSet_ = false;
    regionsIsSet_ = false;
}

ShowLandingZoneStatusResponse::~ShowLandingZoneStatusResponse() = default;

void ShowLandingZoneStatusResponse::validate()
{
}

web::json::value ShowLandingZoneStatusResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deployedVersionIsSet_) {
        val[utility::conversions::to_string_t("deployed_version")] = ModelBase::toJson(deployedVersion_);
    }
    if(landingZoneStatusIsSet_) {
        val[utility::conversions::to_string_t("landing_zone_status")] = ModelBase::toJson(landingZoneStatus_);
    }
    if(percentageCompleteIsSet_) {
        val[utility::conversions::to_string_t("percentage_complete")] = ModelBase::toJson(percentageComplete_);
    }
    if(percentageDetailsIsSet_) {
        val[utility::conversions::to_string_t("percentage_details")] = ModelBase::toJson(percentageDetails_);
    }
    if(landingZoneActionTypeIsSet_) {
        val[utility::conversions::to_string_t("landing_zone_action_type")] = ModelBase::toJson(landingZoneActionType_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(regionsIsSet_) {
        val[utility::conversions::to_string_t("regions")] = ModelBase::toJson(regions_);
    }

    return val;
}
bool ShowLandingZoneStatusResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("deployed_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deployed_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeployedVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("landing_zone_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("landing_zone_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLandingZoneStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("percentage_complete"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("percentage_complete"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPercentageComplete(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("percentage_details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("percentage_details"));
        if(!fieldValue.is_null())
        {
            std::vector<PercentageDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPercentageDetails(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("landing_zone_action_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("landing_zone_action_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLandingZoneActionType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::vector<LandingZoneErrorMessage> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("regions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("regions"));
        if(!fieldValue.is_null())
        {
            std::vector<RegionConfigurationList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegions(refVal);
        }
    }
    return ok;
}


std::string ShowLandingZoneStatusResponse::getDeployedVersion() const
{
    return deployedVersion_;
}

void ShowLandingZoneStatusResponse::setDeployedVersion(const std::string& value)
{
    deployedVersion_ = value;
    deployedVersionIsSet_ = true;
}

bool ShowLandingZoneStatusResponse::deployedVersionIsSet() const
{
    return deployedVersionIsSet_;
}

void ShowLandingZoneStatusResponse::unsetdeployedVersion()
{
    deployedVersionIsSet_ = false;
}

std::string ShowLandingZoneStatusResponse::getLandingZoneStatus() const
{
    return landingZoneStatus_;
}

void ShowLandingZoneStatusResponse::setLandingZoneStatus(const std::string& value)
{
    landingZoneStatus_ = value;
    landingZoneStatusIsSet_ = true;
}

bool ShowLandingZoneStatusResponse::landingZoneStatusIsSet() const
{
    return landingZoneStatusIsSet_;
}

void ShowLandingZoneStatusResponse::unsetlandingZoneStatus()
{
    landingZoneStatusIsSet_ = false;
}

int32_t ShowLandingZoneStatusResponse::getPercentageComplete() const
{
    return percentageComplete_;
}

void ShowLandingZoneStatusResponse::setPercentageComplete(int32_t value)
{
    percentageComplete_ = value;
    percentageCompleteIsSet_ = true;
}

bool ShowLandingZoneStatusResponse::percentageCompleteIsSet() const
{
    return percentageCompleteIsSet_;
}

void ShowLandingZoneStatusResponse::unsetpercentageComplete()
{
    percentageCompleteIsSet_ = false;
}

std::vector<PercentageDetail>& ShowLandingZoneStatusResponse::getPercentageDetails()
{
    return percentageDetails_;
}

void ShowLandingZoneStatusResponse::setPercentageDetails(const std::vector<PercentageDetail>& value)
{
    percentageDetails_ = value;
    percentageDetailsIsSet_ = true;
}

bool ShowLandingZoneStatusResponse::percentageDetailsIsSet() const
{
    return percentageDetailsIsSet_;
}

void ShowLandingZoneStatusResponse::unsetpercentageDetails()
{
    percentageDetailsIsSet_ = false;
}

std::string ShowLandingZoneStatusResponse::getLandingZoneActionType() const
{
    return landingZoneActionType_;
}

void ShowLandingZoneStatusResponse::setLandingZoneActionType(const std::string& value)
{
    landingZoneActionType_ = value;
    landingZoneActionTypeIsSet_ = true;
}

bool ShowLandingZoneStatusResponse::landingZoneActionTypeIsSet() const
{
    return landingZoneActionTypeIsSet_;
}

void ShowLandingZoneStatusResponse::unsetlandingZoneActionType()
{
    landingZoneActionTypeIsSet_ = false;
}

std::vector<LandingZoneErrorMessage>& ShowLandingZoneStatusResponse::getMessage()
{
    return message_;
}

void ShowLandingZoneStatusResponse::setMessage(const std::vector<LandingZoneErrorMessage>& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowLandingZoneStatusResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowLandingZoneStatusResponse::unsetmessage()
{
    messageIsSet_ = false;
}

std::vector<RegionConfigurationList>& ShowLandingZoneStatusResponse::getRegions()
{
    return regions_;
}

void ShowLandingZoneStatusResponse::setRegions(const std::vector<RegionConfigurationList>& value)
{
    regions_ = value;
    regionsIsSet_ = true;
}

bool ShowLandingZoneStatusResponse::regionsIsSet() const
{
    return regionsIsSet_;
}

void ShowLandingZoneStatusResponse::unsetregions()
{
    regionsIsSet_ = false;
}

}
}
}
}
}


