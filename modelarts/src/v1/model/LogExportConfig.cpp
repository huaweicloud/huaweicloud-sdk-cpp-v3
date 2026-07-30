

#include "huaweicloud/modelarts/v1/model/LogExportConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




LogExportConfig::LogExportConfig()
{
    version_ = "";
    versionIsSet_ = false;
    rotationEnabled_ = false;
    rotationEnabledIsSet_ = false;
}

LogExportConfig::~LogExportConfig() = default;

void LogExportConfig::validate()
{
}

web::json::value LogExportConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(rotationEnabledIsSet_) {
        val[utility::conversions::to_string_t("rotation_enabled")] = ModelBase::toJson(rotationEnabled_);
    }

    return val;
}
bool LogExportConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rotation_enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rotation_enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRotationEnabled(refVal);
        }
    }
    return ok;
}


std::string LogExportConfig::getVersion() const
{
    return version_;
}

void LogExportConfig::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool LogExportConfig::versionIsSet() const
{
    return versionIsSet_;
}

void LogExportConfig::unsetversion()
{
    versionIsSet_ = false;
}

bool LogExportConfig::isRotationEnabled() const
{
    return rotationEnabled_;
}

void LogExportConfig::setRotationEnabled(bool value)
{
    rotationEnabled_ = value;
    rotationEnabledIsSet_ = true;
}

bool LogExportConfig::rotationEnabledIsSet() const
{
    return rotationEnabledIsSet_;
}

void LogExportConfig::unsetrotationEnabled()
{
    rotationEnabledIsSet_ = false;
}

}
}
}
}
}


