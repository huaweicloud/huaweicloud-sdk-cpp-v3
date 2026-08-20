

#include "huaweicloud/codeartspipeline/v2/model/ExtensionParameterDisplaySettings.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ExtensionParameterDisplaySettings::ExtensionParameterDisplaySettings()
{
    devCloudControlType_ = "";
    devCloudControlTypeIsSet_ = false;
    devCloudControlTypeDefault_ = "";
    devCloudControlTypeDefaultIsSet_ = false;
    devCloudControlTypeSelectIsSet_ = false;
    devCloudControlTypeRadioIsSet_ = false;
}

ExtensionParameterDisplaySettings::~ExtensionParameterDisplaySettings() = default;

void ExtensionParameterDisplaySettings::validate()
{
}

web::json::value ExtensionParameterDisplaySettings::toJson() const
{
    web::json::value val = web::json::value::object();

    if(devCloudControlTypeIsSet_) {
        val[utility::conversions::to_string_t("DevCloud.ControlType")] = ModelBase::toJson(devCloudControlType_);
    }
    if(devCloudControlTypeDefaultIsSet_) {
        val[utility::conversions::to_string_t("DevCloud.ControlType.Default")] = ModelBase::toJson(devCloudControlTypeDefault_);
    }
    if(devCloudControlTypeSelectIsSet_) {
        val[utility::conversions::to_string_t("DevCloud.ControlType.Select")] = ModelBase::toJson(devCloudControlTypeSelect_);
    }
    if(devCloudControlTypeRadioIsSet_) {
        val[utility::conversions::to_string_t("DevCloud.ControlType.Radio")] = ModelBase::toJson(devCloudControlTypeRadio_);
    }

    return val;
}
bool ExtensionParameterDisplaySettings::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("DevCloud.ControlType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("DevCloud.ControlType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDevCloudControlType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("DevCloud.ControlType.Default"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("DevCloud.ControlType.Default"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDevCloudControlTypeDefault(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("DevCloud.ControlType.Select"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("DevCloud.ControlType.Select"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDevCloudControlTypeSelect(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("DevCloud.ControlType.Radio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("DevCloud.ControlType.Radio"));
        if(!fieldValue.is_null())
        {
            std::vector<ExtensionRadioOption> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDevCloudControlTypeRadio(refVal);
        }
    }
    return ok;
}


std::string ExtensionParameterDisplaySettings::getDevCloudControlType() const
{
    return devCloudControlType_;
}

void ExtensionParameterDisplaySettings::setDevCloudControlType(const std::string& value)
{
    devCloudControlType_ = value;
    devCloudControlTypeIsSet_ = true;
}

bool ExtensionParameterDisplaySettings::devCloudControlTypeIsSet() const
{
    return devCloudControlTypeIsSet_;
}

void ExtensionParameterDisplaySettings::unsetdevCloudControlType()
{
    devCloudControlTypeIsSet_ = false;
}

std::string ExtensionParameterDisplaySettings::getDevCloudControlTypeDefault() const
{
    return devCloudControlTypeDefault_;
}

void ExtensionParameterDisplaySettings::setDevCloudControlTypeDefault(const std::string& value)
{
    devCloudControlTypeDefault_ = value;
    devCloudControlTypeDefaultIsSet_ = true;
}

bool ExtensionParameterDisplaySettings::devCloudControlTypeDefaultIsSet() const
{
    return devCloudControlTypeDefaultIsSet_;
}

void ExtensionParameterDisplaySettings::unsetdevCloudControlTypeDefault()
{
    devCloudControlTypeDefaultIsSet_ = false;
}

std::vector<std::string>& ExtensionParameterDisplaySettings::getDevCloudControlTypeSelect()
{
    return devCloudControlTypeSelect_;
}

void ExtensionParameterDisplaySettings::setDevCloudControlTypeSelect(const std::vector<std::string>& value)
{
    devCloudControlTypeSelect_ = value;
    devCloudControlTypeSelectIsSet_ = true;
}

bool ExtensionParameterDisplaySettings::devCloudControlTypeSelectIsSet() const
{
    return devCloudControlTypeSelectIsSet_;
}

void ExtensionParameterDisplaySettings::unsetdevCloudControlTypeSelect()
{
    devCloudControlTypeSelectIsSet_ = false;
}

std::vector<ExtensionRadioOption>& ExtensionParameterDisplaySettings::getDevCloudControlTypeRadio()
{
    return devCloudControlTypeRadio_;
}

void ExtensionParameterDisplaySettings::setDevCloudControlTypeRadio(const std::vector<ExtensionRadioOption>& value)
{
    devCloudControlTypeRadio_ = value;
    devCloudControlTypeRadioIsSet_ = true;
}

bool ExtensionParameterDisplaySettings::devCloudControlTypeRadioIsSet() const
{
    return devCloudControlTypeRadioIsSet_;
}

void ExtensionParameterDisplaySettings::unsetdevCloudControlTypeRadio()
{
    devCloudControlTypeRadioIsSet_ = false;
}

}
}
}
}
}


