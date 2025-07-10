

#include "huaweicloud/rgc/v1/model/ShowControlsForAccountResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ShowControlsForAccountResponse::ShowControlsForAccountResponse()
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

ShowControlsForAccountResponse::~ShowControlsForAccountResponse() = default;

void ShowControlsForAccountResponse::validate()
{
}

web::json::value ShowControlsForAccountResponse::toJson() const
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
bool ShowControlsForAccountResponse::fromJson(const web::json::value& val)
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


EnabledControl ShowControlsForAccountResponse::getControl() const
{
    return control_;
}

void ShowControlsForAccountResponse::setControl(const EnabledControl& value)
{
    control_ = value;
    controlIsSet_ = true;
}

bool ShowControlsForAccountResponse::controlIsSet() const
{
    return controlIsSet_;
}

void ShowControlsForAccountResponse::unsetcontrol()
{
    controlIsSet_ = false;
}

std::vector<RegionConfigurationList>& ShowControlsForAccountResponse::getRegions()
{
    return regions_;
}

void ShowControlsForAccountResponse::setRegions(const std::vector<RegionConfigurationList>& value)
{
    regions_ = value;
    regionsIsSet_ = true;
}

bool ShowControlsForAccountResponse::regionsIsSet() const
{
    return regionsIsSet_;
}

void ShowControlsForAccountResponse::unsetregions()
{
    regionsIsSet_ = false;
}

std::string ShowControlsForAccountResponse::getState() const
{
    return state_;
}

void ShowControlsForAccountResponse::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ShowControlsForAccountResponse::stateIsSet() const
{
    return stateIsSet_;
}

void ShowControlsForAccountResponse::unsetstate()
{
    stateIsSet_ = false;
}

std::string ShowControlsForAccountResponse::getMessage() const
{
    return message_;
}

void ShowControlsForAccountResponse::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool ShowControlsForAccountResponse::messageIsSet() const
{
    return messageIsSet_;
}

void ShowControlsForAccountResponse::unsetmessage()
{
    messageIsSet_ = false;
}

std::string ShowControlsForAccountResponse::getVersion() const
{
    return version_;
}

void ShowControlsForAccountResponse::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ShowControlsForAccountResponse::versionIsSet() const
{
    return versionIsSet_;
}

void ShowControlsForAccountResponse::unsetversion()
{
    versionIsSet_ = false;
}

}
}
}
}
}


