

#include "huaweicloud/rgc/v1/model/ShowControlsForOrganizationalUnitResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ShowControlsForOrganizationalUnitResponse::ShowControlsForOrganizationalUnitResponse()
{
    controlIsSet_ = false;
    regionsIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
}

ShowControlsForOrganizationalUnitResponse::~ShowControlsForOrganizationalUnitResponse() = default;

void ShowControlsForOrganizationalUnitResponse::validate()
{
}

web::json::value ShowControlsForOrganizationalUnitResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(controlIsSet_) {
        val[utility::conversions::to_string_t("control")] = ModelBase::toJson(control_);
    }
    if(regionsIsSet_) {
        val[utility::conversions::to_string_t("regions")] = ModelBase::toJson(regions_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }

    return val;
}
bool ShowControlsForOrganizationalUnitResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("control"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("control"));
        if(!fieldValue.is_null())
        {
            EnabledControl refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setControl(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    return ok;
}


EnabledControl ShowControlsForOrganizationalUnitResponse::getControl() const
{
    return control_;
}

void ShowControlsForOrganizationalUnitResponse::setControl(const EnabledControl& value)
{
    control_ = value;
    controlIsSet_ = true;
}

bool ShowControlsForOrganizationalUnitResponse::controlIsSet() const
{
    return controlIsSet_;
}

void ShowControlsForOrganizationalUnitResponse::unsetcontrol()
{
    controlIsSet_ = false;
}

std::vector<RegionConfigurationList>& ShowControlsForOrganizationalUnitResponse::getRegions()
{
    return regions_;
}

void ShowControlsForOrganizationalUnitResponse::setRegions(const std::vector<RegionConfigurationList>& value)
{
    regions_ = value;
    regionsIsSet_ = true;
}

bool ShowControlsForOrganizationalUnitResponse::regionsIsSet() const
{
    return regionsIsSet_;
}

void ShowControlsForOrganizationalUnitResponse::unsetregions()
{
    regionsIsSet_ = false;
}

std::string ShowControlsForOrganizationalUnitResponse::getState() const
{
    return state_;
}

void ShowControlsForOrganizationalUnitResponse::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ShowControlsForOrganizationalUnitResponse::stateIsSet() const
{
    return stateIsSet_;
}

void ShowControlsForOrganizationalUnitResponse::unsetstate()
{
    stateIsSet_ = false;
}

std::string ShowControlsForOrganizationalUnitResponse::getMessage() const
{
    return message_;
}

void ShowControlsForOrganizationalUnitResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowControlsForOrganizationalUnitResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowControlsForOrganizationalUnitResponse::unsetmessage()
{
    messageIsSet_ = false;
}

std::string ShowControlsForOrganizationalUnitResponse::getVersion() const
{
    return version_;
}

void ShowControlsForOrganizationalUnitResponse::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ShowControlsForOrganizationalUnitResponse::versionIsSet() const
{
    return versionIsSet_;
}

void ShowControlsForOrganizationalUnitResponse::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


